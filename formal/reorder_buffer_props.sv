// Formal property wrapper — reorder_buffer
// Checks observable interface invariants without accessing internal signals.
// Proves:
//   P1: created_entry_bool == (~full & write_entry) — combinational correctness
//   P2: full → ~created_entry_bool
//   P3: ready2 → ready1 (structural implication from AND in assign)
//   P4: reset delivers no ready entries at the next posedge
//   P5: entry output (=tail) does not change when full
`default_nettype none
`include "modules/reorder_buffer.sv"

module reorder_buffer_props #(
    parameter ROB_ADRS_SIZE = 5,
    parameter ROB_LINES     = (2**ROB_ADRS_SIZE) - 1,
    parameter V_SIZE        = 32,
    parameter IM_ADRS_SIZE  = 16,
    parameter OPC_SIZE      = 4
) (
    input clk, rst,
    input write_entry,
    input [OPC_SIZE-1:0]      entry_opc,
    input [IM_ADRS_SIZE-1:0]  entry_destination,
    input [IM_ADRS_SIZE-1:0]  entry_pc,
    input cdb_write,
    input [V_SIZE-1:0]        cdb_snooped_value,
    input [ROB_ADRS_SIZE-1:0] cdb_rob_adrs,
    input [2:0]               cdb_exception
);
    wire created_entry_bool;
    wire [ROB_ADRS_SIZE-1:0] entry;
    wire ready1_instruction_bool, ready2_instruction_bool;
    wire [2:0]          ready1_exception, ready2_exception;
    wire [OPC_SIZE-1:0] ready1_opc,       ready2_opc;
    wire [IM_ADRS_SIZE-1:0] ready1_destination, ready2_destination;
    wire [IM_ADRS_SIZE-1:0] ready1_pc,          ready2_pc;
    wire [V_SIZE-1:0]   ready1_value,      ready2_value;
    wire full;

    reorder_buffer #(
        .ROB_ADRS_SIZE(ROB_ADRS_SIZE),
        .ROB_LINES(ROB_LINES),
        .V_SIZE(V_SIZE),
        .IM_ADRS_SIZE(IM_ADRS_SIZE),
        .OPC_SIZE(OPC_SIZE)
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

`ifdef FORMAL
    initial assume(rst == 1'b1);

    // Constrain cdb_rob_adrs to valid ROB range
    assume property (@(posedge clk) cdb_rob_adrs < ROB_LINES);

    // P1: combinational correctness of created_entry_bool
    p_created_comb:
        assert property (created_entry_bool == (~full & write_entry));

    // P2: full blocks all new allocations (structural: ~full & write_entry = 0 when full)
    p_full_blocks:
        assert property (full |-> ~created_entry_bool);

    // P3: ready2 can only be high when ready1 is high (structural: ready2 = ready1 & ...)
    p_ready2_implies_ready1:
        assert property (ready2_instruction_bool |-> ready1_instruction_bool);

    // P4: reset clears all ready bits — no entries ready one posedge after rst
    p_rst_no_ready:
        assert property (@(posedge clk) rst |=>
            (~ready1_instruction_bool && ~ready2_instruction_bool));

    // P5: when full, tail (entry output) is stable — no new allocations
    p_full_tail_stable:
        assert property (@(posedge clk or negedge clk)
            full |-> $stable(entry));

    // Cover: reach full state
    c_full: cover property (@(posedge clk) full == 1'b1);

    // Cover: a ready entry exists
    c_ready1: cover property (@(posedge clk) ready1_instruction_bool && !rst);
`endif
endmodule
`default_nettype wire
