// Formal property wrapper — thread_scheduler
// Proves:
//   P1: rst drives interleaving to 0 one cycle after reset
//   P2: interleaving toggles on every negedge when out of reset
// Covers:
//   C1: reach interleaving=1
//   C2: observe a 1→0 toggle
`default_nettype none
`include "modules/thread_scheduler.sv"

module thread_scheduler_props (input clk, rst);
    wire interleaving;

    thread_scheduler _DUT_ (
        .clk(clk),
        .rst(rst),
        .interleaving(interleaving)
    );

`ifdef FORMAL
    // Start in reset
    initial assume(rst == 1'b1);

    // P1: reset drives interleaving to 0 (checked at posedge, after reset posedge)
    p_rst_clears:
        assert property (@(posedge clk)
            rst |=> (interleaving == 1'b0));

    // P2: when stable out of reset, negedge toggles interleaving
    p_toggle_negedge:
        assert property (@(negedge clk)
            disable iff (rst || $past(rst))
            interleaving != $past(interleaving));

    // Cover: reach interleaving=1
    c_high: cover property (@(posedge clk) interleaving == 1'b1);

    // Cover: observe 1→0 transition at posedge
    c_lower_after_high: cover property (@(posedge clk)
        $past(interleaving) == 1'b1 && interleaving == 1'b0);
`endif
endmodule
`default_nettype wire
