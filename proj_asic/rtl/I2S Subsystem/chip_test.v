`timescale 1ns / 1ps
`define N 101 // number of test elements

//////////////////////////////////////////////////////////////////////////////////
// Module Name:             chip_test.v
// Create Date:             1/30/2016
// Last Modification:       1/30/2016
// Author:                  Zachary Nelson
//
//////////////////////////////////////////////////////////////////////////////////

module chip_test;

	// Inputs
	reg clk;
	wire rst_n;
	reg inp_sck;
	wire inp_ws;
	wire inp_sd;
	wire rf_i2si_en;
	reg [11:0] rf_bist_start_val;
	reg [7:0] rf_bist_inc;
	reg [11:0] rf_bist_up_limit;
	reg rf_mux_en;
	reg trig_fifo_overrun_clr;
	reg trig_fifo_underrun;

	// Outputs
	wire i2so_sck;
	wire i2so_ws;
	wire i2so_sd;
	wire ro_fifo_overrun;
	wire ro_fifo_underrun;
	wire filt_rtr;
    
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
		.inp_sck(inp_sck), 
		.inp_ws(inp_ws), 
		.inp_sd(inp_sd), 
		.rf_i2si_en(rf_i2si_en), 
		.rf_bist_start_val(rf_bist_start_val), 
		.rf_bist_inc(rf_bist_inc), 
		.rf_bist_up_limit(rf_bist_up_limit), 
		.rf_mux_en(rf_mux_en), 
		.i2so_sck(i2so_sck), 
		.i2so_ws(i2so_ws), 
		.i2so_sd(i2so_sd), 
		.trig_fifo_overrun_clr(trig_fifo_overrun_clr), 
		.ro_fifo_overrun(ro_fifo_overrun), 
		.trig_fifo_underrun(trig_fifo_underrun), 
		.ro_fifo_underrun(ro_fifo_underrun), 
		.filt_rtr(filt_rtr)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		inp_sck = 0;
        rf_bist_start_val = 12'd1;    // Set starting value to 1                                                                                                
        rf_bist_inc = 12'd1;          // Set increment value to 1                      
        rf_bist_up_limit = 12'd25;    // Set BIST upper limit to 25    
		rf_mux_en = 0;
		trig_fifo_overrun_clr = 0;
		trig_fifo_underrun = 0;
        
        for(index1 = 0; index1 < `N; index1 = index1 + 1)
        begin
            for(index2 = 0; index2 < 2; index2 = index2 + 1)
            begin
                test_data [index1] [index2] = $random;
            end
        end    
    
	end
    
    // Generate Master Clock
    always                                                                                                                              
    begin                                                                                               
        count = 0;                                                                                                      
        forever                                                                                                 
        begin                                                                                                           
            #5 clk = ~clk;      // 100 MHz clock
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
            inp_sck<=0;                                                                             // serial clock
            sck_d1<=0;                                                                               // serial clock delayed by one clock cycle
        end                                                                                                             
        else                                                                                                                
        begin                                                                                                                           
                                                                                                                                
            if (sck_cnt == cyc_per_half_sck-1)                                                       // cyc_per_half_sck ~ (100 MHz/1.44 MHz)/2
            begin                                                                                       
                sck_cnt <= 0;                                                                        // reset serial clock counter
                inp_sck <= ~inp_sck;                                                               // toggle serial clock
            end                                                                                         
            else                                                                                        
                sck_cnt <= sck_cnt + 1;                                                              // increment serial clock counter
                                                                                                        
            sck_d1<=inp_sck;                                                                        // generate 1 cycle delay of inp_sck
            if(inp_sck & ~sck_d1)                                                                   // on a positive transition of sck...
                                                                                                                   
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
    assign inp_ws = ((0<=bit_cnt& bit_cnt<=16'd14)&lr_cnt==1) | ((bit_cnt==16'd15)&(lr_cnt==0));                                  
    assign inp_sd = test_data [word_cnt][lr_cnt][bit_tc-bit_cnt];   
      
endmodule

