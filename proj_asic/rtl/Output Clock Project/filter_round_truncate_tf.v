//////////////////////////////////////////////////////////////////////////////////
// Module Name:             filter_round_truncate_tf.v
// Create Date:             ??? 
// Last Modification:       3/25/2016
// Author:                  Dhruvit Naik
// Description:             ????
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module filter_round_truncate_tf;

	// Inputs
	reg                             clk;
	reg                             rst_n;
	reg             [39:0]          acc_in;
	reg                             rf_sat;
	reg             [ 2:0]          rf_shift;
	reg                             trig_out_clear;
	reg                             trig_filter_ovf_flag_clear;

	// Outputs
	wire            [15:0]          filter_out;
	wire                            ro_filter_ovf_flag;

	filter_round_truncate uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.acc_in(acc_in), 
		.rf_sat(rf_sat), 
		.rf_shift(rf_shift), 
		.trig_filter_ovf_flag_clear(trig_filter_ovf_flag_clear), 
		.filter_out(filter_out), 
		.ro_filter_ovf_flag(ro_filter_ovf_flag)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;
		acc_in = 0;
		rf_sat = 0;
		rf_shift = 0;
		
		#100;
		rst_n = 1;
		rf_shift = 3'b000; 
        acc_in = 40'h0000000001; 
		#100;
		rf_sat = 1'b1;
		

	end
	
	always
	begin
		forever #5 clk = ~clk;
	end
      
endmodule

