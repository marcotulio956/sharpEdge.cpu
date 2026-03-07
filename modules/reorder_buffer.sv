/*
wave create -driver freeze -pattern clock -initialvalue 0 -period 10ps -dutycycle 50 -starttime 0ps -endtime 10000ps sim:/reorder_buffer/clk
wave create -driver freeze -pattern clock -initialvalue 1 -period 10ps -dutycycle 50 -starttime 0ps -endtime 10ps sim:/reorder_buffer/rst
wave create -driver freeze -pattern clock -initialvalue 1 -period 100ps -dutycycle 85 -starttime 0ps -endtime 10000ps sim:/reorder_buffer/write_entry
wave create -driver freeze -pattern random -initialvalue zzzz -period 10ps -random_type Uniform -seed 5 -range 3 0 -starttime 0ps -endtime 10000ps sim:/reorder_buffer/entry_opc
wave create -driver freeze -pattern random -initialvalue zzzz -period 10ps -random_type Uniform -seed 6 -range 15 0 -starttime 0ps -endtime 10000ps sim:/reorder_buffer/entry_destination
wave create -driver freeze -pattern random -initialvalue zzzz -period 10ps -random_type Uniform -seed 8 -range 15 0 -starttime 0ps -endtime 10000ps sim:/reorder_buffer/entry_pc
*/

module reorder_buffer#(
		parameter ROB_ADRS_SIZE=5, ROB_LINES=(2**ROB_ADRS_SIZE)-1, V_SIZE=32, IM_ADRS_SIZE=16, OPC_SIZE=4
	)(
		input clk, rst,
		
		input write_entry,
		input [OPC_SIZE-1:0] entry_opc,
		input [IM_ADRS_SIZE-1:0] entry_destination,
		input [IM_ADRS_SIZE-1:0] entry_pc,

		input cdb_write,
		input [V_SIZE-1:0] cdb_snooped_value,
		input [ROB_ADRS_SIZE-1:0] cdb_rob_adrs,
		input [2:0] cdb_exception,
		//--		
		output created_entry_bool, // it goes to the register status
		output [ROB_ADRS_SIZE-1:0] entry,

		output ready1_instruction_bool, 
		output [2:0] ready1_exception,
		output [OPC_SIZE-1:0] ready1_opc,// tell to where the value goes: to mem, pc or rf
		output [IM_ADRS_SIZE-1:0] ready1_destination,
		output [IM_ADRS_SIZE-1:0] ready1_pc,
		output [V_SIZE-1:0] ready1_value,

		output ready2_instruction_bool,
		output [2:0] ready2_exception,
		output [OPC_SIZE-1:0] ready2_opc,// tell to where the value goes: to mem, pc or rf
		output [IM_ADRS_SIZE-1:0] ready2_destination,
		output [IM_ADRS_SIZE-1:0] ready2_pc,
		output [V_SIZE-1:0] ready2_value,
			
		output full
);
	integer i;

	// Stack Structure
	wire [ROB_ADRS_SIZE-1:0] poshead; 
	reg [ROB_ADRS_SIZE-1:0] head, tail;
	
	//Rob fields
	reg [ROB_LINES-1:0] ready_to_commit;//only if value was writen
	reg [IM_ADRS_SIZE-1:0] pc_state [0:ROB_LINES-1];// documents where there was an exception
	reg [2:0] exception [0:ROB_LINES-1]; 
	reg [OPC_SIZE-1:0] opc [0:ROB_LINES-1]; // defines value destination 
	reg [IM_ADRS_SIZE-1:0] destination [0:ROB_LINES-1]; //selects a register destination, data mem or inst mem address.
	reg [V_SIZE-1:0] value [0:ROB_LINES-1];//can hold a value for memory, rf, or pc.

	assign poshead = head + 1'b1;

	assign created_entry_bool = ~full & write_entry;
	assign entry = tail;

	assign ready1_instruction_bool = ~(ready_to_commit[head] ^ 1'b1);
	assign ready2_instruction_bool = ready1_instruction_bool & ~(ready_to_commit[poshead] ^ 1'b1);

	assign ready1_opc = opc[head];
	assign ready1_exception = exception[head];
	assign ready1_destination = destination[head];
	assign ready1_pc = pc_state[head];
	assign ready1_value = value[head];
	assign ready2_opc = opc[poshead];
	assign ready2_exception = exception[poshead];
	assign ready2_destination = destination[poshead];
	assign ready2_pc = pc_state[poshead];
	assign ready2_value = value[poshead];
	assign full = (head-1'b1) == tail ? 1'b1:1'b0;

	always@(clk)begin // allocates new entry every half cc, so does the RS
		if (rst == 1'b1)begin// a reset will flush only after ROB commit a mispredicted inst., whose flush decision happens at just one edge 
			head <= 0; tail <= 0;//important
			ready_to_commit <= 0;//important
			for(i=0; i<ROB_LINES; i=i+1)begin
				pc_state[i] <= 0;
				opc[i] <= 0;
				exception[i] <= 0;//important
				destination[i] <= 0;
				pc_state[i] <= 0;
				value[i] <= 0;
			end
		end
		else if(created_entry_bool==1'b1)begin
			ready_to_commit[tail] <= 0;
			pc_state[tail] <= entry_pc; 
			opc[tail] <= entry_opc;
			destination[tail] <= entry_destination;

			tail <= tail + 1'b1;
		end
	end
	always @(posedge clk) begin
		if(rst == 0)begin
			if(cdb_write==1)begin
				value[cdb_rob_adrs] <= cdb_snooped_value;
				ready_to_commit[cdb_rob_adrs] <= 1'b1;
				exception[cdb_rob_adrs] <= cdb_exception;
			end
			// up to two instruction to commit
			if(ready1_instruction_bool == 1'b1 && ready2_instruction_bool == 1'b1)begin
				ready_to_commit[head] <= 0;
				ready_to_commit[poshead] <= 0;
				head <= head + 2'b10;
			end else if(ready1_instruction_bool == 1'b1) begin
				ready_to_commit[head] <= 0;
				head <= head + 1'b1;
			end
		end
	end
endmodule
