`define N 11 // number of test elements

module i2si_deserializer_testbench;

	// Inputs
	reg clk; // master clock
	reg i2si_sck; // serial clock
	reg i2si_ws; // word select
	reg rf_i2si_en; // i2si enable
	reg [15:0] test_data [`N-1:0] [0:1]; // [Bits Per Word] test_data [# of entities in test] [Left/Right]

	// Outputs
	wire [15:0] i2si_lft; // left audio data
	wire [15:0] i2si_rgt; // right audio data
	wire i2si_xfc; // transfer complete
    wire rst_n; // reset not
    wire i2si_sd; // serial data
	
    
    // Internal Variables
    reg sck_d1; // serial clock delay
    reg [31:0] count;
    reg [31:0] sck_cnt; // serial clock counter
    reg [31:0] bit_cnt; // bit number counter
    reg lr_cnt; // left right counter
    reg word_cnt; // word counter
    reg [31:0] cyc_per_half_sck = 40; // about (100 MHz / 1.44 MHz)/2
    reg [31:0] bit_tc =  15; // number of bits in a word
    
    /*reg [31:0] i=0;
	reg [31:0] b=0;*/
    
    
	// Instantiate the Unit Under Test (UUT)
	i2si_deserializer uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.i2si_sck(i2si_sck), 
		.i2si_ws(i2si_ws), 
		.i2si_sd(i2si_sd), 
		.rf_i2si_en(rf_i2si_en), 
		.i2si_lft(i2si_lft), 
		.i2si_rgt(i2si_rgt), 
		.i2si_xfc(i2si_xfc)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		i2si_sck = 0;
		i2si_ws = 1;
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
		rf_i2si_en = 1;	
	end
	
	/*always @ (posedge i2si_sck) begin
		for(i=0;i<11;i=i+1) begin
			for(b=0;b<16;b=b+1) begin
                #694;
			end
			i2si_ws=~i2si_ws;
		end
	end  */  
    
	always
	begin
		count = 0;
	forever
		begin
			#5 clk = ~clk;
			count = count + 1;
		end
	end

    assign rst_n = !(count < 20);
    assign rst = ~rst_n;
    assign i2si_sd = test_data [word_cnt][lr_cnt][bit_cnt];
  
 
	
    always @ (posedge clk or negedge rst)
    begin
        if(rst!=0)
        begin
            sck_cnt<=0;     // counts master clock cycles, causes sck to toggle each time it hits cyc_per_half_sck
            bit_cnt<=0; 
            word_cnt<=0;
            lr_cnt <= 0;
            i2si_sck<=0;
            sck_d1<=0;
        end
        else
        begin
            // handle sclk toggle counter, and sclk
            
            if (sck_cnt == cyc_per_half_sck - 1)    // cyc_per_half_sck ~ 100 MHz/1.44 MHz/2
            begin
                sck_cnt <= 0;
                i2si_sck <= ~i2si_sck;
            end
            else
                sck_cnt <= sck_cnt + 1;
            
            sck_d1<=i2si_sck;           // generate 1 cycle delay of i2si_sck
            
            if(i2si_sck & ~sck_d1)      // on a positive transition of sck ...
            begin
                if (bit_cnt==bit_tc)    // bit_tc = 15
                begin
                    if (lr_cnt == 1) // l=0 and r=1
                    begin
                        word_cnt<=word_cnt+1;   // words in the testbench array
                        lr_cnt<=0;
                    end
                    else
                        lr_cnt<=1;
                    bit_cnt<=0;
                end
                else
                    bit_cnt<=bit_cnt+1;
            end
        end
    end
    
    
endmodule

