`define N 11 // number of test elements

////////////////////////////////////////////////////////////////////////////////
// Module Name:   i2s_in_test2.v
// Create Date:   1/10/2016
// Last Edit:     1/10/2016
// Author:        Kevin Cao
//
// Description      Tests the BIST Generator. Sawtooth wave starting value is 0x800 and upper limit value is 0x700
//                  Outputs success or failure of test to i2s_in_test2_output.txt
//
//                  Comparison test is currently broken. However BIST has been verified to work
//
// 
////////////////////////////////////////////////////////////////////////////////


module i2s_in_test2;

	// Inputs
	reg                             clk;
	wire                            rst_n;
                                                
	reg                             inp_sck;
	wire                            inp_ws;
	wire                            inp_sd;
    
	wire                            rf_i2si_en;
	reg     [11:0]                  rf_bist_start_val;
	reg     [ 7:0]                  rf_bist_inc;
	reg     [11:0]                  rf_bist_up_limit;
	reg                             rf_mux_en;
    
    wire                            i2si_rtr;
    
    reg                             trig_fifo_overrun_clr;

	// Outputs
	wire    [31:0]                  i2si_data;
	wire                            i2si_rts;
	wire                            ro_fifo_overrun;
	wire                            sync_sck;
    
    // Internal Variables
    reg     [15:0]                  test_data [`N-1:0] [0:1];                                        // [Bits Per Word] test_data [# of entities in test] [Left/Right]
    reg                             sck_d1;                                                          // serial clock delay
    integer                         count;                                                           // clock counter
    integer                         sck_cnt;                                                         // serial clock counter
    integer                         bit_cnt;                                                         // bit number counter
    integer                         lr_cnt;                                                          // left right counter
    integer                         word_cnt;                                                        // word counter
    parameter                       cyc_per_half_sck = 40;                                           // about (100 MHz / 1.44 MHz)/2
    parameter                       bit_tc =  15;                                                    // number of bits in a word
    
    reg     [31:0]                  word;                                                            // Stores the expected word, to be compared with i2si_data          
    reg                             test_complete = 0;                                               // Boolean to help decide if to continue comparing word and i2si_data
    reg                             ignore_first_fail = 0;                                           // Boolean that ignores the first failure if word and i2si_data do not match
    integer                         cycles_complete = 0;                                             // Tracks the # of cycles the test succeeded    

    
    reg     [15:0]                  ext_start_val;                                                   //16 bit sign extension of rf_bist_start_val   
                                                                                                        
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
		.trig_fifo_overrun_clr(trig_fifo_overrun_clr), 
		.ro_fifo_overrun(ro_fifo_overrun), 
		.sync_sck(sync_sck),
        .sync_sck_transition(sync_sck_transition)
	);

	initial begin                                                               
		clk = 0;                                                                                        
		inp_sck = 0;                                                                                                                                                               
        rf_bist_start_val = 12'h800;                                                                   // Set starting value to 1                                                                                                
        rf_bist_inc = 8'h80;                                                                         // Set increment value to 1                      
        rf_bist_up_limit = 12'h700;                                                                   // Set BIST upper limit to 25                              
		rf_mux_en = 1;                                                                               // Enable multiplexer, Output BIST generator content                                                                                               
		trig_fifo_overrun_clr = 0;


        ext_start_val = {{4{rf_bist_start_val[11]}}, rf_bist_start_val};
        
        word = {~ext_start_val, ext_start_val};                                                                    // Set expected word to the starting value   
                                                                                                        
        out = $fopen("i2s_in_test2_output.txt");                                                    // Open i2si_in_test2_output.txt                                                       
                                                                                                                                                                                     
                                                                                                                                                                                        
                                                                                                                                                                                     
        // Initialize Test Data
        // Not relevant to BIST testing
        test_data [ 0] [0] = 16'hAAAA;                                                                                   
        test_data [ 0] [1] = 16'hFFFF;                                                                                           
        test_data [ 1] [0] = 16'hAAAA;                                                                           
        test_data [ 1] [1] = 16'hCCCC;                                                                                                       
        test_data [ 2] [0] = 16'hCDD7;                                                                                                   
        test_data [ 2] [1] = 16'hBABA;                                                                                                   
        test_data [ 3] [0] = 16'h4444;                                                                                   
        test_data [ 3] [1] = 16'hAAAA;                                                                               
        test_data [ 4] [0] = 16'h7398;                                                                                           
        test_data [ 4] [1] = 16'hFFDD;                                                                               
        test_data [ 5] [0] = 16'h1111;                                                                           
        test_data [ 5] [1] = 16'h5982;                                                                               
        test_data [ 6] [0] = 16'h0001;                                                                       
        test_data [ 6] [1] = 16'hFFFF;                                                                               
        test_data [ 7] [0] = 16'h1478;                                                                               
        test_data [ 7] [1] = 16'hA3B9;                                                                                                   
        test_data [ 8] [0] = 16'hF8D5;                                                                                   
        test_data [ 8] [1] = 16'hD55A;                                                                                   
        test_data [ 9] [0] = 16'h99C5;                                                                           
        test_data [ 9] [1] = 16'h7435;                                                                                               
        test_data [10] [0] = 16'h69D9;                                                                      
        test_data [10] [1] = 16'hABCD;                                                                                      
                                                                                                                                                
                                                                                                                                                        
	end                                                                                                                             
                                                                                                                                                                        
                                                                                                                                                                            
    // Defining the master clock                                                                                                                                    
    always                                                                                                                              
    begin                                                                                               
        count = 0;                                                                                                      
        forever                                                                                                 
        begin                                                                                                           
            #5 clk = ~clk;                                                                           // 100 MHz clock
            count = count + 1;                                                                                  
        end                                                                                                                 
    end                                                                                                                 
                                                                                                                                                                                                                                                                                                                   	 
                                                                                                                                
    // Defining the serial clock, and keeps track of which test_data bit to input                                                                                                                    
    always @ (posedge clk or negedge rst_n)                                                                             
    begin                                                                                                           
        if(!rst_n)                                                                                              
        begin                                                                                                   
            sck_cnt     <= 0;                                                                              // counts master clock cycles, causes sck to toggle each time it hits cyc_per_half_sck
            bit_cnt     <= 0;                                                                              // count number of bits
            word_cnt    <= 0;                                                                             // count the word number
            lr_cnt      <= 0;                                                                             // left=0 and right=1
            inp_sck     <= 0;                                                                              // serial clock
            sck_d1      <= 0;                                                                               // serial clock delayed by one clock cycle
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
            if(!test_complete)
            begin
                // word and i2si_data match. Print succeeded comparison
                if(word == i2si_data) 
                begin
                    $fdisplay (out, "word == i2si_data        word: %d", word,
                    "        i2si_data: %d", i2si_data, "      ---     PASS");
                    word = word + rf_bist_inc;
                    // If upper limit is reached, reset word to beginning value
                    if(word > rf_bist_up_limit)
                    begin
                        cycles_complete = cycles_complete + 1;
                        $fdisplay(out, "\ncycles_complete: %d", cycles_complete, "\n");
                        word = {~ext_start_val, ext_start_val};
                        // If 2 cycles of BIST succeeded end comparison
                        if(cycles_complete == 2)
                        begin
                            test_complete = 1;
                            $fdisplay(out, "TEST SUCCEEDED!!!");
                            #1 $fclose(out);
                        end
                    end
                end
                // Ignores the first failure, as i2si_data begins at value 0 and rf_bist_start_val may not start at 0
                else if(!ignore_first_fail)
                begin
                    ignore_first_fail = 1;
                end
                // An error was found. Print offending comparison and close text file
                else
                begin
                    $fdisplay (out, "word != i2si_data        word: %d", word,
                    "        i2si_data: %d", i2si_data, "      ---     FAIL");
                    test_complete = 1;
                    $fdisplay (out, "TEST FAILED!!!");
                    #1 $fclose(out);
                end
            end                        
        end
    end
      
endmodule

