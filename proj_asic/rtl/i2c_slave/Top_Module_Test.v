// Verilog test fixture created from schematic C:\Users\formanw2\Downloads\i2c_Top_Blcok\i2c_Top_Blcok\i2c_Top_Block.sch - Wed Nov 11 10:05:16 2015

`timescale 1ns / 1ps

module i2c_Top_Block_i2c_Top_Block_sch_tb();

// Inputs
   reg [2:0] i2c_addr_bits;
   reg Clock;
   reg Reset;
   reg i2c_SCL;
   reg [7:0] i2c_rdata;
   reg i2c_xfc_read;
   reg i2c_SDA_in;

// Output
   wire i2c_op;
   wire i2c_xfc;
   wire [10:0] i2c_addr_out;
   wire [7:0] i2c_data_out;
   wire i2c_SDA_out;

// Bidirs

// Instantiate the UUT
   i2c_Top_Block UUT (
		.i2c_addr_bits(i2c_addr_bits), 
		.i2c_op(i2c_op), 
		.i2c_xfc(i2c_xfc), 
		.i2c_addr_out(i2c_addr_out), 
		.i2c_data_out(i2c_data_out), 
		.Clock(Clock), 
		.Reset(Reset), 
		.i2c_SDA_out(i2c_SDA_out), 
		.i2c_SCL(i2c_SCL), 
		.i2c_rdata(i2c_rdata), 
		.i2c_xfc_read(i2c_xfc_read), 
		.i2c_SDA_in(i2c_SDA_in)
   );
// Initialize Inputs
   //`ifdef auto_init
       initial begin
		i2c_addr_bits = 0;
		Clock = 0;
		Reset = 0;
		i2c_SCL = 0;
		i2c_rdata = 0;
		i2c_xfc_read = 0;
		i2c_SDA_in = 0;
   //`endif


		// Wait 100 ns for global Reset to finish
		#100;
      		end
		
		always #50 Clock = !Clock;
		always #1250 i2c_SCL = !i2c_SCL;
		//always #200 i2c_SDA_in = !i2c_SDA_in;
		
		
		initial begin
		i2c_SCL = 1;
		i2c_SDA_in = 1;
		i2c_addr_bits = 3'b101;
		Reset = 1;
		#10
		Reset = 0;
		#10
		Reset = 1;
		
		#3225
		i2c_SDA_in = 0; //Addr Start
		#1500
		i2c_SDA_in = 1;
		#2500 
		i2c_SDA_in = 0;
		#2500
		i2c_SDA_in = 1;
		#2500 
		i2c_SDA_in = 0;
		#2500
		i2c_SDA_in = 1;
		#2500 
		i2c_SDA_in = 0;
		#2500
		i2c_SDA_in = 1;
		#2500 
		i2c_SDA_in = 1; //RW Bit
		#2500
		i2c_SDA_in = 1; //nothing
		#2500 
		i2c_SDA_in = 0;	//Daat addr MSB
		#2500
		i2c_SDA_in = 1;
		#2500 
		i2c_SDA_in = 0;
		#2500
		i2c_SDA_in = 1;
		#2500 
		i2c_SDA_in = 0;
		#2500
		i2c_SDA_in = 1;
		#2500 
		i2c_SDA_in = 0;
		#2500
		i2c_SDA_in = 1;
		#2500 
		i2c_SDA_in = 0;
		#2500
		i2c_SDA_in = 1;
		#2500 
		i2c_SDA_in = 0;	//Data Addr LSB
		#2500
		i2c_SDA_in = 1;	//nothing
		#2500 
		i2c_SDA_in = 1;	//Data MSB
		#2500
		i2c_SDA_in = 1;
		#2500 
		i2c_SDA_in = 1;
		#2500
		i2c_SDA_in = 1;
		#2500 
		i2c_SDA_in = 1;
		#2500
		i2c_SDA_in = 1;
		#2500 
		i2c_SDA_in = 1;
		#2500
		i2c_SDA_in = 1;  //Data LSB
		#2500 
		i2c_SDA_in = 0;	//nothing
		#2500
		i2c_SDA_in = 0;	//Data MSB
		#2500 
		i2c_SDA_in = 0;
		#2500
		i2c_SDA_in = 0;
		#2500 
		i2c_SDA_in = 0;
		#2500
		i2c_SDA_in = 0;
		#2500 
		i2c_SDA_in = 0;
		#2500
		i2c_SDA_in = 0;
		#2500 
		i2c_SDA_in = 0;	//Data LSB
		#2500
		i2c_SDA_in = 1;	//nothing
		#2500 
		i2c_SDA_in = 1;	//Data MSB
		#2500
		i2c_SDA_in = 1;
		#2500 
		i2c_SDA_in = 1;
		#2500
		i2c_SDA_in = 1;
		#2500 
		i2c_SDA_in = 0;
		#2500
		i2c_SDA_in = 0;
		#2500 
		i2c_SDA_in = 0;
		#2500
		i2c_SDA_in = 0;	//Data LSB
		#2500 
		i2c_SDA_in = 0;	//nothing
		#2500
		i2c_SDA_in = 1;	//Data MSB
		#2500 
		i2c_SDA_in = 0;
		#2500
		i2c_SDA_in = 1;


		
		#100				//Random Reset press
		Reset = 0;
		#10
		Reset = 1;		//Reset unpress
		
		#100
		i2c_rdata = 8'b01010101;
		#100
		i2c_xfc_read = 1;
		// Add stimulus here

	end
      
endmodule


