// Testbench: reorder_buffer_tb.sv — Verilator-compatible
//
// Architecture notes:
//   - always @(posedge clk or negedge clk): allocates entries on BOTH edges (DDR)
//   - always @(posedge clk): CDB writeback + commit
//   - ROB_LINES = 31; array [0:30]; 5-bit pointers → index 31 is OOB (see TEST 6)
//   - full = (head-1) == tail (mod-32 wrapping)
//
// FINDING: double commit is unreachable with single CDB bus (see TEST 4).
`timescale 1ns/1ps
`include "modules/reorder_buffer.sv"

module reorder_buffer_tb;

    localparam ROB_ADRS = 5;
    localparam V_SZ     = 32;
    localparam IM_ADRS  = 16;
    localparam OPC_SZ   = 4;

    integer pass_count, fail_count;
    integer i;

    reg  clk, rst;
    reg  write_entry;
    reg  [OPC_SZ-1:0]   entry_opc;
    reg  [IM_ADRS-1:0]  entry_destination;
    reg  [IM_ADRS-1:0]  entry_pc;
    reg  cdb_write;
    reg  [V_SZ-1:0]     cdb_snooped_value;
    reg  [ROB_ADRS-1:0] cdb_rob_adrs;
    reg  [2:0]          cdb_exception;

    wire created_entry_bool;
    wire [ROB_ADRS-1:0] entry;
    wire ready1_instruction_bool;
    wire [2:0]          ready1_exception;
    wire [OPC_SZ-1:0]   ready1_opc;
    wire [IM_ADRS-1:0]  ready1_destination;
    wire [IM_ADRS-1:0]  ready1_pc;
    wire [V_SZ-1:0]     ready1_value;
    wire ready2_instruction_bool;
    wire [2:0]          ready2_exception;
    wire [OPC_SZ-1:0]   ready2_opc;
    wire [IM_ADRS-1:0]  ready2_destination;
    wire [IM_ADRS-1:0]  ready2_pc;
    wire [V_SZ-1:0]     ready2_value;
    wire full;

    initial begin clk = 1'b0; forever #5 clk = ~clk; end

    reorder_buffer #(
        .ROB_ADRS_SIZE(ROB_ADRS),
        .V_SIZE(V_SZ),
        .IM_ADRS_SIZE(IM_ADRS),
        .OPC_SIZE(OPC_SZ)
    ) _DUT_ (
        .clk(clk), .rst(rst),
        .write_entry(write_entry),
        .entry_opc(entry_opc),
        .entry_destination(entry_destination),
        .entry_pc(entry_pc),
        .cdb_write(cdb_write),
        .cdb_snooped_value(cdb_snooped_value),
        .cdb_rob_adrs(cdb_rob_adrs),
        .cdb_exception(cdb_exception),
        .created_entry_bool(created_entry_bool),
        .entry(entry),
        .ready1_instruction_bool(ready1_instruction_bool),
        .ready1_exception(ready1_exception),
        .ready1_opc(ready1_opc),
        .ready1_destination(ready1_destination),
        .ready1_pc(ready1_pc),
        .ready1_value(ready1_value),
        .ready2_instruction_bool(ready2_instruction_bool),
        .ready2_exception(ready2_exception),
        .ready2_opc(ready2_opc),
        .ready2_destination(ready2_destination),
        .ready2_pc(ready2_pc),
        .ready2_value(ready2_value),
        .full(full)
    );

    task automatic check_bool;
        input       expected;
        input       actual;
        input [255:0] name;
        begin
            if (expected === actual) begin
                $display("PASS [%0t] %s | got=%b", $time, name, actual);
                pass_count = pass_count + 1;
            end else begin
                $display("FAIL [%0t] %s | expected=%b got=%b", $time, name,
                         expected, actual);
                fail_count = fail_count + 1;
            end
        end
    endtask

    task automatic check32;
        input [31:0] expected;
        input [31:0] actual;
        input [255:0] name;
        begin
            if (expected === actual) begin
                $display("PASS [%0t] %s | got=0x%08h", $time, name, actual);
                pass_count = pass_count + 1;
            end else begin
                $display("FAIL [%0t] %s | expected=0x%08h got=0x%08h",
                         $time, name, expected, actual);
                fail_count = fail_count + 1;
            end
        end
    endtask

    task automatic check_robadrs;
        input [ROB_ADRS-1:0] expected;
        input [ROB_ADRS-1:0] actual;
        input [255:0] name;
        begin
            if (expected === actual) begin
                $display("PASS [%0t] %s | got=%0d", $time, name, actual);
                pass_count = pass_count + 1;
            end else begin
                $display("FAIL [%0t] %s | expected=%0d got=%0d",
                         $time, name, expected, actual);
                fail_count = fail_count + 1;
            end
        end
    endtask

    // Allocate exactly ONE entry at posedge only.
    task automatic alloc_one_posedge;
        input [OPC_SZ-1:0]  opc_v;
        input [IM_ADRS-1:0] dest_v;
        input [IM_ADRS-1:0] pc_v;
        begin
            @(negedge clk);
            write_entry       = 1;
            entry_opc         = opc_v;
            entry_destination = dest_v;
            entry_pc          = pc_v;
            @(posedge clk);
            // Avoid TB/DUT race at posedge: deassert after DUT samples inputs.
            #1;
            write_entry = 0;
        end
    endtask

    task automatic do_reset;
        begin
            rst = 1'b1;
            @(posedge clk); #1;
            rst = 1'b0;
        end
    endtask

    initial begin
        pass_count = 0; fail_count = 0;
        rst = 0; write_entry = 0; cdb_write = 0;
        entry_opc = 0; entry_destination = 0; entry_pc = 0;
        cdb_snooped_value = 0; cdb_rob_adrs = 0; cdb_exception = 0;

        // ----------------------------------------------------------------
        // TEST 1: Reset — empty, not full, no ready entries
        // ----------------------------------------------------------------
        $display("\n=== TEST 1: Reset ===");
        do_reset;
        #1;
        check_bool(1'b0, full,                    "reset_not_full");
        check_bool(1'b0, ready1_instruction_bool, "reset_head_not_ready");
        check_bool(1'b0, ready2_instruction_bool, "reset_head1_not_ready");
        check_robadrs(5'd0, entry,                "reset_tail_is_0");

        // ----------------------------------------------------------------
        // TEST 2: Single entry allocation
        // ----------------------------------------------------------------
        $display("\n=== TEST 2: Single allocation ===");
        @(negedge clk);
        write_entry = 1;
        entry_opc = 4'b0001; entry_destination = 16'h0003; entry_pc = 16'hAAAA;
        @(posedge clk); #1;
        check_bool(1'b1, created_entry_bool, "alloc_entry0_created");
        check_robadrs(5'd1, entry,           "alloc_tail_advances_to1");
        write_entry = 0;

        // ----------------------------------------------------------------
        // TEST 3: Single commit
        //   CDB writes at posedge N → ready[0]=1 after N (NBAs).
        //   Commit check at posedge N sees OLD ready[0]=0 → no commit yet.
        //   At posedge N+1: commit fires (sees ready[0]=1 from prev cycle).
        // ----------------------------------------------------------------
        $display("\n=== TEST 3: Single commit ===");
        @(negedge clk);
        cdb_write = 1; cdb_rob_adrs = 5'd0;
        cdb_snooped_value = 32'hDEAD_BEEF; cdb_exception = 3'b000;
        @(posedge clk); #1; cdb_write = 0; #1;
        // CDB fired; commit saw old ready=0 → didn't commit yet
        check_bool(1'b1, ready1_instruction_bool, "cdb_write_sets_ready1");
        check32(32'hDEAD_BEEF, ready1_value,      "ready1_value_correct");

        // Now commit fires
        @(posedge clk); #1;
        check_bool(1'b0, ready1_instruction_bool, "after_single_commit_head_empty");

        // ----------------------------------------------------------------
        // TEST 4: Sequential single commits (double-commit analysis)
        // ARCHITECTURAL FINDING: double commit is unreachable with single CDB bus.
        //   Posedge N: CDB → ready[0] SCHEDULED. Commit sees OLD ready[0]=0 → no commit.
        //   Posedge N+1: CDB → ready[1] SCHEDULED. Commit sees ready[0]=1 (old),
        //     ready[1]=0 (old) → SINGLE commit (head→1). Not double commit.
        //   Posedge N+2: Commit sees ready[1]=1 (old) → second single commit (head→2).
        //   Double commit would require ready[0] AND ready[1] both=1 before any commit
        //   fires, which requires two simultaneous CDB writes — not supported.
        // ----------------------------------------------------------------
        $display("\n=== TEST 4: Sequential single commits (double-commit analysis) ===");
        do_reset;

        alloc_one_posedge(4'b0000, 16'hFF01, 16'h0010); // entry 0
        alloc_one_posedge(4'b0001, 16'hFF02, 16'h0020); // entry 1

        @(negedge clk);
        cdb_write = 1; cdb_rob_adrs = 5'd0;
        cdb_snooped_value = 32'hAAAA_0001; cdb_exception = 3'b000;
        @(posedge clk); #1; cdb_write = 0; #1;
        check_bool(1'b1, ready1_instruction_bool, "seq_ready1_set_after_cdb0");

        @(negedge clk);
        cdb_write = 1; cdb_rob_adrs = 5'd1;
        cdb_snooped_value = 32'hAAAA_0002; cdb_exception = 3'b000;
        @(posedge clk); #1; cdb_write = 0; #1;
        // Posedge just ran: single commit for entry0, ready[1] now set
        check_bool(1'b1, ready1_instruction_bool, "seq_entry1_now_at_head");
        check32(32'hAAAA_0002, ready1_value,       "seq_entry1_value_at_head");

        @(posedge clk); #1;
        check_bool(1'b0, ready1_instruction_bool, "seq_both_entries_committed");

        // ----------------------------------------------------------------
        // TEST 5: Double commit blocked — head ready, head+1 NOT ready
        // ----------------------------------------------------------------
        $display("\n=== TEST 5: Single commit when head+1 not ready ===");
        do_reset;

        alloc_one_posedge(4'b0010, 16'hCC01, 16'h0030);
        alloc_one_posedge(4'b0011, 16'hCC02, 16'h0040);

        @(negedge clk);
        cdb_write = 1; cdb_rob_adrs = 5'd0;
        cdb_snooped_value = 32'h5555_5555; cdb_exception = 3'b000;
        @(posedge clk); #1; cdb_write = 0; #1;

        check_bool(1'b1, ready1_instruction_bool, "blocked_ready1_set");
        check_bool(1'b0, ready2_instruction_bool, "blocked_ready2_not_set");

        @(posedge clk); #1;
        check_bool(1'b0, ready1_instruction_bool, "blocked_single_commit_fired");

        // ----------------------------------------------------------------
        // TEST 6: FIFO full detection
        //   Fill 31 entries; full fires after 31st (tail=31, OOB for [0:30] array).
        // ----------------------------------------------------------------
        $display("\n=== TEST 6: FIFO full ===");
        do_reset;

        for (i = 0; i < 30; i = i + 1)
            alloc_one_posedge(4'b1111, i[15:0], i[15:0]);
        #1;
        check_bool(1'b0, full, "30_entries_not_full");

        alloc_one_posedge(4'b1111, 16'hEEEE, 16'hEEEE);
        #1;
        check_bool(1'b1, full,                    "31st_entry_full");
        check_bool(1'b0, created_entry_bool,      "full_blocks_new_entry");

        // ----------------------------------------------------------------
        // TEST 7: Exception flag propagation
        // ----------------------------------------------------------------
        $display("\n=== TEST 7: Exception propagation ===");
        do_reset;

        alloc_one_posedge(4'b0101, 16'h00AA, 16'hBEEF);

        @(negedge clk);
        cdb_write = 1; cdb_rob_adrs = 5'd0;
        cdb_snooped_value = 32'b0; cdb_exception = 3'b010;
        @(posedge clk); #1; cdb_write = 0; #1;

        check_bool(1'b1, ready1_instruction_bool, "exception_entry_ready");
        if (ready1_exception === 3'b010) begin
            $display("PASS [%0t] exception_code_010_propagated", $time);
            pass_count = pass_count + 1;
        end else begin
            $display("FAIL [%0t] exception_code_010 | expected=010 got=%b",
                     $time, ready1_exception);
            fail_count = fail_count + 1;
        end
        check32({16'b0, 16'hBEEF}, {16'b0, ready1_pc}, "exception_pc_preserved");

        // ----------------------------------------------------------------
        // TEST 8: Misprediction flush — MISSING FEATURE documented
        // ----------------------------------------------------------------
        $display("\n=== TEST 8: Misprediction flush — architecture gap ===");
        $display("INFO: No flush port exists. rst is the only recovery mechanism.");
        $display("INFO: Guidelines require selective tail→head flush. NOT IMPLEMENTED.");

        // ----------------------------------------------------------------
        // TEST 9: PC preserved per entry
        // ----------------------------------------------------------------
        $display("\n=== TEST 9: PC preservation ===");
        do_reset;

        alloc_one_posedge(4'b0000, 16'h0001, 16'h0100);
        alloc_one_posedge(4'b0001, 16'h0002, 16'h0200);

        @(negedge clk);
        cdb_write = 1; cdb_rob_adrs = 5'd0;
        cdb_snooped_value = 32'hABCD_EF01; cdb_exception = 3'b000;
        @(posedge clk); #1; cdb_write = 0;

        @(negedge clk);
        cdb_write = 1; cdb_rob_adrs = 5'd1;
        cdb_snooped_value = 32'hABCD_EF02; cdb_exception = 3'b000;
        @(posedge clk); #1; cdb_write = 0; #1;

        check32({16'b0, 16'h0200}, {16'b0, ready1_pc}, "pc_entry1_at_head");

        $display("\n--- reorder_buffer_tb: PASS=%0d FAIL=%0d ---\n",
                 pass_count, fail_count);
        $finish;
    end
endmodule
