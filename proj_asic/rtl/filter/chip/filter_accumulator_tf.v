`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:44:47 11/03/2015
// Design Name:   filter_accumulator
// Module Name:   C:/Users/Dhruvit/Dropbox/TCNJ/Senior Project/rtl/chip/filter_accumulator_tf.v
// Project Name:  chip
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: filter_accumulator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module filter_accumulator_tf;

	// Inputs
	reg clk;
	reg rstb;
	reg [3:0] D;

	// Outputs
	wire [3:0] Q;

	// Instantiate the Unit Under Test (UUT)
	filter_accumulator uut (
		.clk(clk), 
		.rstb(rstb), 
		.D(D), 
		.Q(Q)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rstb = 0;
		D = 0;

		// Wait 100 ns for global reset to finish
		#100;
      rstb = 1; 
		D = 1;
		#10;
		D = 2;
		#10;
		D =0;
		#100;
		rstb = 0;
		
		
		
		// Add stimulus here

	end
	
	always
	begin
		forever #5 clk = ~clk;
	end
      
endmodule

