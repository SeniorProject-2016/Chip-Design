`timescale 1ns / 1ps
`define N 11 // number of test elements

////////////////////////////////////////////////////////////////////////////////
// Module Name:   chip_test1_reg_address_h400_write.v
// Create Date:   2/17/2016
// Last Edit:     2/29/16
// Author:        Kevin Cao, Whitley Forman
//
// Description:   Modified i2c functionality to be MSB on master and load reg h400 address for bist or i2s select.
//                i2s not working in this version.
// 
////////////////////////////////////////////////////////////////////////////////

module chip_test2;

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

    
    // I2C Internal Variables
		reg [3:0] i2c_bit_count;
		reg [3:0] i2c_master_state;
		reg [9:0] i2c_data_byte;
		reg i2c_slave_acknowledgement;
		reg [7:0] i2c_test_data [2:0];
		reg [10:0] i2c_reg_addr_test_data [1:0];
		reg [7:0] i2c_slave_addr_test_data [1:0];
		reg [8:0] i2c_count;
        
        
    // Data Capture Internal Variables
    reg         [15:0]              ext_start_val;                                                   //16 bit sign extension of rf_bist_start_val  
    reg                             ws_d1;
    reg                             ws_d2;
    wire                            ws_transition;
    reg                             i2so_sck_dl;
    wire                            i2so_sck_transition;
    reg         [31:0]              inp_word;
    reg         [31:0]              out_word;
    integer                         data_out;
    reg                             output_to_inp_txt = 1;
    reg                             output_to_out_txt = 1;
    integer                         data_in;
	
    
                                                                                                                        
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
        

        
		i2c_addr_bits = 3'b101;
		i2c_scl = 0;
		i2c_sda_in = 1;
		i2c_count = 0;
        
        
        // Instantiate I2S Test Data: Method 1; Irrelevant in testing the BIST
        for(index1 = 0; index1 < `N; index1 = index1 + 1)
        begin
            for(index2 = 0; index2 < 2; index2 = index2 + 1)
            begin
                i2s_test_data [index1] [index2] = $random;
            end
        end
        
        data_in = $fopen("chip_test_i2s_bist_enable_input.txt");                                                  // Open chip_test_i2s_bist_enable_input.txt
        data_out = $fopen("chip_test_i2s_bist_enable_output.txt");                                                // Open chip_test_i2s_bist_enable_output.txt
        
        
        /*
        // Instantiate I2S Test Data
        
        i2s_test_data [ 0] [0] = 16'hAAAA;                                                                                   
        i2s_test_data [ 0] [1] = 16'hFFFF;                                                                                           
        i2s_test_data [ 1] [0] = 16'hAAAA;                                                                           
        i2s_test_data [ 1] [1] = 16'hCCCC;                                                                                                       
        i2s_test_data [ 2] [0] = 16'hCDD7;                                                                                                   
        i2s_test_data [ 2] [1] = 16'hBABA;                                                                                                   
        i2s_test_data [ 3] [0] = 16'h4444;                                                                                   
        i2s_test_data [ 3] [1] = 16'hAAAA;                                                                               
        i2s_test_data [ 4] [0] = 16'h7398;                                                                                           
        i2s_test_data [ 4] [1] = 16'hFFDD;                                                                               
        i2s_test_data [ 5] [0] = 16'h1111;                                                                           
        i2s_test_data [ 5] [1] = 16'h5982;                                                                               
        i2s_test_data [ 6] [0] = 16'hFFFF;                                                                       
        i2s_test_data [ 6] [1] = 16'hFFFF;                                                                               
        i2s_test_data [ 7] [0] = 16'h1478;                                                                               
        i2s_test_data [ 7] [1] = 16'hA3B9;                                                                                                   
        i2s_test_data [ 8] [0] = 16'h0000;                                                                                   
        i2s_test_data [ 8] [1] = 16'h0000;                                                                                   
        i2s_test_data [ 9] [0] = 16'h99C5;                                                                           
        i2s_test_data [ 9] [1] = 16'h7435;                                                                                               
        i2s_test_data [10] [0] = 16'h69D9;                                                              
        i2s_test_data [10] [1] = 16'hABCD;
        */
        
        // Instantiate I2C Test Data
        i2c_test_data[0] = 8'b00000001;			// data for h400
		  i2c_test_data[1] = 8'b00000000;			//data for h400 coeff0_a
		  i2c_test_data[2] = 8'b00010000;			//data for h401 coeff0_b

		
        
      i2c_reg_addr_test_data [0] = 11'b00000000100;	//11'h004 = rf_i2s_bist_en register + filter registers
		i2c_reg_addr_test_data [1] = 11'b10000000000;	//11'h400 = rf_i2s_bist_en register + filter registers
		i2c_slave_addr_test_data [0] = 8'b10101011;		//current slave address w/ 3'b101 as i2c_addr_bits
		i2c_slave_addr_test_data [1] = 8'b10101011;		//current slave address w/ 3'b101 as i2c_addr_bits
        
        #1;
        ext_start_val = {{4{chip_test2.uut.rf_bist_start_val[11]}}, chip_test2.uut.rf_bist_start_val}; 
        inp_word = {~ext_start_val, ext_start_val};


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
    
    
    
    
    
    
    
    
    
    
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------    
    
    // I2C TEST BENCH PORTION
    
    
    
    always #1250 i2c_scl = !i2c_scl; 	//create i2c_scl @ 400khz


    always @ (posedge clk)
    begin
        i2c_count = i2c_count + 1;
        if (i2c_count == 250)			//reset i2c_count on full scl cycle
        begin
        i2c_count <= 0;
        end  
    end 
    
    
    always @ (posedge clk or negedge rst_n)                                                                             
    begin                                                                                                           
        if(!rst_n)                                                                                              
        begin                                                                                                   
            i2c_bit_count<=8;                                                                              
            i2c_master_state<=4'b0000;
            i2c_data_byte <= 0; 
            i2c_slave_acknowledgement <= 0;
                                                                                       
        end

        else if ((i2c_master_state == 4'b0000) & (i2c_count == 191))  //start condition
        begin
            i2c_sda_in <= 0;
            i2c_master_state <= 4'b0001;
        end

        else if ((i2c_master_state == 4'b0001))    //serialize slave address and RW bit
        begin
            if((i2c_count == 61) & (i2c_bit_count > 0))
            begin
                i2c_bit_count <= i2c_bit_count - 1;
                if (i2c_bit_count == 0)
                begin
                    i2c_sda_in <= 1;
                end
                if (i2c_bit_count > 0)
                begin
                    i2c_sda_in <= i2c_slave_addr_test_data [0] [i2c_bit_count - 1];
                end
            end
            
            else if((i2c_count == 61) & (i2c_bit_count == 0))
            begin
                i2c_bit_count <= 8;
                //i2c_slave_acknowledgement <= i2c_sda_out;
            end

            else if((i2c_count == 191) & (i2c_bit_count == 8) & (i2c_sda_out == 1))	//i2c_slave_acknowledgement == 1
            begin
                //i2c_slave_acknowledgement <= 0;
                i2c_master_state <= 4'b0010;
            end
        end
            
        else if ((i2c_master_state == 4'b0010))    //serialize reg address part 1
        begin
            if((i2c_count == 61) & (i2c_bit_count > 0))
            begin
                i2c_bit_count <= i2c_bit_count - 1;
                if (i2c_bit_count == 0)
                begin
                    i2c_sda_in <= 1;
                end
                if (i2c_bit_count > 0)
                begin
                    i2c_sda_in <= i2c_reg_addr_test_data [0][i2c_bit_count + 2];
                end
            end
            
            else if((i2c_count == 61) & (i2c_bit_count == 0))
            begin
                i2c_bit_count <= 8;
					 i2c_sda_in <= 1;
                //i2c_slave_acknowledgement <= i2c_sda_out;
            end

            else if((i2c_count == 191) & (i2c_bit_count == 8) & (i2c_sda_out == 1))
            begin
                //i2c_slave_acknowledgement <= 0;
                i2c_master_state <= 4'b0011;
            end
        end

        else if ((i2c_master_state == 4'b0011))    //serialize reg address part 2
        begin
            if((i2c_count == 61) & (i2c_bit_count > 5))
            begin
                i2c_bit_count <= i2c_bit_count - 1;
                if (i2c_bit_count == 0)
                begin
                    i2c_sda_in <= 1;
                end
                if (i2c_bit_count > 0)
                begin
                    i2c_sda_in <= i2c_reg_addr_test_data [0][i2c_bit_count - 6];
                end
            end
            
				if((i2c_count == 61) & ((i2c_bit_count > 0) && (i2c_bit_count < 6))) //Unwanted bits set to 1
            begin
                i2c_bit_count <= i2c_bit_count - 1;
                i2c_sda_in <= 1;
            end
				
            else if((i2c_count == 61) & (i2c_bit_count == 0))
            begin
                i2c_bit_count <= 8;
					 i2c_sda_in <= 1;
                //i2c_slave_acknowledgement <= i2c_sda_out;
            end

            else if((i2c_count == 191) & (i2c_bit_count == 8) & (i2c_sda_out == 1))
            begin
                //i2c_slave_acknowledgement <= 0;
                i2c_master_state <= 4'b0100;
            end    
        end

        else if ((i2c_master_state == 4'b0100) & (i2c_data_byte <= 1) & (i2c_slave_addr_test_data [0] [7] == 1))    //serialize data
        begin
            if((i2c_count == 61) & (i2c_bit_count > 0))
            begin
                i2c_bit_count <= i2c_bit_count - 1;
                if (i2c_bit_count == 0)
                begin
                    i2c_sda_in <= 1;
                end
                if (i2c_bit_count > 0)
                begin
                    i2c_sda_in <= i2c_test_data [i2c_data_byte] [i2c_bit_count - 1];
                end
            end
            
            else if((i2c_count == 61) & (i2c_bit_count == 0))
            begin
                i2c_bit_count <= 8;
					 i2c_sda_in <= 1;
                //i2c_slave_acknowledgement <= i2c_sda_out;
            end

            else if((i2c_count == 191) & (i2c_bit_count == 8) & (i2c_sda_out == 1))
            begin
                //i2c_slave_acknowledgement <= 0;
                i2c_data_byte <= i2c_data_byte + 1;
            end
            
            else if (i2c_data_byte == 1)
            begin
                //i2c_data_byte <= 0;
                i2c_master_state <= 4'b0101; 		//enter stop condition
                //i2c_slave_acknowledgement <= 0;
                i2c_bit_count <= 8;
            end
        end
        
        else if (i2c_master_state == 4'b0101)		// stop condition
        begin
            if (i2c_count == 61)
            begin
                i2c_sda_in <= 0;
            end
            
            if (i2c_count == 191)
            begin
                i2c_sda_in <=1;
                i2c_master_state <= 4'b0110;
            end
        end
        
    
	 /////////////////Transaction 2 for data//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 
	 else if ((i2c_master_state == 4'b0110) & (i2c_count == 191))  //start condition
        begin
            i2c_sda_in <= 0;
            i2c_master_state <= 4'b1001;
        end

        else if ((i2c_master_state == 4'b1001))    //serialize slave address and RW bit
        begin
            if((i2c_count == 61) & (i2c_bit_count > 0))
            begin
                i2c_bit_count <= i2c_bit_count - 1;
                if (i2c_bit_count == 0)
                begin
                    i2c_sda_in <= 1;
                end
                if (i2c_bit_count > 0)
                begin
                    i2c_sda_in <= i2c_slave_addr_test_data [1][i2c_bit_count - 1];
                end
            end
            
            else if((i2c_count == 61) & (i2c_bit_count == 0))
            begin
                i2c_bit_count <= 8;
                //i2c_slave_acknowledgement <= i2c_sda_out;
            end

            else if((i2c_count == 191) & (i2c_bit_count == 8) & (i2c_sda_out == 1))	//i2c_slave_acknowledgement == 1
            begin
                //i2c_slave_acknowledgement <= 0;
                i2c_master_state <= 4'b1010;
            end
        end
            
        else if ((i2c_master_state == 4'b1010))    //serialize reg address part 1
        begin
            if((i2c_count == 61) & (i2c_bit_count > 0))
            begin
                i2c_bit_count <= i2c_bit_count - 1;
                if (i2c_bit_count == 0)
                begin
                    i2c_sda_in <= 1;
                end
                else if (i2c_bit_count > 0)
                begin
                    i2c_sda_in <= i2c_reg_addr_test_data [1][i2c_bit_count + 2];
                end
            end
            
            else if((i2c_count == 61) & (i2c_bit_count == 0))
            begin
                i2c_bit_count <= 8;
					 i2c_sda_in <= 1;
                //i2c_slave_acknowledgement <= i2c_sda_out;
            end

            else if((i2c_count == 191) & (i2c_bit_count == 8) & (i2c_sda_out == 1))
            begin
                //i2c_slave_acknowledgement <= 0;
                i2c_master_state <= 4'b1011;
            end
        end

        else if ((i2c_master_state == 4'b1011))    //serialize reg address part 2
        begin
            if((i2c_count == 61) & (i2c_bit_count > 5))
            begin
                i2c_bit_count <= i2c_bit_count - 1;
                if (i2c_bit_count == 0)
                begin
                    i2c_sda_in <= 1;
                end
                if (i2c_bit_count > 0)
                begin
                    i2c_sda_in <= i2c_reg_addr_test_data [1][i2c_bit_count - 6];
                end
            end
            
				if((i2c_count == 61) & ((i2c_bit_count > 0) && (i2c_bit_count < 6))) //Unwanted bits set to 1
            begin
                i2c_bit_count <= i2c_bit_count - 1;
                i2c_sda_in <= 1;
            end
				
            else if((i2c_count == 61) & (i2c_bit_count == 0))
            begin
                i2c_bit_count <= 8;
					 i2c_sda_in <= 1;
                //i2c_slave_acknowledgement <= i2c_sda_out;
            end

            else if((i2c_count == 191) & (i2c_bit_count == 8) & (i2c_sda_out == 1))
            begin
                //i2c_slave_acknowledgement <= 0;
                i2c_master_state <= 4'b1100;
            end    
        end

        else if ((i2c_master_state == 4'b1100) & (i2c_data_byte <= 3) & (i2c_slave_addr_test_data [1][7] == 1))    //serialize data ///   & (i2c_data_byte <= 1025) &
        begin
            if((i2c_count == 61) & (i2c_bit_count > 0))
            begin
                i2c_bit_count <= i2c_bit_count - 1;
                if (i2c_bit_count == 0)
                begin
                    i2c_sda_in <= 1;
                end
                else if (i2c_bit_count > 0)
                begin
                    i2c_sda_in <= i2c_test_data [i2c_data_byte] [i2c_bit_count - 1];
                end
            end
            
            else if((i2c_count == 61) & (i2c_bit_count == 0))
            begin
                i2c_bit_count <= 8;
					 i2c_sda_in <= 1;
                //i2c_slave_acknowledgement <= i2c_sda_out;
            end

            else if((i2c_count == 191) & (i2c_bit_count == 8) & (i2c_sda_out == 1))
            begin
                //i2c_slave_acknowledgement <= 0;
                i2c_data_byte <= i2c_data_byte + 1;
            end
            
            else if (i2c_data_byte == 3) ///(i2c_data_byte == 1025) for full coeff input
            begin
                i2c_data_byte <= 0;
                i2c_master_state <= 4'b1101; 		//enter stop condition
                //i2c_slave_acknowledgement <= 0;
                i2c_bit_count <= 8;
            end
        end
        
        else if (i2c_master_state == 4'b1101)		// stop condition
        begin
            if (i2c_count == 61)
            begin
                i2c_sda_in <= 0;
            end
            
            if (i2c_count == 191)
            begin
                i2c_sda_in <=1;
                i2c_master_state <= 4'b1110;
            end
        end
      end
      
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- 
 
//Capturing Output Data to print to chip_test_i2s_bist_enable_output.txt

    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
        begin
            i2so_sck_dl <= 0;
        end
        else
        begin
            i2so_sck_dl <= i2so_sck;
        end
    end
    
    assign i2so_sck_transition = i2so_sck & ~i2so_sck_dl;
    
    // Creates a delay of word select signal, used to help in comparison test
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
        begin
            ws_d1 <= 0;
            ws_d2 <= 0;
        end
        else if(i2so_sck_transition)
        begin
            ws_d1 <= i2so_ws;                                                                   // generate 1 cycle delay of i2so_ws
            ws_d2 <= ws_d1;                                                                     // generate 2nd cycle delay of i2so_ws
        end
    end
    
    assign ws_transition = ~ws_d1 & ws_d2;                                                          // level to pulse converter when ws goes from high to low
    
    // Creates 32 bit words from the serial data being outputted to be compared with the words being inputted
    always @(posedge clk or negedge rst_n)                                                                  
    begin                                                                                                   
        if(!rst_n)                                                                                              
        begin                                                                                               
            out_word <= 32'b0;                                                                                      
        end                                                                                     
        else if(i2so_sck_transition)                                                                     
        begin                                                                               
            out_word[31:1] <= out_word[30:0];                                                                                       
            out_word[0] <= i2so_sd;                                                                     
        end                                                                                             
    end
    
    
    // Print output data to chip_test_i2s_bist_enable_output.txt                                                             
    always @(posedge clk)                                                                               
    begin
        if(output_to_out_txt)
        begin
            if(ws_transition && i2so_sck_transition)                                         
            begin
                if(out_word === 32'hxxxxxxxx)                                                       // out_word should not equal X since BIST will always be outputting valid data
                begin
                    output_to_out_txt = 0;
                    #1 $fclose(data_out);
                end
                else
                begin
                    $fdisplay (data_out, "%h", out_word);
                end
            end
        end
    end
    
    
    // Print input data to chip_test_i2s_bist_enable_input.txt                                                             
    always @(posedge clk)                                                                               
    begin
        if(output_to_inp_txt)
        begin
            if(chip_test2.uut.I2S_Input.bist_xfc)                                         
            begin
                $fdisplay(data_in, "%h", chip_test2.uut.I2S_Input.bist_data); 
            end
            else if(chip_test2.uut.I2S_Input.bist_data === 32'hxxxxxxxx)
            begin
                output_to_inp_txt = 0;
                #1 $fclose(data_in);
            end
        end
    end
    
endmodule

