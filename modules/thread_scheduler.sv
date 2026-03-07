/*
force -freeze sim:/thread_scheduler/clk 1 0, 0 {50 ps} -r 100
force -freeze sim:/thread_scheduler/rst 1 0

force -freeze sim:/thread_scheduler/rst 0 0
*/
module thread_scheduler(input clk, rst, output reg interleaving);
	always@(posedge clk)begin
		if ( rst == 1'b1 )
			interleaving <= 1'b0;
	end
	always@(negedge clk)begin // fine grained multithreading for now, basic
		interleaving <= interleaving == 0 ? 1 : 0;
	end
endmodule