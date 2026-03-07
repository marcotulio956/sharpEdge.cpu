module mux2xP #(
		parameter WIDTH
	)(
	input [WIDTH-1:0] in0, in1,
	input sel, 
	output reg [WIDTH-1:0] out
);	
	always@(*) begin
		case(sel)
			1'b0: out = in0;
			1'b1: out = in1;
		endcase
	end
endmodule
module mux4xP #(
		parameter WIDTH
	)(
	input [WIDTH-1:0] in0, in1, in2, in3,
	input [1:0] sel, 
	output reg [WIDTH-1:0] out
);	
	always@(*) begin
		case(sel)
			2'b00: out = in0;
			2'b01: out = in1;
			2'b10: out = in2;
			2'b11: out = in3;
		endcase
	end
endmodule
module mux8xP #(
		parameter WIDTH
	)(
	input [WIDTH-1:0] in0, in1, in2, in3, in4, in5, in6, in7,
	input [2:0] sel, 
	output reg [WIDTH-1:0] out
);	
	always@(*) begin
		case(sel)
			3'b000: out = in0;
			3'b001: out = in1;
			3'b010: out = in2;
			3'b011: out = in3;
			3'b100: out = in4;
			3'b101: out = in5;
			3'b110: out = in6;
			3'b111: out = in7;
		endcase
	end
endmodule
module mux16xP #(
		parameter WIDTH
	)(
	input [WIDTH-1:0] in0, in1, in2, in3, in4, in5, in6, in7,
	in8, in9, in10, in11, in12, in13, in14, in15,
	input [3:0] sel, 
	output reg [WIDTH-1:0] out
);	
	always@(*) begin
		case(sel)
			4'b0000: out = in0;
			4'b0001: out = in1;
			4'b0010: out = in2;
			4'b0011: out = in3;
			4'b0100: out = in4;
			4'b0101: out = in5;
			4'b0110: out = in6;
			4'b0111: out = in7;
			4'b1000: out = in8;
			4'b1001: out = in9;
			4'b1010: out = in10;
			4'b1011: out = in11;
			4'b1100: out = in12;
			4'b1101: out = in13;
			4'b1110: out = in14;
			4'b1111: out = in15;
		endcase
	end
endmodule
module decoder16x16bits(input [3:0] sel, output reg [15:0] out);
	always@(*)begin
		case(sel)
			4'b0000: out = 16'b0000000000000001;
			4'b0001: out = 16'b0000000000000010;
			4'b0010: out = 16'b0000000000000100;
			4'b0011: out = 16'b0000000000001000;
			4'b0100: out = 16'b0000000000010000;
			4'b0101: out = 16'b0000000000100000;
			4'b0110: out = 16'b0000000001000000;
			4'b0111: out = 16'b0000000010000000;
			4'b1000: out = 16'b0000000100000000;
			4'b1001: out = 16'b0000001000000000;
			4'b1010: out = 16'b0000010000000000;
			4'b1011: out = 16'b0000100000000000;
			4'b1100: out = 16'b0001000000000000;
			4'b1101: out = 16'b0010000000000000;
			4'b1110: out = 16'b0100000000000000;
			4'b1111: out = 16'b1000000000000000;
		endcase
	end	
endmodule
