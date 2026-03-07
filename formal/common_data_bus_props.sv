// Formal property wrapper — common_data_bus (dual-CDB architecture)
//
// CDB0 serves requestors 0–7  (AU0-3 + LU0-3)
// CDB1 serves requestors 8–15 (FALU0-3 + MA0-1)
// Each CDB has an independent sub_arbiter with 2-section round-robin.
//
// BUG-1 (counter advance skips current section): FIXED — cp1 wraps at 1.
// BUG-2 (write_pendencies latches during reset): FIXED — latch inside else branch.
//
// Proves (all expected PASS):
//   P1: granted_request_cdb0 is one-hot or zero at every negedge
//   P2: granted_request_cdb1 is one-hot or zero at every negedge
//   P3: granted_request_cdb0 == 0 when rob_write_cdb0 == 0
//   P4: granted_request_cdb1 == 0 when rob_write_cdb1 == 0
//   P5: reset deassert → rob_write_cdb0 and rob_write_cdb1 go low (BUG-2 fix)
`default_nettype none
`include "modules/util.sv"
`include "modules/common_data_bus.sv"

module common_data_bus_props (
    input clk, rst,
    input [15:0] write_requests,
    input [31:0] data_in0,  data_in1,  data_in2,  data_in3,
                 data_in4,  data_in5,  data_in6,  data_in7,
                 data_in8,  data_in9,  data_in10, data_in11,
                 data_in12, data_in13, data_in14, data_in15,
    input [4:0]  rob_adrs_in0,  rob_adrs_in1,  rob_adrs_in2,  rob_adrs_in3,
                 rob_adrs_in4,  rob_adrs_in5,  rob_adrs_in6,  rob_adrs_in7,
                 rob_adrs_in8,  rob_adrs_in9,  rob_adrs_in10, rob_adrs_in11,
                 rob_adrs_in12, rob_adrs_in13, rob_adrs_in14, rob_adrs_in15
);
    wire [7:0]  granted_request_cdb0;
    wire [7:0]  granted_request_cdb1;
    wire        rob_write_cdb0;
    wire        rob_write_cdb1;
    wire [4:0]  rob_address_cdb0;
    wire [4:0]  rob_address_cdb1;
    wire [31:0] data_out_cdb0;
    wire [31:0] data_out_cdb1;

    common_data_bus _DUT_ (
        .clk(clk), .rst(rst),
        .write_requests(write_requests),
        .data_in0(data_in0),   .data_in1(data_in1),
        .data_in2(data_in2),   .data_in3(data_in3),
        .data_in4(data_in4),   .data_in5(data_in5),
        .data_in6(data_in6),   .data_in7(data_in7),
        .data_in8(data_in8),   .data_in9(data_in9),
        .data_in10(data_in10), .data_in11(data_in11),
        .data_in12(data_in12), .data_in13(data_in13),
        .data_in14(data_in14), .data_in15(data_in15),
        .rob_adrs_in0(rob_adrs_in0),   .rob_adrs_in1(rob_adrs_in1),
        .rob_adrs_in2(rob_adrs_in2),   .rob_adrs_in3(rob_adrs_in3),
        .rob_adrs_in4(rob_adrs_in4),   .rob_adrs_in5(rob_adrs_in5),
        .rob_adrs_in6(rob_adrs_in6),   .rob_adrs_in7(rob_adrs_in7),
        .rob_adrs_in8(rob_adrs_in8),   .rob_adrs_in9(rob_adrs_in9),
        .rob_adrs_in10(rob_adrs_in10), .rob_adrs_in11(rob_adrs_in11),
        .rob_adrs_in12(rob_adrs_in12), .rob_adrs_in13(rob_adrs_in13),
        .rob_adrs_in14(rob_adrs_in14), .rob_adrs_in15(rob_adrs_in15),
        .granted_request_cdb0(granted_request_cdb0),
        .granted_request_cdb1(granted_request_cdb1),
        .rob_write_cdb0(rob_write_cdb0),
        .rob_write_cdb1(rob_write_cdb1),
        .rob_address_cdb0(rob_address_cdb0),
        .rob_address_cdb1(rob_address_cdb1),
        .data_out_cdb0(data_out_cdb0),
        .data_out_cdb1(data_out_cdb1)
    );

`ifdef FORMAL
    initial assume(rst == 1'b1);

    // P1 [PASS]: CDB0 grant is one-hot or zero at every negedge
    p_onehot_cdb0:
        assert property (@(negedge clk)
            (granted_request_cdb0 & (granted_request_cdb0 - 1)) == 8'b0);

    // P2 [PASS]: CDB1 grant is one-hot or zero at every negedge
    p_onehot_cdb1:
        assert property (@(negedge clk)
            (granted_request_cdb1 & (granted_request_cdb1 - 1)) == 8'b0);

    // P3 [PASS]: CDB0 grant is zero when CDB0 has no pending requests
    p_no_grant_when_idle_cdb0:
        assert property (@(negedge clk)
            !rob_write_cdb0 |-> (granted_request_cdb0 == 8'b0));

    // P4 [PASS]: CDB1 grant is zero when CDB1 has no pending requests
    p_no_grant_when_idle_cdb1:
        assert property (@(negedge clk)
            !rob_write_cdb1 |-> (granted_request_cdb1 == 8'b0));

    // P5 [PASS]: after reset, both CDBs must be idle (BUG-2 fix verified)
    //   write_pendencies is now inside the else branch of rst, so rst clears it.
    p_rst_clears_pendencies:
        assert property (@(posedge clk)
            rst |=> (!rob_write_cdb0 && !rob_write_cdb1));

    // Cover: CDB0 issues a grant
    c_cdb0_grant: cover property (@(negedge clk) rob_write_cdb0 == 1'b1);

    // Cover: CDB1 issues a grant
    c_cdb1_grant: cover property (@(negedge clk) rob_write_cdb1 == 1'b1);

    // Cover: both CDBs grant simultaneously (dual write-back in one cycle)
    c_simultaneous_grant: cover property (@(negedge clk)
        rob_write_cdb0 && rob_write_cdb1);

    // Cover: all 8 CDB0 requestors pending at once
    c_cdb0_all_pending: cover property (@(posedge clk)
        write_requests[7:0] == 8'hFF);
`endif
endmodule
`default_nettype wire
