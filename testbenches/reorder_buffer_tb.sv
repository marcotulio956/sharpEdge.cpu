// Testbench: reorder_buffer_tb.sv — Verilator-compatible
//
// Architecture notes:
//   - always @(posedge clk or negedge clk): allocates entries on BOTH edges (DDR)
//   - always @(posedge clk): CDB writeback + commit (now supports dual CDB)
//   - ROB_LINES = 31; array [0:30]; 5-bit pointers → index 31 is OOB (see TEST 6)
//   - full = (head-1) == tail (mod-32 wrapping)
//
// UPDATED: Dual CDB support — CDB0 and CDB1 can write simultaneously
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
    
    reg  cdb0_write;
    reg  [V_SZ-1:0]     cdb0_snooped_value;
    reg  [ROB_ADRS-1:0] cdb0_rob_adrs;
    reg  [2:0]          cdb0_exception;

    reg  cdb1_write;
    reg  [V_SZ-1:0]     cdb1_snooped_value;
    reg  [ROB_ADRS-1:0] cdb1_rob_adrs;
    reg  [2:0]          cdb1_exception;

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
        .cdb0_write(cdb0_write),
        .cdb0_snooped_value(cdb0_snooped_value),
        .cdb0_rob_adrs(cdb0_rob_adrs),
        .cdb0_exception(cdb0_exception),
        .cdb1_write(cdb1_write),
        .cdb1_snooped_value(cdb1_snooped_value),
        .cdb1_rob_adrs(cdb1_rob_adrs),
        .cdb1_exception(cdb1_exception),
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

    task automatic cdb0_broadcast;
        input [ROB_ADRS-1:0] adrs;
        input [V_SZ-1:0] value;
        input [2:0] except;
        begin
            @(negedge clk);
            cdb0_write = 1;
            cdb0_rob_adrs = adrs;
            cdb0_snooped_value = value;
            cdb0_exception = except;
            @(posedge clk);
            #1;
            cdb0_write = 0;
        end
    endtask

    task automatic cdb1_broadcast;
        input [ROB_ADRS-1:0] adrs;
        input [V_SZ-1:0] value;
        input [2:0] except;
        begin
            @(negedge clk);
            cdb1_write = 1;
            cdb1_rob_adrs = adrs;
            cdb1_snooped_value = value;
            cdb1_exception = except;
            @(posedge clk);
            #1;
            cdb1_write = 0;
        end
    endtask

    task automatic dual_cdb_broadcast;
        input [ROB_ADRS-1:0] adrs0, adrs1;
        input [V_SZ-1:0] value0, value1;
        input [2:0] except0, except1;
        begin
            @(negedge clk);
            cdb0_write = 1;
            cdb0_rob_adrs = adrs0;
            cdb0_snooped_value = value0;
            cdb0_exception = except0;
            cdb1_write = 1;
            cdb1_rob_adrs = adrs1;
            cdb1_snooped_value = value1;
            cdb1_exception = except1;
            @(posedge clk);
            #1;
            cdb0_write = 0;
            cdb1_write = 0;
        end
    endtask

    initial begin
        pass_count = 0; fail_count = 0;
        rst = 0; write_entry = 0;
        cdb0_write = 0; cdb1_write = 0;
        entry_opc = 0; entry_destination = 0; entry_pc = 0;
        cdb0_snooped_value = 0; cdb0_rob_adrs = 0; cdb0_exception = 0;
        cdb1_snooped_value = 0; cdb1_rob_adrs = 0; cdb1_exception = 0;

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
        // TEST 3: Single commit via CDB0
        //   CDB writes at posedge N → ready[0]=1 after N (NBAs).
        //   Commit check at posedge N sees OLD ready[0]=0 → no commit yet.
        //   At posedge N+1: commit fires (sees ready[0]=1 from prev cycle).
        // ----------------------------------------------------------------
        $display("\n=== TEST 3: Single commit via CDB0 ===");
        cdb0_broadcast(5'd0, 32'hDEAD_BEEF, 3'b000);
        @(posedge clk); #1;
        // CDB fired; commit saw old ready=0 → didn't commit yet
        check_bool(1'b1, ready1_instruction_bool, "cdb_write_sets_ready1");
        check32(32'hDEAD_BEEF, ready1_value,      "ready1_value_correct");

        // Now commit fires
        @(posedge clk); #1;
        check_bool(1'b0, ready1_instruction_bool, "after_single_commit_head_empty");

        // ----------------------------------------------------------------
        // TEST 4: Dual CDB simultaneous writeback enabling double commit
        // UPDATED: With dual CDB, both entries can be marked ready in same cycle.
        //   Posedge N: CDB0→ready[0]=1, CDB1→ready[1]=1 (scheduled via NBA).
        //   Posedge N+1: Commit sees ready[0]=1 AND ready[1]=1 → DOUBLE COMMIT.
        // ----------------------------------------------------------------
        $display("\n=== TEST 4: Dual CDB enabling double commit ===");
        do_reset;

        alloc_one_posedge(4'b0000, 16'hFF01, 16'h0010); // entry 0
        alloc_one_posedge(4'b0001, 16'hFF02, 16'h0020); // entry 1

        // Broadcast on both CDBs simultaneously
        dual_cdb_broadcast(5'd0, 5'd1, 32'hAAAA_0001, 32'hAAAA_0002, 3'b000, 3'b000);
        @(posedge clk); #1;
        // Both entries should be ready
        check_bool(1'b1, ready1_instruction_bool, "dual_cdb_ready1_set");
        check_bool(1'b1, ready2_instruction_bool, "dual_cdb_ready2_set");
        check32(32'hAAAA_0001, ready1_value, "dual_cdb_entry0_value");
        check32(32'hAAAA_0002, ready2_value, "dual_cdb_entry1_value");

        // Next cycle: double commit should fire
        @(posedge clk); #1;
        check_bool(1'b0, ready1_instruction_bool, "dual_commit_both_entries");

        // ----------------------------------------------------------------
        // TEST 5: Single commit when head+1 not ready
        // ----------------------------------------------------------------
        $display("\n=== TEST 5: Single commit when head+1 not ready ===");
        do_reset;

        alloc_one_posedge(4'b0010, 16'hCC01, 16'h0030);
        alloc_one_posedge(4'b0011, 16'hCC02, 16'h0040);

        cdb0_broadcast(5'd0, 32'h5555_5555, 3'b000);
        @(posedge clk); #1;

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
        // TEST 7: Exception flag propagation via CDB0
        // ----------------------------------------------------------------
        $display("\n=== TEST 7: Exception propagation ===");
        do_reset;

        alloc_one_posedge(4'b0101, 16'h00AA, 16'hBEEF);

        cdb0_broadcast(5'd0, 32'b0, 3'b010);
        @(posedge clk); #1;

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
        // TEST 9: PC preservation
        // ----------------------------------------------------------------
        $display("\n=== TEST 9: PC preservation ===");
        do_reset;

        alloc_one_posedge(4'b0000, 16'h0001, 16'h0100);
        alloc_one_posedge(4'b0001, 16'h0002, 16'h0200);

        cdb0_broadcast(5'd0, 32'hABCD_EF01, 3'b000);
        cdb1_broadcast(5'd1, 32'hABCD_EF02, 3'b000);
        @(posedge clk); #1;

        check32({16'b0, 16'h0200}, {16'b0, ready1_pc}, "pc_entry1_at_head");

        // ----------------------------------------------------------------
        // TEST 10: CDB1 alone (verify CDB1 path works independently)
        // ----------------------------------------------------------------
        $display("\n=== TEST 10: CDB1 independent operation ===");
        do_reset;

        alloc_one_posedge(4'b1000, 16'h0003, 16'h0300);
        
        cdb1_broadcast(5'd0, 32'hDEADBEE1, 3'b000);
        @(posedge clk); #1;
        check_bool(1'b1, ready1_instruction_bool, "cdb1_sets_ready1");
        check32(32'hDEADBEE1, ready1_value, "cdb1_value_correct");

        // ----------------------------------------------------------------
        // TEST 11: Mixed CDB usage (different entries)
        // ----------------------------------------------------------------
        $display("\n=== TEST 11: Mixed CDB usage ===");
        do_reset;

        alloc_one_posedge(4'b0010, 16'h0004, 16'h0400);
        alloc_one_posedge(4'b0011, 16'h0005, 16'h0500);
        alloc_one_posedge(4'b0100, 16'h0006, 16'h0600);

        // Write to entry 0 via CDB0
        cdb0_broadcast(5'd0, 32'hDEADBEEA, 3'b000);
        @(posedge clk); #1;
        
        // Entry 0 should be ready now (but won't commit yet due to prev_cdb protection)
        check_bool(1'b1, ready1_instruction_bool, "mix_entry0_ready");
        check_bool(1'b0, ready2_instruction_bool, "mix_entry1_not_ready");
        
        // Write to entry 2 via CDB1
        cdb1_broadcast(5'd2, 32'hDEADBEEB, 3'b000);
        @(posedge clk); #1;
        
        // Entry 0 commits here (head advances to 1)
        @(posedge clk); #1;
        
        // Now entry 1 is at head, entry 2 is at head+1
        cdb0_broadcast(5'd1, 32'hDEADBEEC, 3'b000);
        @(posedge clk); #1;
        
        // Both head and head+1 should be ready
        check_bool(1'b1, ready1_instruction_bool, "mix_final_both_ready1");
        check_bool(1'b1, ready2_instruction_bool, "mix_final_both_ready2");

        $display("\n--- reorder_buffer_tb: PASS=%0d FAIL=%0d ---\n",
                 pass_count, fail_count);
        $finish;
    end
endmodule
