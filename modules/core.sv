module core(
		input clk, rst,
		input [15:0] im_inst0, im_inst1,
		input [31:0] dm_data_out0, dm_data_out1,
		//--
		output reg [15:0] pc0, pc1,
		output dm_write0, dm_write1,
		output [31:0] dm_write0_address, dm_write1_address,
		output [31:0] dm_write0_data, dm_write1_data,
		output [31:0] dm_read0_address, dm_read1_address,
);
	reg halt;

	wire thread_sel;
	wire [15:0] im_inst;

	wire [3:0] opc;
	wire [2:0] opf;
	wire [3:0] rega, regb, regc;
	wire [5:0] imm6, imm6mem;
	wire [8:0] imm9;
	wire [11:0] imm12;

	supply0 zero;

	reg [15:0] thread0_program_counter, thread1_program_counter;

	// for when inst exists the rob:
		wire thread0_rf_write1, thread0_rf_write2;
		wire [3:0] thread0_rf_write1_reg, thread0_rf_write2_reg;
		wire [31:0] thread0_rf_write1_value, thread0_rf_write2_value;
		wire [3:0] thread0_rf_read1_reg, thread0_rf_read2_reg;
		wire [31:0] thread0_rf_read1_out, thread0_rf_read2_out;
		
		wire thread1_rf_write1, thread1_rf_write2;
		wire [3:0] thread1_rf_write1_reg, thread1_rf_write2_reg;
		wire [31:0] thread1_rf_write1_value, thread1_rf_write2_value;
		wire [3:0] thread1_rf_read1_reg, thread1_rf_read2_reg;
		wire [31:0] thread1_rf_read1_out, thread1_rf_read2_out;

	always@(*)begin //async rst
		if(rst == 1'b1)begin
			halt <= 1'b0;
			thread0_program_counter <= 0;
			thread1_program_counter <= 0;
		end
	end

	thread_scheduler _TS_(
		clk, rst, thread_sel
	);

	mux2xP #(WIDTH=1) mux2xp_1 (
		thread_sel, im_inst0, im_inst1, //--
		im_inst
	);

	instruction_decoding _IC_(
		im_inst, //--
		opc, opf, 
		rega, regb, regc,
		imm6, imm6mem, 
		imm9,
		imm12
	);

	integer i;
	reg [4:0] renaming [0:31]:
	always@(*) begin
		if (rst==1'b1)begin
			for(i=0; i<32; i=i+1)begin
				renaming[i] <= 1'b0;
			end
		end else begin
			renaming[rega] <= rob_entry;
		end
	end
	control_unit _CTRLU_(
		rst, thread_sel, opc, rega, regb, regc,// --
		sel_rf_read1_reg, sel_rf_read2_reg,
		sel_rs_qj_req, sel_rs_qk_req,
		sel_rs_vj, sel_rs_vk,
		sel_rob_destination, bool_reg_renamed, halt
	);

	mux2xP #(V_WIDTH=3) _MUX2XP_rf_read1(
		.in0(regb), 
		.in1(rega),
		.sel(sel_rf_read1_reg), 
		.out(rf_read1)
	);

	mux2xP #(V_WIDTH=32) _MUX2XP_rs_vj(
		.in0(rf_read1_out), 
		.in1(rob_read1_out),
		.sel(sel_rs_vj), 
		.out(rs_vj_in)
	);
	mux8xP #(V_WIDTH=32) _MUX8XP_rs_vk(
		.in0(rf_read2_out), 
		.in1(rob_read2_out),
		.in2(imm6), 
		.in3(imm6_mem),
		.in4(imm9),
		.in5(imm12),
		.in6(zero),
		.sel(mux_rs_vk), 
		.out(rs_vk_in)
	);
	mux4xP #(V_WIDTH=32) _MUX4XP_rob_dest(
		.in0(rega), 
		.in1(regb),
		.sel(addressAdder_result), 
		.out(rob_entry_destination)
	);
	reservation_station GENERICA_PORTASPOSICOESCERTAS(
		.clk(clk),.write(rs_write), .reset(rs_reset),

		.opf(opfunction),
		.rob_dest(rs_rob_dest),
		.qj_required(rs_qj_required), .qk_required(rs_qk_required),
		.qj_rob_entry(rs_qj_rob_entry), .qk_rob_entry(rs_qk_rob_entry),
		.vj_in(rs_vj_in), .vk_in(rs_vk_in),

		.cdb_write(cdb_write),
		.cdb_rob_adrs(cdb_rob_adrs),
		.cdb_snooped_value(cdb_snooped_value),
		
		.busy_fu(rs_fu_busy),
		//--
		.valid0(rs_valid0), .valid1(rs_valid1), .valid2(rs_valid2), .valid3(rs_valid3),
		.line_out1(rs_line_out1),
		.line_out2(rs_line_out2),
		.line_out3(rs_line_out3),
		.line_out4(rs_line_out4),

		.full(rs_full)
	);

	// for commit unit
		/*hazard_unit #(

		) _HU_ (
			.opc1
			.opc2
			.destination1
			.destination2
			.mux_dm_data_in1,
			.mux_dm_data_in2,
			.mux_rf_data_in1,
			.mux_rf_data_in2
		);*/

	// REDONNDOOO --------------------------- MODULES
	wire rob_entry_pc = thread_sel == 0 ? thread0_program_counter : thread1_program_counter;
	reorder_buffer _ROB_(
		.clk(clk), .reset(rob_reset), .write_entry(rob_write),

		.entry_opc(rob_entry_opc),
		.entry_destination(rob_entry_destination),
		.entry_pc(rob_entry_pc),

		.cdb_write(rob_cdb_write),
		.cdb_snooped_value(rob_cdb_snooped_value),
		.cdb_rob_adrs(rob_cdb_rob_adrs),
		.cdb_exception(rob_cdb_exception),

		.read_entry1(rob_read_entry1),
		.read_entry2(rob_read_entry2),
		//--
		.readed_entry1_ready(rob_readed1_ready),
		.readed_entry1_value(rob_readed1_value),
		.readed_entry1_desti(rob_readed1_desti),
		.readed_entry2_ready(rob_readed2_ready),
		.readed_entry2_value(rob_readed2_value),
		.readed_entry2_desti(rob_readed2_desti),

		.created_entry_bool(rob_created_entry_bool), 
		.entry(rob_entry),

		.ready1_instruction_bool(rob_ready1_instruction_bool), 
		.ready1_exception(rob_ready1_exception),
		.ready1_opc(rob_ready1_opc),
		.ready1_destination(rob_ready1_destination),
		.ready1_pc(rob_ready1_pc),
		.ready1_value(rob_ready1_value),

		.ready2_instruction_bool(rob_ready2_instruction_bool),
		.ready2_exception(rob_ready2_exception),
		.ready2_opc(rob_ready2_opc),
		.ready2_destination(rob_ready2_destination),
		.ready2_pc(rob_ready2_pc),
		.ready2_value(rob_ready2_value),

		.full(rob_full)
	);

	register_file _RF0_(
		.write1(thread0_rf_write1),
		.write1_reg(thread0_rf_write1_reg),
		.write1_value(thread0_rf_write1_value),
		.write2(thread0_rf_write2),
		.write2_reg(thread0_rf_write2_reg),
		.write2_value(thread0_rf_write2_value),
		.readl_reg(thread0_rf_read1_reg),
		.read2_reg(thread0_rf_read2_reg),
		//--
		.read1_out(thread0_rf_read1_out),
		.read2_out(thread0_rf_read2_out)
	);
	
	register_file _RF1_(
		.write1(thread1_rf_write1),
		.write1_reg(thread1_rf_write1_reg),
		.write1_value(thread1_rf_write1_value),
		.write2(thread1_rf_write2),
		.write2_reg(thread1_rf_write2_reg),
		.write2_value(thread1_rf_write2_value),
		.readl_reg(thread1_rf_read1_reg),
		.read2_reg(thread1_rf_read2_reg),
		//--
		.read1_out(thread1_rf_read1_out),
		.read2_out(thread1_rf_read2_out)
	);

endmodule