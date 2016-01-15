`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:33:46 01/14/2016
// Design Name:   i2c_Top_Level
// Module Name:   H:/Senior Project/current 1-11-16/i2c_Top_Blcok_11-11-2015/i2c_Top_Blcok_1-13-2016/i2c_top_test_1_14_2016.v
// Project Name:  i2c_Top_Blcok
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: i2c_Top_Level
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module i2c_top_test_1_14_2016;

	// Inputs
	reg [2:0] i2c_addr_bits;
	reg i2c_sda_in;
	reg i2c_scl;
	reg [7:0] i2c_rdata;
	reg i2c_xfc_read;
	reg clk;
	reg reset;

	// Outputs
	wire i2c_op;
	wire i2c_xfc_write;
	wire [10:0] i2c_wraddr;
	wire [7:0] i2c_wdata;
	wire i2c_sda_out;

	// Instantiate the Unit Under Test (UUT)
	i2c uut (
		.i2c_addr_bits(i2c_addr_bits), 
		.i2c_sda_in(i2c_sda_in), 
		.i2c_scl(i2c_scl), 
		.i2c_op(i2c_op), 
		.i2c_xfc_write(i2c_xfc_write), 
		.i2c_wraddr(i2c_wraddr), 
		.i2c_wdata(i2c_wdata), 
		.i2c_rdata(i2c_rdata), 
		.i2c_xfc_read(i2c_xfc_read), 
		.i2c_sda_out(i2c_sda_out), 
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		i2c_addr_bits = 0;
		i2c_sda_in = 0;
		i2c_scl = 0;
		i2c_rdata = 0;
		i2c_xfc_read = 0;
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
      		end
		
		always #50 clk = !clk;
		always #1250 i2c_scl = !i2c_scl;
		//always #200 i2c_sda = !i2c_sda;
		
		
		initial begin
		reset = 1;
		#200
		reset = 0;
		#100
		reset = 1;
		
		i2c_scl = 1;
		i2c_sda_in = 1;
		i2c_addr_bits = 3'b101;
		
		#2825
		i2c_sda_in = 0; //Start Condition
		#1500
		i2c_sda_in = 1; //Slave Address Start
		#2500 
		i2c_sda_in = 0;
		#2500
		i2c_sda_in = 1;
		#2500 
		i2c_sda_in = 0;
		#2500
		i2c_sda_in = 1;
		#2500 
		i2c_sda_in = 0;
		#2500
		i2c_sda_in = 1;
		#2500 
		i2c_sda_in = 1; //RW Bit
		#2500
		i2c_sda_in = 1; //nothing
		#2500 
		i2c_sda_in = 0;	//Data addr MSB [10]
		#2500
		i2c_sda_in = 1;
		#2500 
		i2c_sda_in = 0;
		#2500
		i2c_sda_in = 1;
		#2500 
		i2c_sda_in = 0;
		#2500
		i2c_sda_in = 1;
		#2500 
		i2c_sda_in = 0;
		#2500
		i2c_sda_in = 1;	//Data Addr LSB [3]
		#2500 
		i2c_sda_in = 0;	//nothing
		#2500
		i2c_sda_in = 1;	//Data MSB	[2]
		#2500 
		i2c_sda_in = 0;	
		#2500
		i2c_sda_in = 1;	//Data LSB	[0]
		#2500 
		i2c_sda_in = 1;	//Data Addr Part 2 MSB extra
		#2500
		i2c_sda_in = 1;
		#2500 
		i2c_sda_in = 1;
		#2500
		i2c_sda_in = 1;
		#2500 
		i2c_sda_in = 1;   //Data Addr Part 2 LSB extra
		#2500
		i2c_sda_in = 1;	//nothing
		#2500 
		i2c_sda_in = 1;	//Data MSB
		#2500
		i2c_sda_in = 1;  
		#2500 
		i2c_sda_in = 0;	
		#2500
		i2c_sda_in = 0;	
		#2500 
		i2c_sda_in = 0;
		#2500
		i2c_sda_in = 0;
		#2500 
		i2c_sda_in = 0;
		#2500
		i2c_sda_in = 0;	//Data LSB
		#2500 
		i2c_sda_in = 0;	//nothing
		#2500
		i2c_sda_in = 0;	//Data MSB
		#2500 
		i2c_sda_in = 0;	
		#2500
		i2c_sda_in = 1;	
		#2500 
		i2c_sda_in = 1;	
		#2500
		i2c_sda_in = 1;
		#2500 
		i2c_sda_in = 1;
		#2500
		i2c_sda_in = 1;
		#2500 
		i2c_sda_in = 0;	//Data LSB
		#2500
		i2c_sda_in = 0;	//nothing
		#2500 
		i2c_sda_in = 0;	//Data MSB
		#2500
		i2c_sda_in = 0;	
		#2500 
		i2c_sda_in = 0;	
		#2500
		i2c_sda_in = 1;	
		#2500 
		i2c_sda_in = 0;
		#2500
		i2c_sda_in = 1;


		
		#1000				//Random reset press
		reset = 0;
		#10
		reset = 1;		//reset unpress
		// Add stimulus here

	end
      
endmodule




