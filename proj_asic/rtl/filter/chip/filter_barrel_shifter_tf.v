`timescale 1ns / 1ps

module filter_barrel_shifter_tf;

	// Inputs
	reg [39:0] input_signal;
	reg [2:0] sel_shift;

	// Outputs
	wire [39:0] output_signal;

	// Instantiate the Unit Under Test (UUT)
	filter_barrel_shifter uut (
		.input_signal(input_signal), 
		.sel_shift(sel_shift), 
		.output_signal(output_signal)
	);

	initial begin
		// Initialize Inputs
		input_signal = 40'b0000000000000000000000000000111111111111;
		sel_shift = 0;
		// Wait 100 ns for global reset to finish
			#50;
			sel_shift = 3'b000;
			#50;
			sel_shift = 3'b001;
			#50;
			sel_shift = 3'b010;
			#50;
			sel_shift = 3'b011;
			#50;
			sel_shift = 3'b100;
			#50;
			sel_shift = 3'b101;
			#50;
			sel_shift = 3'b110;
			#50;
			sel_shift = 3'b111;
		   #50 $finish;
		  
		  
		// Add stimulus here

	end
      
endmodule

