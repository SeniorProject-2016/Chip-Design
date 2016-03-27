//////////////////////////////////////////////////////////////////////////////////
// Module Name:             filter_accumulator_tf.v
// Create Date:             11/3/2015
// Last Modification:       3/25/2016
// Author:                  Dhruvit Naik
// Description:             ????
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps


module filter_accumulator_tf;

	// Inputs
	reg                             clk;
	reg                             rst_n;
	reg                             enable;
	reg                             load;
	reg             [15:0]          D;
    
    
	// Outputs
	wire            [19:0]          Q;

	// Instantiate the Unit Under Test (UUT)
	filter_accumulator uut (
    .clk(clk), 
    .rst_n(rst_n), 
    .enable(enable), 
    .load(load), 
    .D(D), 
    .Q(Q)
    );


	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;
		enable = 0;
		load = 0;
		
		#100; 
		rst_n = 1;
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
		rst_n = 0; 
	end
	
	always
	begin
		forever #5 clk = ~clk;
	end
      
endmodule

