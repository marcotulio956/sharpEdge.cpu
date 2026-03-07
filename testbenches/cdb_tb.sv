module cdb_tb();
    integer i;

    reg clk, rst;
    reg [15:0] write_requests;
    reg [31:0] data_in [0:15];
    reg [4:0] rob_adrs_in [0:15];

    wire [15:0] granted_request;
    wire rob_write;
    wire [4:0] rob_address_out;
    wire [31:0] data_out;
    
    initial begin
        forever begin
            clk = 0; #1; clk = 1; #1; 
        end
    end

    initial begin
        rst = 1;
        @(negedge clk);
        rst = 0;
        repeat(4) begin
            write_requests = $random();
            for(i=0;i<16;i=i+1)begin
                data_in[i] = $random();
                rob_adrs_in[i] = $random();
            end
            #2;
            write_requests = 0;
            #16;
        end
        $finish;
    end
    common_data_bus cdb(
		clk, rst, 
		write_requests,
		data_in[0], 
		data_in[1], data_in[2], data_in[3], 
		data_in[4], data_in[5], data_in[6],
		data_in[7], data_in[8], data_in[9], 
		data_in[10], data_in[11], data_in[12], 
		data_in[13], data_in[14], data_in[15],
		rob_adrs_in[0],
		rob_adrs_in[1], rob_adrs_in[2], rob_adrs_in[3],
		rob_adrs_in[4], rob_adrs_in[5], rob_adrs_in[6],
		rob_adrs_in[7], rob_adrs_in[8], rob_adrs_in[9],
		rob_adrs_in[10], rob_adrs_in[11], rob_adrs_in[12],
		rob_adrs_in[13], rob_adrs_in[14], rob_adrs_in[15],
        //--
		granted_request,
		rob_write, 
		rob_address_out,
        data_out
    );
endmodule