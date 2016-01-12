`timescale 1ns / 1ps
`define N 11 // number of test elements

////////////////////////////////////////////////////////////////////////////////
// Module Name:   i2s_in_test.v
// Create Date:   11/27/2015
// Last Edit:     1/10/16
// Author:        Kevin Cao, Zachary Nelson
//
// Description: Verilog Test Fixture created by ISE for module: i2s_in
//                  Tests the i2s_in with the deserializer content being outputted.
//                  Outputs success or failure of test to i2s_in_test_output.txt
// 
////////////////////////////////////////////////////////////////////////////////

module i2s_in_test;

	// Inputs
	reg                             clk;
	wire                            rst_n;
                                                
	reg                             inp_sck;
	wire                            inp_ws;
	wire                            inp_sd;
    
	wire                            rf_i2si_en;
	reg [11:0]                      rf_bist_start_val;
	reg [7:0]                       rf_bist_inc;
	reg [11:0]                      rf_bist_up_limit;
	reg                             rf_mux_en;
    
    wire                            i2si_rtr;
    
    reg                             trig_fifo_overrun_clr;

	// Outputs
	wire [31:0]                     i2si_data;
	wire                            i2si_rts;
	wire                            ro_fifo_overrun;
	wire                            sync_sck;
    
    
    // Internal Variables
    reg [15:0]                      test_data [`N-1:0] [0:1];                                        // [Bits Per Word] test_data [# of entities in test] [Left/Right]
    reg                             sck_d1;                                                          // serial clock delay
    reg [31:0]                      count;                                                           // clock counter
    reg [31:0]                      sck_cnt;                                                         // serial clock counter
    reg [31:0]                      bit_cnt;                                                         // bit number counter
    reg                             lr_cnt;                                                          // left right counter
    reg [31:0]                      word_cnt;                                                        // word counter
    reg [31:0]                      cyc_per_half_sck = 40;                                           // about (100 MHz / 1.44 MHz)/2
    reg [31:0]                      bit_tc =  15;                                                    // number of bits in a word
                                                                                                                            
                                                                                                                            
    reg [31:0]                      word;                                                            // Stores the expected word, to be compared with i2si_data    
    reg [3:0]                       match_count = 0;                                                 // Counter to help find initial matching words for word and i2si_data    
    reg [3:0]                       compare_count = 0;                                               // Counter to help compare word and i2si_data after intial match is found                    
    reg                             match_found = 0;                                                 // Boolean that determines if intial match was found                   
    reg                             begin_comparison = 0;                                            // Boolean that determines if to start comparing words after intial match is found
    reg                             test_failed = 1;                                                 // Boolean that determines if no matches were found and the test failed                                
                                                                                                            
    integer                         out;                                                             // Helps create output text file
                                                                                                                            
	// Instantiate the Unit Under Test (UUT)                                                                    
	i2s_in uut (                                                                                                                                
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
		.i2si_rtr(i2si_rtr),                                                                                                        
		.i2si_data(i2si_data),                                                                                              
		.i2si_rts(i2si_rts),                                                                                                
		.ro_fifo_overrun(ro_fifo_overrun),                                                                          
		.trig_fifo_overrun_clr(trig_fifo_overrun_clr),                                                                          
		.sync_sck(sync_sck)                                                                                                 
	);                                                                                                                          
                                                                                                                
	initial begin                                                                                                           
		clk = 0;                                                                                                                                
		inp_sck = 0;                                                                                                                                                                   
        rf_bist_start_val = 12'd1;                                                                   // Set starting value to 1                                                                                                
        rf_bist_inc = 12'd1;                                                                         // Set increment value to 1                      
        rf_bist_up_limit = 12'd25;                                                                   // Set BIST upper limit to 25                              
		rf_mux_en = 0;                                                                               // Disable multiplexer select bit, Output deserializer's contents                                                                                                          
		trig_fifo_overrun_clr = 0;                                                                                      
                                                                                                                                    
                                                                                                                                
        out = $fopen("i2s_in_test_output.txt");                                                     // Open i2si_in_test2_output.txt  
        
                                                                                                                                                
                                                                                                                                            
        // Test Data                                                                                                            
        test_data [0] [0] = 16'hAAAA;                                                                                   
        test_data [0] [1] = 16'hFFFF;                                                                                           
        test_data [1] [0] = 16'hAAAA;                                                                           
        test_data [1] [1] = 16'hCCCC;                                                                                                       
        test_data [2] [0] = 16'hCDD7;                                                                                                   
        test_data [2] [1] = 16'hBABA;                                                                                                   
        test_data [3] [0] = 16'h4444;                                                                                   
        test_data [3] [1] = 16'hAAAA;                                                                               
        test_data [4] [0] = 16'h7398;                                                                                           
        test_data [4] [1] = 16'hFFDD;                                                                               
        test_data [5] [0] = 16'h1111;                                                                           
        test_data [5] [1] = 16'h5982;                                                                               
        test_data [6] [0] = 16'h0001;                                                                       
        test_data [6] [1] = 16'hFFFF;                                                                               
        test_data [7] [0] = 16'h1478;                                                                               
        test_data [7] [1] = 16'hA3B9;                                                                                                   
        test_data [8] [0] = 16'hF8D5;                                                                                   
        test_data [8] [1] = 16'hD55A;                                                                                   
        test_data [9] [0] = 16'h99C5;                                                                           
        test_data [9] [1] = 16'h7435;                                                                                               
        test_data [10] [0] = 16'h69D9;                                                              
        test_data [10] [1] = 16'hABCD;
        
	end                                                                                                                             

    
                                                                                                                                        
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
            inp_sck<=0;                                                                              // serial clock
            sck_d1<=0;                                                                               // serial clock delayed by one clock cycle
        end                                                                                                             
        else                                                                                                                
        begin                                                                                                                           
                                                                                                                                
            if (sck_cnt == cyc_per_half_sck-1)                                                       // cyc_per_half_sck ~ (100 MHz/1.44 MHz)/2
            begin                                                                                       
                sck_cnt <= 0;                                                                        // reset serial clock counter
                inp_sck <= ~inp_sck;                                                                 // toggle serial clock
            end                                                                                         
            else                                                                                        
                sck_cnt <= sck_cnt + 1;                                                              // increment serial clock counter
                                                                                                        
            sck_d1<=inp_sck;                                                                         // generate 1 cycle delay of inp_sck
            if(inp_sck & ~sck_d1)                                                                    // on a positive transition of sck...
                                                                                                                    
            begin                                                                                                       
                if (bit_cnt==bit_tc)                                                                 // bit_tc = 15
                begin                                                                                               
                    if (lr_cnt == 1)                                                                 // if right
                    begin                                                                                                   
                        word_cnt<=word_cnt+1;                                                        // words in the testbench array
                        lr_cnt<=0;                                                                   // set to left 
                    end                                                                                                                 
                    else                                                                                                    
                        lr_cnt<=1;                                                                   // set to right
                    bit_cnt<=0;                                                                      // reset bit counter
                end                                                                                                         
                else                                                                                                                
                    bit_cnt<=bit_cnt+1;                                                              // increment bit counter
            end                                                                                                     
        end                                                                                                             
    end                                                                                                                             
                                                                                                                                                                    
                                                                                                                                                            
    assign rst_n = !(count < 20);                                                                                               
    assign rf_i2si_en = !(count < 20);                                                                                                        
    assign i2si_rtr = i2si_rts;                                                                                                   
    assign inp_ws = ((0<=bit_cnt& bit_cnt<=16'd14)&lr_cnt==1) | ((bit_cnt==16'd15)&(lr_cnt==0));                                  
    assign inp_sd = test_data [word_cnt][lr_cnt][bit_tc-bit_cnt];                                                                                               
                                                                                                                                                    
                                                                                                                                                        
    //Checks if the data was properly deserialized                                                                                                          
    always @(posedge clk)                                                                                                                               
    begin                                                                                                                                       
        if(i2si_rts && i2si_rtr)                                                                                                                                
        begin                                                                                                                                       
            //Find the first input word that matches the output word                                                                                                                    
            if(!match_found)                                                                                                                                    
            begin                                                                                                                                   
                for(match_count = 0; match_count < `N; match_count = match_count + 1)                                                                                                       
                begin                                                                                                                               
                    word = {test_data [match_count] [0], test_data [match_count] [1]};                                                                
                    if(word == i2si_data)                                                                                                       
                    begin                                                                                                                   
                        match_found = 1;                                                                                                                                
                        begin_comparison = 1;                                                                                       
                        test_failed = 0;                                                                                                    
                        compare_count = match_count;                                                                                                
                    end                                                                                                                                         
                end                                                                                                                                 
            end                                                                                                                                                 
            //Stop checking. No input words matched output words                                                                    
            if(count > 20000 && !begin_comparison && test_failed)                                       
            begin
                match_found = 1;
                test_failed = 0;
                $fdisplay(out, "No matches found. Test failed");
                #1;
                $fclose(out);
            end
            
            
            //After finding first input word that matches, begin comparing rest of the inputted words
            if(begin_comparison)
            begin
                word = {test_data [compare_count] [0], test_data [compare_count] [1]};
                //If word inputted and outputted match
                if(word == i2si_data)
                begin
                    $fdisplay(out, "word: %h", word,
                        "       ---      i2si_data: %h",
                        i2si_data, "       ---      Pass");
                end
                //End of comparison test. No more words were inputted.
                else if(i2si_data === 32'hxxxxxxxx)
                begin
                    begin_comparison = 0;
                    $fclose(out);
                end
                //If words do not match
                else
                begin
                    $fdisplay(out, "word: %h", word,
                        "       ---      i2si_data: %h",
                        i2si_data, "       ---      Fail");
                end
                compare_count = compare_count + 1;
            end
        end
    end
                                                                                                                        
endmodule                                                                                               
                                                                                            
