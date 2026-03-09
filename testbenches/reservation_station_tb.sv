// Testbench: reservation_station_tb.sv — Verilator-compatible
//
// Tests the reservation station with dual CDB support:
//   - 8 slots for operand holding
//   - Dual CDB writeback (CDB0 and CDB1 can write simultaneously)
//   - Ready line selection (up to 4 ready lines per cycle)
//   - Operand forwarding and snooping
`timescale 1ns/1ps
`include "modules/reservation_station.sv"

module reservation_station_tb;

    localparam OPF_SIZE = 3;
    localparam ROB_ADRS_SIZE = 5;
    localparam V_SIZE = 32;
    localparam RS_ADRS_SIZE = 3;
    localparam RS_OUT_LINE_SIZE = OPF_SIZE + ROB_ADRS_SIZE + 2*V_SIZE;

    integer pass_count, fail_count;
    integer i;

    reg  clk, rst, write;
    reg  [OPF_SIZE-1:0] opf;
    reg  [ROB_ADRS_SIZE-1:0] rob_dest;
    reg  qj_required, qk_required;
    reg  [ROB_ADRS_SIZE-1:0] qj_rob_entry;
    reg  [ROB_ADRS_SIZE-1:0] qk_rob_entry;
    reg  [V_SIZE-1:0] vj_in, vk_in;
    reg  cdb0_write;
    reg  [ROB_ADRS_SIZE-1:0] cdb0_rob_adrs;
    reg  [V_SIZE-1:0] cdb0_snooped_value;
    reg  cdb1_write;
    reg  [ROB_ADRS_SIZE-1:0] cdb1_rob_adrs;
    reg  [V_SIZE-1:0] cdb1_snooped_value;
    reg  [3:0] busy_fu;

    wire valid0, valid1, valid2, valid3;
    wire [RS_OUT_LINE_SIZE-1:0] line_out1, line_out2, line_out3, line_out4;
    wire full;

    initial begin clk = 1'b0; forever #5 clk = ~clk; end

    reservation_station #(
        .OPF_SIZE(OPF_SIZE),
        .ROB_ADRS_SIZE(ROB_ADRS_SIZE),
        .V_SIZE(V_SIZE),
        .RS_ADRS_SIZE(RS_ADRS_SIZE)
    ) _DUT_ (
        .clk(clk), .rst(rst), .write(write),
        .opf(opf),
        .rob_dest(rob_dest),
        .qj_required(qj_required),
        .qk_required(qk_required),
        .qj_rob_entry(qj_rob_entry),
        .qk_rob_entry(qk_rob_entry),
        .vj_in(vj_in),
        .vk_in(vk_in),
        .cdb0_write(cdb0_write),
        .cdb0_rob_adrs(cdb0_rob_adrs),
        .cdb0_snooped_value(cdb0_snooped_value),
        .cdb1_write(cdb1_write),
        .cdb1_rob_adrs(cdb1_rob_adrs),
        .cdb1_snooped_value(cdb1_snooped_value),
        .busy_fu(busy_fu),
        .valid0(valid0),
        .valid1(valid1),
        .valid2(valid2),
        .valid3(valid3),
        .line_out1(line_out1),
        .line_out2(line_out2),
        .line_out3(line_out3),
        .line_out4(line_out4),
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

    task automatic insert_entry;
        input [OPF_SIZE-1:0] opf_v;
        input [ROB_ADRS_SIZE-1:0] rob_dest_v;
        input qj_req, qk_req;
        input [ROB_ADRS_SIZE-1:0] qj_rob, qk_rob;
        input [V_SIZE-1:0] vj_v, vk_v;
        begin
            @(negedge clk);
            write = 1;
            opf = opf_v;
            rob_dest = rob_dest_v;
            qj_required = qj_req;
            qk_required = qk_req;
            qj_rob_entry = qj_rob;
            qk_rob_entry = qk_rob;
            vj_in = vj_v;
            vk_in = vk_v;
            @(posedge clk);
            #1;
            write = 0;
        end
    endtask

    task automatic cdb0_broadcast;
        input [ROB_ADRS_SIZE-1:0] adrs;
        input [V_SIZE-1:0] value;
        begin
            @(negedge clk);
            cdb0_write = 1;
            cdb0_rob_adrs = adrs;
            cdb0_snooped_value = value;
            @(posedge clk);
            #1;
            cdb0_write = 0;
        end
    endtask

    task automatic cdb1_broadcast;
        input [ROB_ADRS_SIZE-1:0] adrs;
        input [V_SIZE-1:0] value;
        begin
            @(negedge clk);
            cdb1_write = 1;
            cdb1_rob_adrs = adrs;
            cdb1_snooped_value = value;
            @(posedge clk);
            #1;
            cdb1_write = 0;
        end
    endtask

    task automatic dual_cdb_broadcast;
        input [ROB_ADRS_SIZE-1:0] adrs0, adrs1;
        input [V_SIZE-1:0] value0, value1;
        begin
            @(negedge clk);
            cdb0_write = 1;
            cdb0_rob_adrs = adrs0;
            cdb0_snooped_value = value0;
            cdb1_write = 1;
            cdb1_rob_adrs = adrs1;
            cdb1_snooped_value = value1;
            @(posedge clk);
            #1;
            cdb0_write = 0;
            cdb1_write = 0;
        end
    endtask

    task automatic do_reset;
        begin
            rst = 1;
            write = 0;
            opf = 0;
            rob_dest = 0;
            qj_required = 0;
            qk_required = 0;
            qj_rob_entry = 0;
            qk_rob_entry = 0;
            vj_in = 0;
            vk_in = 0;
            cdb0_write = 0;
            cdb0_rob_adrs = 0;
            cdb0_snooped_value = 0;
            cdb1_write = 0;
            cdb1_rob_adrs = 0;
            cdb1_snooped_value = 0;
            busy_fu = 4'b0000;
            @(posedge clk);
            #1;
            rst = 0;
        end
    endtask

    initial begin
        $dumpfile("reservation_station_tb.vcd");
        $dumpvars(0, reservation_station_tb);
        pass_count = 0;
        fail_count = 0;

        $display("\n========================================");
        $display("TEST 1: Basic allocation and reset");
        $display("========================================");
        do_reset();
        check_bool(1'b0, full, "RS initially not full");
        check_bool(1'b0, valid0, "No valid output line 0");
        
        // Insert entry with both operands ready
        insert_entry(3'b100, 5'd1, 0, 0, 5'd0, 5'd0, 32'hAAAA_AAAA, 32'hBBBB_BBBB);
        @(posedge clk); #1;
        check_bool(1'b0, full, "RS not full after 1 entry");
        check_bool(1'b1, valid0, "Entry is ready (valid0=1)");
        
        do_reset();
        check_bool(1'b0, valid0, "After reset, no valid lines");

        $display("\n========================================");
        $display("TEST 2: Single CDB0 operand forwarding");
        $display("========================================");
        do_reset();
        
        // Insert entry waiting for qj from ROB entry 5
        insert_entry(3'b100, 5'd1, 1, 0, 5'd5, 5'd0, 32'h0, 32'hBBBB_BBBB);
        @(posedge clk); #1;
        check_bool(1'b0, valid0, "Entry not ready (waiting for qj)");
        
        // Broadcast value for ROB entry 5 on CDB0
        cdb0_broadcast(5'd5, 32'hCDB0_5555);
        @(posedge clk); #1;
        check_bool(1'b1, valid0, "Entry ready after CDB0 broadcast");

        $display("\n========================================");
        $display("TEST 3: Single CDB1 operand forwarding");
        $display("========================================");
        do_reset();
        
        // Insert entry waiting for qk from ROB entry 7
        insert_entry(3'b101, 5'd2, 0, 1, 5'd0, 5'd7, 32'hAAAA_AAAA, 32'h0);
        @(posedge clk); #1;
        check_bool(1'b0, valid0, "Entry not ready (waiting for qk)");
        
        // Broadcast value for ROB entry 7 on CDB1
        cdb1_broadcast(5'd7, 32'hCDB1_7777);
        @(posedge clk); #1;
        check_bool(1'b1, valid0, "Entry ready after CDB1 broadcast");

        $display("\n========================================");
        $display("TEST 4: Dual CDB simultaneous broadcast");
        $display("========================================");
        do_reset();
        
        // Insert two entries waiting for different operands
        insert_entry(3'b100, 5'd10, 1, 0, 5'd10, 5'd0, 32'h0, 32'hBBBB_1111);
        @(posedge clk); #1;
        insert_entry(3'b101, 5'd11, 0, 1, 5'd0, 5'd11, 32'hAAAA_2222, 32'h0);
        @(posedge clk); #1;
        check_bool(1'b0, valid0, "Entry 0 not ready");
        check_bool(1'b0, valid1, "Entry 1 not ready");
        
        // Broadcast on both CDBs simultaneously
        dual_cdb_broadcast(5'd10, 5'd11, 32'hDEAD_BEEA, 32'hDEADBEEB);
        @(posedge clk); #1;
        check_bool(1'b1, valid0, "Entry 0 ready after dual CDB");
        check_bool(1'b1, valid1, "Entry 1 ready after dual CDB");

        $display("\n========================================");
        $display("TEST 5: Immediate forwarding on insertion");
        $display("========================================");
        do_reset();
        
        // CDB0 is broadcasting while inserting
        @(negedge clk);
        cdb0_write = 1;
        cdb0_rob_adrs = 5'd15;
        cdb0_snooped_value = 32'hDEADBEEF;
        write = 1;
        opf = 3'b110;
        rob_dest = 5'd20;
        qj_required = 1;
        qk_required = 0;
        qj_rob_entry = 5'd15;  // Matches CDB0 address
        qk_rob_entry = 5'd0;
        vj_in = 32'h0;
        vk_in = 32'hBBBB_3333;
        @(posedge clk);
        #1;
        write = 0;
        cdb0_write = 0;
        
        @(posedge clk); #1;
        check_bool(1'b1, valid0, "Entry ready via immediate CDB0 forwarding");

        $display("\n========================================");
        $display("TEST 6: Fill RS to capacity (8 slots)");
        $display("========================================");
        do_reset();
        
        for (i = 0; i < 8; i = i + 1) begin
            insert_entry(3'b100, i[4:0], 0, 0, 5'd0, 5'd0, i[31:0], i[31:0] + 1);
            @(posedge clk); #1;
            if (i < 7) begin
                check_bool(1'b0, full, {"RS not full at slot ", 8'd48+i});
            end else begin
                check_bool(1'b1, full, "RS full after 8 entries");
            end
        end

        $display("\n========================================");
        $display("TEST 7: Multiple ready lines with FU busy");
        $display("========================================");
        do_reset();
        
        // Insert 4 ready entries
        for (i = 0; i < 4; i = i + 1) begin
            insert_entry(3'b100 + i[2:0], i[4:0], 0, 0, 5'd0, 5'd0, 
                        32'hAAAA_0000 + i[31:0], 32'hBBBB_0000 + i[31:0]);
            @(posedge clk); #1;
        end
        
        // All FUs free - should see up to 4 valid outputs
        busy_fu = 4'b0000;
        @(posedge clk); #1;
        check_bool(1'b1, valid0, "Valid0 asserted (FU0 free)");
        check_bool(1'b1, valid1, "Valid1 asserted (FU1 free)");
        check_bool(1'b1, valid2, "Valid2 asserted (FU2 free)");
        check_bool(1'b1, valid3, "Valid3 asserted (FU3 free)");
        
        // Mark FU0 and FU2 busy
        busy_fu = 4'b0101;
        @(posedge clk); #1;
        check_bool(1'b0, valid0, "Valid0 not asserted (FU0 busy)");
        check_bool(1'b1, valid1, "Valid1 asserted (FU1 free)");
        check_bool(1'b0, valid2, "Valid2 not asserted (FU2 busy)");
        check_bool(1'b1, valid3, "Valid3 asserted (FU3 free)");

        $display("\n========================================");
        $display("TEST 8: CDB priority (CDB0 vs CDB1)");
        $display("========================================");
        do_reset();
        
        // Insert entry waiting for operand from ROB 25
        insert_entry(3'b111, 5'd30, 1, 0, 5'd25, 5'd0, 32'h0, 32'hBBBB_4444);
        @(posedge clk); #1;
        
        // Both CDBs broadcast the same ROB address (should prioritize CDB0)
        dual_cdb_broadcast(5'd25, 5'd25, 32'hDEADBEEF, 32'hDEADBEEA);
        @(posedge clk); #1;
        check_bool(1'b1, valid0, "Entry ready (captured from CDB0)");
        // Note: In actual implementation, CDB0 gets priority in if-else chain        
        #20;
        $finish;
    end

endmodule
