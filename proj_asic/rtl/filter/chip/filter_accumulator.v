`timescale 1ns / 1ps

module filter_accumulator(clk, rstb, enable,load, D, Q
    );
input  clk, rstb,enable,load; 
input  [15:0] D; 
output [15:0] Q; 
reg    [15:0] tmp;  
//rstb regular reset 
//acc enable | temp = temp + temp 

assign Q = tmp; 


  always @(posedge clk or negedge rstb) 
   begin 
		if (!rstb)
			
				tmp <= 4'b0000;
			
      else if (enable)
			 
				if (load)
					tmp <= D;
				else
					tmp <= tmp + D; 
	end
endmodule
