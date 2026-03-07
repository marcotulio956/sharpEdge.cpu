/*
add wave -position end  sim:/branch_predictor/state
add wave -position end  sim:/branch_predictor/rst
add wave -position end  sim:/branch_predictor/prediction
add wave -position end  sim:/branch_predictor/clk
force -freeze sim:/branch_predictor/clk 1 0, 0 {12 ps} -r 25
force -freeze sim:/branch_predictor/rst 1 0
wave create -driver freeze -pattern counter -startvalue 0 -endvalue 1 -type Range -direction Up -period 400ps -step 1 -repeat forever -starttime 0ps -endtime 1000ps sim:/branch_predictor/branch
wave create -driver freeze -pattern counter -startvalue 0 -endvalue 1 -type Range -direction Up -period 200ps -step 1 -repeat forever -starttime 0ps -endtime 1000ps sim:/branch_predictor/branch_taken

force -freeze sim:/branch_predictor/rst 0 0

*/

module branch_predictor(input clk, rst, branch, branch_taken, output prediction);
	parameter STRONG_TAKE = 2'b11, WEAK_TAKE = 2'b10, STRONG_NTAKE = 2'b00, WEAK_NTAKE = 2'b01;

	reg [1:0] state;

	always @(clk) begin // checks every edge  
		if (rst == 1'b1) begin
			state <= WEAK_TAKE;			
		end
		else if (branch == 1'b1) begin
			case({branch_taken})
				2'b0: begin
					case(state)
						STRONG_TAKE:begin
							state <= WEAK_TAKE;
						end
						WEAK_TAKE:begin
							state <= WEAK_NTAKE;
						end
						WEAK_NTAKE:begin
							state <= STRONG_NTAKE;
						end
						STRONG_NTAKE:begin
							state <= STRONG_NTAKE;
						end
					endcase
				end
				2'b1: begin
					case(state)
						STRONG_TAKE:begin
							state <= STRONG_TAKE;
						end
						WEAK_TAKE:begin
							state <= STRONG_TAKE;
						end
						WEAK_NTAKE:begin
							state <= WEAK_TAKE;
						end
						STRONG_NTAKE:begin
							state <= WEAK_NTAKE;
						end
					endcase
				end
				default:
					state <= WEAK_TAKE;
			endcase
		end
	end
	assign prediction = state[1];
endmodule