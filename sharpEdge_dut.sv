/*sharpEdge_v3 
     ├── _CG_ // Clock Generator 
     ├── _IM0_ // Instruction Memory
     ├── _CORE0_
     │    ├── thread0_program_counter
     │    ├── thread1_program_counter
     │    ├── thread_scheduler
     │    ├── instruction_decoding
     │    ├── control_unit
     │    │    ├── thread0_branch_predictor
     │    │    └── thread1_branch_predictor
     │    ├── reservation_station_ma // for Memory Accesses
     │    ├── reservation_station_falu // for Floating-Point Arithmetic/Logical Unit
     │    ├── reservation_station_au // for Integer Arithmetic Unit
     │    ├── reservation_station_lu // for Integer Logical Unit
     │    ├── addressAdder
     │    ├── falu
     │    ├── au
     │    ├── lu
     │    ├── reoder_buffer
     │    ├── common_data_bus 
     │    │    └── arbiter
     │    ├── commit_unit
     │    │    └── hazard_control
     │    ├── thread0_register_file
     │    └── thread1_register_file
     └── _DM_ // Data Memory */
module sharpEdge_v3();
	wire clk, cc;
	//C:/Users/ofzbo/Documents/CeFeT_Mg/CEFET/se_v3

	wire [15:0] im_inst0, im_inst1;

	wire [15:0] core_pc0, core_pc1;
	wire core_write0, core_write1;
	wire [31:0] core_write0_address, core_write1_address;
	wire [31:0] core_write0_data, core_write1_data;
	wire [31:0] core_read0_address, core_read1_address;

	wire [31:0] dm_data_out0, dm_data_out1;

	reg rst;

	initial begin
		#0
		rst <= 1'b1;
		#10
		rst <= 1'b0;
	end

	clock_generator #(
		.FREQ(5),.START_CLK(1'b0)
	) _CG_(1'b1, 1'b0, 
		clk, cc // outputs
	); 

	instruction_memory #(
		.PATH("./im_init.txt")
	) _IM0_(
		core_pc0, core_pc1,
		im_inst0, im_inst1 // outputs
	);

	core _CORE0_(clk, rst, 
		im_inst0, im_inst1,
		dm_data_out0, dm_data_out1,
		core_pc0, core_pc1, // outputs
		core_write0, core_write1,
		core_write0_address, core_write1_address, 
		core_write0_data, core_write1_data,
		core_read0_address, core_read1_address
	);

	data_memory #(
		.PATH("./dm_init.txt")
	) _DM_(clk, rst,
		core_write0, core_write1,
		core_write0_address, core_write1_address,
		core_write0_data, core_write1_data,
		core_read0_address, core_read1_address,
		dm_data_out0, dm_data_out1
	);
endmodule