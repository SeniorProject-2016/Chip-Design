`timescale 1ns / 1ps

module filter_accumulator(clk, rstb, enable,load, D, Q
    );
input		signed clk, rstb,enable,load; 
input 	signed [31:0] D; 
output 	signed [40:0] Q; 

reg 		signed [40:0] tmp;  

assign	Q = tmp; 

always @(posedge clk or negedge rstb) 
   begin 
		if (!rstb)
			
				tmp <= 1'b0;
			
      else if (enable)
			begin 
				if (load)
					tmp <= D;
				else
					tmp <= tmp + D;
			end
	end
endmodule
