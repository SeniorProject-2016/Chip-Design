`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:23:58 01/13/2016
// Design Name:   Sequencer
// Module Name:   H:/Senior Project/current 1-11-16/i2c_Top_Blcok_11-11-2015/i2c_Top_Blcok_11-11-2015/Sequence-Test_1_13_2016.v
// Project Name:  i2c_Top_Blcok
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Sequencer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Sequence_Test_1_13_2016;

	// Inputs
	reg Clock;
	reg i2c_RW;
	reg [10:0] i2c_addr_in;
	reg [7:0] i2c_data_in;
	reg i2c_addr_ack;
	reg i2c_data_ack;
	reg reset;
	reg stop;

	// Outputs
	wire i2c_op;
	wire [10:0] i2c_addr_out;
	wire [7:0] i2c_data_out;
	wire i2c_xfc;

	// Instantiate the Unit Under Test (UUT)
	Sequencer uut (
		.Clock(Clock), 
		.i2c_RW(i2c_RW), 
		.i2c_op(i2c_op), 
		.i2c_addr_in(i2c_addr_in), 
		.i2c_addr_out(i2c_addr_out), 
		.i2c_data_in(i2c_data_in), 
		.i2c_data_out(i2c_data_out), 
		.i2c_addr_ack(i2c_addr_ack), 
		.i2c_data_ack(i2c_data_ack), 
		.i2c_xfc(i2c_xfc), 
		.reset(reset), 
		.stop(stop)
	);

	initial begin
		// Initialize Inputs
		Clock = 0;
		i2c_RW = 0;
		i2c_addr_in = 0;
		i2c_data_in = 0;
		i2c_addr_ack = 0;
		i2c_data_ack = 0;
		reset = 0;
		stop = 0;

		// Wait 100 ns for global reset to finish
		#100;
       end 
		// Add stimulus here
		always #5 Clock = !Clock;
		
		initial begin
		
		reset = 1'b1;
		#100;
		reset = 1'b0;
		#100
		reset = 1'b1;
		#100
		i2c_RW = 1;
		i2c_addr_in = 11'b00000000000;
		#200
		i2c_addr_ack = 1'b1;
		#100
		i2c_addr_ack = 1'b0;
		#200
		i2c_data_in = 8'b11111111;
		#100
		i2c_data_ack = 1'b1;
		#20
		i2c_data_ack = 1'b0;
		
		#200
		i2c_data_in = 8'b01010101;
		#100
		i2c_data_ack = 1'b1;
		#20
		i2c_data_ack = 1'b0;
		
		#200
		i2c_data_in = 8'b00000000;
		#100
		i2c_data_ack = 1'b1;
		#20
		i2c_data_ack = 1'b0;
		
		#200
		i2c_data_in = 8'b11110000;
		#100
		i2c_data_ack = 1'b1;
		#20
		i2c_data_ack = 1'b0;
		
		#200
		i2c_data_in = 8'b00110011;
		#100
		i2c_data_ack = 1'b1;
		#20
		i2c_data_ack = 1'b0;
		#300
		stop = 1'b1;
		#100
		stop = 1'b0;
		//new transaction
		#100
		i2c_RW = 0;
		i2c_addr_in = 11'b011001100110;
		#200
		i2c_addr_ack = 1'b1;
		#100
		i2c_addr_ack = 1'b0;
		#200
		i2c_data_in = 8'b11111111;
		#100
		i2c_data_ack = 1'b1;
		#20
		i2c_data_ack = 1'b0;
		
		#200
		i2c_data_in = 8'b01010101;
		#100
		i2c_data_ack = 1'b1;
		#20
		i2c_data_ack = 1'b0;
		
		#200
		i2c_data_in = 8'b00000000;
		#100
		i2c_data_ack = 1'b1;
		#20
		i2c_data_ack = 1'b0;
		
		#200
		i2c_data_in = 8'b11110000;
		#100
		i2c_data_ack = 1'b1;
		#20
		i2c_data_ack = 1'b0;
		
		#200
		i2c_data_in = 8'b00110011;
		#100
		i2c_data_ack = 1'b1;
		#20
		i2c_data_ack = 1'b0;
		#300
		stop = 1'b1;
		#100
		stop = 1'b0;
		
		
		
	end
      
endmodule

