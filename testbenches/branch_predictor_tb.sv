// Testbench: branch_predictor_tb.sv — Verilator-compatible
// States: STRONG_TAKE=11(pred=1), WEAK_TAKE=10(pred=1),
//         WEAK_NTAKE=01(pred=0), STRONG_NTAKE=00(pred=0)
// DUT: always @(posedge clk or negedge clk) — fires on both edges.
// one_transition: set branch=1 AFTER a negedge, let posedge fire the update,
//                 clear branch=0 before the following negedge.
`timescale 1ns/1ps
`include "modules/branch_predictor.sv"

module branch_predictor_tb;

    integer pass_count, fail_count;

    reg  clk, rst, branch, branch_taken;
    wire prediction;

    initial begin clk = 1'b0; forever #5 clk = ~clk; end

    branch_predictor _DUT_ (
        .clk(clk),
        .rst(rst),
        .branch(branch),
        .branch_taken(branch_taken),
        .prediction(prediction)
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

    // Drive exactly one state transition at the next posedge.
    // Called after a negedge so branch=0 during that negedge.
    task automatic one_transition;
        input taken;
        begin
            @(negedge clk);
            branch       = 1'b1;
            branch_taken = taken;
            @(posedge clk);
            branch = 1'b0;
            #1;
        end
    endtask

    initial begin
        pass_count = 0; fail_count = 0;
        branch = 1'b0; branch_taken = 1'b0;

        // TEST 1: reset → WEAK_TAKE (prediction=1)
        rst = 1'b1;
        @(posedge clk); #1;
        check(1'b1, prediction, "reset_WEAK_TAKE_pred=1");
        rst = 1'b0;

        // TEST 2: WEAK_TAKE + NT → WEAK_NTAKE (pred 1→0)
        one_transition(1'b0);
        check(1'b0, prediction, "WEAK_TAKE+NT->WEAK_NTAKE_pred=0");

        // TEST 3: WEAK_NTAKE + NT → STRONG_NTAKE (pred stays 0)
        one_transition(1'b0);
        check(1'b0, prediction, "WEAK_NTAKE+NT->STRONG_NTAKE_pred=0");

        // TEST 4: STRONG_NTAKE + NT → STRONG_NTAKE (saturate, pred stays 0)
        one_transition(1'b0);
        check(1'b0, prediction, "STRONG_NTAKE+NT_saturate_pred=0");

        // TEST 5: STRONG_NTAKE + T → WEAK_NTAKE (pred stays 0)
        one_transition(1'b1);
        check(1'b0, prediction, "STRONG_NTAKE+T->WEAK_NTAKE_pred=0");

        // TEST 6: WEAK_NTAKE + T → WEAK_TAKE (pred 0→1)
        one_transition(1'b1);
        check(1'b1, prediction, "WEAK_NTAKE+T->WEAK_TAKE_pred=1");

        // TEST 7: WEAK_TAKE + T → STRONG_TAKE (pred stays 1)
        one_transition(1'b1);
        check(1'b1, prediction, "WEAK_TAKE+T->STRONG_TAKE_pred=1");

        // TEST 8: STRONG_TAKE + T → STRONG_TAKE (saturate, pred stays 1)
        one_transition(1'b1);
        check(1'b1, prediction, "STRONG_TAKE+T_saturate_pred=1");

        // TEST 9: STRONG_TAKE + NT → WEAK_TAKE (pred stays 1)
        one_transition(1'b0);
        check(1'b1, prediction, "STRONG_TAKE+NT->WEAK_TAKE_pred=1");

        // TEST 10: Recovery via rst (misprediction flush equivalent)
        one_transition(1'b0); // → WEAK_NTAKE
        one_transition(1'b0); // → STRONG_NTAKE
        check(1'b0, prediction, "at_STRONG_NTAKE_before_recovery");

        rst = 1'b1;
        @(posedge clk); #1;
        check(1'b1, prediction, "rst_recovery_to_WEAK_TAKE_pred=1");
        rst = 1'b0;

        one_transition(1'b0); // WEAK_TAKE → WEAK_NTAKE
        check(1'b0, prediction, "post_recovery_NT_pred=0");

        $display("\n--- branch_predictor_tb: PASS=%0d FAIL=%0d ---\n",
                 pass_count, fail_count);
        $finish;
    end
endmodule
