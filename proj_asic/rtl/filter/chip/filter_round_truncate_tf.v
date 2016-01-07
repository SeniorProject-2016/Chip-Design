`timescale 1ns / 1ps

module filter_round_truncate_tf;

	// Inputs
	reg clk;
	reg rstb;
	reg final_state;
	reg [39:0] acc_in;
	reg rf_sat;
	reg [2:0] rf_shift;
	reg trig_out_clear;

	// Outputs
	wire [15:0] filter_out;
	wire overflow_flag;

	// Instantiate the Unit Under Test (UUT)
	filter_round_truncate uut (
		.clk(clk), 
		.rstb(rstb), 
		.final_state(final_state), 
		.acc_in(acc_in), 
		.rf_sat(rf_sat), 
		.rf_shift(rf_shift), 
		.trig_out_clear(trig_out_clear), 
		.filter_out(filter_out), 
		.overflow_flag(overflow_flag)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rstb = 0;
		final_state = 0;
		acc_in = 0;
		rf_sat = 0;
		rf_shift = 0;
		trig_out_clear = 0;

		// Wait 100 ns for global reset to finish
		#100;
      acc_in = 40'h12D8A2034B; 
		
		// Add stimulus here

	end
	
	always
	begin
		forever #5 clk = ~clk;
	end
      
endmodule

