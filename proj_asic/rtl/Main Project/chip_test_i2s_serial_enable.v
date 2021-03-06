////////////////////////////////////////////////////////////////////////////////
// Module Name:   chip_test_i2s_serial_enable.v
// Create Date:   2/17/2016
// Last Edit:     5/8/16
// Author:        Kevin Cao, Whitley Forman
//
// Description:   Testing pass through of data. Input is a square wave. Input data should match output data in produced text files
// 
////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps
`define N 10000 // number of test elements

module chip_test1;

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
	wire                    i2c_sda_od;
    
    
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
    integer                         index2 = 0;                                                             // counter for instantiating i2s_test_data

    
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
    reg                             ws_d1;
    reg                             ws_d2;
    wire                            ws_transition;
    reg                             i2so_sck_dl;
    wire                            i2so_sck_transition;
    reg         [31:0]              word;
    integer                         data_out;
    reg                             output_to_txt = 1;
    integer                         data_in;
    integer                         index3;                                                             // counter for outputing to text file of list of inputs
                                                                                                                        
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
		.i2c_sda_od(i2c_sda_od)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
        
		i2si_sck = 0;

        
		i2c_addr_bits = 3'b101;
		i2c_scl = 0;
		i2c_sda_in = 1;
		i2c_count = 0;
        
        data_in = $fopen("chip_test_i2s_serial_enable_input.txt");                                                  // Open chip_test_i2s_serial_enable_input.txt
        data_out = $fopen("chip_test_i2s_serial_enable_output.txt");                                                // Open chip_test_i2s_serial_enable_output.txt

        // Instantiate I2S Test Data: Method 1; Irrelevant in testing the BIST
        for(index1 = 0; index1 < `N; index1 = index1 + 1)
        begin
            for(index2 = 0; index2 < 2; index2 = index2 + 1)
            begin
                i2s_test_data [index1] [index2] = $random;
            end
        end

        
        for(index3 = 0; index3 < `N; index3 = index3 + 1)
        begin
            $fdisplay (data_in, "%h", {i2s_test_data [index3] [0], i2s_test_data [index3] [1]});
        end

        
        
        // Instantiate I2C Test Data
       //   i2c_test_data[0] = 8'b00100000;			// data for h400
		 // i2c_test_data[1] = 8'b00000000;			//data for h400 coeff0_a
		 // i2c_test_data[2] = 8'b00010000;			//data for h401 coeff0_b

		
        
      //i2c_reg_addr_test_data [0] = 11'b00000000000;	//11'h004 = rf_i2s_bist_en register + filter registers
		//i2c_reg_addr_test_data [1] = 11'b10000000000;	//11'h400 = rf_i2s_bist_en register + filter registers
		//i2c_slave_addr_test_data [0] = 8'b10101011;		//current slave address w/ 3'b101 as i2c_addr_bits
		//i2c_slave_addr_test_data [1] = 8'b10101011;		//current slave address w/ 3'b101 as i2c_addr_bits

        #1 $fclose(data_in);
        
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
                //i2c_slave_acknowledgement <= i2c_sda_od;
            end

            else if((i2c_count == 191) & (i2c_bit_count == 8) & (i2c_sda_od == 1))	//i2c_slave_acknowledgement == 1
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
                //i2c_slave_acknowledgement <= i2c_sda_od;
            end

            else if((i2c_count == 191) & (i2c_bit_count == 8) & (i2c_sda_od == 1))
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
                //i2c_slave_acknowledgement <= i2c_sda_od;
            end

            else if((i2c_count == 191) & (i2c_bit_count == 8) & (i2c_sda_od == 1))
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
                //i2c_slave_acknowledgement <= i2c_sda_od;
            end

            else if((i2c_count == 191) & (i2c_bit_count == 8) & (i2c_sda_od == 1))
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
                //i2c_slave_acknowledgement <= i2c_sda_od;
            end

            else if((i2c_count == 191) & (i2c_bit_count == 8) & (i2c_sda_od == 1))	//i2c_slave_acknowledgement == 1
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
                //i2c_slave_acknowledgement <= i2c_sda_od;
            end

            else if((i2c_count == 191) & (i2c_bit_count == 8) & (i2c_sda_od == 1))
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
                //i2c_slave_acknowledgement <= i2c_sda_od;
            end

            else if((i2c_count == 191) & (i2c_bit_count == 8) & (i2c_sda_od == 1))
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
                //i2c_slave_acknowledgement <= i2c_sda_od;
            end

            else if((i2c_count == 191) & (i2c_bit_count == 8) & (i2c_sda_od == 1))
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
      
      
      
//----------------------------------------------------------------------------------------------------------------------------------------------------

//Capturing Output Data to print to chip_test_i2s_serial_enable_output.txt

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
            word <= 32'b0;                                                                                      
        end                                                                                     
        else if(i2so_sck_transition)                                                                     
        begin                                                                               
            word[31:1] <= word[30:0];                                                                                       
            word[0] <= i2so_sd;                                                                     
        end                                                                                             
    end
    
    
    // Print output data to chip_test_i2s_serial_enable_output.txt                                                      
    always @(posedge clk)                                                                               
    begin
        if(output_to_txt)
        begin
            if(ws_transition && i2so_sck_transition)                                         
            begin
                if(word === 32'hxxxxxxxx)
                begin
                    output_to_txt = 0;
                    #1 $fclose(data_out);
                end
                else
                begin
                    $fdisplay (data_out, "%h", word);
                end
            end
        end
    end



endmodule

