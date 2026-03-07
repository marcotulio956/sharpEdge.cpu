module data_memory#(
		// BUG FIX: PATH must be `string` type for $readmemb to receive a literal path in Verilator
		parameter string PATH = "",
		parameter DM_DATA_SIZE = 32,
		parameter DM_ADRS_SIZE = 8
	)(
		input clk,
		input write0, write1,
		input [DM_DATA_SIZE-1:0] write_address0, write_address1, 
		input [DM_DATA_SIZE-1:0] write_data0, write_data1,
		input [DM_DATA_SIZE-1:0] read_address0, read_address1, 
		output [DM_DATA_SIZE-1:0] data_out0, data_out1
);
	integer i;
	// BUG FIX: IM_INST_SIZE was undefined; changed to DM_DATA_SIZE (the module's own parameter)
	reg [(DM_DATA_SIZE-1):0] data_mem [0:(2**DM_ADRS_SIZE)-1];
	// BUG FIX: removed $display with unpacked array arg (invalid in Verilator) and #0 delay
	// BUG FIX: $display/$initial blocks are simulation-only; kept only the required $readmemb
	initial $readmemb(PATH, data_mem);
	always @(posedge clk)begin
		// resetting a dram is not typical
		// if(rst==1'b1)begin
		// 	for(i=0;i<2**DM_ADRS_SIZE;i=i+1'b1)begin
		// 		data_mem[i] <= 32'b0;
		// 	end
		// end else 
		if(write0==1'b1)
			data_mem[write_address0] <= write_data0;
		if(write1==1'b1)
			data_mem[write_address1] <= write_data1;
	end
	assign data_out0 = !write0 ? data_mem[read_address0] : 32'b0;
	assign data_out1 = !write1 ? data_mem[read_address1] : 32'b0;
endmodule