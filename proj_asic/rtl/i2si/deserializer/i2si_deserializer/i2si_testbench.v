`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:32:04 09/15/2015
// Design Name:   i2si_deserializer
// Module Name:   C:/Users/kevin/Documents/GitHub/Chip-Design/proj_asic/rtl/deserializer/i2si_deserializer/i2si_testbench.v
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

module i2si_testbench;

	// UUT Inputs
	reg clk;
	reg i2si_sck;
	reg i2si_ws;
	reg i2si_sd;
	reg rf_i2si_en;
	reg rst;
	//wire rst;
	
	// UUT Outputs
	wire [15:0] i2si_lft;
	wire [15:0] i2si_rgt;
	wire i2si_xfc;
	
	reg [31:0] count;

	// Instantiate the Unit Under Test (UUT)
	i2si_deserializer uut (
		.clk(clk), 
		.rst(rst), 
		.rf_i2si_en(rf_i2si_en),
		.i2si_xfc(i2si_xfc),
		.i2si_sck(i2si_sck), 
		.i2si_ws(i2si_ws), 
		.i2si_sd(i2si_sd), 
		.i2si_lft(i2si_lft), 
		.i2si_rgt(i2si_rgt)
	);
	
	initial
	begin
		rst = 0;
		clk = 0;
		i2si_sck = 0;
		i2si_ws = 0;
		i2si_sd = 0;
		rf_i2si_en = 1;
		#300 rst = 1;
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

//	assign rst = (count < 5);
	
	always
	begin
	forever
		#312.5 i2si_sck = ~i2si_sck;
	end
	  
	
	always
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
	end
	
	always
	begin
	#312.5 i2si_ws = 0;
	#10000 i2si_ws = 1;
	/*#10000 i2si_ws = 0;
	#10000 i2si_ws = 1;
	#10000 i2si_ws = 1;
	#10000 i2si_ws = 1;
	#10000 i2si_ws = 1;
	#10000 i2si_ws = 0;
	#10000 i2si_ws = 1;*/
	end
	
endmodule

