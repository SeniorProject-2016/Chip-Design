`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:24:54 11/10/2015
// Design Name:   filter_barrel_shifter
// Module Name:   E:/chip/chip/filter_barrel_shifter_tf.v
// Project Name:  chip
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: filter_barrel_shifter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module filter_barrel_shifter_tf;

	// Inputs
	reg [31:0] input_signal;
	reg [5:0] sel_shift;

	// Outputs
	wire [31:0] output_signal;

	// Instantiate the Unit Under Test (UUT)
	filter_barrel_shifter uut (
		.input_signal(input_signal), 
		.sel_shift(sel_shift), 
		.output_signal(output_signal)
	);

	initial begin
		// Initialize Inputs
		input_signal = 32'hABCD1234;
		sel_shift = 0;
		// Wait 100 ns for global reset to finish
			#50;
			sel_shift = 4;
			#50;
			sel_shift = 8;
			#50;
			sel_shift = 12;
			#50;
			sel_shift = 16;
			#50;
			sel_shift = 20;
			#50;
			sel_shift = 24;
			#50;
			sel_shift = 28;
			#50;
			sel_shift = 32;
		   #50 $finish;
		  
		  
		// Add stimulus here

	end
      
endmodule

