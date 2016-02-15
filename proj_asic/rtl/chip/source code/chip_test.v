`timescale 1ns / 1ps
`define N 101 // number of test elements

//////////////////////////////////////////////////////////////////////////////////
// Module Name:             chip_test.v
// Create Date:             1/19/2016
// Last Modification:       1/19/2016
// Author:                  Zachary Nelson
//
//////////////////////////////////////////////////////////////////////////////////

module chip_test;

	// Inputs
	reg clk;
	wire rst_n;
	reg i2si_sck;
	wire i2si_ws;
	wire i2si_sd;
	reg [2:0] i2c_addr_bits;
	reg i2c_scl;
	reg i2c_sda_in;

	// Outputs
	wire i2so_sck;
	wire i2so_ws;
	wire i2so_sd;
	wire i2c_sda_out;
    
    // Internal Variables
    reg                             sck_d1;                                                          // serial clock delay
    reg [31:0]                      count;                                                           // clock counter
    reg [31:0]                      sck_cnt;                                                         // serial clock counter
    reg [31:0]                      bit_cnt;                                                         // bit number counter
    reg                             lr_cnt;                                                          // left right counter
    reg [31:0]                      word_cnt;                                                        // word counter
    reg [31:0]                      cyc_per_half_sck = 40;                                           // about (100 MHz / 1.44 MHz)/2
    reg [31:0]                      bit_tc =  15;                                                    // number of bits in a word
    
    reg [15:0]                      test_data [`N-1:0] [0:1];                                        // [Bits Per Word] test_data [# of entities in test] [Left/Right]
    integer                         index1;                                                          // Counter to help create random 32 bit words
    integer                         index2;                                                          // Counter to help create random 32 bit words
	
    integer                         out;                                                             // Helps create output text file
    
    
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

        out = $fopen("chip_test_output.txt");                  // Open chip_test_output.txt 

        // Test Data            
       for(index1 = 0; index1 < `N; index1 = index1 + 1)
       begin
           for(index2 = 0; index2 < 2; index2 = index2 + 1)
           begin
               test_data [index1] [index2] = $random;
               $fdisplay(out,test_data [index1] [index2]);                        
           end
       end
       $fclose(out);
	end
    
    // Generate Master Clock
    always                                                                                                                              
    begin                                                                                               
        count = 0;                                                                                                      
        forever                                                                                                 
        begin                                                                                                           
            #5 clk = ~clk;                                                                           // 100 MHz clock
            count = count + 1;                                                                                  
        end                                                                                                                 
    end
    
    
    
    
    always @ (posedge clk or negedge rst_n)                                                                             
    begin                                                                                                           
        if(!rst_n)                                                                                              
        begin                                                                                                   
            sck_cnt<=0;                                                                              // counts master clock cycles, causes sck to toggle each time it hits cyc_per_half_sck
            bit_cnt<=0;                                                                              // count number of bits
            word_cnt<=0;                                                                             // count the word number
            lr_cnt <= 0;                                                                             // left=0 and right=1
            i2si_sck<=0;                                                                             // serial clock
            sck_d1<=0;                                                                               // serial clock delayed by one clock cycle
        end                                                                                                             
        else                                                                                                                
        begin                                                                                                                           
                                                                                                                                
            if (sck_cnt == cyc_per_half_sck-1)                                                       // cyc_per_half_sck ~ (100 MHz/1.44 MHz)/2
            begin                                                                                       
                sck_cnt <= 0;                                                                        // reset serial clock counter
                i2si_sck <= ~i2si_sck;                                                               // toggle serial clock
            end                                                                                         
            else                                                                                        
                sck_cnt <= sck_cnt + 1;                                                              // increment serial clock counter
                                                                                                        
            sck_d1<=i2si_sck;                                                                        // generate 1 cycle delay of i2si_sck
            if(i2si_sck & ~sck_d1)                                                                   // on a positive transition of sck...
                                                                                                                   
            begin                                                                                                       
                if (bit_cnt==bit_tc)                                                                 // bit_tc = 15
                begin                                                                                               
                    if (lr_cnt == 1)                                                                 // if right
                    begin                                                                                                   
                        word_cnt<=word_cnt+1;                                                        // words in the testbench array
                        lr_cnt<=0;                                                                   // set to left
                    end                                                                                                                 
                    else
                    begin
                        lr_cnt<=1;                                                                   // set to right

                    end
                    bit_cnt<=0;                                                                      // reset bit counter
                end                                                                                                         
                else                                                                                                                
                    bit_cnt<=bit_cnt+1;                                                              // increment bit counter
            end                                                                                                     
        end                                                                                                             
    end                                                                                                                             
                                                                                                                                                                    
                                                                                                                                                            
    assign rst_n = !(count < 20);                                                                                               
    assign rf_i2si_en = !(count < 20);                                                                                                        
    //assign i2si_rtr = i2si_rts;                                                                                                   
    assign i2si_ws = ((0<=bit_cnt& bit_cnt<=16'd14)&lr_cnt==1) | ((bit_cnt==16'd15)&(lr_cnt==0));                                  
    assign i2si_sd = test_data [word_cnt][lr_cnt][bit_tc-bit_cnt];                                                                   
      
endmodule

