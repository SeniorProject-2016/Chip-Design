`timescale 1ns / 1ps
`define N 11 // number of test elements

////////////////////////////////////////////////////////////////////////////////
//
// Create Date:   15:51:28 11/27/2015
// Last Edit:     12/2/15
// Design Name:   i2s_in
// Project Name:  i2s_in
// 
////////////////////////////////////////////////////////////////////////////////

module i2s_in_test;

    reg [3:0]                       check_count1 = 0;
    reg [3:0]                       check_count2 = 0;
    reg                             check_done = 0;
    reg [31:0]                      check_run_count = 0;
    reg                             match;
    reg                             match_found = 0;
    reg                             begin_comparison = 0;
    reg [31:0]                      word;

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
        rf_bist_start_val = 12'h001;                                                                                                
        rf_bist_inc = 12'h001;                                                                                              
        rf_bist_up_limit = 12'h019;                                                                                                 
		rf_mux_en = 0;                                                                                                                                                                                   
		trig_fifo_overrun_clr = 0;                                                                                                  
                                                                                                                                                
                                                                                                                                            
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

/*
    //Checks if the data was properly deserialized
    always @(posedge clk)
    begin
        if(i2si_rts && i2si_rtr)
        begin
            for(check_count1 = 0; check_count1 < `N; check_count1 = check_count1 + 1)
            begin
                word = {test_data [check_count1] [0], test_data [check_count1] [1]};
                if(word == i2si_data)
                begin
                    $display ("word: %h", word, "       ---      i2si_data: %h", i2si_data, "       --- Pass");
                    $display ("check_count1: %d", check_count1);
                    $display ("count: %d", count);
                end
            end
        end
    end
*/



    //Checks if the data was properly deserialized
    always @(posedge clk)
    begin
        if(i2si_rts && i2si_rtr)
        begin
            if(!match_found)
            begin
                for(check_count1 = 0; check_count1 < `N; check_count1 = check_count1 + 1)
                begin
                    word = {test_data [check_count1] [0], test_data [check_count1] [1]};
                    if(word == i2si_data)
                    begin
                        $display ("match found");
                        $display ("count: %d", count);
                        match_found = 1;
                        begin_comparison = 1;
                        check_count2 = check_count1;
                    end
                end
            end
            //Stop checking. No matches found.
            else if(count > 20000 && !begin_comparison)
            begin
                match_found = 1;
            end
            
            
            
            if(begin_comparison)
            begin
                word = {test_data [check_count2] [0], test_data [check_count2] [1]};
                if(word == i2si_data)
                begin
                    $display ("word: %h", word, "       ---      i2si_data: %h", i2si_data, "       --- Pass");
                    $display ("check_count2: %d", check_count2);
                end
                else if(i2si_data === 32'hxxxxxxxx)
                begin
                    $display ("End of Comparison");
                    begin_comparison = 0;
                end
                else
                begin
                    $display ("word: %h", word, "       ---      i2si_data: %h", i2si_data, "       --- Fail");
                    $display ("check_count2: %d", check_count2);
                end
                check_count2 = check_count2 + 1;
            end
        end
    end
                                                                                                                        
endmodule                                                                                               
                                                                                            
