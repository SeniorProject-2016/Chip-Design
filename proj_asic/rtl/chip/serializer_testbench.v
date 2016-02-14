`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:45:32 02/14/2016
// Design Name:   i2so_serializer
// Module Name:   C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/chip/serializer_testbench.v
// Project Name:  SeniorProject
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: i2so_serializer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

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

