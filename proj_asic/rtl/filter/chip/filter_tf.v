`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:38:05 11/10/2015
// Design Name:   filter
// Module Name:   E:/chip/chip/filter_tf.v
// Project Name:  chip
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: filter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module filter_tf;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] aud_in;
	reg aud_in_rts;
	reg aud_out_rtr;

	// Outputs
	wire aud_in_rtr;
	wire [31:0] aud_out;
	wire aud_out_rts;

	// Instantiate the Unit Under Test (UUT)
	filter uut (
		.clk(clk), 
		.rst(rst), 
		.aud_in(aud_in), 
		.aud_in_rts(aud_in_rts), 
		.aud_in_rtr(aud_in_rtr), 
		.aud_out(aud_out), 
		.aud_out_rts(aud_out_rts), 
		.aud_out_rtr(aud_out_rtr)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		aud_in = 0;
		aud_in_rts = 0;
		aud_out_rtr = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 0; 
		
		aud_in_rts = 1;
		aud_in = 23;
		
		
        
		// Add stimulus here

	end
	
			
	always
	begin
		forever #5 clk = ~clk;
	end
      
endmodule

