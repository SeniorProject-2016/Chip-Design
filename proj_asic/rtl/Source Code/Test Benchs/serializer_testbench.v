////////////////////////////////////////////////////////////////////////////////
// Module Name:   serializer_testbench.v
// Create Date:   2/14/2016
// Last Edit:     3/20/16
// Author:        Kevin Cao
//
// Description:     Creates N number 32 bit words specified by the programmer to be inputted.
//                  Compares the inputted and outputted words.
//                  Outputs the success and failure of the comparisons in i2s_in_test_output.txt
// 
////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module serializer_testbench;

	// Inputs
	reg clk;
	reg rst_n;
	reg filt_i2so_rts;
	reg [15:0] filt_i2so_lft;
	reg [15:0] filt_i2so_rgt;
	reg sck_transition;

	// Outputs
	wire i2so_sd;
	wire i2so_ws;
	wire filt_i2so_rtr;

	// Instantiate the Unit Under Test (UUT)
	i2so_serializer uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.filt_i2so_rts(filt_i2so_rts), 
		.i2so_sd(i2so_sd), 
		.i2so_ws(i2so_ws), 
		.filt_i2so_lft(filt_i2so_lft), 
		.filt_i2so_rgt(filt_i2so_rgt), 
		.filt_i2so_rtr(filt_i2so_rtr), 
		.sck_transition(sck_transition)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;
		filt_i2so_rts = 0;
		filt_i2so_lft = 0;
		filt_i2so_rgt = 0;
		sck_transition = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

