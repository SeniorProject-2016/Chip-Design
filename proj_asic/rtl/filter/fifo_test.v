`timescale 1ns / 1ps

module fifo_test;

	// Inputs
	reg fifo_clk;
	reg rst;
	reg fifo_wren;
	reg [15:0] fifo_wrdata;
	reg fifo_rden;

	// Outputs
	wire [15:0] fifo_rddata;
	wire fifo_full;
	wire fifo_empty;

	// Instantiate the Unit Under Test (UUT)
	fifo uut (
		.fifo_clk(fifo_clk), 
		.rst(rst), 
		.fifo_wren(fifo_wren), 
		.fifo_wrdata(fifo_wrdata), 
		.fifo_rden(fifo_rden), 
		.fifo_rddata(fifo_rddata), 
		.fifo_full(fifo_full), 
		.fifo_empty(fifo_empty) 
	);

	initial begin
		// Initialize Inputs
		fifo_clk = 0;
		rst = 0;
		#1;
		rst = 1;
		fifo_wren = 0;
		fifo_wrdata = 0;
		fifo_rden = 0;
		
		#10;
		fifo_wren = 1;
		fifo_wrdata = 24;
		#10;
		#1;
		fifo_wren = 0;
		fifo_wrdata = 0;
		#10;
		#1;
		fifo_wren = 1;
		fifo_wrdata = 4;
		#10;
		#1;
		fifo_wren = 0;
		fifo_wrdata = 0;
		#10
		fifo_rden = 1; 
		#9
		fifo_rden = 0; 
		#10
		fifo_rden = 1; 
		#9
		fifo_rden = 0; 
			#9
		fifo_rden = 1; 
			#9
		fifo_rden = 0; 
		
	end
	
 always begin
   #5  fifo_clk = ~fifo_clk; // Toggle clock every 5 ticks
 end
      
endmodule

