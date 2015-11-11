`timescale 1ns / 1ps

module filter_accumulator(clk, rstb, D, Q
    );
input  clk, rstb; 
input  [31:0] D; 
output [40:0] Q; 
reg    [40:0] tmp;  


assign Q = tmp; 


  always @(posedge clk or negedge rstb) 
   begin 
		if (!rstb)
			begin
				tmp <= 4'b0000;
			end
      else 
			begin
				tmp <= tmp + D; 
			end
	end
endmodule
