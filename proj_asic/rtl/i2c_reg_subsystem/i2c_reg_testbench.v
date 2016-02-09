`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:45:57 02/02/2016
// Design Name:   i2c_reg_test
// Module Name:   H:/GitHub/Chip-Design/proj_asic/rtl/i2c_reg_test/i2c_reg_testbench.v
// Project Name:  i2c_reg_test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: i2c_reg_test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module i2c_reg_testbench;

	// Inputs
	reg clk;
	reg reset;
	reg i2c_scl;
	reg i2c_sda_in;
	reg [2:0] i2c_addr_bits;

	// Outputs
	wire i2c_sda_out;

	// Instantiate the Unit Under Test (UUT)
	i2c_reg_test uut (
		.clk(clk), 
		.reset(reset), 
		.i2c_scl(i2c_scl), 
		.i2c_sda_in(i2c_sda_in), 
		.i2c_sda_out(i2c_sda_out), 
		.i2c_addr_bits(i2c_addr_bits)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		i2c_scl = 0;
		i2c_sda_in = 0;
		i2c_addr_bits = 3'b010;

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
		i2c_sda_in = 0; //RW Bit
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
		//optional register block response
		#80
		//i2c_ack = 1'b1;
		//#10
		//i2c_rdata = 8'b01010111;
		//#10
		//i2c_xfc_read = 1'b1;
		//#100
		//i2c_xfc_read = 1'b0;
		//#2420
		//i2c_ack = 1'b0;
		#80000
		reset = 1'b0;
		#100
		reset = 1'b1;
		//end register block response
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









