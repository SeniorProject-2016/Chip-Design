`timescale 1ns / 1ps

module filter_storage

					
( clk, wren, wrptr, wrdata, rden, rdptr, rddata);

input										clk;
input										wren;
input		[2:0]							wrptr;
input		[15:0]						wrdata;
input										rden;
input		[2:0]							rdptr;
output	[15:0]						rddata;

localparam	DEPTH = 7; //2^9 = 512
localparam	WIDTH = 15; 

reg	[WIDTH:0] ram [DEPTH:0];
reg	[WIDTH:0] rddata;	

always @(posedge clk)
	begin
			if(wren)
				ram[wrptr] = wrdata;

	end
	
always @(posedge clk)
	begin
			if(rden)
				rddata = ram[rdptr];
	end
	
endmodule