`define N 11 // number of test elements

module i2si_deserializer_testbench;

	// Inputs
	reg clk;
	reg rst;
	reg i2si_sck;
	reg i2si_ws;
	reg i2si_sd;
	reg rf_i2si_en;
	
	// [Bits Per Word] test_data [# of entities in test] [Left/Right]
	reg [15:0] test_data [`N-1:0] [0:1];

	// Outputs
	wire [15:0] i2si_lft;
	wire [15:0] i2si_rgt;
	wire i2si_xfc;
	
	integer i=0;
	integer b=0;
	

	// Instantiate the Unit Under Test (UUT)
	i2si_deserializer uut (
		.clk(clk), 
		.rst(rst), 
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
		rst = 0;
		i2si_sck = 0;
		i2si_ws = 1;
		i2si_sd = 0;
		rf_i2si_en = 0;
		
		#694
		rf_i2si_en = 1;
		rst = 1;
		
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
	end
	
	
	always @ (posedge i2si_sck) begin
		for(i=0;i<11;i=i+1) begin
			for(b=0;b<16;b=b+1) begin
				#694;
			end
			i2si_ws=~i2si_ws;
		end
	end
	
	always
		#5 clk=~clk; // 100 MHz = 10ns period
	always
		#347 i2si_sck=~i2si_sck; // 1.44 MHz = 694ns period ... Maybe 1.536MHz?
	  
endmodule

