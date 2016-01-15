`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:55:37 01/11/2016
// Design Name:   Deserializer
// Module Name:   H:/Senior Project/current 1-11-16/i2c_Top_Blcok_11-11-2015/i2c_Top_Blcok_11-11-2015/deserializer_test_1_11_2016.v
// Project Name:  i2c_Top_Blcok
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Deserializer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module deserializer_test_1_11_2016;

	// Inputs
	reg Clock;
	reg Reset;
	reg i2c_sda_raw;
	reg i2c_scl_raw;
	reg [2:0] i2c_addr_bits;

	// Outputs
	wire i2c_RW;
	wire [10:0] i2c_addr;
	wire addr_xfc;
	wire i2c_ack;
	wire data_ack;
	wire [7:0] serial_data;
	wire stop_out;

	// Instantiate the Unit Under Test (UUT)
	Deserializer uut (
		.Clock(Clock), 
		.Reset(Reset), 
		.i2c_sda_raw(i2c_sda_raw), 
		.i2c_scl_raw(i2c_scl_raw), 
		.i2c_addr_bits(i2c_addr_bits), 
		.i2c_RW(i2c_RW), 
		.i2c_addr(i2c_addr), 
		.addr_xfc(addr_xfc), 
		.i2c_ack(i2c_ack), 
		.data_ack(data_ack), 
		.serial_data(serial_data), 
		.stop_out(stop_out)
	);
// Initialize Inputs
   //`ifdef auto_init
       initial begin
		i2c_sda_raw = 0;
		i2c_scl_raw = 0;
		i2c_addr_bits = 0;
		Clock = 0;
		Reset = 0;
   //`endif

		// Wait 100 ns for global Reset to finish
		#100;
      		end
		
		always #50 Clock = !Clock;
		always #1250 i2c_scl_raw = !i2c_scl_raw;
		//always #200 i2c_sda = !i2c_sda;
		
		
		initial begin
		Reset = 1;
		#200
		Reset = 0;
		#100
		Reset = 1;
		
		i2c_scl_raw = 1;
		i2c_sda_raw = 1;
		i2c_addr_bits = 3'b101;
		
		#2825
		i2c_sda_raw = 0; //Start Condition
		#1500
		i2c_sda_raw = 1; //Slave Address Start
		#2500 
		i2c_sda_raw = 0;
		#2500
		i2c_sda_raw = 1;
		#2500 
		i2c_sda_raw = 0;
		#2500
		i2c_sda_raw = 1;
		#2500 
		i2c_sda_raw = 0;
		#2500
		i2c_sda_raw = 1;
		#2500 
		i2c_sda_raw = 1; //RW Bit
		#2500
		i2c_sda_raw = 1; //nothing
		#2500 
		i2c_sda_raw = 0;	//Data addr MSB [10]
		#2500
		i2c_sda_raw = 1;
		#2500 
		i2c_sda_raw = 0;
		#2500
		i2c_sda_raw = 1;
		#2500 
		i2c_sda_raw = 0;
		#2500
		i2c_sda_raw = 1;
		#2500 
		i2c_sda_raw = 0;
		#2500
		i2c_sda_raw = 1;	//Data Addr LSB [3]
		#2500 
		i2c_sda_raw = 0;	//nothing
		#2500
		i2c_sda_raw = 1;	//Data MSB	[2]
		#2500 
		i2c_sda_raw = 0;	
		#2500
		i2c_sda_raw = 1;	//Data LSB	[0]
		#2500 
		i2c_sda_raw = 1;	//Data Addr Part 2 MSB extra
		#2500
		i2c_sda_raw = 1;
		#2500 
		i2c_sda_raw = 1;
		#2500
		i2c_sda_raw = 1;
		#2500 
		i2c_sda_raw = 1;   //Data Addr Part 2 LSB extra
		#2500
		i2c_sda_raw = 1;	//nothing
		#2500 
		i2c_sda_raw = 1;	//Data MSB
		#2500
		i2c_sda_raw = 1;  
		#2500 
		i2c_sda_raw = 0;	
		#2500
		i2c_sda_raw = 0;	
		#2500 
		i2c_sda_raw = 0;
		#2500
		i2c_sda_raw = 0;
		#2500 
		i2c_sda_raw = 0;
		#2500
		i2c_sda_raw = 0;	//Data LSB
		#2500 
		i2c_sda_raw = 0;	//nothing
		#2500
		i2c_sda_raw = 0;	//Data MSB
		#2500 
		i2c_sda_raw = 0;	
		#2500
		i2c_sda_raw = 1;	
		#2500 
		i2c_sda_raw = 1;	
		#2500
		i2c_sda_raw = 1;
		#2500 
		i2c_sda_raw = 1;
		#2500
		i2c_sda_raw = 1;
		#2500 
		i2c_sda_raw = 0;	//Data LSB
		#2500
		i2c_sda_raw = 0;	//nothing
		#2500 
		i2c_sda_raw = 0;	//Data MSB
		#2500
		i2c_sda_raw = 0;	
		#2500 
		i2c_sda_raw = 0;	
		#2500
		i2c_sda_raw = 1;	
		#2500 
		i2c_sda_raw = 0;
		#2500
		i2c_sda_raw = 1;


		
		#1000				//Random Reset press
		Reset = 0;
		#10
		Reset = 1;		//Reset unpress
		// Add stimulus here

	end
      
endmodule


