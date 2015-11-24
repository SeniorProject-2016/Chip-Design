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
	reg rstb;
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
    .rstb(rstb), 
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
		rstb = 0;
		// Wait 100 ns for global reset to finish
		#100;
		rstb = 1;


	end
	
		
	always
	begin
		forever #5 clk = ~clk;
	end
      
endmodule

