`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:09:10 11/23/2015
// Design Name:   filter_stm
// Module Name:   E:/23 November/proj_asic/rtl/filter/chip/filter_stm_tf.v
// Project Name:  chip
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: filter_stm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module filter_stm_tf;

	// Inputs
	reg clk;
	reg rstb;
	reg filter_aud_in_rts;
	reg [15:0] filter_aud_in;
	reg [15:0] rf_filter_coeff;

	// Outputs
	wire filter_aud_in_rtr;
	wire do_transfer;
	wire do_multiply_1st;
	wire do_multiply;
	wire [15:0] filter_aud_out;

	// Instantiate the Unit Under Test (UUT)
	filter_stm uut (
		.clk(clk), 
		.rstb(rstb), 
		.filter_aud_in_rts(filter_aud_in_rts), 
		.filter_aud_in_rtr(filter_aud_in_rtr), 
		.do_transfer(do_transfer), 
		.do_multiply_1st(do_multiply_1st), 
		.do_multiply(do_multiply), 
		.filter_aud_in(filter_aud_in), 
		.filter_aud_out(filter_aud_out), 
		.rf_filter_coeff(rf_filter_coeff)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rstb = 0;
		filter_aud_in_rts = 0;
		filter_aud_in = 0;
		rf_filter_coeff = 0;

		// Wait 100 ns for global reset to finish
		#100;
      rstb = 1;
		filter_aud_in_rts = 1;
		// Add stimulus here

	end
	
	always
		begin
			forever #5 clk = ~clk;
		end
      
endmodule

