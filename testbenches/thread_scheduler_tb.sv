// Testbench: thread_scheduler_tb.sv — Verilator-compatible
// Compile: verilator --binary --timing --top-module thread_scheduler_tb -sv \
//            testbenches/thread_scheduler_tb.sv -o build/thread_scheduler_tb
`timescale 1ns/1ps
`include "modules/thread_scheduler.sv"

module thread_scheduler_tb;

    integer pass_count, fail_count;

    reg  clk, rst;
    wire interleaving;

    initial begin clk = 1'b0; forever #5 clk = ~clk; end

    thread_scheduler _DUT_ (
        .clk(clk),
        .rst(rst),
        .interleaving(interleaving)
    );

    task automatic check;
        input       expected;
        input       actual;
        input [255:0] name;
        begin
            if (expected === actual) begin
                $display("PASS [%0t] %s | got=%b", $time, name, actual);
                pass_count = pass_count + 1;
            end else begin
                $display("FAIL [%0t] %s | expected=%b got=%b", $time, name, expected, actual);
                fail_count = fail_count + 1;
            end
        end
    endtask

    initial begin
        pass_count = 0; fail_count = 0;
        rst = 1'b0;

        // ----------------------------------------------------------------
        // TEST 1: Reset forces interleaving to 0
        // ----------------------------------------------------------------
        rst = 1'b1;
        @(posedge clk); #1;
        check(1'b0, interleaving, "reset_forces_0");

        // ----------------------------------------------------------------
        // TEST 2: Strictly alternating on every negedge after reset release
        // ----------------------------------------------------------------
        rst = 1'b0;

        @(negedge clk); #1;
        check(1'b1, interleaving, "negedge1_toggles_to_1");

        @(negedge clk); #1;
        check(1'b0, interleaving, "negedge2_toggles_to_0");

        @(negedge clk); #1;
        check(1'b1, interleaving, "negedge3_toggles_to_1");

        @(negedge clk); #1;
        check(1'b0, interleaving, "negedge4_toggles_to_0");

        // ----------------------------------------------------------------
        // TEST 3: posedge alone does NOT change interleaving when rst=0
        // ----------------------------------------------------------------
        @(posedge clk); #1;
        check(1'b0, interleaving, "posedge_no_change_without_rst");

        // ----------------------------------------------------------------
        // TEST 4: Mid-sequence reset snaps back to 0 and resumes correctly
        // ----------------------------------------------------------------
        @(negedge clk); #1;       // now 1
        rst = 1'b1;
        @(posedge clk); #1;
        check(1'b0, interleaving, "mid_seq_reset_snaps_to_0");

        rst = 1'b0;
        @(negedge clk); #1;
        check(1'b1, interleaving, "post_reset_negedge_to_1");

        @(negedge clk); #1;
        check(1'b0, interleaving, "post_reset_negedge_to_0");

        $display("\n--- thread_scheduler_tb: PASS=%0d FAIL=%0d ---\n",
                 pass_count, fail_count);
        $finish;
    end
endmodule
