`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:38:42 11/03/2015
// Design Name:   filter_storage
// Module Name:   C:/Users/Dhruvit/Dropbox/TCNJ/Senior Project/rtl/chip/filter_storage_tf.v
// Project Name:  chip
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: filter_storage
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module filter_storage_tf;

	// Inputs
	reg clk;
	reg wren;
	reg [9:0] wrptr;
	reg [31:0] wrdata;
	reg rden;
	reg [9:0] rdptr;

	// Outputs
	wire [31:0] rddata;

	// Instantiate the Unit Under Test (UUT)
		filter_storage instance_name (
    .clk(clk), 
    .wren(wren), 
    .wrptr(wrptr), 
    .wrdata(wrdata), 
    .rden(rden), 
    .rdptr(rdptr), 
    .rddata(rddata)
    );




	initial begin
		// Initialize Inputs
		clk = 0;
		wren = 0;
		wrptr = 0;
		wrdata = 0;
		rden = 0;
		rdptr = 0;
		wren = 0;
		// Wait 100 ns for global reset to finish
		#100;
		
		wren = 1; 
		wrdata = 1;
		wrptr = 1; 
		#15; wren = 0;
		#25; 
		wren = 1; 
		wrdata = 2;
		wrptr = 2; 
		#15; wren = 0;
		#25;
		wren = 1; 
		wrdata = 3;
		wrptr = 3; 
		#15; wren = 0;
		#25; 
		wren = 1; 
		wrdata = 4;
		wrptr = 4; 
		#15; wren = 0;
		#25;
		wren = 1; 
		wrdata = 5;
		wrptr = 5; 
		#15; wren = 0;
		#25;
		rden = 1; 
		#20; rdptr = 1;
		#20; rdptr = 2;
		#20; rdptr = 3;
		#20; rdptr = 4;
		#20; rdptr = 5;

	end
	
		
	always
	begin
		forever #5 clk = ~clk;
	end
      
endmodule

