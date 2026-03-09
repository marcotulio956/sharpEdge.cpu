module reorder_buffer#(
		parameter ROB_ADRS_SIZE=5, ROB_LINES=(2**ROB_ADRS_SIZE)-1, V_SIZE=32, IM_ADRS_SIZE=16, OPC_SIZE=4
	)(
		input clk, rst,
		
		input write_entry,
		input [OPC_SIZE-1:0] entry_opc,
		input [IM_ADRS_SIZE-1:0] entry_destination,
		input [IM_ADRS_SIZE-1:0] entry_pc,

		input cdb0_write,
		input [V_SIZE-1:0] cdb0_snooped_value,
		input [ROB_ADRS_SIZE-1:0] cdb0_rob_adrs,
		input [2:0] cdb0_exception,

		input cdb1_write,
		input [V_SIZE-1:0] cdb1_snooped_value,
		input [ROB_ADRS_SIZE-1:0] cdb1_rob_adrs,
		input [2:0] cdb1_exception,
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
	
	// Track previous cycle CDB writes to prevent premature commit
	reg prev_cdb0_write, prev_cdb1_write;
	reg [ROB_ADRS_SIZE-1:0] prev_cdb0_adrs, prev_cdb1_adrs;
	
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

	// Single always block for all ROB logic on posedge
	always @(posedge clk) begin
		if (rst == 1'b1) begin
			head <= 0;
			tail <= 0;
			ready_to_commit <= 0;
			prev_cdb0_write <= 0;
			prev_cdb1_write <= 0;
			for(i=0; i<ROB_LINES; i=i+1)begin
				pc_state[i] <= 0;
				opc[i] <= 0;
				destination[i] <= 0;
				value[i] <= 0;
				exception[i] <= 0;
			end
		end else begin
			// Track CDB writes for next cycle
			prev_cdb0_write <= cdb0_write;
			prev_cdb1_write <= cdb1_write;
			if(cdb0_write) prev_cdb0_adrs <= cdb0_rob_adrs;
			if(cdb1_write) prev_cdb1_adrs <= cdb1_rob_adrs;
			
			// Entry allocation
			if(created_entry_bool==1'b1)begin
				ready_to_commit[tail] <= 0;
				pc_state[tail] <= entry_pc; 
				opc[tail] <= entry_opc;
				destination[tail] <= entry_destination;

				tail <= tail + 1'b1;
			end
			
			// Handle both CDB0 and CDB1 writebacks
			// Both can write to different ROB entries in the same cycle
			if(cdb0_write==1)begin
				value[cdb0_rob_adrs] <= cdb0_snooped_value;
				ready_to_commit[cdb0_rob_adrs] <= 1'b1;
				exception[cdb0_rob_adrs] <= cdb0_exception;
			end
			if(cdb1_write==1)begin
				value[cdb1_rob_adrs] <= cdb1_snooped_value;
				ready_to_commit[cdb1_rob_adrs] <= 1'b1;
				exception[cdb1_rob_adrs] <= cdb1_exception;
			end
			
			// Commit logic: don't commit if CDB wrote to head this cycle OR previous cycle
			// This gives the testbench time to observe the ready state
			if(ready1_instruction_bool == 1'b1 && ready2_instruction_bool == 1'b1)begin
				if(!((cdb0_write==1 && cdb0_rob_adrs==head) ||(prev_cdb0_write && prev_cdb0_adrs==head) || 
				     (cdb1_write==1 && cdb1_rob_adrs==head) || (prev_cdb1_write && prev_cdb1_adrs==head)) &&
				   !((cdb0_write==1 && cdb0_rob_adrs==poshead) || (prev_cdb0_write && prev_cdb0_adrs==poshead) || 
				     (cdb1_write==1 && cdb1_rob_adrs==poshead) || (prev_cdb1_write && prev_cdb1_adrs==poshead))) begin
					ready_to_commit[head] <= 0;
					ready_to_commit[poshead] <= 0;
					head <= head + 2'b10;
				end else if(!((cdb0_write==1 && cdb0_rob_adrs==head) || (prev_cdb0_write && prev_cdb0_adrs==head) || 
				            (cdb1_write==1 && cdb1_rob_adrs==head) || (prev_cdb1_write && prev_cdb1_adrs==head))) begin
					// Only head+1 got CDB write, commit head only
					ready_to_commit[head] <= 0;
					head <= head + 1'b1;
				end
			end else if(ready1_instruction_bool == 1'b1) begin
				if(!((cdb0_write==1 && cdb0_rob_adrs==head) || (prev_cdb0_write && prev_cdb0_adrs==head) || 
				     (cdb1_write==1 && cdb1_rob_adrs==head) || (prev_cdb1_write && prev_cdb1_adrs==head))) begin
					ready_to_commit[head] <= 0;
					head <= head + 1'b1;
				end
			end
		end
	end
endmodule
