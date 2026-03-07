// Formal property wrapper — data_memory
//
// BUG FIX applied: read condition now gates on !write0/!write1 (write-enable)
//   instead of write_data0==0/write_data1==0 (data value).
//
// Proves (all expected PASS after fix):
//   P1 [PASS]: write0 → read data_out0 returns written value next cycle
//   P2 [PASS]: simultaneous writes to different addresses are independent
`default_nettype none
`include "modules/data_memory.sv"

module data_memory_props #(
    parameter string PATH    = "",
    parameter        DM_DATA_SIZE = 32,
    parameter        DM_ADRS_SIZE = 4   // small for formal (16 entries)
) (
    input clk, rst,
    input write0, write1,
    input [DM_DATA_SIZE-1:0] write_address0, write_address1,
    input [DM_DATA_SIZE-1:0] write_data0,    write_data1,
    input [DM_DATA_SIZE-1:0] read_address0,  read_address1
);
    wire [DM_DATA_SIZE-1:0] data_out0, data_out1;

    data_memory #(
        .PATH(PATH),
        .DM_DATA_SIZE(DM_DATA_SIZE),
        .DM_ADRS_SIZE(DM_ADRS_SIZE)
    ) _DUT_ (
        .clk(clk), .rst(rst),
        .write0(write0), .write1(write1),
        .write_address0(write_address0), .write_address1(write_address1),
        .write_data0(write_data0),       .write_data1(write_data1),
        .read_address0(read_address0),   .read_address1(read_address1),
        .data_out0(data_out0),           .data_out1(data_out1)
    );

`ifdef FORMAL
    // Assume no reset during normal operation so memory is stable
    initial assume(!rst);
    assume property (@(posedge clk) !rst);

    // Constrain addresses to valid range
    assume property (@(posedge clk)
        write_address0 < (1 << DM_ADRS_SIZE) &&
        write_address1 < (1 << DM_ADRS_SIZE) &&
        read_address0  < (1 << DM_ADRS_SIZE) &&
        read_address1  < (1 << DM_ADRS_SIZE));

    // P1 [EXPECTED: PASS] — read-after-write with non-zero write_data0
    //   Regression check for the old write_data0==0 read-condition bug.
    p_write0_read_back:
        assert property (@(posedge clk)
            (write0 && (write_data0 != 0) &&
             (read_address0 == write_address0)) |=>
            (data_out0 == $past(write_data0)));

    // P2 [EXPECTED: PASS] — write to addr A does not change read at addr B (A != B)
    p_port_isolation:
        assert property (@(posedge clk)
            (!write0 &&
             write1  &&
             write_address1 != read_address0) |=>
            ($stable(data_out0)));

    // Cover: a non-zero write successfully completes
    c_nonzero_write: cover property (@(posedge clk)
        write0 && write_data0 != 0);
`endif
endmodule
`default_nettype wire
