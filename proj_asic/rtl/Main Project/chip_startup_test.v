`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:52:12 04/04/2016
// Design Name:   chip
// Module Name:   Z:/Desktop/Main Project/chip_startup_test.v
// Project Name:  SeniorProject
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: chip
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps
`define N 100 // number of test elements

module chip_startup_test;

	
	// General Inputs
	reg                     clk;
	wire                    rst_n;
    
    // I2S Inputs
	reg                     i2si_sck;
	wire                    i2si_ws;
	wire                    i2si_sd;
    
    // I2C Inputs
	reg     [2:0]           i2c_addr_bits;
	reg                     i2c_scl;
	reg                     i2c_sda_in;

	// I2S Outputs
	wire                    i2so_sck;
	wire                    i2so_ws;
	wire                    i2so_sd;
    
    // I2C Outputs
	wire                    i2c_sda_out;
    
    
    // General Internal Variables
    integer                         clk_count;                                                      // clock counter

    
    
    // I2S Internal Variables
    reg     [15:0]                  i2s_test_data [`N-1:0] [0:1];                                       // [Bits Per Word] i2s_test_data [# of entities in test] [Left/Right]
    reg                             i2s_sck_dl;                                                         // serial clock delay
    integer                         i2s_sck_cnt;                                                        // serial clock counter
    integer                         i2s_bit_cnt;                                                        // bit number counter
    integer                         i2s_lr_cnt;                                                         // left right counter
    integer                         i2s_word_cnt;                                                       // word counter
    parameter                       i2s_cyc_per_half_sck = 33;                                          // about (100 MHz / 1.536 MHz)/2
    parameter                       i2s_bit_tc =  15;                                                   // number of bits in a word
    integer                         index1;                                                             // counter for instantiating i2s_test_data
    integer                         index2;                                                             // counter for instantiating i2s_test_data

    // Instantiate the Unit Under Test (UUT)
	chip uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.i2si_sck(i2si_sck), 
		.i2si_ws(i2si_ws), 
		.i2si_sd(i2si_sd), 
		.i2so_sck(i2so_sck), 
		.i2so_ws(i2so_ws), 
		.i2so_sd(i2so_sd), 
		.i2c_addr_bits(i2c_addr_bits), 
		.i2c_scl(i2c_scl), 
		.i2c_sda_in(i2c_sda_in), 
		.i2c_sda_out(i2c_sda_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		i2si_sck = 0;

		i2c_addr_bits = 0;
		i2c_scl = 0;
		i2c_sda_in = 0;
		

		// Add stimulus here

	end
	
	// Generates master clock signal
    always                                                                                                                              
    begin                                                                                               
        clk_count = 0;                                                                                                      
        forever                                                                                                 
        begin                                                                                                           
            #5 clk = ~clk;                                                                          // 100 MHz clock rate (100MHz/10^9)/2
            clk_count = clk_count + 1;                                                                                  
        end                                                                                                                 
    end        
      
    
    // Defines the counters to determine which bit to input into serial data for I2S Interface
    always @ (posedge clk or negedge rst_n)                                                                             
    begin                                                                                                           
        if(!rst_n)                                                                                              
        begin                                                                                                   
            i2s_sck_cnt     <= 0;                                                                       // counts master clock cycles, causes sck to toggle each time it hits i2s_cyc_per_half_sck
            i2s_bit_cnt     <= 0;                                                                       // count number of bits
            i2s_word_cnt    <= 0;                                                                       // count the word number
            i2s_lr_cnt      <= 0;                                                                       // left=0 and right=1
            i2si_sck        <= 0;                                                                      // serial clock
            i2s_sck_dl      <= 0;                                                                       // serial clock delayed by one clock cycle
        end                                                                                                             
        else                                                                                                                
        begin                                                                                                                           
                                                                                                                                
            if (i2s_sck_cnt == i2s_cyc_per_half_sck-1)                                                      // i2s_cyc_per_half_sck ~ (100 MHz/1.44 MHz)/2
            begin                                                                                       
                i2s_sck_cnt <= 0;                                                                       // reset serial clock counter
                i2si_sck <= ~i2si_sck;                                                              // toggle serial clock
            end                                                                                         
            else                                                                                        
                i2s_sck_cnt <= i2s_sck_cnt + 1;                                                             // increment serial clock counter
                                                                                                        
            i2s_sck_dl<=i2si_sck;                                                                       // generate 1 cycle delay of i2si_sck
            if(i2si_sck & ~i2s_sck_dl)                                                                  // on a positive transition of sck...
                                                                                                                   
            begin                                                                                                       
                if (i2s_bit_cnt==i2s_bit_tc)                                                                // i2s_bit_tc = 15
                begin                                                                                               
                    if (i2s_lr_cnt == 1)                                                                // if right
                    begin                                                                                                   
                        i2s_word_cnt<=i2s_word_cnt+1;                                                       // words in the testbench array
                        i2s_lr_cnt<=0;                                                                  // set to left 
                    end                                                                                                                 
                    else                                                                                                    
                        i2s_lr_cnt<=1;                                                                  // set to right
                    i2s_bit_cnt<=0;                                                                     // reset bit counter
                end                                                                                                         
                else                                                                                                                
                    i2s_bit_cnt<=i2s_bit_cnt+1;                                                             // increment bit counter
            end                                                                                                     
        end                                                                                                             
    end      
    
    
    // Set rst_n high after 10 clock cycles
    assign rst_n = !(clk_count < 20);

    // Set which word channel to read from for I2S Interface
    assign i2si_ws = ((0<=i2s_bit_cnt& i2s_bit_cnt<=16'd14)&i2s_lr_cnt==1) | ((i2s_bit_cnt==16'd15)&(i2s_lr_cnt==0));  

    // Set which serial data bit to input
    assign i2si_sd = i2s_test_data [i2s_word_cnt][i2s_lr_cnt][i2s_bit_tc-i2s_bit_cnt];  
      
endmodule

