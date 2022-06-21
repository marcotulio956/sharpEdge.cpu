/*
Arbiter, prioritizes in range(0=higher, 15=lower)
*/
/*
force -freeze sim:/arbiter/clk 1 0, 0 {50 ps} -r 100
force -freeze sim:/arbiter/write_requests 0 0
force -freeze sim:/arbiter/rst 1 0

force -freeze sim:/arbiter/write_requests 1011001101001010 0
force -freeze sim:/arbiter/rst 0 0

force -freeze sim:/arbiter/write_requests 0 0

*/
module arbiter(input clk, rst, input [15:0] write_requests, output has_requests, output reg [3:0] selected);
	integer i;

	reg [1:0] counter;
	reg [15:0] write_pendencies;

	wire [1:0] cp1 = counter + 1'b1;
	wire [1:0] cp2 = counter + 2'b10;
	wire [1:0] cp3 = counter + 2'b11;

	wire [3:0] pool;
	
	assign has_requests = |pool[0] | |pool[1] | |pool[2] | |pool[3];
 	assign pool[3] = |write_pendencies[15:12];
	assign pool[2] = |write_pendencies[11:8];
	assign pool[1] = |write_pendencies[7:4];
	assign pool[0] = |write_pendencies[3:0];

	always@(posedge clk)begin
		if ( rst == 1'b1 )begin
			counter <= 2'b0;
			write_pendencies <= 16'b0;
		end else begin
			if (pool[cp1] == 1'b1)begin
				counter <= cp1;
			end	else if (pool[cp2] == 1'b1)begin
				counter <= cp2;
			end else if (pool[cp3] == 1'b1)begin
				counter <= cp3;
			end
		end
		if(|write_requests)begin
			write_pendencies <= write_pendencies | write_requests;
		end
	end
	always@(negedge clk)begin
		for(i=0; i<4; i=i+1)begin
			if (i==counter)begin
				if(write_pendencies[i*4] == 1'b1) begin
					selected <= i*4;
					write_pendencies[i*4] <= 0;
				end else if (write_pendencies[i*4 + 1] == 1'b1) begin
					selected <= i*4 + 1;
					write_pendencies[i*4 + 1] <= 0;
				end else if (write_pendencies[i*4 + 2] == 1'b1) begin
					selected <= i*4 + 2;
					write_pendencies[i*4 + 2] <= 0;
				end else if (write_pendencies[i*4 + 3] == 1'b1) begin
					selected <= i*4 + 3;
					write_pendencies[i*4 + 3] <= 0;
				end else begin
					selected <= 0;
				end
			end
		end
	end
endmodule

module common_data_bus(
		input clk, rst, 
		input [15:0] write_requests,
		input [31:0] data_in0, 
		data_in1, data_in2, data_in3, 
		data_in4, data_in5, data_in6,
		data_in7, data_in8, data_in9, 
		data_in10, data_in11, data_in12, 
		data_in13, data_in14, data_in15,
		input [4:0] rob_adrs_in0,
		rob_adrs_in1, rob_adrs_in2, rob_adrs_in3,
		rob_adrs_in4, rob_adrs_in5, rob_adrs_in6,
		rob_adrs_in7, rob_adrs_in8, rob_adrs_in9,
		rob_adrs_in10, rob_adrs_in11, rob_adrs_in12,
		rob_adrs_in13, rob_adrs_in14, rob_adrs_in15,
		//--
		output [15:0] granted_request,
		output rob_write, 
		output [4:0] rob_address_out, output [31:0] data_out
);	
	wire [3:0] selected;

	arbiter _ABR_(clk, rst, write_requests, rob_write, selected);

	decoder16x16bits _D1_ (selected, granted_request);

	mux16xP #(.WIDTH(5)) _MUX1_ (
		rob_adrs_in0,
		rob_adrs_in1, rob_adrs_in2, rob_adrs_in3,
		rob_adrs_in4, rob_adrs_in5, rob_adrs_in6,
		rob_adrs_in7, rob_adrs_in8, rob_adrs_in9,
		rob_adrs_in10, rob_adrs_in11, rob_adrs_in12,
		rob_adrs_in13, rob_adrs_in14, rob_adrs_in15,
		selected,
		rob_address_out
	);
	mux16xP #(.WIDTH(32)) _MUX2_ (
		data_in0, 
		data_in1, data_in2, data_in3, 
		data_in4, data_in5, data_in6,
		data_in7, data_in8, data_in9, 
		data_in10, data_in11, data_in12, 
		data_in13, data_in14, data_in15,
		selected,
		data_out
	);
endmodule