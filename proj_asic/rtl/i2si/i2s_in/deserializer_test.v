`define N 11 // number of test elements

module i2si_deserializer_testbench;

   // Inputs
    reg                 clk;                                                                        // master clock
    wire                sck_transition;                                                             // sck level to pulse converter
    reg                 rf_i2si_en;                                                                 // i2si enable
    reg [15:0]          test_data [`N-1:0] [0:1];                                                   // [Bits Per Word] test_data [# of entities in test] [Left/Right]
                                                                                                                
    // Outputs
    wire [15:0]         out_lft;                                                                    // left audio dataF
    wire [15:0]         out_rgt;                                                                    // right audio data
    wire                out_xfc;                                                                    // transfer complete
    wire                rst_n;                                                                      // reset
    wire                in_sd;                                                                      // serial data
    wire                in_ws;                                                                      // word select

    // Internal Variables
    reg                 i2si_sck;                                                                   
    reg                 sck_d1;                                                                     // serial clock delay
    reg [31:0]          count;                                                                      // clock counter
    reg [31:0]          sck_cnt;                                                                    // serial clock counter
    reg [31:0]          bit_cnt;                                                                    // bit number counter
    reg                 lr_cnt;                                                                     // left right counter
    reg [31:0]          word_cnt;                                                                   // word counter
    reg [31:0]          cyc_per_half_sck = 40;                                                      // about (100 MHz / 1.44 MHz)/2
    reg [31:0]          bit_tc =  15;                                                               // number of bits in a word

    // Instantiate the Unit Under Test (UUT)
    i2si_deserializer uut (
        .clk(clk), 
        .rst_n(rst_n), 
        .sck_transition(sck_transition), 
        .in_ws(in_ws), 
        .in_sd(in_sd), 
        .rf_i2si_en(rf_i2si_en), 
        .out_lft(out_lft), 
        .out_rgt(out_rgt), 
        .out_xfc(out_xfc)
    );

    initial begin
        // Initialize Inputs
        clk = 0;
        rf_i2si_en = 0;

        // Test Data
        test_data [0] [0] = 16'hAAAA;
        test_data [0] [1] = 16'hFFFF;
        test_data [1] [0] = 16'h1478;
        test_data [1] [1] = 16'hA3B9;
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

        #694
        rf_i2si_en = 1;                                                                             // enable i2si after 694ns
    end

    always
    begin
        count = 0;                                                                                  // set clock counter to zero
    forever
        begin
            #5 clk = ~clk;                                                                          // 100 MHz clock
            count = count + 1;                                                                      // increment clock counter
        end                                                                                         
    end                                                                                             
                                                                                                                    
    assign rst_n = !(count < 20);                                                                   // turn on reset not after 10 clock cycles
    assign sck_transition = i2si_sck & ~sck_d1;
    assign in_ws = ((0<=bit_cnt& bit_cnt<=16'd14)&lr_cnt==1)|((bit_cnt==16'd15)&(lr_cnt==0)); 
    assign in_sd = test_data [word_cnt][lr_cnt][bit_tc-bit_cnt];                                    // assign serial data from the test_data

    always @ (posedge clk or negedge rst_n)
    begin
        if(!rst_n)
        begin
            sck_cnt<=0;                                                                             // counts master clock cycles, causes sck to toggle each time it hits cyc_per_half_sck
            bit_cnt<=0;                                                                             // count number of bits
            word_cnt<=0;                                                                            // count the word number
            lr_cnt <= 0;                                                                            // left=0 and right=1
            i2si_sck<=0;                                                                            // serial clock
            sck_d1<=0;                                                                              // serial clock delayed by one clock cycle
        end
        else
        begin
        
            if (sck_cnt == cyc_per_half_sck-1)                                                      // cyc_per_half_sck ~ (100 MHz/1.44 MHz)/2
            begin
                sck_cnt <= 0;                                                                       // reset serial clock counter
                i2si_sck <= ~i2si_sck;                                                              // toggle serial clock
            end
            else
                sck_cnt <= sck_cnt + 1;                                                             // increment serial clock counter
        
            sck_d1<=i2si_sck;                                                                       // generate 1 cycle delay of i2si_sck
            if(i2si_sck & ~sck_d1)                                                                  // on a positive transition of sck...
            
            begin
                if (bit_cnt==bit_tc)                                                                // bit_tc = 15
                begin
                    if (lr_cnt == 1)                                                                // if right
                    begin                                                                                   
                        word_cnt<=word_cnt+1;                                                       // words in the testbench array
                        lr_cnt<=0;                                                                  // set to left 
                    end
                    else
                        lr_cnt<=1;                                                                  // set to right
                    bit_cnt<=0;                                                                     // reset bit counter
                end
                else
                    bit_cnt<=bit_cnt+1;                                                             // increment bit counter
            end 
        end
    end

endmodule

