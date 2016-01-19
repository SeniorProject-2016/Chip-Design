`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:26:52 10/20/2015
// Design Name:   trig_generator
// Module Name:   C:/Users/Julie/Desktop/Senior Project/trig_generator/trig_generator_testbench1.v
// Project Name:  trig_generator
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: trig_generator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module trig_generator_testbench1;

	// Inputs
	reg [10:0] address;
	reg [7:0] wdata;
	reg xfc;
	reg clk;
	reg [31:0] count;

	// Outputs
	wire trig_i2si_fifo_overrun_clr;
	wire trig_i2so_fifo_underrun_clr;
	wire rst_n;

	// Instantiate the Unit Under Test (UUT)
	trig_generator uut (
		.address(address), 
		.wdata(wdata), 
		.xfc(xfc), 
		.clk(clk), 
		.rst(rst), 
		.trig_i2si_fifo_overrun_clr(trig_i2si_fifo_overrun_clr), 
		.trig_i2so_fifo_underrun_clr(trig_i2so_fifo_underrun_clr)
	);
	always
	begin
		begin
			count = 0;
			clk = 0;
		end
	// Generates a clock with a clock cycle of 10 ns
	forever
		begin
			#5 clk = ~clk;
			count = count + 1;
		end
	end

	assign rst_n = !(count < 20);


	initial begin
		// Initialize Inputs
		address = 12'h00c;

		// Wait 100 ns for global reset to finish
		#1000;
    end
	 
always @(posedge clk or negedge rst_n)
	begin
		// initializing xfc and wdata to 0
		if (~rst_n)
		begin
			wdata <= 0;
			xfc <= 0;
		end
		/* 
		if wdata is 12 bits of data and less than the hex value 20 wdata is
		and file transfer is set to 1 - complete
		*/
		else if (wdata < 11'h020) 
		begin
			wdata <= wdata + 1;
			xfc <= 1;
		end
		else
			xfc <=0;
	end
      
endmodule

