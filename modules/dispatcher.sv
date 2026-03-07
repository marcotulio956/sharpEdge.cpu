module dispatcher(input [7:0] ready, output reg [1:0] valid, output reg [2:0] sel0, sel1, sel2, sel3);
    integer i, j, k;
    always @(ready) begin
        for(i=0; i<8; i+=1)begin
            if(ready[i])begin
                
            end
        end
    end
endmodule
