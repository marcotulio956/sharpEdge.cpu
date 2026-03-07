/*
For testbenches, declare:

clock_generator #(
	.FREQ(5), .START_CLK(1'b0)
) _CG_(
	.en(en), .rst(rst), .clk(gen_clk)
);

And:

initial begin
	en <= 1'b1;
	rst <= 1'b0;
	
	#SIM_TIME;
	en <= 1'b0;
end

Or:

clock_generator #(.FREQ(5), .START_CLK(1'b0)) _CG_(1'b1, 1'b0, clk, cc);

*/
module clock_generator #(
		parameter FREQ, START_CLK //(starting edge)
	)(
		input en, rst, output reg clk, output reg [31:0] cc
);
	initial begin
		clk <= START_CLK;
		cc <= 0;
	end
	always@(*) begin
		if(rst==1'b1) begin
			clk <= START_CLK;
		end
		else if (en==1'b1) begin
			cc <= cc+1;
			#(FREQ) clk <= ~clk;
		end
	end
endmodule
