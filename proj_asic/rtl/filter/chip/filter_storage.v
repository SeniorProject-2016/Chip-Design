`timescale 1ns / 1ps

module filter_storage

					
( clk, wren, wrptr, wrdata, rden, rdptr, rddata);

input										clk;
input										wren;
input		[(5):0]					wrptr;
input		[(32-1):0]				wrdata;
input										rden;
input		[(5):0]					rdptr;
output	[(32-1):0]				rddata;

localparam	DEPTH = (2^9); //2^9 = 512

reg	[(31-1):0] ram [(512-1):0];
	



reg	[(31-1):0] rddata;

always @(posedge clk)
	begin
			if(wren == 1'b1)
					ram[wrptr] <= wrdata;
			if(rden == 1'b1)
					rddata <= ram[rdptr];
	end
	
endmodule