`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:49:21 11/04/2015
// Design Name:   serializer
// Module Name:   C:/Users/kevin/Documents/GitHub/Chip-Design/proj_asic/rtl/i2so/serializer/serializer_testbench.v
// Project Name:  serializer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: serializer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module serializer_testbench;

	// Inputs
	reg clk;
	reg rst_n;
	reg rts;
	reg [15:0] i2so_lft;
	reg [15:0] i2so_rgt;
	reg i2si_sck_transition;
    
    // Internal Variables
    reg                     i2si_sck;
    reg [2:0]               sck_vec;
    reg                     sck;
    reg                     sck_delay;
    reg [31:0]              count;
    reg [31:0]              word_count;                         // word counter
    reg [15:0]              test_data [0:9] [0:1];              // [Bits Per Word] test_data [# of entities in test] [Left/Right]

	// Outputs
	wire i2so_sd;
	wire i2so_ws;
	wire rtr;

	// Instantiate the Unit Under Test (UUT)
	serializer uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.rts(rts), 
		.i2so_sd(i2so_sd), 
		.i2so_ws(i2so_ws), 
		.i2so_lft(i2so_lft), 
		.i2so_rgt(i2so_rgt), 
		.rtr(rtr), 
		.i2si_sck_transition(i2si_sck_transition)
	);


always
begin
    count = 0;
    forever
    begin
        #5 clk = ~clk;
        count = count + 1; // increment clock counter
    end
end

always
begin
    forever
    begin
        #312.5 i2si_sck = ~i2si_sck;
    end
end


always @(posedge clk or negedge rst_n)
begin
    if (!rst_n)
        sck_vec <= 3'b000;
    else
    begin
        sck_vec[0] <= i2si_sck;
        sck_vec[2:1] <= sck_vec[1:0];
    end
end


always @(*)
begin
    rst_n = !(count < 21); // turn on reset not after 10 clock cycles

    sck <= sck_vec[1];
    sck_delay <= sck_vec[2];
    i2si_sck_transition <= sck && !sck_delay;
    
    if(word_count >= 0 && word_count <= 9)
    begin
        i2so_lft = test_data [word_count][0];
        i2so_rgt = test_data [word_count][1];
    end
end


always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        begin
            word_count <= -1;
        end
    else if(rtr)
        begin
            word_count <= word_count + 1;
        end
end

initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;
		rts = 0;
		i2so_lft = 0;
		i2so_rgt = 0;
		i2si_sck_transition = 0;
        
        i2si_sck = 0;

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
        rts = 1;

end
      
endmodule

