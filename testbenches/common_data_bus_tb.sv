// Testbench: common_data_bus_tb.sv — Verilator-compatible
//
// Tests the dual-CDB architecture:
//   CDB0 — requestors 0–7  (AU0-3 + LU0-3, sub_arbiter _ABR0_)
//   CDB1 — requestors 8–15 (FALU0-3 + MA0-1, sub_arbiter _ABR1_)
//
// BUG-1 (counter advance skips current section): FIXED in new DUT.
// BUG-2 (write_pendencies latches during reset): FIXED in new DUT.
`timescale 1ns/1ps
`include "modules/common_data_bus.sv"

module common_data_bus_tb;

    integer pass_count, fail_count;
    integer i;

    reg  clk, rst;
    reg  [15:0] write_requests;
    reg  [31:0] data_in  [0:15];
    reg  [4:0]  rob_adrs [0:15];

    wire [7:0]  granted_request_cdb0;
    wire [7:0]  granted_request_cdb1;
    wire        rob_write_cdb0;
    wire        rob_write_cdb1;
    wire [4:0]  rob_address_cdb0;
    wire [4:0]  rob_address_cdb1;
    wire [31:0] data_out_cdb0;
    wire [31:0] data_out_cdb1;

    initial begin clk = 1'b0; forever #5 clk = ~clk; end

    common_data_bus _DUT_ (
        .clk(clk), .rst(rst),
        .write_requests(write_requests),
        .data_in0(data_in[0]),   .data_in1(data_in[1]),
        .data_in2(data_in[2]),   .data_in3(data_in[3]),
        .data_in4(data_in[4]),   .data_in5(data_in[5]),
        .data_in6(data_in[6]),   .data_in7(data_in[7]),
        .data_in8(data_in[8]),   .data_in9(data_in[9]),
        .data_in10(data_in[10]), .data_in11(data_in[11]),
        .data_in12(data_in[12]), .data_in13(data_in[13]),
        .data_in14(data_in[14]), .data_in15(data_in[15]),
        .rob_adrs_in0(rob_adrs[0]),   .rob_adrs_in1(rob_adrs[1]),
        .rob_adrs_in2(rob_adrs[2]),   .rob_adrs_in3(rob_adrs[3]),
        .rob_adrs_in4(rob_adrs[4]),   .rob_adrs_in5(rob_adrs[5]),
        .rob_adrs_in6(rob_adrs[6]),   .rob_adrs_in7(rob_adrs[7]),
        .rob_adrs_in8(rob_adrs[8]),   .rob_adrs_in9(rob_adrs[9]),
        .rob_adrs_in10(rob_adrs[10]), .rob_adrs_in11(rob_adrs[11]),
        .rob_adrs_in12(rob_adrs[12]), .rob_adrs_in13(rob_adrs[13]),
        .rob_adrs_in14(rob_adrs[14]), .rob_adrs_in15(rob_adrs[15]),
        .granted_request_cdb0(granted_request_cdb0),
        .granted_request_cdb1(granted_request_cdb1),
        .rob_write_cdb0(rob_write_cdb0),
        .rob_write_cdb1(rob_write_cdb1),
        .rob_address_cdb0(rob_address_cdb0),
        .rob_address_cdb1(rob_address_cdb1),
        .data_out_cdb0(data_out_cdb0),
        .data_out_cdb1(data_out_cdb1)
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
                $display("FAIL [%0t] %s | expected=%b got=%b",
                         $time, name, expected, actual);
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

    task automatic check5;
        input [4:0] expected;
        input [4:0] actual;
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

    task automatic do_reset;
        begin
            rst = 1'b1;
            write_requests = 16'b0;
            @(posedge clk); #1;
            @(posedge clk); #1;
            rst = 1'b0;
        end
    endtask

    reg [7:0] served_mask;
    integer   served_count;
    integer   timeout;

    initial begin
        pass_count = 0; fail_count = 0;

        for (i = 0; i < 16; i = i + 1) begin
            data_in[i]  = 32'hA000_0000 | i[31:0];
            rob_adrs[i] = i[4:0];
        end
        write_requests = 16'b0;

        // ----------------------------------------------------------------
        // TEST 1: Reset — no requests → both CDB rob_write outputs low
        // ----------------------------------------------------------------
        $display("\n=== TEST 1: Reset ===");
        do_reset; #1;
        check_bool(1'b0, rob_write_cdb0, "reset_no_rob_write_cdb0");
        check_bool(1'b0, rob_write_cdb1, "reset_no_rob_write_cdb1");

        // ----------------------------------------------------------------
        // TEST 2: Single request on CDB0 — bit 2 (AU2)
        //   write_requests[7:0] drives sub_arbiter _ABR0_
        //   selected0=2 → grants requestor 2 → rob_adrs[2]=2, data_in[2]
        // ----------------------------------------------------------------
        $display("\n=== TEST 2: Single request CDB0 — bit 2 ===");
        do_reset;
        @(posedge clk);
        write_requests = 16'h0004;   // bit 2
        @(posedge clk); #2;
        write_requests = 16'b0;
        check_bool(1'b1, rob_write_cdb0, "cdb0_req2_rob_write");
        check_bool(1'b0, rob_write_cdb1, "cdb0_req2_cdb1_idle");

        @(negedge clk); #1;
        check5(5'd2,           rob_address_cdb0, "cdb0_req2_rob_adrs");
        check32(32'hA000_0002, data_out_cdb0,    "cdb0_req2_data");

        // ----------------------------------------------------------------
        // TEST 3: Single request on CDB1 — bit 9 (FALU1)
        //   write_requests[15:8] drives sub_arbiter _ABR1_
        //   bit 9 = bit 1 within _ABR1_ → selected1=1 → grants requestor 9
        //   rob_adrs[9]=9, data_in[9]=0xA000_0009
        // ----------------------------------------------------------------
        $display("\n=== TEST 3: Single request CDB1 — bit 9 ===");
        do_reset;
        @(posedge clk);
        write_requests = 16'h0200;   // bit 9
        @(posedge clk); #2;
        write_requests = 16'b0;
        check_bool(1'b0, rob_write_cdb0, "cdb1_req9_cdb0_idle");
        check_bool(1'b1, rob_write_cdb1, "cdb1_req9_rob_write");

        @(negedge clk); #1;
        check5(5'd9,           rob_address_cdb1, "cdb1_req9_rob_adrs");
        check32(32'hA000_0009, data_out_cdb1,    "cdb1_req9_data");

        // ----------------------------------------------------------------
        // TEST 4: Simultaneous grants on CDB0 and CDB1
        //   bit 0 → CDB0 section 0, grants requestor 0
        //   bit 8 → CDB1 section 0, grants requestor 8
        //   Both sub-arbiters fire in same cycle — two simultaneous write-backs
        // ----------------------------------------------------------------
        $display("\n=== TEST 4: Simultaneous CDB0 + CDB1 grants ===");
        do_reset;
        @(posedge clk);
        write_requests = 16'h0101;   // bit 0 (CDB0) + bit 8 (CDB1)
        @(posedge clk); #2;
        write_requests = 16'b0;
        check_bool(1'b1, rob_write_cdb0, "simultaneous_cdb0_grant");
        check_bool(1'b1, rob_write_cdb1, "simultaneous_cdb1_grant");

        @(negedge clk); #1;
        check5(5'd0,           rob_address_cdb0, "simultaneous_cdb0_adrs");
        check5(5'd8,           rob_address_cdb1, "simultaneous_cdb1_adrs");
        check32(32'hA000_0000, data_out_cdb0,    "simultaneous_cdb0_data");
        check32(32'hA000_0008, data_out_cdb1,    "simultaneous_cdb1_data");

        // ----------------------------------------------------------------
        // TEST 5: All 8 CDB0 requests simultaneous — starvation check
        //   Round-robin advances across sections: section 0 (slots 0-3) then
        //   section 1 (slots 4-7). All 8 must eventually be granted.
        // ----------------------------------------------------------------
        $display("\n=== TEST 5: 8 simultaneous CDB0 requests ===");
        do_reset;
        @(posedge clk); #1;
        write_requests = 16'h00FF;    // set BEFORE posedge
        @(posedge clk); #1;           // cycle 1: grants slot 0
        write_requests = 16'b0;

        served_mask  = 8'b0;
        served_count = 0;
        timeout      = 0;

        // outputs are already valid — sample immediately after each posedge
        while (served_count < 8 && timeout < 30) begin
            if (rob_write_cdb0 && !(served_mask & granted_request_cdb0)) begin
                served_mask  = served_mask | granted_request_cdb0;
                served_count = served_count + 1;
                $display("  cdb0_grant[%0d] granted=%08b adrs=%0d",
                        served_count, granted_request_cdb0, rob_address_cdb0);
            end
            @(posedge clk); #1;
            timeout = timeout + 1;
        end

        if (served_count == 8) begin
            $display("PASS cdb0_all_8_served | iterations=%0d", timeout);
            pass_count = pass_count + 1;
        end else begin
            $display("FAIL cdb0_all_8_served | only %0d/8 served", served_count);
            fail_count = fail_count + 1;
        end

        // ----------------------------------------------------------------
        // TEST 6: Priority within CDB0 section 0 — order: 0 → 1 → 2 → 3
        //   Lowest-index slot in current section wins each cycle.
        // ----------------------------------------------------------------
        $display("\n=== TEST 6: Priority within CDB0 section 0 ===");
        do_reset;
        // Let one idle cycle pass after reset so write_pendencies is cleanly 0
        @(posedge clk); #1;

        // Apply requests BEFORE the posedge so the DUT sees them unambiguously
        write_requests = 16'h000F;
        @(posedge clk); #1;         // cycle 1: grants slot 0 → selected=0
        write_requests = 16'b0;

        // NOW sample — we are past cycle 1's posedge, selected=0 is stable
        for (i = 0; i < 4; i = i + 1) begin
            // selected already reflects this cycle's grant (updated at last posedge)
            if (rob_write_cdb0) begin
                if (rob_address_cdb0 === i[4:0])
                    $display("PASS cdb0_sec0_priority_%0d | got=%0d", i, rob_address_cdb0);
                else
                    $display("FAIL cdb0_sec0_priority_%0d | expected=%0d got=%0d", i, i, rob_address_cdb0);
            end
            @(posedge clk); #1;     // next cycle grants next slot
        end

        // ----------------------------------------------------------------
        // TEST 7: BUG-2 fix — write_pendencies must NOT accumulate during rst
        //   Old arbiter: write_pendencies |= write_requests was outside rst branch.
        //   New sub_arbiter: latch is guarded by else → BUG-2 FIXED.
        //   Expected: rob_write_cdb1 == 0 after reset deasserts.
        // ----------------------------------------------------------------
        $display("\n=== TEST 7: BUG-2 fix — write_pendencies cleared by reset ===");
        rst = 1'b1;
        write_requests = 16'h0100;   // CDB1 bit 8 active during reset
        @(posedge clk); #1;
        rst = 1'b0;
        write_requests = 16'b0;
        #1;
        if (rob_write_cdb1 === 1'b1) begin
            $display("BUG_CONFIRMED write_pendencies_persists_through_reset | rob_write_cdb1=1");
            fail_count = fail_count + 1;
        end else begin
            $display("PASS write_pendencies_cleared_by_reset (BUG-2 fixed)");
            pass_count = pass_count + 1;
        end

        $display("\n--- common_data_bus_tb: PASS=%0d FAIL=%0d ---\n",
                 pass_count, fail_count);
        $finish;
    end
endmodule
