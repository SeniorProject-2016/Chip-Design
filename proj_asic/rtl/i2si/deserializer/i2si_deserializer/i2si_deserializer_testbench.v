`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:42:19 10/06/2015
// Design Name:   i2si_deserializer
// Module Name:   C:/Users/kevin/Documents/GitHub/Chip-Design/proj_asic/rtl/i2si/deserializer/i2si_deserializer/i2si_deserializer_testbench.v
// Project Name:  i2si_deserializer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: i2si_deserializer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module i2si_deserializer_testbench;

	// Inputs
    reg clk;
    reg rst;
    reg i2si_sck;
    reg i2si_ws;
    reg i2si_sd;
    reg rf_i2si_en;
	
    // Outputs
    wire [15:0] i2si_lft;
    wire [15:0] i2si_rgt;
    wire i2si_xfc;

    integer entry;
    integer channel;
    integer data;
    
    reg [31:0] count;
    /*reg [15:0] test_data[10:0] =  {
                                          16'hAAAA, 16'hFFFF, 16'h1478, 16'hA3B9, 16'hCDD7, 16'hBABA, 16'h4444, 16'hAAAA, 16'h7398, 16'hFFDD, 16'h1111
                                          //{16'h5982, 16'h0001, 16'hFFFF, 16'h1478, 16'hA3B9, 16'hCDD7, 16'hBABA, 16'h4444, 16'hAAAA, 16'h7398, 16'hFDDD}
                                        };*/
    reg [15:0] test = 16'hAAAA;
    reg [15:0] test2 = 16'hFF00;
    
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

//	assign rst = (count < 5);
	
    always
    begin
        //count = 0;
    forever
        begin
            #5 clk = ~clk;
            //count = count + 1;
        end
    end

    always
    begin
    forever
        #312.5 i2si_sck = ~i2si_sck;
    end
	
 
    initial
    begin
        clk = 0;
        rst = 0;
        i2si_sck = 0;
        i2si_ws = 1;
        i2si_sd = 0;
        rf_i2si_en = 1;
        #625;
        rst = 1;
        #625
        
        for(channel = 0; channel < 2; channel = channel + 1)
        begin
            if(channel == 1'b0)
                i2si_ws = 0;
            else
                i2si_ws = 1;
            for(data = 0; data < 16; data = data + 1)
            begin
                i2si_sd = test[15];
                test[15:1] = test[14:0];
                #625;
            end
        end
    end
 
 
	
    /*initial
    begin
        clk = 0;
        rst = 0;
        i2si_sck = 0;
        i2si_ws = 1;
        i2si_sd = 0;
        rf_i2si_en = 0;
        #312.5;
        rst = 1;
        rf_i2si_en = 1;
        
        for(entry = 0; entry < 1; entry = entry+1)
        begin
            for(channel = 0; channel < 2; channel= channel+1)
            begin
                if(channel == 0)
                    i2si_ws = 0;
                 else
                    i2si_ws = 1;
                for(data = 0; data < 16; data = data + 1)
                begin
                    i2si_sd = test_data[15];
                    test_data[15:1] = test_data[14:0];
                    #625;
                end
            end
        end
    end*/
endmodule
