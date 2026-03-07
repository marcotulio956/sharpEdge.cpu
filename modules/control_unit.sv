module control_unit(
	input rst, input thread_sel, input [3:0] opc, input [3:0] rega, regb, regc,
	output reg sel_rf_read1_reg, sel_rf_read2_reg,
	output reg sel_rs_qj_req, sel_rs_qk_req,
	output reg sel_rs_vj, output reg [1:0] sel_rs_vk,
	output reg [1:0] sel_rob_destination, output [31:0] bool_reg_renamed, output halt
);
	// tells if destination register was renamed
	reg [31:0] bool_reg_renamed;
	// tells which entry in ROB points to the destination register 
	assign halt = opc == HALT ? 1'b1:1'b0;

	localparam AL = 4'b0000, CS = 4'b0001;
	localparam IAL = 4'b0010, ICS = 4'b0011;
	localparam SW = 4'b0100, LW = 4'b0101;
	localparam BR = 4'b0110, BZL = 4'b0111;
	localparam J = 4'b1000;
	localparam LI = 4'b1001;
	localparam SWC = 4'b1010, LLW = 4'b1011;
	localparam FPAL = 4'b1100;
	localparam HALT = 4'b1101;

	always @(rst) begin
		if (rst==1'b1) begin
			bool_reg_renamed <= 32'b0;
		end
	end

	always @(*) begin // SELECTION CONTROL 
		case(opc)//PLA
			AL,CS,FPAL:begin
				sel_rf_read1_reg <= 1'b0;//regb
				sel_rf_read2_reg <= 1'b0;//regc

				sel_rs_qj_req = bool_reg_renamed[regb];
				sel_rs_qk_req = bool_reg_renamed[regc];

				if(bool_reg_renamed[regb]==1'b1)
					sel_rs_vj <= 1'b1;//rob
				else begin
					sel_rs_vj <= 1'b0;//rf
				end
				if(bool_reg_renamed[regc]==1'b1)
					sel_rs_vk <= 3'b001;//rob
				else begin
					sel_rs_vk <= 3'b000;//rf
				end

				sel_rob_destination <= 1'b0;//rega
				bool_reg_renamed[{thread_sel,rega}] <= 1'b1;
			end
			IAL, ICS:begin
				sel_rf_read1_reg <= 1'b1;//rega
				sel_rf_read2_reg <= 1'b0;//dead

				sel_rs_qj_req <= bool_reg_renamed[rega];
				sel_rs_qk_req <= 1'b0;
				if(bool_reg_renamed[rega]==1'b1)
					sel_rs_vj <= 1'b1;//rob
				else begin
					sel_rs_vj <= 1'b0;//rf
				end
				sel_rs_vk <= 3'b010;//imm6

				sel_rob_destination <= 1'b0;//rega
				bool_reg_renamed[{thread_sel,rega}] <= 1'b1;
			end
			SW:begin
				sel_rf_read1_reg <= 1'b1;//rega
				sel_rf_read2_reg <= 1'b0;//dead

				sel_rs_qj_req <= bool_reg_renamed[rega];
				sel_rs_qk_req <= 0;
				if(bool_reg_renamed[rega]==1'b1)
					sel_rs_vj <= 1'b1;//rob
				else begin
					sel_rs_vj <= 1'b0;//rf
				end
				sel_rs_vk <= 3'b011;//imm6mem
				sel_rob_destination <= 1'b1;//regb
			end
			LW:begin
				sel_rf_read1_reg <= 1'b1;//rega
				sel_rf_read2_reg <= 1'b0;//dead

				sel_rs_qj_req <= bool_reg_renamed[rega];
				sel_rs_qk_req <= 0;
				if(bool_reg_renamed[rega]==1'b1)
					sel_rs_vj <= 1'b1;//rob
				else begin
					sel_rs_vj <= 1'b0;//rf
				end
				sel_rs_vk <= 3'b011;//imm6mem
				sel_rob_destination <= 2'b10;//addressAdder
				bool_reg_renamed[{thread_sel,rega}] <= 1'b1;
			end
			BR:begin
				sel_rf_read1_reg <= 1'b1; // rega
				sel_rf_read2_reg <= 1'b0; //dead
				sel_rs_qj_req <= bool_reg_renamed[rega];
				sel_rs_qk_req <= 0;
				if(bool_reg_renamed[rega]==1'b1)
					sel_rs_vj <= 1'b1;//rob
				else begin
					sel_rs_vj <= 1'b0;//rf
				end
				sel_rs_vk <= 3'b100; //imm9
				sel_rob_destination <= 2'b10;//addressAdder 
			end
			BZL:begin
				sel_rf_read1_reg <= 1'b1; // rega
				sel_rf_read2_reg <= 1'b0; // dead
				sel_rs_qj_req <= bool_reg_renamed[rega];
				sel_rs_qk_req <= 0;
				if(bool_reg_renamed[rega]==1'b1)
					sel_rs_vj <= 1'b1;//rob
				else begin
					sel_rs_vj <= 1'b0;//rf
				end
				sel_rs_vk <= 3'b110; //zero
				sel_rob_destination <= 2'b10;
				bool_reg_renamed[{thread_sel,4'b1111}] <= 1'b1; // link register is renamed
			end
			J:begin
				// all dead
				sel_rf_read1_reg <= 1'b0;
				sel_rf_read2_reg <= 1'b0;
				sel_rs_qj_req <= 1'b0;
				sel_rs_qk_req <= 1'b0;
				sel_rs_vj <= 1'b0;
				sel_rs_vk <= 3'b0;
				sel_rob_destination <= 1'b0;
			end
			LI:begin
				//reg[1110] = imm12, no reg needed
				sel_rf_read1_reg <= 1'b0;//dead
				sel_rf_read2_reg <= 1'b0;//dead
				sel_rs_qj_req <= 1'b0;//dead
				sel_rs_qk_req <= 1'b0;//dead
				sel_rs_vj <= 1'b0;//dead
				sel_rs_vk <= 1'b0;//dead
				sel_rob_destination <= 1'b0;//rega
			end
			SWC: begin // nao esquercer do bool_reg_renamed[{thread_sel,rega}] <= 1'b settar;
			// if rf[15] == rf[rega]+signed then dm[rf[rega+signed]] <- rf[regb]; rf[regb] <- 0; else rf[regb] <- 1
			end
			LLW: begin
			// rf[15] <- rf[rega]+signed; rf[regb] <- dm[rf[rega]+signed]

			end
			default: begin //unknow opc or HALT
				sel_rf_read1_reg <= 1'bx;
				sel_rf_read2_reg <= 1'bx;
				sel_rs_qj_req <= 1'bx;
				sel_rs_qk_req <= 1'bx;
				sel_rs_vj <= 1'bx;
				sel_rs_vk <= 1'bx;
				sel_rob_destination <= 1'bx;
				/*
					sel_rf_read1_reg <= ;
					sel_rf_read2_reg <= ;
					sel_rs_qj_req <= ;
					sel_rs_qk_req <= ;
					sel_rs_vj <= ;
					sel_rs_vk <= ;
					sel_rob_destination <= ;
					bool_reg_renamed[{thread_sel,rega}] <= ;
				*/
			end
		endcase
	end
endmodule