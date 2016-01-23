`define BUF_WIDTH 3 // set the buffer width equal to 3
`define DATA_SIZE 32 // no. of bits for fifo data
`define NUM_ELEMENTS 100 // no. of test elements

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:22:04 01/19/2016
// Design Name:   i2s_out
// Module Name:   C:/Users/kevin/Documents/GitHub/Chip-Design/proj_asic/rtl/i2so/i2s_out_test2.v
// Project Name:  i2s_out
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: i2s_out
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module i2s_out_test2;

	// Inputs
	reg                         clk;
	wire                        rst_n;
    
    wire                        i2so_sync_sck;
	wire                        i2so_sck_transition;
    
	reg                         filt_rts;
	reg [31:0]                  filt_data;
    
	reg                         trig_fifo_underrun;
    

	// Outputs
	wire                        filt_rtr;
	wire                        i2so_ws;
	wire                        i2so_sd;
	wire                        ro_fifo_underrun;
    
    
    // Internal Variables
    reg                         sck_d1;                                                         // serial clock delay
    reg [31:0]                  sck_cnt;                                                        // serial clock counter
    reg [31:0]                  cyc_per_half_sck = 40;                                          // about (100 MHz / 1.44 MHz)/2
    reg                         ws_d1;                                                          // word select delay
    reg                         ws_d2;                                                          // word select delay by 2 clock cycles
    wire                        ws_transition;                                                  // level to pulse converter when ws_dl goes from low to high
                                                                                    
    reg                         sck;                                                            // serial clock                        
    integer                     count = 0;                                                      // clock counter        
    reg [31:0]                  word_count;                                                     // word counter
    reg [`DATA_SIZE-1:0]        test_data [0:`NUM_ELEMENTS-1];                                  // test_data [# of entities in test]
    integer                     index;                                                          // index counter for test_data
    
    reg [`DATA_SIZE-1:0]        filt_data_list [0:`NUM_ELEMENTS-1];                             // stores values of filt_data
    integer                     filt_data_count = 0;                                            // keeps track of which data word to output
    reg [`DATA_SIZE-1:0]        word;                                                           // serial data rebuilt in parallel, for comparison
    
    reg                         match_found = 0;                                                // boolean value used to find the starting point of comparison
    integer                     match_count;                                                    // counter that helps find the starting point for comparison
    reg                         begin_comparison = 0;                                           // boolean value used to start the comparison loop
    reg                         test_failed = 1;                                                // boolean that determines if no matches were found and the test failed  
                                                                                                                                
    integer                     out;                                                            // Helps create output text file


                                                                                        
    

	// Instantiate the Unit Under Test (UUT)
	i2s_out uut (
		.clk(clk), 
		.rst_n(rst_n),
        .i2so_sync_sck(i2so_sync_sck),
		.i2so_sck_transition(i2so_sck_transition), 
		.filt_rts(filt_rts), 
		.filt_data(filt_data), 
		.filt_rtr(filt_rtr),
        .i2so_sck(i2so_sck),
		.i2so_ws(i2so_ws), 
		.i2so_sd(i2so_sd), 
		.ro_fifo_underrun(ro_fifo_underrun), 
		.trig_fifo_underrun(trig_fifo_underrun)
	);

	initial
    begin
		// Initialize Inputs
		clk = 0;
		filt_rts = 0;
		filt_data = 0;
		trig_fifo_underrun = 0;
                                                                                                                                    
                                                                                                                                
        out = $fopen("i2s_out_test2_output.txt");                                                // Open i2s_out_test2_output.txt  
                                                                                                                
                                                                                                                                    
                                                                                                                            
        //Internal variables                                                                                                    
        for(index = 0; index < `NUM_ELEMENTS; index = index + 1)
        begin            
            test_data [index] = $random;
        end   
        
	end                                                                                                                                             
                                                                                                                                                        
                                                                                                                            
    // Creates master clock signal                                                                                                                  
    always                                                                                                                              
    begin                                                                                                                                                                                                                    
    forever                                                                                                     
        begin                                                                                       
            #5 clk = ~clk;                                                                          
            count = count + 1;                                                                  // increment clock counter
        end                                                                                     
    end                                                                         
                                                                                
                                                                                        
    // Creates the serial clock signal                                                                                            
    always @ (posedge clk or negedge rst_n)                                         
    begin                                                                                   
        if(!rst_n)                                                                              
        begin                                                               
            sck_cnt <= 0;                                                                       // counts master clock cycles, causes sck to toggle each time it hits cyc_per_half_sck
            sck <= 0;                                                                           // serial clock
            sck_d1 <= 0;                                                                        // serial clock delayed by one clock cycle
        end                                                                 
        else                                                                
        begin                                                               
                                                                            
            if (sck_cnt == cyc_per_half_sck-1)                                                  // cyc_per_half_sck ~ (100 MHz/1.44 MHz)/2
            begin                                                               
                sck_cnt <= 0;                                                                   // reset serial clock counter
                sck <= ~sck;                                                                    // toggle serial clock
            end
            else
                sck_cnt <= sck_cnt + 1;                                                         // increment serial clock counter
        
            sck_d1 <= sck;                                                                      // generate 1 cycle delay of sck     
        end        
    end
    
    
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
    
    // Queue words into FIFO and stores word into an array for comparison    
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
        begin
            word_count <= 0;
        end
        // If word count is greater than the number of elements being queued, stop queueing data
        else if(word_count > `NUM_ELEMENTS-1)
        begin
            word_count <= word_count + 1;
        end        
        // count % 2551 was determined by guess and check. Wanted to queue data slow enough so buffer doesn't
        // become full. Also wanted to ensure every time ws_transition is high the variable word is the next queued word
        // if using a number larger then 2551, word may not change its value to the next queued word when ws_transition is high
        else if(count % 2551 == 0)                                                                  
        begin                                                                                       
            queue(test_data [word_count]);                                                          //indicates when to queue more data
            word_count <= word_count + 1;                                                           //indicates which data to queue
            filt_data_list [word_count] <= filt_data;                                               //stores the word that is outputted by the fifo for comparison
        end
    end
    

    assign rst_n = !(count < 20);                                                                   // turn on reset after 10 clock cycles
    assign i2so_sync_sck = sck;                                                                     // assign serial clock input value
    assign i2so_sck_transition = sck & ~sck_d1;                                                     // level to pulse converter when sck goes from low to high
    assign ws_transition = ~ws_d1 & ws_d2;                                                          // level to pulse converter when ws goes from high to low
                                                                                                
                                                                                    
    // Creates 32 bit words from the serial data being outputted to be compared with the words in filt_data_list
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
                                                                                                        
                                                                                                            
    // Checking if data is properly serialized                                                              
    always @(posedge clk)                                                                               
    begin                                                                           
        if(ws_transition && i2so_sck_transition)                                         
        begin
            // Find first input word that matches output word
            if(!match_found)                                                        
            begin                                                                   
                for(match_count = 0; match_count < `NUM_ELEMENTS; match_count = match_count + 1)
                begin                                                                   
                    if(word == filt_data_list[match_count])                        
                    begin                                                               
                        match_found = 1;                                                            // ends loop to find matching words    
                        begin_comparison = 1;                                                       // booolean to begin comparison test
                        test_failed = 0;                                                            // ensures failed message does not output
                        filt_data_count = match_count;                                              // sets which index in the array the comparison test should begin
                    end
                end
            end
            // No matches were found. End trying to find a match
            if(count > 30000 && !begin_comparison && test_failed)
            begin
                match_found = 1;
                test_failed = 0;
                $fdisplay (out, "No matches found. Comparison test failed");
                #1;
                $fclose(out);
            end
            
            // Initial match found. Begin comparison test            
            if(begin_comparison)
            begin
                // If words inputted and outputted match
                if(word == filt_data_list[filt_data_count])
                begin
                    $fdisplay (out, "word: %h", word, "    ---     ",
                        "filt_data_list [%d", filt_data_count, "]: %h",
                        filt_data_list [filt_data_count], "     ---     Pass");
                end
                // End comparison test after 15 words
                else if(filt_data_count > (`NUM_ELEMENTS-1))
                begin
                    begin_comparison = 0;
                    $fclose(out);
                end
                // If words inputted and outputted do not match
                else
                begin
                    $fdisplay (out, "word: %h", word, "    ---     ",
                        "filt_data_list [%d", filt_data_count, "]: %h",
                        filt_data_list [filt_data_count], "     ---     Fail");
                end
                filt_data_count = filt_data_count + 1;
            end
        end
    end
    
    
    
    
    
    // Defining queue task for FIFO
    task queue;                                                                                     // define the queue task
    input[31:0] data;                                                                               // the data to be queueed
       if(!filt_rtr)                                                                                // if buffer is full display warning
                $display("---Cannot queue: Buffer Full---");                
            else                                                                                    // if buffer is not full
            begin
               $display("Queued %h",data );                                                         // display that the data was queueed
               filt_data = data;                                                                    // the input to the buffer is set as the data
               filt_rts = 1;                                                                        // write is enabled
               @(posedge clk);                                                                      // checks if clock is at postive edge
               #1 filt_rts = 0;                                                                     // set write enabled equal to zero then
            end
    endtask
      
endmodule

