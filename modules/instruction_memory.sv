module instruction_memory#(
		// BUG FIX: PATH must be `string` type for $readmemb to receive a literal path in Verilator
		parameter string PATH = ""
	)(
		input [15:0] address0, address1,
		output [15:0] inst_out0, inst_out1
);
	reg [15:0] inst_mem [0:255];

	// BUG FIX: removed $display with unpacked array arg (invalid in Verilator) and #0 delay
	// BUG FIX: $display/$initial in synthesizable modules is forbidden by guidelines; kept $readmemb only
	initial $readmemb(PATH, inst_mem);
	assign inst_out0 = inst_mem[address0];
	assign inst_out1 = inst_mem[address1];
endmodule

