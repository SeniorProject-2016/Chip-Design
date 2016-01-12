`define BUF_WIDTH 3 // set the buffer width equal to 3
`define DATA_SIZE 32 // no. of bits for fifo data

////////////////////////////////////////////////////////////////////////////////
//
// Create Date:   18:00:14 11/27/2015
// Last Edit:     12/2/15
// Design Name:   i2s_out
// Project Name:  i2s_in
// 
////////////////////////////////////////////////////////////////////////////////

module i2s_out_test;

	// Inputs
	reg                         clk;
	wire                        rst_n;
    
    wire                        sck_inp;
	wire                        sck_transition;
    
	reg                         filt_rts;
	reg [31:0]                  filt_data;
    
	reg                         trig_fifo_underrun;
    

	// Outputs
	wire                        filt_rtr;
	wire                        i2so_ws;
	wire                        i2so_sd;
	wire                        ro_fifo_underrun;
    
    
    // Internal Variables
    reg                         sck_d1;                                         // serial clock delay
    reg [31:0]                  sck_cnt;                                        // serial clock counter
    reg [31:0]                  cyc_per_half_sck = 40;                          // about (100 MHz / 1.44 MHz)/2
    reg                         ws_d1;                                          // word select delay
    reg                         ws_d2;                                          // word select delay by 2 clock cycles
    wire                        ws_transition;                                  // level to pulse converter when ws_dl goes from low to high
                                                                                    
    reg                         sck;                                            // serial clock                        
    reg [31:0]                  count;                                          // clock counter        
    reg [31:0]                  word_count;                                     // word counter
    reg [`DATA_SIZE-1:0]        test_data [0:15];                               // test_data [# of entities in test]
    
    reg [31:0]                  filt_data_list [0:15];                          // stores values of filt_data
    reg [4:0]                   filt_data_count = 0;                            // keeps track of which data word to output
    reg [31:0]                  word;                                           // serial data rebuilt in parallel, for comparison
    
    reg                         match_found = 0;                                // boolean value used to find the starting point of comparison
    reg [4:0]                   match_count;                                    // helps find the starting point for comparison
    reg                         begin_comparison = 0;                           // boolean value used to start the comparison loop
    reg                         test_failed = 1;

                                                                                        
    

	// Instantiate the Unit Under Test (UUT)
	i2s_out uut (
		.clk(clk), 
		.rst_n(rst_n),
        .sck_inp(sck_inp),
		.sck_transition(sck_transition), 
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
        
        //Internal variables
        test_data [0] = 32'hFFFFFFFF;
        test_data [1] = 32'hAAAAAAAA;
        test_data [2] = 32'hFFFF0000;
        test_data [3] = 32'h0000FFFF;
        test_data [4] = 32'hCCCCCCCC;
        test_data [5] = 32'h33333333;
        test_data [6] = 32'h11111111;
        test_data [7] = 32'h22222222;
        test_data [8] = 32'hEEEEEEEE;
        test_data [9] = 32'h88888888;
        test_data [10] = 32'hFA4588BB;
        test_data [11] = 32'hCD45FFAA;
        test_data [12] = 32'hED32DE66;
        test_data [13] = 32'h0456CB22;
        test_data [14] = 32'h5256AE55;
        test_data [15] = 32'hE3FC48B4;
	end                                                                       
                             
                             
    // Creates master clock signal                                                                                    
    always                                                                                  
    begin                                                                               
        count = 0;                                                                              
    forever                                                                                                 
        begin                                                                                   
            #5 clk = ~clk;                                                              
            count = count + 1;                                                  // increment clock counter
        end                                                                                     
    end                                                                         
                                                                                
                                                                                        
    // Creates the serial clock signal                                                                                            
    always @ (posedge clk or negedge rst_n)                                         
    begin                                                                                   
        if(!rst_n)                                                                              
        begin                                                               
            sck_cnt <= 0;                                                       // counts master clock cycles, causes sck to toggle each time it hits cyc_per_half_sck
            sck <= 0;                                                           // serial clock
            sck_d1 <= 0;                                                        // serial clock delayed by one clock cycle
        end                                                                 
        else                                                                
        begin                                                               
                                                                            
            if (sck_cnt == cyc_per_half_sck-1)                                  // cyc_per_half_sck ~ (100 MHz/1.44 MHz)/2
            begin                                                               
                sck_cnt <= 0;                                                   // reset serial clock counter
                sck <= ~sck;                                                    // toggle serial clock
            end
            else
                sck_cnt <= sck_cnt + 1;                                         // increment serial clock counter
        
            sck_d1 <= sck;                                                      // generate 1 cycle delay of sck     
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
        else if(sck_transition)
        begin
            ws_d1 <= i2so_ws;                                                   // generate 1 cycle delay of i2so_ws
            ws_d2 <= ws_d1;                                                     // generate 2nd cycle delay of i2so_ws
        end
    end
    
    // Queue words into FIFO and stores word into an array for comparison    
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
        begin
            word_count <= 0;
        end
        else if(word_count > 15)
        begin
            word_count <= word_count + 1;
        end
        else if(count % 1001 == 0)
        begin
            queue(test_data [word_count]);                                          //indicates when to queue more data
            word_count <= word_count + 1;                                           //indicates which data to queue
            filt_data_list [word_count] <= filt_data;                               //stores the word that is outputted by the fifo for comparison
        end
    end
    

    assign rst_n = !(count < 20);                                                   // turn on reset after 10 clock cycles
    assign sck_inp = sck;                                                           // assign serial clock input value
    assign sck_transition = sck & ~sck_d1;                                          // level to pulse converter when sck goes from low to high
    assign ws_transition = ~ws_d1 & ws_d2;                                          // level to pulse converter when ws goes from high to low
                                                                                                
                                                                                    
    // Creates 32 bit words from the serial data being outputted to be compared with the words in filt_data_list
    always @(posedge clk or negedge rst_n)                                                                  
    begin                                                                                                   
        if(!rst_n)                                                                                              
        begin                                                                                               
            word <= 32'b0;                                                                                      
        end                                                                                     
        else if(sck_transition)                                                                     
        begin                                                                               
            word[31:1] <= word[30:0];                                                                                       
            word[0] <= i2so_sd;                                                                     
        end                                                                                             
    end                                                                                             
                                                                                                        
                                                                                                            
    // Checking if data is properly serialized                                                              
    always @(posedge clk)                                                                               
    begin                                                                           
        if(ws_transition && sck_transition)                                         
        begin                                                                                                           
            if(!match_found)                                                        
            begin                                                                   
                for(match_count = 0; match_count < 16; match_count = match_count + 1)
                begin                                                                   
                    if(word == filt_data_list[match_count]) //32'h12345678)                         
                    begin                                                               
                        match_found = 1;                                            // ends loop to find matching words    
                        begin_comparison = 1;                                       // booolean to begin comparison test
                        test_failed = 0;                                            // ensures failed message does not output
                        filt_data_count = match_count;                              // sets which index in the array the comparison test should begin
                    end
                end
            end
            
            if(count > 30000 && !begin_comparison && test_failed)
            begin
                match_found = 1;
                test_failed = 0;
                $display ("No matches found. Comparison test failed");
            end
            
                        
            if(begin_comparison)
            begin
                if(word == filt_data_list[filt_data_count])
                begin
                    $display ("word: %h", word, "    ---     ",
                        "filt_data_list [%d", filt_data_count, "]: %h",
                        filt_data_list [filt_data_count], "     ---     Pass");
                end
                else if(filt_data_count > 15)
                begin
                    begin_comparison = 0;
                end
                else
                begin
                    $display ("word: %h", word, "    ---     ",
                        "filt_data_list [%d", filt_data_count, "]: %h",
                        filt_data_list [filt_data_count], "     ---     Fail");
                end
                filt_data_count = filt_data_count + 1;
            end
        end
    end
    
    
    
    
    
    // Defining queue task for FIFO
    task queue;                                                                     // define the queue task
    input[31:0] data;                                                               // the data to be queueed
       if(!filt_rtr)                                                                // if buffer is full display warning
                $display("---Cannot queue: Buffer Full---");                
            else                                                                    // if buffer is not full
            begin
               $display("Queued ",data );                                           // display that the data was queueed
               filt_data = data;                                                    // the input to the buffer is set as the data
               filt_rts = 1;                                                        // write is enabled
               @(posedge clk);                                                      // checks if clock is at postive edge
               #1 filt_rts = 0;                                                     // set write enabled equal to zero then
            end
    endtask
                                                                                                                    
endmodule

