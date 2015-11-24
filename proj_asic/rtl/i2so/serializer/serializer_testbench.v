
module serializer_testbench;

    // Inputs
    reg clk;
    reg rst_n;
    reg filt_i2so_rts;
    reg [15:0] filt_i2so_lft;
    reg [15:0] filt_i2so_rgt;
    reg sck_transition;
    
    // Internal Variables
    reg sck_d1; // serial clock delay
    reg [31:0] sck_cnt; // serial clock counter
    reg [31:0] cyc_per_half_sck = 40; // about (100 MHz / 1.44 MHz)/2

    
    
    reg                     sck;
    reg [31:0]              count;
    reg [31:0]              word_count;                         // word counter
    reg [15:0]              test_data [0:9] [0:1];              // [Bits Per Word] test_data [# of entities in test] [Left/Right]

    // Outputs
    wire i2so_sd;
    wire i2so_ws;
    wire filt_i2so_rtr;

    // Instantiate the Unit Under Test (UUT)
    serializer uut (
        .clk(clk), 
        .rst_n(rst_n), 
        .filt_i2so_rts(filt_i2so_rts), 
        .i2so_sd(i2so_sd), 
        .i2so_ws(i2so_ws), 
        .filt_i2so_lft(filt_i2so_lft), 
        .filt_i2so_rgt(filt_i2so_rgt), 
        .filt_i2so_rtr(filt_i2so_rtr),
        .sck_transition(sck_transition)
    );

initial begin
        // Initialize Inputs
        clk = 0;
        rst_n = 0;
        filt_i2so_rts = 0;
        filt_i2so_lft = 0;
        filt_i2so_rgt = 0;
        sck_transition = 0;
        
        sck = 0;

        // Test Data
        test_data [0] [0] = 16'h0000;
        test_data [0] [1] = 16'hFFFF;
        test_data [1] [0] = 16'hFF00;
        test_data [1] [1] = 16'h00FF;
        test_data [2] [0] = 16'hAAAA;
        test_data [2] [1] = 16'h5555;
        test_data [3] [0] = 16'hBABA;
        test_data [3] [1] = 16'h4444;
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
        
        #694
        filt_i2so_rts = 1;

end


always
begin
    count = 0;
    forever
    begin
        #5 clk = ~clk;
        count = count + 1; // increment clock counter
    end
end



always @(*)
begin
    rst_n = !(count < 20); // turn on reset after 10 clock cycles

      sck_transition <= sck & ~sck_d1;
    
    if(word_count >= 0 && word_count <= 9)
    begin
        filt_i2so_lft = test_data [word_count][0];
        filt_i2so_rgt = test_data [word_count][1];
    end
end


always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        begin
            word_count <= -1;
        end
    else if(filt_i2so_rtr)
        begin
            word_count <= word_count + 1;
        end
end



    always @ (posedge clk or negedge rst_n)
    begin
        if(!rst_n)
        begin
            sck_cnt <= 0;     // counts master clock cycles, causes sck to toggle each time it hits cyc_per_half_sck
            word_count <= -1;    // count the word number
            sck <= 0;    // serial clock
            sck_d1 <= 0;      // serial clock delayed by one clock cycle
        end
        else
        begin
        
            if (sck_cnt == cyc_per_half_sck-1) // cyc_per_half_sck ~ (100 MHz/1.44 MHz)/2
            begin
                sck_cnt <= 0;   // reset serial clock counter
                sck <= ~sck; // toggle serial clock
            end
            else
                sck_cnt <= sck_cnt + 1; // increment serial clock counter
        
            sck_d1<=sck;           // generate 1 cycle delay of sck
            
            if(filt_i2so_rtr)      // on a positive transition of sck...
                word_count<=word_count+1;   // words in the testbench array          
        end
        
    end
      
endmodule

