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
	reg                         rst_n;
	reg                         sck_transition;
    
	reg                         filt_rts;
	reg                         [31:0] filt_data;
    
	reg                         trig_fifo_underrun;
	reg                         trig_fifo_overrun;
    

	// Outputs
	wire                        filt_rtr;
	wire                        i2so_ws;
	wire                        i2so_sd;
	wire                        ro_fifo_underrun;
	wire                        ro_fifo_overrun;
    
    
    // Internal Variables
    reg                         sck_d1;                                 // serial clock delay
    reg [31:0]                  sck_cnt;                                // serial clock counter
    reg [31:0]                  cyc_per_half_sck = 40;                  // about (100 MHz / 1.44 MHz)/2
                                                                        
    reg                         sck;                                                            
    reg [31:0]                  count;                                          
    reg                         LR_count;                                   
    reg [3:0]                   word_count;                             // word counter
    reg [`DATA_SIZE-1:0]        test_data [0:9];                        // test_data [# of entities in test]
                                                                                        
    

	// Instantiate the Unit Under Test (UUT)
	i2s_out uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.sck_transition(sck_transition), 
		.filt_rts(filt_rts), 
		.filt_data(filt_data), 
		.filt_rtr(filt_rtr), 
		.i2so_ws(i2so_ws), 
		.i2so_sd(i2so_sd), 
		.ro_fifo_underrun(ro_fifo_underrun), 
		.trig_fifo_underrun(trig_fifo_underrun), 
		.ro_fifo_overrun(ro_fifo_overrun), 
		.trig_fifo_overrun(trig_fifo_overrun)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;
		sck_transition = 0;
		filt_rts = 0;
		filt_data = 0;
		trig_fifo_underrun = 0;
		trig_fifo_overrun = 0;
        
        //Internal variables
        LR_count = 0;
        test_data [0] = 32'hFFFFFFFF;
        test_data [1] = 32'hAAAAAAAA;
        test_data [2] = 32'hFFFF0000;
        test_data [3] = 32'h0000FFFF;
        test_data [4] = 32'hCCCCCCCC;
        test_data [5] = 32'h33333333;
        test_data [6] = 32'h11111111;
        test_data [7] = 16'h22222222;
        test_data [8] = 16'hEEEEEEEE;
        test_data [9] = 16'h88888888;
        
        #200;
        
        queue(test_data [0]);
        #200;
        queue(test_data [1]);
        #200;
        queue(test_data [2]);
        #200;
        queue(test_data [3]);
        #200;
        queue(test_data [4]);
        #200;
        queue(test_data [5]);
        #200;
        queue(test_data [6]);
        #200;


	end
    
    always @(*)
    begin
        rst_n = !(count < 20);                                          // turn on reset after 10 clock cycles
        sck_transition <= sck & ~sck_d1;                                    
    end                                                                                     
                                                                                        
    always                                                                                  
    begin                                                                               
    count = 0;                                                                              
    forever                                                                                                 
    begin                                                                                   
        #5 clk = ~clk;                                                              
        count = count + 1;                                              // increment clock counter
    end                                                                     
end                                                                                 
                                                                                
                                                                                        
                                                                                                
    always @ (posedge clk or negedge rst_n)                                         
    begin                                                                                   
        if(!rst_n)                                                                              
        begin                                                               
            sck_cnt <= 0;                                               // counts master clock cycles, causes sck to toggle each time it hits cyc_per_half_sck
            word_count <= -1;                                           // count the word number
            sck <= 0;                                                   // serial clock
            sck_d1 <= 0;                                                // serial clock delayed by one clock cycle
        end                                                                 
        else                                                                
        begin                                                               
                                                                            
            if (sck_cnt == cyc_per_half_sck-1)                          // cyc_per_half_sck ~ (100 MHz/1.44 MHz)/2
            begin
                sck_cnt <= 0;                                           // reset serial clock counter
                sck <= ~sck;                                            // toggle serial clock
            end
            else
                sck_cnt <= sck_cnt + 1;                                 // increment serial clock counter
        
            sck_d1<=sck;                                                // generate 1 cycle delay of sck
     
        end
        
    end
    
/*    
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
    begin
        word_count <= -1;
    end
    else if(!LR_count)
    begin
        LR_count <= 1'b1;
    end
    else if(filt_i2so_rtr && LR_count)
    begin
        word_count <= word_count + 1;
        LR_count <= 1'b0;
    end
end
*/
                                                                                                                        

task queue;                                                             // define the queue task
input[31:0] data;                                                       // the data to be queueed
   if( !filt_rtr )                                                      // if buffer is full display warning
            $display("---Cannot queue: Buffer Full---");                
        else                                                            // if buffer is not full
        begin
           $display("Queued ",data );                                   // display that the data was queueed
           filt_data = data;                                            // the input to the buffer is set as the data
           filt_rts = 1;                                                // write is enabled
           @(posedge clk);                                              // checks if clock is at postive edge
           #1 filt_rts = 0;                                             // set write enabled equal to zero then
        end
endtask


      
endmodule

