`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:36:42 11/03/2015
// Design Name:   filter_stm
// Module Name:   C:/Users/Dhruvit/Dropbox/TCNJ/Senior Project/rtl/chip/filter_stm_tf.v
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
	reg rts;
	reg [15:0] aud_in;
	reg [15:0] rf_filter_coeff;

	// Outputs
	wire rtr;
	wire do_transfer;
	wire do_multiply_1st;
	wire do_multiply;
	//wire [3:0] wr_addr;
	//wire [3:0] rd_addr;
	wire [15:0] aud_out;


	// Instantiate the Unit Under Test (UUT)
	filter_stm uut (
		.clk(clk), 
		.rstb(rstb), 
		.rts(rts), 
		.rtr(rtr), 
		.do_transfer(do_transfer), 
		.do_multiply_1st(do_multiply_1st), 
		.do_multiply(do_multiply),  
		.aud_in(aud_in), 
		.aud_out(aud_out),
		.rf_filter_coeff(rf_filter_coeff)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rstb = 0;
		rts = 0;
		aud_in = 0;
		#100;
		rts = 1;
		rstb = 1;
		aud_in =1;
		rf_filter_coeff =1;
		// Wait 100 ns for global reset to finish
		#200;
		aud_in = 4 ;
		
		#100;
		aud_in = 9 ;
		#100;
		aud_in = 12 ;
		#100;
		aud_in = 7 ;
		#100;
		aud_in = 5 ;
		#100;
		aud_in = 8;
		#100;
		aud_in = 9 ;
		#100;
		aud_in = 12 ;
		#100;
		aud_in = 7 ;
		#100;
		aud_in = 5 ;
		#100;
		aud_in = 8;
		#100;
		aud_in = 4 ;
		#100;
		aud_in = 2 ;
		#100;
		aud_in = 3 ;
		#100;
		aud_in = 15 ;
		#100;
		aud_in = 18;
		#100;
		aud_in = 7 ;
		#100;
		aud_in = 6 ;
		#100;
		aud_in = 1 ;
		#100;
		aud_in = 2 ;
		#100;
		aud_in = 3;
		#100;
		aud_in = 19 ;
		#100;
		aud_in = 11 ;
		#100;
		aud_in = 9 ;
		#100;
		aud_in = 3 ;
		#100;
		aud_in = 12;
		
		// Add stimulus here

	end
	
   always
	begin
		forever #5 clk = ~clk;
	end
endmodule

