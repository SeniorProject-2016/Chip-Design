////////////////////////////////////////////////////////////////////////////////
// Module Name:   no_i2c_chip_test.v
// Create Date:   4/21/2016
// Last Edit:     4/21/16
// Author:        Kevin Cao
//
// Description:   Modified chip testing without i2c module
//                Passes through input serial data (no filter applied)
// 
////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps
`define N 100 // number of test elements

module no_i2c_chip_test;

	// General Inputs
	reg                             clk;
	wire                            rst_n;
    
    
    // I2S Inputs
	reg                             i2si_sck;
	wire                            i2si_ws;
	wire                            i2si_sd;
    
    
    // Register Inputs
	reg         [10:0]              i2c_waddr;
	reg         [ 7:0]              i2c_wdata;
	reg                             i2c_xfc_write;
	reg                             i2c_op;


	// I2S Outputs  
	wire                            i2so_sck;
	wire                            i2so_ws;
	wire                            i2so_sd;
    
    
    // Register Outputs
	wire        [ 7:0]              i2c_rdata;
	wire                            i2c_xfc_read;
    
    
     // General Internal Variables
    integer                         clk_count;                                                      // clock counter

    
    
    // I2S Internal Variables
    reg         [15:0]              i2s_test_data [`N-1:0] [0:1];                                       // [Bits Per Word] i2s_test_data [# of entities in test] [Left/Right]
    reg                             i2s_sck_dl;                                                         // serial clock delay
    integer                         i2s_sck_cnt;                                                        // serial clock counter
    integer                         i2s_bit_cnt;                                                        // bit number counter
    integer                         i2s_lr_cnt;                                                         // left right counter
    integer                         i2s_word_cnt;                                                       // word counter
    parameter                       i2s_cyc_per_half_sck = 33;                                          // about (100 MHz / 1.536 MHz)/2
    parameter                       i2s_bit_tc =  15;                                                   // number of bits in a word
    integer                         index1;                                                             // counter for instantiating i2s_test_data
    integer                         index2;                                                             // counter for instantiating i2s_test_data
    
    
    // Data Capture Internal Variables
    reg                             ws_d1;
    reg                             ws_d2;
    wire                            ws_transition;
    reg                             i2so_sck_dl;
    wire                            i2so_sck_transition;
    reg         [31:0]              word;
    integer                         data_out;
    reg                             output_to_inp_txt = 1;
    reg                             output_to_out_txt = 1;
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
		.i2c_waddr(i2c_waddr), 
		.i2c_wdata(i2c_wdata), 
		.i2c_xfc_write(i2c_xfc_write), 
		.i2c_op(i2c_op), 
		.i2c_rdata(i2c_rdata), 
		.i2c_xfc_read(i2c_xfc_read)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		i2si_sck = 0;
		i2c_waddr = 0;
		i2c_wdata = 0;
		i2c_xfc_write = 0;
		i2c_op = 0;
        
        data_in = $fopen("no_i2c_chip_test_input.txt");                                                  // Open no_i2c_chip_test_input.txt
        data_out = $fopen("no_i2c_chip_test_output.txt");                                                // Open no_i2c_chip_test_output.txt

        
        
        // Instantiate I2S Test Data: Method 1
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

        #1 $fclose(data_in);
        
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
    
    
    
    
//----------------------------------------------------------------------------------------------------------------------------------------------------

// I2S Testbench Portion

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
    
    
    
    
//----------------------------------------------------------------------------------------------------------------------------------------------------

// Register Testbench Portion







    
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
    
    // Print input data to chip_test_i2s_bist_enable_input.txt                                                             
//    always @(posedge clk)                                                                               
//    begin
//        if(output_to_inp_txt)
//        begin
//            if(no_i2c_chip_test.uut.I2S_Input.bist_xfc)                                         
//            begin
//                $fdisplay(data_in, "%h", no_i2c_chip_test.uut.I2S_Input.bist_data); 
//            end
//            else if(no_i2c_chip_test.uut.I2S_Input.bist_data === 32'hxxxxxxxx)
//            begin
//                output_to_inp_txt = 0;
//                #1 $fclose(data_in);
//            end
//        end
//    end

      
endmodule

