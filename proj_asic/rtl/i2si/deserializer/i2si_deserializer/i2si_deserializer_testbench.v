`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:42:19 10/06/2015
// Design Name:   i2si_deserializer
// Module Name:   C:/Users/kevin/Documents/GitHub/Chip-Design/proj_asic/rtl/i2si/deserializer/i2si_deserializer/i2si_deserializer_testbench.v
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

module i2si_deserializer_testbench;

	// Inputs
	reg clk;
	reg rst;
	reg i2si_sck;
	reg i2si_ws;
	reg i2si_sd;
	reg rf_i2si_en;
	
	reg[0:10][0:1][15:0]		test_data;

	// Outputs
	wire [15:0] i2si_lft;
	wire [15:0] i2si_rgt;
	wire i2si_xfc;

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
		.i2si_xfc(i2si_xfc)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		i2si_sck = 0;
		i2si_ws = 0;
		i2si_sd = 0;
		rf_i2si_en = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	
	always
	begin
		count = 0;
	forever
		begin
			#5 clk = ~clk;
			count = count + 1;
		end
	end
	
	always
	begin
	forever
		#312.5 i2si_sck = ~i2si_sck;
	end
      
endmodule

