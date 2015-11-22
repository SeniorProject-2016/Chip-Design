`timescale 1ns / 1ps

module filter_accumulator(clk, zero, D, Q
    );
input  clk, zero; 
input  [15:0] D; 
output [15:0] Q; 
reg    [15:0] tmp;  


assign Q = tmp; 


  always @(posedge clk or posedge zero) 
   begin 
		if (zero)
			begin
				tmp <= 4'b0000;
			end
      else 
			begin
				tmp <= tmp + D; 
			end
	end
endmodule
