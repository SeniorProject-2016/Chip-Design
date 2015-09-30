`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:42:05 09/29/2015
// Design Name:   i2si_bist_gen
// Module Name:   C:/Users/Zachary/BuiltInSelfTest/test1.v
// Project Name:  BuiltInSelfTest
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: i2si_bist_gen
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test1;

	// Inputs
	reg clk;
	reg rst;
	reg [11:0] rf_bist_start_val;
	reg [7:0] rf_bist_inc;
	reg [11:0] rf_bist_up_limit;

	// Outputs
	wire [11:0] i2si_bist_out_data;

	// Instantiate the Unit Under Test (UUT)
	i2si_bist_gen uut (
		.clk(clk), 
		.rst(rst), 
		.rf_bist_start_val(rf_bist_start_val), 
		.rf_bist_inc(rf_bist_inc), 
		.rf_bist_up_limit(rf_bist_up_limit), 
		.i2si_bist_out_data(i2si_bist_out_data)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		rf_bist_start_val = 12'h001;
		rf_bist_inc = 12'h001;
		rf_bist_up_limit = 12'h019;

	end
	
	always
		#5 clk=~clk;
      
endmodule

