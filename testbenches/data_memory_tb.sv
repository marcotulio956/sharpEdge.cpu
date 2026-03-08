// Testbench: data_memory_tb.sv — Verilator-compatible
`timescale 1ns/1ps
`include "modules/data_memory.sv"

module data_memory_tb;

    localparam DM_DATA_SZ = 32;
    localparam DM_ADRS_SZ = 8;

    integer pass_count, fail_count;
    integer i;

    reg  clk;
    reg  write0, write1;
    reg  [DM_DATA_SZ-1:0] write_address0, write_address1;
    reg  [DM_DATA_SZ-1:0] write_data0,    write_data1;
    reg  [DM_DATA_SZ-1:0] read_address0,  read_address1;
    wire [DM_DATA_SZ-1:0] data_out0, data_out1;

    initial begin clk = 1'b0; forever #5 clk = ~clk; end

    data_memory #(
        .PATH("dm_init.txt"),
        .DM_DATA_SIZE(DM_DATA_SZ),
        .DM_ADRS_SIZE(DM_ADRS_SZ)
    ) _DUT_ (
        .clk(clk),
        .write0(write0),           .write1(write1),
        .write_address0(write_address0), .write_address1(write_address1),
        .write_data0(write_data0), .write_data1(write_data1),
        .read_address0(read_address0),   .read_address1(read_address1),
        .data_out0(data_out0),     .data_out1(data_out1)
    );

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

    // Write to port0, deassert write0, then check read-back
    task automatic write_and_read0;
        input [31:0] addr;
        input [31:0] data;
        input [255:0] name;
        begin
            write0 = 1; write1 = 0;
            write_address0 = addr;
            write_data0    = data;
            read_address0  = addr;
            @(posedge clk);
            // Avoid TB/DUT race at posedge: drop write after DUT samples it.
            #1;
            write0        = 0;
            write_data0   = 32'b0;  // defensive clear; read now gates on !write0
            #1;
            check32(data, data_out0, name);
        end
    endtask

    task automatic do_reset;
        begin
            // No reset signal in the revised module
        end
    endtask

    initial begin
        pass_count = 0; fail_count = 0;
        write0 = 0; write1 = 0;
        write_address0 = 0; write_address1 = 0;
        write_data0 = 0; write_data1 = 0;
        read_address0 = 0; read_address1 = 0;

        // ----------------------------------------------------------------
        // TEST 1: Reset clears entries 0..(DM_ADRS_SZ-2)
        // NOTE: loop runs for i < DM_ADRS_SZ-1 = 7, so only 0..6 are cleared.
        // ----------------------------------------------------------------
        read_address0 = 32'd0;
        write_data0   = 32'b0;
        #1;
        check32(32'b0, data_out0, "reset_clears_addr0");

        read_address0 = 32'(DM_ADRS_SZ - 2);
        #1;
        check32(32'b0, data_out0, "reset_clears_last_loop_addr");

        // ----------------------------------------------------------------
        // TEST 2: Write then read back via port0
        // ----------------------------------------------------------------
        write_and_read0(32'd10, 32'hDEAD_BEEF, "write_DEADBEEF_read_back");

        // ----------------------------------------------------------------
        // TEST 3: Read with non-zero write_data0 while write0=0 (bug fix check)
        //   After fix: read gates on !write0, so write_data0 value is irrelevant.
        //   Expected: data_out0 = CAFE_BABE regardless of write_data0.
        // ----------------------------------------------------------------
        write_and_read0(32'd20, 32'hCAFE_BABE, "preload_addr20");

        write0        = 0;
        write_data0   = 32'hFFFF_FFFF;   // non-zero, but write0=0 so no write
        read_address0 = 32'd20;
        #1;
        if (data_out0 !== 32'hCAFE_BABE) begin
            $display("FAIL read_with_nz_wdata0 | got=0x%08h expected=0x%08h (regression)",
                     data_out0, 32'hCAFE_BABE);
            fail_count = fail_count + 1;
        end else begin
            $display("PASS read_with_nz_wdata0 | read gates on !write0 (bug fixed)");
            pass_count = pass_count + 1;
        end
        write_data0 = 32'b0;

        // ----------------------------------------------------------------
        // TEST 4: Simultaneous dual write — different addresses
        // ----------------------------------------------------------------
        write0 = 1; write1 = 1;
        write_address0 = 32'd30; write_data0 = 32'hAAAA_AAAA;
        write_address1 = 32'd40; write_data1 = 32'hBBBB_BBBB;
        @(posedge clk);
        // Avoid TB/DUT race at posedge.
        #1;
        write0 = 0; write1 = 0;
        write_data0 = 32'b0; write_data1 = 32'b0;
        read_address0 = 32'd30; read_address1 = 32'd40;
        #1;
        check32(32'hAAAA_AAAA, data_out0, "dual_write_diff_addrs_port0");
        check32(32'hBBBB_BBBB, data_out1, "dual_write_diff_addrs_port1");

        // ----------------------------------------------------------------
        // TEST 5: Simultaneous dual write — same address, write1 wins (NBA ordering)
        // ----------------------------------------------------------------
        write0 = 1; write1 = 1;
        write_address0 = 32'd50; write_data0 = 32'h1111_1111;
        write_address1 = 32'd50; write_data1 = 32'h2222_2222;
        @(posedge clk);
        // Avoid TB/DUT race at posedge.
        #1;
        write0 = 0; write1 = 0;
        write_data0 = 32'b0; write_data1 = 32'b0;
        read_address0 = 32'd50;
        #1;
        $display("INFO dual_write_same_addr_result: got=0x%08h (write1=0x2222_2222 expected to win by NBA ordering)",
                 data_out0);
        if (data_out0 === 32'h2222_2222) begin
            $display("PASS dual_write_same_addr_write1_wins");
            pass_count = pass_count + 1;
        end else begin
            $display("FAIL dual_write_same_addr_write1_wins | got=0x%08h", data_out0);
            fail_count = fail_count + 1;
        end

        // ----------------------------------------------------------------
        // TEST 6: Write port isolation
        // ----------------------------------------------------------------
        write_and_read0(32'd60, 32'hCCCC_CCCC, "port0_write_addr60");
        write1 = 1;
        write_address1 = 32'd70; write_data1 = 32'hDDDD_DDDD;
        @(posedge clk);
        // Avoid TB/DUT race at posedge.
        #1;
        write1 = 0; write_data1 = 32'b0;
        read_address0 = 32'd60;
        write_data0   = 32'b0;
        #1;
        check32(32'hCCCC_CCCC, data_out0, "port1_write_does_not_affect_port0_read");

        $display("\n--- data_memory_tb: PASS=%0d FAIL=%0d ---\n",
                 pass_count, fail_count);
        $finish;
    end
endmodule
