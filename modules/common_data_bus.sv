/*
 * common_data_bus.sv
 *
 * Dual Common Data Bus — two independent write-back channels per cycle.
 *
 * Split by functional unit class:
 *   CDB0  ←  AU0-3 + LU0-3   (requestors 0–7,  integer side)
 *   CDB1  ←  FALU0-3 + MA    (requestors 8–15, FP / memory side)
 *
 * Each CDB has its own sub_arbiter (single posedge always block) that grants one request per cycle,
 * yielding up to 2 simultaneous write-backs.
 *
 * The two arbiters are fully independent — no cross-bus coordination.
 * RS slots and the ROB must listen to both buses every cycle.
 *
 * Requestor mapping (matches functional unit instantiation order):
 *   0  = AU0    1  = AU1    2  = AU2    3  = AU3
 *   4  = LU0    5  = LU1    6  = LU2    7  = LU3
 *   8  = FALU0  9  = FALU1  10 = FALU2  11 = FALU3
 *   12 = MA0    13 = MA1    14 = (rsvd) 15 = (rsvd)
 */

`include "modules/util.sv"

// ---------------------------------------------------------------------------
// sub_arbiter
//
// Handles 8 requestors split into two 4-slot sections.
// Everything is clocked on posedge — single always block, no multiple drivers.
//
// Each cycle:
//   1. Compute pending_now  = write_pendencies | write_requests  (combinational)
//   2. Grant the lowest pending slot in the active section, producing
//      after_grant = pending_now with that bit cleared.
//   3. Advance the round-robin counter based on after_grant so the counter
//      sees the state *after* the grant, not before.
//
// Separating pending_now from after_grant is the key correctness invariant:
// the counter advance must not re-examine the bit that was just cleared, or
// section 0 will appear non-empty to itself and the counter will never move.
// ---------------------------------------------------------------------------
module sub_arbiter (
    input  wire        clk,
    input  wire        rst,
    input  wire [7:0]  write_requests,   // one-hot request lines
    output reg         has_requests,     // asserted when a grant is issued this cycle
    output reg  [2:0]  selected          // index of the granted requestor (0–7)
);

    reg        counter;          // active section: 0 = slots[3:0], 1 = slots[7:4]
    reg [7:0]  write_pendencies;

    always @(posedge clk) begin
        if (rst) begin
            counter          <= 1'b0;
            write_pendencies <= 8'b0;
            selected         <= 3'b0;
            has_requests     <= 1'b0;
        end else begin
            begin : grant_and_advance
                // --------------------------------------------------------------
                // pending_now: full view of pending requests this cycle,
                // including anything arriving on write_requests right now.
                // --------------------------------------------------------------
                reg [7:0] pending_now;
                reg [7:0] after_grant;   // pending_now with the granted bit cleared
                reg       granted;       // did we issue a grant this cycle?

                pending_now = write_pendencies | write_requests;
                after_grant = pending_now;   // will clear one bit below
                granted     = 1'b0;

                // --------------------------------------------------------------
                // Grant — lowest index in active section wins.
                // Sections spelled out explicitly to avoid base arithmetic
                // ambiguity across tools.
                // --------------------------------------------------------------
                if (counter == 1'b0) begin
                    // Section 0: slots 0–3
                    if      (pending_now[0]) begin selected <= 3'd0; after_grant[0] = 1'b0; granted = 1'b1; end
                    else if (pending_now[1]) begin selected <= 3'd1; after_grant[1] = 1'b0; granted = 1'b1; end
                    else if (pending_now[2]) begin selected <= 3'd2; after_grant[2] = 1'b0; granted = 1'b1; end
                    else if (pending_now[3]) begin selected <= 3'd3; after_grant[3] = 1'b0; granted = 1'b1; end
                    else begin
                        selected <= 3'd0;
                        granted  = 1'b0;
                    end
                end else begin
                    // Section 1: slots 4–7
                    if      (pending_now[4]) begin selected <= 3'd4; after_grant[4] = 1'b0; granted = 1'b1; end
                    else if (pending_now[5]) begin selected <= 3'd5; after_grant[5] = 1'b0; granted = 1'b1; end
                    else if (pending_now[6]) begin selected <= 3'd6; after_grant[6] = 1'b0; granted = 1'b1; end
                    else if (pending_now[7]) begin selected <= 3'd7; after_grant[7] = 1'b0; granted = 1'b1; end
                    else begin
                        selected <= 3'd0;
                        granted  = 1'b0;
                    end
                end

                has_requests <= granted;

                // --------------------------------------------------------------
                // Commit the updated pendencies (new requests latched, granted
                // bit cleared).
                // --------------------------------------------------------------
                write_pendencies <= after_grant;

                // --------------------------------------------------------------
                // Counter advance — based on after_grant so the just-cleared
                // bit is not counted when deciding whether this section is done.
                //
                // Rule: move to the other section if the current section is now
                // empty AND the other section has work.  This means we stay on
                // the current section until it drains, giving it priority for
                // consecutive cycles — fair because new requests refill it.
                // --------------------------------------------------------------
                if (counter == 1'b0) begin
                    if (!|after_grant[3:0] && |after_grant[7:4])
                        counter <= 1'b1;
                end else begin
                    if (!|after_grant[7:4] && |after_grant[3:0])
                        counter <= 1'b0;
                end
            end
        end
    end

endmodule


// ---------------------------------------------------------------------------
// common_data_bus
//
// Top-level dual-CDB module.
//
// Inputs  [0–7]  → CDB0 (AU / LU)
// Inputs  [8–15] → CDB1 (FALU / MA)
//
// Each CDB independently broadcasts {rob_address, data} to the RS and ROB.
// Both outputs are valid in the same cycle when both sub-arbiters grant.
// ---------------------------------------------------------------------------
module common_data_bus (
    input  wire        clk,
    input  wire        rst,

    // -----------------------------------------------------------------------
    // Write request lines — one per functional unit output port
    // -----------------------------------------------------------------------
    input  wire [15:0] write_requests,

    // -----------------------------------------------------------------------
    // Data and ROB tag inputs — indexed 0–15 matching write_requests
    // -----------------------------------------------------------------------
    input  wire [31:0] data_in0,  data_in1,  data_in2,  data_in3,
                       data_in4,  data_in5,  data_in6,  data_in7,
                       data_in8,  data_in9,  data_in10, data_in11,
                       data_in12, data_in13, data_in14, data_in15,

    input  wire [4:0]  rob_adrs_in0,  rob_adrs_in1,  rob_adrs_in2,  rob_adrs_in3,
                       rob_adrs_in4,  rob_adrs_in5,  rob_adrs_in6,  rob_adrs_in7,
                       rob_adrs_in8,  rob_adrs_in9,  rob_adrs_in10, rob_adrs_in11,
                       rob_adrs_in12, rob_adrs_in13, rob_adrs_in14, rob_adrs_in15,

    // -----------------------------------------------------------------------
    // CDB0 outputs — integer side (AU0-3, LU0-3)
    // -----------------------------------------------------------------------
    output wire [7:0]  granted_request_cdb0,  // one-hot grant within [0–7]
    output wire        rob_write_cdb0,         // valid write this cycle
    output wire [4:0]  rob_address_cdb0,
    output wire [31:0] data_out_cdb0,

    // -----------------------------------------------------------------------
    // CDB1 outputs — FP / memory side (FALU0-3, MA0-1)
    // -----------------------------------------------------------------------
    output wire [7:0]  granted_request_cdb1,  // one-hot grant within [8–15]
    output wire        rob_write_cdb1,         // valid write this cycle
    output wire [4:0]  rob_address_cdb1,
    output wire [31:0] data_out_cdb1
);

    // -----------------------------------------------------------------------
    // Sub-arbiter grant indices
    // selected0 ∈ [0,7]  → indexes into inputs 0–7
    // selected1 ∈ [0,7]  → indexes into inputs 8–15  (offset applied below)
    // -----------------------------------------------------------------------
    wire [2:0] selected0;   // local index within CDB0's 8 inputs
    wire [2:0] selected1;   // local index within CDB1's 8 inputs

    // -----------------------------------------------------------------------
    // Sub-arbiter instantiation
    // -----------------------------------------------------------------------
    sub_arbiter _ABR0_ (
        .clk            (clk),
        .rst            (rst),
        .write_requests (write_requests[7:0]),
        .has_requests   (rob_write_cdb0),
        .selected       (selected0)
    );

    sub_arbiter _ABR1_ (
        .clk            (clk),
        .rst            (rst),
        .write_requests (write_requests[15:8]),
        .has_requests   (rob_write_cdb1),
        .selected       (selected1)
    );

    // -----------------------------------------------------------------------
    // Grant decode — expand 3-bit index to 8-bit one-hot
    // -----------------------------------------------------------------------
    decoder8x8bits _D0_ (selected0, granted_request_cdb0);
    decoder8x8bits _D1_ (selected1, granted_request_cdb1);

    // -----------------------------------------------------------------------
    // CDB0 data and ROB address mux — selects among inputs 0–7
    // -----------------------------------------------------------------------
    mux8xP #(.WIDTH(5)) _MUX0_ADRS_ (
        rob_adrs_in0, rob_adrs_in1, rob_adrs_in2, rob_adrs_in3,
        rob_adrs_in4, rob_adrs_in5, rob_adrs_in6, rob_adrs_in7,
        selected0,
        rob_address_cdb0
    );

    mux8xP #(.WIDTH(32)) _MUX0_DATA_ (
        data_in0, data_in1, data_in2, data_in3,
        data_in4, data_in5, data_in6, data_in7,
        selected0,
        data_out_cdb0
    );

    // -----------------------------------------------------------------------
    // CDB1 data and ROB address mux — selects among inputs 8–15
    // -----------------------------------------------------------------------
    mux8xP #(.WIDTH(5)) _MUX1_ADRS_ (
        rob_adrs_in8,  rob_adrs_in9,  rob_adrs_in10, rob_adrs_in11,
        rob_adrs_in12, rob_adrs_in13, rob_adrs_in14, rob_adrs_in15,
        selected1,
        rob_address_cdb1
    );

    mux8xP #(.WIDTH(32)) _MUX1_DATA_ (
        data_in8,  data_in9,  data_in10, data_in11,
        data_in12, data_in13, data_in14, data_in15,
        selected1,
        data_out_cdb1
    );

endmodule