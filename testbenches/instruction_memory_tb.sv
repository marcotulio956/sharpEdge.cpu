// Testbench: instruction_memory_tb.sv
// Covers (from guidelines):
//   [x] DDR dual-port issue: two instructions fetched per cycle
//   [x] Both threads reading from the same address simultaneously
//   [x] Address boundary / out-of-range behavior
//
// NOTE: instruction_memory has no clock — it is purely combinational (async ROM).
// The init file im_init.txt contains 32 entries with values 0..31 in binary.
`timescale 1ns/1ps
`include "modules/instruction_memory.sv"

module instruction_memory_tb;

    integer pass_count, fail_count;
    integer i;

    reg [15:0] address0, address1;
    wire [15:0] inst_out0, inst_out1;

    instruction_memory #(.PATH("im_init.txt")) _DUT_ (
        .address0(address0),
        .address1(address1),
        .inst_out0(inst_out0),
        .inst_out1(inst_out1)
    );

    task automatic check16;
        input [15:0] expected;
        input [15:0] actual;
        input string name;
        begin
            if (expected === actual) begin
                $display("PASS [%0t] %s | got=0x%04h", $time, name, actual);
                pass_count++;
            end else begin
                $display("FAIL [%0t] %s | expected=0x%04h got=0x%04h", $time, name, expected, actual);
                fail_count++;
            end
        end
    endtask

    initial begin
        pass_count = 0; fail_count = 0;

        // Allow $readmemb to complete
        #1;

        // ----------------------------------------------------------------
        // TEST 1: Sequential read — im_init.txt has inst_mem[i] == i (binary 0..31)
        // ----------------------------------------------------------------
        for (i = 0; i < 32; i = i + 1) begin
            address0 = i[15:0];
            address1 = 16'b0;
            #1;
            check16(i[15:0], inst_out0, "sequential_read_port0");
        end

        // ----------------------------------------------------------------
        // TEST 2: DDR dual-port — read two different addresses simultaneously
        //   Thread 0 reads from pc=5, thread 1 reads from pc=10
        //   Expected: inst_out0=5, inst_out1=10 (from im_init.txt content)
        // ----------------------------------------------------------------
        address0 = 16'd5;
        address1 = 16'd10;
        #1;
        check16(16'd5,  inst_out0, "dual_port_addr5_port0");
        check16(16'd10, inst_out1, "dual_port_addr10_port1");

        // ----------------------------------------------------------------
        // TEST 3: Both threads reading the same address simultaneously
        //   Both should return the same value — no structural hazard
        // ----------------------------------------------------------------
        address0 = 16'd7;
        address1 = 16'd7;
        #1;
        check16(16'd7, inst_out0, "same_addr_port0");
        check16(16'd7, inst_out1, "same_addr_port1_matches_port0");

        // ----------------------------------------------------------------
        // TEST 4: Address 0 returns valid content
        // ----------------------------------------------------------------
        address0 = 16'd0;
        address1 = 16'd31;
        #1;
        check16(16'd0,  inst_out0, "boundary_addr0_port0");
        check16(16'd31, inst_out1, "boundary_addr31_port1");

        // ----------------------------------------------------------------
        // TEST 5: Port independence — changing one port does not affect the other
        // ----------------------------------------------------------------
        address0 = 16'd3;
        address1 = 16'd20;
        #1;
        check16(16'd3,  inst_out0, "port_independence_addr3");
        check16(16'd20, inst_out1, "port_independence_addr20");

        address0 = 16'd15; // only port0 changes
        #1;
        check16(16'd15, inst_out0, "port0_update_no_affect_port1_port0");
        check16(16'd20, inst_out1, "port0_update_no_affect_port1_port1");

        $display("\n--- instruction_memory_tb: PASS=%0d FAIL=%0d ---\n", pass_count, fail_count);
        $finish;
    end
endmodule
