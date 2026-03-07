// Formal property wrapper — branch_predictor
// Uses an inline reference model (spec FSM) to check DUT equivalence.
// NOTE: DUT uses always @(posedge clk or negedge clk) — both edges.
// Proves:
//   P1: prediction matches reference model state[1] at all times
//   P2: STRONG_TAKE saturates (taken branch stays at STRONG_TAKE)
//   P3: STRONG_NTAKE saturates (not-taken stays at STRONG_NTAKE)
//   P4: reset delivers prediction=1 (WEAK_TAKE initial state)
`default_nettype none
`include "modules/branch_predictor.sv"

module branch_predictor_props (
    input clk, rst, branch, branch_taken
);
    wire prediction;

    localparam [1:0] ST = 2'b11, WT = 2'b10, WN = 2'b01, SN = 2'b00;

    // ---- Reference model (specification) ----
    reg [1:0] ref_state;
    always @(posedge clk or negedge clk) begin
        if (rst) ref_state <= WT;
        else if (branch) begin
            case (ref_state)
                ST: ref_state <= branch_taken ? ST : WT;
                WT: ref_state <= branch_taken ? ST : WN;
                WN: ref_state <= branch_taken ? WT : SN;
                SN: ref_state <= branch_taken ? WN : SN;
                default: ref_state <= WT;
            endcase
        end
    end

    branch_predictor _DUT_ (
        .clk(clk),
        .rst(rst),
        .branch(branch),
        .branch_taken(branch_taken),
        .prediction(prediction)
    );

`ifdef FORMAL
    initial assume(rst == 1'b1);

    // P1: DUT prediction matches reference spec at every edge
    p_pred_matches_spec:
        assert property (@(posedge clk or negedge clk)
            prediction == ref_state[1]);

    // P2: STRONG_TAKE is a fixed point under taken branches
    p_saturate_top:
        assert property (@(posedge clk or negedge clk)
            (ref_state == ST && branch && branch_taken) |=>
            (ref_state == ST && prediction == 1'b1));

    // P3: STRONG_NTAKE is a fixed point under not-taken branches
    p_saturate_bot:
        assert property (@(posedge clk or negedge clk)
            (ref_state == SN && branch && !branch_taken) |=>
            (ref_state == SN && prediction == 1'b0));

    // P4: prediction is 1 one cycle after reset
    p_rst_pred:
        assert property (@(posedge clk) rst |=> (prediction == 1'b1));

    // Cover: visit every state out of reset
    c_st: cover property (@(posedge clk) ref_state == ST && !rst);
    c_sn: cover property (@(posedge clk) ref_state == SN && !rst);
    c_wt: cover property (@(posedge clk) ref_state == WT && !rst);
    c_wn: cover property (@(posedge clk) ref_state == WN && !rst);
`endif
endmodule
`default_nettype wire
