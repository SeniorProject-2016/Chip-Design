`timescale 1ns / 1ps

module filter_round_truncate_tf;

	// Inputs
	reg clk;
	reg rstb;
	reg [39:0] acc_in;
	reg rf_sat;
	reg [2:0] rf_shift;
	reg trig_out_clear;
	reg trig_filter_ovf_flag_clear;

	// Outputs
	wire [15:0] filter_out;
	wire ro_filter_ovf_flag;

	filter_round_truncate uut (
		.clk(clk), 
		.rstb(rstb), 
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
		rstb = 0;
		acc_in = 0;
		rf_sat = 0;
		rf_shift = 0;
		
		#100;
		rstb = 1;
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

