module ready_lines_sel(
    input [7:0] r,
    output logic [3:0] sel0, sel1, sel2, sel3
);
    logic [7:0] available;
    logic [3:0] selections [0:3];
    
    always_comb begin
        available = r;
        
        // Generate 4 selections sequentially
        for (int i = 0; i < 4; i++) begin
            selections[i][3] = |available;  // Valid bit
            
            // Find first set bit
            selections[i][2:0] = 3'd0;
            for (int j = 0; j < 8; j++) begin
                if (available[j]) begin
                    selections[i][2:0] = j[2:0];
                    available[j] = 1'b0;  // Mask it out
                    break;
                end
            end
        end
    end
    
    assign {sel0, sel1, sel2, sel3} = {selections[0], selections[1], selections[2], selections[3]};
endmodule

module reservation_station 	#(
		parameter OPF_SIZE=3, ROB_ADRS_SIZE=5,
		V_SIZE=32, RS_ADRS_SIZE=3
	)(	
		input clk,write,rst,

		input [OPF_SIZE-1:0] opf,
		input [ROB_ADRS_SIZE-1:0] rob_dest,
		input qj_required, qk_required,
		input [ROB_ADRS_SIZE-1:0] qj_rob_entry,
		input [ROB_ADRS_SIZE-1:0] qk_rob_entry,
		input [V_SIZE-1:0] vj_in, vk_in,

		input cdb0_write,
		input [ROB_ADRS_SIZE-1:0] cdb0_rob_adrs,
		input [V_SIZE-1:0] cdb0_snooped_value,

		input cdb1_write,
		input [ROB_ADRS_SIZE-1:0] cdb1_rob_adrs,
		input [V_SIZE-1:0] cdb1_snooped_value,
		
		input [3:0] busy_fu,
		//-- 
		output valid0, valid1, valid2, valid3,
		output [RS_OUT_LINE_SIZE-1:0] line_out1, line_out2, line_out3, line_out4,
		output full
);
	localparam RS_LINES=2**RS_ADRS_SIZE, RS_OUT_LINE_SIZE = OPF_SIZE + ROB_ADRS_SIZE + 2*V_SIZE; 	

	integer i;

	reg [RS_LINES-1:0] busy;
	reg [OPF_SIZE-1:0] opfunction [0:RS_LINES-1];
	reg [ROB_ADRS_SIZE-1:0] rob_entry [0:RS_LINES-1];//holds the inst. destination entry in rob
	reg [RS_LINES-1:0] qj_using;//0: value v is present; 1: not present, ROB entry indicateted by q
	reg [RS_LINES-1:0] qk_using;	
	reg [ROB_ADRS_SIZE-1:0] qj [0:RS_LINES-1];
	reg [ROB_ADRS_SIZE-1:0] qk [0:RS_LINES-1];
	reg [V_SIZE-1:0] vj [0:RS_LINES-1];
	reg [V_SIZE-1:0] vk [0:RS_LINES-1];

	wire [2:0] write_sel; // holds, in binary, the index of the first non busy slot in the RS 
	wire [3:0] readylines_sel0, readylines_sel1, readylines_sel2, readylines_sel3; // 3:0 sel ready slot, 4th bit = valid sel 

	wire [7:0] ready; // vector bit, all the slots with ready values

	assign write_sel[2] = busy[3] & busy[2] & busy[1] & busy[0];
	assign write_sel[1] = ~busy[3] & busy[1] & busy[0] | ~busy[2] & busy[1] & busy[0] | busy[5] & busy[4] & busy[1] & busy[0];
	assign write_sel[0] = ~busy[1] & busy[0] | ~busy[3] & busy[2] & busy[0] | ~busy[5] & busy[4] & busy[2] & busy[0] | busy[6] & busy[4] & busy[2] & busy[0];

	assign ready = busy & ~qj_using & ~qk_using;  

	assign valid0 = ~busy_fu[0] & readylines_sel0[3];
	assign valid1 = ~busy_fu[1] & readylines_sel1[3];
	assign valid2 = ~busy_fu[2] & readylines_sel2[3];
	assign valid3 = ~busy_fu[3] & readylines_sel3[3];
	assign line_out1 = {opfunction[readylines_sel0[2:0]],rob_entry[readylines_sel0[2:0]],vj[readylines_sel0[2:0]],vk[readylines_sel0[2:0]]};
	assign line_out2 = {opfunction[readylines_sel1[2:0]],rob_entry[readylines_sel1[2:0]],vj[readylines_sel1[2:0]],vk[readylines_sel1[2:0]]};
	assign line_out3 = {opfunction[readylines_sel2[2:0]],rob_entry[readylines_sel2[2:0]],vj[readylines_sel2[2:0]],vk[readylines_sel2[2:0]]};
	assign line_out4 = {opfunction[readylines_sel3[2:0]],rob_entry[readylines_sel3[2:0]],vj[readylines_sel3[2:0]],vk[readylines_sel3[2:0]]};
	assign full = &busy;

	ready_lines_sel rls(ready, readylines_sel0, readylines_sel1, readylines_sel2, readylines_sel3);

	// Combined insertion, reset, and CDB snooping on posedge
	always @(posedge clk) begin
		if(rst==1'b1) begin
			busy <= 0;
			qj_using <= 0;
			qk_using <= 0;
		end else begin
			// Handle new instruction insertion
			if(full==1'b0 && write==1'b1) begin
				busy[write_sel] <= 1'b1;
				opfunction[write_sel] <= opf;
				rob_entry[write_sel] <= rob_dest;

				qj[write_sel] <= qj_rob_entry;
				// Check both CDB0 and CDB1 for forwarding vj
				if(cdb0_write==1 && cdb0_rob_adrs==qj_rob_entry)begin
					qj_using[write_sel] <= 0;	
					vj[write_sel] <= cdb0_snooped_value;
				end	else if(cdb1_write==1 && cdb1_rob_adrs==qj_rob_entry)begin
					qj_using[write_sel] <= 0;	
					vj[write_sel] <= cdb1_snooped_value;
				end	else begin
					vj[write_sel] <= vj_in;
					qj_using[write_sel] <= qj_required;	
				end

				qk[write_sel] <= qk_rob_entry;
				// Check both CDB0 and CDB1 for forwarding vk
				if(cdb0_write==1 && cdb0_rob_adrs==qk_rob_entry)begin
					qk_using[write_sel] <= 0;	
					vk[write_sel] <= cdb0_snooped_value;
				end	else if(cdb1_write==1 && cdb1_rob_adrs==qk_rob_entry)begin
					qk_using[write_sel] <= 0;	
					vk[write_sel] <= cdb1_snooped_value;
				end	else begin
					vk[write_sel] <= vk_in;
					qk_using[write_sel] <= qk_required;
				end
			end
			
			// CDB snooping for existing entries
			for(i=0; i<RS_LINES; i=i+1)begin 
				// Check both CDB0 and CDB1 for snooping values
				// Priority: CDB0 first, then CDB1 (both can't have same ROB address)
				if(qj_using[i]==1'b1) begin
					if(qj[i]==cdb0_rob_adrs && cdb0_write==1'b1)begin 
						vj[i] <= cdb0_snooped_value;
						qj_using[i] <= 1'b0;
					end else if(qj[i]==cdb1_rob_adrs && cdb1_write==1'b1)begin 
						vj[i] <= cdb1_snooped_value;
						qj_using[i] <= 1'b0;
					end
				end
				if(qk_using[i]==1'b1) begin
					if(qk[i]==cdb0_rob_adrs && cdb0_write==1'b1)begin
						vk[i] <= cdb0_snooped_value;
						qk_using[i] <= 1'b0;
					end else if(qk[i]==cdb1_rob_adrs && cdb1_write==1'b1)begin
						vk[i] <= cdb1_snooped_value;
						qk_using[i] <= 1'b0;
					end
				end
			end
		end
	end
endmodule