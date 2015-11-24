`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:29:26 11/17/2015
// Design Name:   i2si_bist_gen
// Module Name:   C:/Users/kevin/Documents/GitHub/Chip-Design/proj_asic/rtl/i2si/i2s_in/a.v
// Project Name:  i2s_in
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

module a;

	// Inputs
	reg clk;
	reg rst_n;
	reg sck_transition;
	reg [11:0] rf_bist_start_val;
	reg [7:0] rf_bist_inc;
	reg [11:0] rf_bist_up_limit;

	// Outputs
	wire [31:0] i2si_bist_out_data;
	wire i2si_bist_out_xfc;

	// Instantiate the Unit Under Test (UUT)
	i2si_bist_gen uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.sck_transition(sck_transition), 
		.rf_bist_start_val(rf_bist_start_val), 
		.rf_bist_inc(rf_bist_inc), 
		.rf_bist_up_limit(rf_bist_up_limit), 
		.i2si_bist_out_data(i2si_bist_out_data), 
		.i2si_bist_out_xfc(i2si_bist_out_xfc)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;
		sck_transition = 0;
		rf_bist_start_val = 0;
		rf_bist_inc = 0;
		rf_bist_up_limit = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

