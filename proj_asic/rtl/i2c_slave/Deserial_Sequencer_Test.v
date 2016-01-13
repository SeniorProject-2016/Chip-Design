// Verilog test fixture created from schematic C:\Users\formanw2\Downloads\i2c_slave 11_4_15 (2)\i2c_slave 11_4_15\i2c_Top_Blcok\i2c_Top_Block.sch - Tue Nov 10 17:31:33 2015

`timescale 1ns / 1ps

module i2c_Top_Block_i2c_Top_Block_sch_tb();

// Inputs
   reg i2c_SDA;
   reg i2c_SCL;
   reg [2:0] i2c_addr_bits;
   reg Clock;
   reg Reset;

// Output
   wire i2c_op;
   wire i2c_xfc;
   wire [10:0] i2c_addr_out;
   wire [7:0] i2c_data_out;
   wire slave_ack;

// Bidirs

// Instantiate the UUT
   i2c_Top_Block UUT (
		.i2c_SDA(i2c_SDA), 
		.i2c_SCL(i2c_SCL), 
		.i2c_addr_bits(i2c_addr_bits), 
		.i2c_op(i2c_op), 
		.i2c_xfc(i2c_xfc), 
		.i2c_addr_out(i2c_addr_out), 
		.i2c_data_out(i2c_data_out), 
		.slave_ack(slave_ack), 
		.Clock(Clock), 
		.Reset(Reset)
   );
// Initialize Inputs
   //`ifdef auto_init
       initial begin
		i2c_SDA = 0;
		i2c_SCL = 0;
		i2c_addr_bits = 0;
		Clock = 0;
		Reset = 0;
   //`endif

		// Wait 100 ns for global Reset to finish
		#100;
      		end
		
		always #50 Clock = !Clock;
		always #1250 i2c_SCL = !i2c_SCL;
		//always #200 i2c_SDA = !i2c_SDA;
		
		
		initial begin
		i2c_SCL = 1;
		i2c_SDA = 1;
		i2c_addr_bits = 3'b101;
		Reset = 1;
		#10
		Reset = 0;
		#10
		Reset = 1;
		
		#3225
		i2c_SDA = 0; //Addr Start
		#1500
		i2c_SDA = 1;
		#2500 
		i2c_SDA = 0;
		#2500
		i2c_SDA = 1;
		#2500 
		i2c_SDA = 0;
		#2500
		i2c_SDA = 1;
		#2500 
		i2c_SDA = 0;
		#2500
		i2c_SDA = 1;
		#2500 
		i2c_SDA = 1; //RW Bit
		#2500
		i2c_SDA = 1; //nothing
		#2500 
		i2c_SDA = 0;	//Daat addr MSB
		#2500
		i2c_SDA = 1;
		#2500 
		i2c_SDA = 0;
		#2500
		i2c_SDA = 1;
		#2500 
		i2c_SDA = 0;
		#2500
		i2c_SDA = 1;
		#2500 
		i2c_SDA = 0;
		#2500
		i2c_SDA = 1;
		#2500 
		i2c_SDA = 0;
		#2500
		i2c_SDA = 1;
		#2500 
		i2c_SDA = 0;	//Data Addr LSB
		#2500
		i2c_SDA = 1;	//nothing
		#2500 
		i2c_SDA = 1;	//Data MSB
		#2500
		i2c_SDA = 1;
		#2500 
		i2c_SDA = 1;
		#2500
		i2c_SDA = 1;
		#2500 
		i2c_SDA = 1;
		#2500
		i2c_SDA = 1;
		#2500 
		i2c_SDA = 1;
		#2500
		i2c_SDA = 1;  //Data LSB
		#2500 
		i2c_SDA = 0;	//nothing
		#2500
		i2c_SDA = 0;	//Data MSB
		#2500 
		i2c_SDA = 0;
		#2500
		i2c_SDA = 0;
		#2500 
		i2c_SDA = 0;
		#2500
		i2c_SDA = 0;
		#2500 
		i2c_SDA = 0;
		#2500
		i2c_SDA = 0;
		#2500 
		i2c_SDA = 0;	//Data LSB
		#2500
		i2c_SDA = 1;	//nothing
		#2500 
		i2c_SDA = 1;	//Data MSB
		#2500
		i2c_SDA = 1;
		#2500 
		i2c_SDA = 1;
		#2500
		i2c_SDA = 1;
		#2500 
		i2c_SDA = 0;
		#2500
		i2c_SDA = 0;
		#2500 
		i2c_SDA = 0;
		#2500
		i2c_SDA = 0;	//Data LSB
		#2500 
		i2c_SDA = 0;	//nothing
		#2500
		i2c_SDA = 1;	//Data MSB
		#2500 
		i2c_SDA = 0;
		#2500
		i2c_SDA = 1;


		
		#100				//Random Reset press
		Reset = 0;
		#10
		Reset = 1;		//Reset unpress
		// Add stimulus here

	end
      
endmodule

