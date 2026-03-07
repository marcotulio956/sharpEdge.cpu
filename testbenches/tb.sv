module tb();
    import dependencies::*;
    task 
    reg reset;

    initial begin 
        reset = 1;
        @(negedge clk);
        reset = 0;


    end
    clock_generator #(.FREQ(5), .START_CLK(1'b0)) _CG_(1'b1, 1'b0, clk, cc);



endmodule