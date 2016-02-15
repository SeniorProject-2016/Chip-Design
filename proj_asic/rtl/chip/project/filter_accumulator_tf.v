`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:44:47 11/03/2015
// Design Name:   filter_accumulator
// Module Name:   C:/Users/Dhruvit/Dropbox/TCNJ/Senior Project/rtl/chip/filter_accumulator_tf.v
// Project Name:  chip
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: filter_accumulator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module filter_accumulator_tf;

	// Inputs
	reg clk;
	reg rstb;
	reg enable;
	reg load;
	reg [15:0] D;
	// Outputs
	wire [19:0] Q;

	// Instantiate the Unit Under Test (UUT)
	filter_accumulator uut (
    .clk(clk), 
    .rstb(rstb), 
    .enable(enable), 
    .load(load), 
    .D(D), 
    .Q(Q)
    );


	initial begin
		// Initialize Inputs
		clk = 0;
		rstb = 0;
		enable = 0;
		load = 0;
		
		#100; 
		rstb = 1;
		D = 16'h000A;
		enable = 1;
		load = 1;
		#10; 
		load = 0;
		D = 16'hFFFF; 
		#10;
		D = 16'h0334; 
		#10;
		D = 16'hFFFF; 
		#10;
		D = 16'hAA44; 
		#100;
		enable = 0; 
		#100; 
		enable = 1; 
		load = 1; 
		D = 16'h0000;
		#100; 
		load=0;
		D = 16'h0001;
		#100;
		rstb = 0; 
	end
	
	always
	begin
		forever #5 clk = ~clk;
	end
      
endmodule

