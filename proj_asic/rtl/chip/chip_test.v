`timescale 1ns / 1ps
`define N 11 // number of test elements
//////////////////////////////////////////////////////////////////////////////////
// Module Name:             chip_test.v
// Create Date:             1/19/2016
// Last Modification:       1/19/2016
// Author:                  Zachary Nelson
//
//////////////////////////////////////////////////////////////////////////////////

module chip_test;

	// Inputs
	reg clk;
	reg rst_n;
	reg i2si_sck;
	reg i2si_ws;
	reg i2si_sd;
	reg [2:0] i2c_addr_bits;
	reg i2c_scl;
	reg i2c_sda_in;

	// Outputs
	wire i2so_sck;
	wire i2so_ws;
	wire i2so_sd;
	wire i2c_sda_out;
    
    // Internal Variables
    reg [15:0]                      test_data [`N-1:0] [0:1];                                        // [Bits Per Word] test_data [# of entities in test] [Left/Right]

	// Instantiate the Unit Under Test (UUT)
	chip uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.i2si_sck(i2si_sck), 
		.i2si_ws(i2si_ws), 
		.i2si_sd(i2si_sd), 
		.i2so_sck(i2so_sck), 
		.i2so_ws(i2so_ws), 
		.i2so_sd(i2so_sd), 
		.i2c_addr_bits(i2c_addr_bits), 
		.i2c_scl(i2c_scl), 
		.i2c_sda_in(i2c_sda_in), 
		.i2c_sda_out(i2c_sda_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;
		i2si_sck = 0;
		i2si_ws = 0;
		i2si_sd = 0;
		i2c_addr_bits = 0;
		i2c_scl = 0;
		i2c_sda_in = 0;


        // Test Data            
        test_data [0] [0] = 16'hAAAA;                                                                                   
        test_data [0] [1] = 16'hFFFF;                                                                                           
        test_data [1] [0] = 16'hAAAA;                                                                           
        test_data [1] [1] = 16'hCCCC;                                                                                                       
        test_data [2] [0] = 16'hCDD7;                                                                                                   
        test_data [2] [1] = 16'hBABA;                                                                                                   
        test_data [3] [0] = 16'h4444;                                                                                   
        test_data [3] [1] = 16'hAAAA;                                                                               
        test_data [4] [0] = 16'h7398;                                                                                           
        test_data [4] [1] = 16'hFFDD;                                                                               
        test_data [5] [0] = 16'h1111;                                                                           
        test_data [5] [1] = 16'h5982;                                                                               
        test_data [6] [0] = 16'h0001;                                                                       
        test_data [6] [1] = 16'hFFFF;                                                                               
        test_data [7] [0] = 16'h1478;                                                                               
        test_data [7] [1] = 16'hA3B9;                                                                                                   
        test_data [8] [0] = 16'hF8D5;                                                                                   
        test_data [8] [1] = 16'hD55A;                                                                                   
        test_data [9] [0] = 16'h99C5;                                                                           
        test_data [9] [1] = 16'h7435;                                                                                               
        test_data [10] [0] = 16'h69D9;                                                              
        test_data [10] [1] = 16'hABCD;

	end
      
endmodule

