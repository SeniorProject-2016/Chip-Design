//////////////////////////////////////////////////////////////////////////////////
// Module Name:             filter_storage_tf.v
// Create Date:             11/3/2015 
// Last Modification:       3/25/2016
// Author:                  Dhruvit Naik
// Description:             ????
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps


module filter_storage_tf;

	// Inputs
	reg                             clk;
	reg                             rst_n;
	reg                             wren;
	reg             [ 8:0]          wrptr;
	reg             [15:0]          wrdata;
	reg                             rden;
	reg             [ 8:0]          rdptr;

	// Outputs
	wire            [15:0]          rddata;

	// Instantiate the Unit Under Test (UUT)
	filter_storage instance_name (
    .clk(clk), 
    .rst_n(rst_n), 
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
		rst_n = 0;
		// Wait 100 ns for global reset to finish
		#100;
		rst_n = 1;
		wren = 1; 
		wrdata = 32'hAAAAAAAA;
		
		#100;
		wrptr = wrptr + 513;
		wrdata = 32'hBBBBBBBB;
		#100;
		wren = 0; 
		rden = 1; 
		rdptr = 1; 



	end
	
		
	always
	begin
		forever #5 clk = ~clk;
	end
      
endmodule

