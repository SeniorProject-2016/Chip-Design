`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:41:59 01/13/2016
// Design Name:   Serializer
// Module Name:   H:/Senior Project/current 1-11-16/i2c_Top_Blcok_11-11-2015/i2c_Top_Blcok_11-11-2015/Serializer_Test_1_13_2016.v
// Project Name:  i2c_Top_Blcok
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Serializer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Serializer_Test_1_13_2016;

	// Inputs
	reg i2c_scl;
	reg i2c_sda;
	reg i2c_ack;
	reg Clock;
	reg reset;
	reg [7:0] i2c_rdata;
	reg i2c_xfc_read;
	reg stop_in;

	// Outputs
	wire i2c_sda_out;

	// Instantiate the Unit Under Test (UUT)
	Serializer uut (
		.i2c_scl(i2c_scl), 
		.i2c_sda(i2c_sda), 
		.i2c_sda_out(i2c_sda_out), 
		.i2c_ack(i2c_ack), 
		.Clock(Clock), 
		.reset(reset), 
		.i2c_rdata(i2c_rdata), 
		.i2c_xfc_read(i2c_xfc_read), 
		.stop_in(stop_in)
	);

	initial begin
		// Initialize Inputs
		i2c_scl = 0;
		i2c_sda = 0;
		i2c_ack = 0;
		Clock = 0;
		reset = 0;
		i2c_rdata = 0;
		i2c_xfc_read = 0;
		stop_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
      end 
		// Add stimulus here
		always #50 Clock = !Clock;
		always #1250 i2c_scl = !i2c_scl;
		
		initial begin
		
		reset = 1'b1;
		#100;
		reset = 1'b0;
		#100
		reset = 1'b1;
		#2450
		i2c_ack = 1'b1;
		#2500
		i2c_ack = 1'b0;
		#5000
		reset = 1'b0;
		#100
		reset = 1'b1;
		
		
		#80
		i2c_ack = 1'b1;
		#10
		i2c_rdata = 8'b01010111;
		#10
		i2c_xfc_read = 1'b1;
		#100
		i2c_xfc_read = 1'b0;
		#2420
		i2c_ack = 1'b0;
		#80000
		reset = 1'b0;
		#100
		reset = 1'b1;
		
		
	end
      
endmodule

