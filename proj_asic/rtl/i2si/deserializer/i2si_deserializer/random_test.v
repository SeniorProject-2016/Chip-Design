`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:47:46 09/23/2015
// Design Name:   i2si_deserializer
// Module Name:   C:/Users/kevin/Documents/GitHub/Chip-Design/proj_asic/rtl/deserializer/i2si_deserializer/random_test.v
// Project Name:  i2si_deserializer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: i2si_deserializer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module random_test;

	// Inputs
	reg clk;
	reg rst;
	reg i2si_sck;
	reg i2si_ws;
	reg i2si_sd;
	reg rf_i2si_en;
	reg i2si_sckdl;

	// Outputs
	wire [15:0] i2si_lft;
	wire [15:0] i2si_rgt;
	wire i2si_xfc;
	wire i2si_sck_transition;

	// Instantiate the Unit Under Test (UUT)
	i2si_deserializer uut (
		.clk(clk), 
		.rst(rst), 
		.i2si_sck(i2si_sck), 
		.i2si_ws(i2si_ws), 
		.i2si_sd(i2si_sd), 
		.rf_i2si_en(rf_i2si_en), 
		.i2si_lft(i2si_lft), 
		.i2si_rgt(i2si_rgt), 
		.i2si_xfc(i2si_xfc), 
		.i2si_sck_transition(i2si_sck_transition), 
		.i2si_sckdl(i2si_sckdl)
	);

	initial
	begin
		clk = 0;
		rst = 0;
		i2si_sck = 0;
		i2si_ws = 0;
		i2si_sd = 0;
		i2si_sckdl = 0;
	end
	
	always
	begin
	forever
		#5 clk = ~clk;
	end
	
	always
	begin
	forever
		#312.5 i2si_sck = ~i2si_sck;
	end
	  
	always
	begin
	#50
	forever
		#312.5 i2si_sckdl = ~i2si_sckdl;
	end
	
	initial
	begin
	#312.5 i2si_sd = 1;
	#625 i2si_sd = 0;
	#625 i2si_sd = 1;
	#625 i2si_sd = 0;
	#625 i2si_sd = 1;
	#625 i2si_sd = 0;
	#625 i2si_sd = 1;
	#625 i2si_sd = 0;
	#625 i2si_sd = 1;
	#625 i2si_sd = 0;
	#625 i2si_sd = 1;
	#625 i2si_sd = 0;
	#625 i2si_sd = 1;
	#625 i2si_sd = 0;
	#625 i2si_sd = 1;
	#625 i2si_sd = 0;
	rst = 1;
	end
	
	initial
	begin
	#312.5 i2si_ws = 0;
	#10000 i2si_ws = 1;
	#10000 i2si_ws = 0;
	#10000 i2si_ws = 1;
	#10000 i2si_ws = 1;
	#10000 i2si_ws = 1;
	#10000 i2si_ws = 1;
	#10000 i2si_ws = 0;
	#10000 i2si_ws = 1;
	end
      
endmodule

