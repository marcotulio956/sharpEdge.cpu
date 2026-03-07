module instruction_memory#(
		parameter PATH
	)(
		input [15:0] address0, address1,
		output [15:0] inst_out0, inst_out1
);
	integer i;
	
	reg [15:0] inst_mem [0:255];

	initial begin
		#0
		$readmemb(PATH, inst_mem); // memory file
		$display("instructions:\n", inst_mem);
		for(i=0; i<32; i=i+1)begin
			$display("\t[%d] %b",i,inst_mem[i]);
		end
	end
	assign inst_out0 = inst_mem[address0];
	assign inst_out1 = inst_mem[address1];
endmodule

