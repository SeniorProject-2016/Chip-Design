`timescale 1ns / 1ps
`define N 11 // number of test elements

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:58:19 10/26/2015
// Design Name:   serializer
// Module Name:   C:/Users/kevin/Documents/GitHub/Chip-Design/proj_asic/rtl/i2so/serializer/serializer_test.v
// Project Name:  serializer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: serializer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module serializer_test;

	// Inputs
	reg clk;
	reg rst_n;
	reg rts;
	reg i2si_sck_transition;
    reg i2so_lft;
    reg i2so_rgt;
	//reg [15:0] i2so_lft [`N-1:0]; // [Bits Per Word] test_data [# of entities in test]
	//reg [15:0] i2so_rgt [`N-1:0]; // [Bits Per Word] test_data [# of entities in test]

	// Outputs
	wire i2so_sck;
	wire i2so_sd;
	wire i2so_ws;
	wire i2so_en;
	wire rtr;
    
    // Internal Variables
    //reg sck_d1; // serial clock delay
    //reg [31:0] count;
    //reg [31:0] sck_cnt; // serial clock counter
    //reg [31:0] bit_cnt; // bit number counter
    //reg lr_cnt; // left right counter
    //reg word_cnt; // word counter
    //reg [31:0] cyc_per_half_sck = 40; // about (100 MHz / 1.44 MHz)/2
    reg [31:0] bit_tc =  15; // number of bits in a word

	// Instantiate the Unit Under Test (UUT)
	serializer uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.rts(rts), 
		.i2si_sck_transition(i2si_sck_transition), 
		.i2so_sck(i2so_sck), 
		.i2so_sd(i2so_sd), 
		.i2so_ws(i2so_ws), 
		.i2so_en(i2so_en), 
		.i2so_lft(i2so_lft), 
		.i2so_rgt(i2so_rgt), 
		.rtr(rtr)
	);
    
    
initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;
		rts = 0;
		i2si_sck_transition = 0;
		i2so_lft = 0;
		i2so_rgt = 0;
        
		
		#694
		rst_n = 1;	
        
		

	end
    
    always
	begin
	forever
		begin
			#5 clk = ~clk;
		end
end
    
    //assign i2si_sd = test_data [word_cnt][lr_cnt][bit_cnt];

/*
	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;
		rts = 0;
		i2si_sck_transition = 0;
		i2so_lft = 0;
		i2so_rgt = 0;
        
        
		i2si_lft [0] = 16'hAAAA;
		i2si_lft [1] = 16'h1478;
		i2si_lft [2] = 16'hCDD7;
		i2si_lft [3] = 16'h4444;
		i2si_lft [4] = 16'h7398;
		i2si_lft [5] = 16'h1111;
		i2si_lft [6] = 16'h0001;
		i2si_lft [7] = 16'h1478;
		i2si_lft [8] = 16'hF8D5;
		i2si_lft [9] = 16'h99C5;
		i2si_lft [10] = 16'h69D9;
        
        i2si_rgt [0] = 16'hFFFF;
  		i2si_rgt [1] = 16'hA3B9;
        i2si_rgt [2] = 16'hBABA;
        i2si_rgt [3] = 16'hAAAA;
        i2si_rgt [4] = 16'hFFDD;
       	i2si_rgt [5] = 16'h5982;
   		i2si_rgt [6] = 16'hFFFF;
		i2si_rgt [7] = 16'hA3B9;
		i2si_rgt [8] = 16'hD55A;
		i2si_rgt [9] = 16'h7435;
   		i2si_rgt [10] = 16'hABCD;
		
		#694
		rf_i2si_en = 1;	
        
		

	end
    
    always
	begin
		count = 0;
	forever
		begin
			#5 clk = ~clk;
			count = count + 1;
		end
	end
    
    assign rst_n = !(count < 20);
    assign rst = ~rst_n;
    //assign i2si_sd = test_data [word_cnt][lr_cnt][bit_cnt];
      */
endmodule

