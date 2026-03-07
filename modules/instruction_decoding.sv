module instruction_decoding(
	input [15:0] inst, 
	output [3:0] opc, output [2:0] opf, 
	output [3:0] rega, regb, regc,
	output [5:0] imm6, imm6mem, 
	output [8:0] imm9,
	output [11:0] imm12
);
	assign opc = inst[15:12];
	assign opf = inst[11:9];
	assign rega = inst[8:6];
	assign regb = inst[5:3];
	assign regc = inst[2:0];
	assign imm6 = inst[5:0]; // ial, ics
	assign imm6mem = {inst[8:6], inst[2:0]}; //sw, lw, swc, llw
	assign imm9 = {inst[11:9], inst[5:0]}; // br, bzl
	assign imm12 = inst[11:0]; // j, li
endmodule