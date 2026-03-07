module data_memory#(
		parameter PATH, DM_DATA_SIZE, DM_ADRS_SIZE
	)(
		input clk, rst,
		input write0, write1,
		input [DM_DATA_SIZE-1:0] write_address0, write_address1, 
		input [DM_DATA_SIZE-1:0] write_data0, write_data1,
		input [DM_DATA_SIZE-1:0] read_address0, read_address1, 
		output [DM_DATA_SIZE-1:0] data_out0, data_out1
);
	integer i;
	reg [(IM_INST_SIZE-1):0] data_mem [0:(DM_ADRS_SIZE**2)-1];
	initial begin
		#0
		$readmemb(PATH, data_mem); // memory file
		$display("data:\n", data_mem);
		for(i=0; i<32; i=i+1)begin
			$display("\t[%d] %b",i,data_mem[i]);
		end
	end
	always(posedge clk)begin
		if(rst==1'b1)begin
			for(i=0;i<DM_ADRS_SIZE-1;i=i+1'b1)begin
				data_mem[i] <= 32'b0;
			end
		end else if(rst==1'b0)begin
			if(write0==1'b1)
				data_mem[write_address0] <= write_data0;
			if(write1==1'b1)
				data_mem[write_address1] <= write_data1;
		end
	end
	assign data_out0 = write_data0 == 0 ? data_mem[read_address0]:32'b0;
	assign data_out1 = write_data1 == 0 ? data_mem[read_address1]:32'b0;
endmodule