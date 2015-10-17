`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:             i2si_mux
// Create Date:             10/13/2015 
// Last Modification:       10/14/2015
// Author:                  Kevin Cao
//
//Description: Multiplexer that selects either the 12 bit (BIST) or 32 bit bus (Deserializer) input
//////////////////////////////////////////////////////////////////////////////////
module i2si_mux(in_0_dat, in_0_xfc, in_1_dat, in_1_xfc, sel, mux_dat, mux_xfc);
    
input [11:0]                in_0_dat;               //mux first input: Deserializer output
input                       in_0_xfc;
input [31:0]                in_1_dat;               //mux second input: BIST output
input                       in_1_xfc;
input                       sel;                //select input
output [31:0]               mux_dat;            //mux output
output                      mux_xfc;
    
reg [31:0] mux_dat;
reg        mux_xfc;

always @ (sel or in_0_dat or in_0_xfc or in_1_dat or in_1_xfc)
begin
    
    if (sel == 1'b0)
    begin
        mux_dat <= in_0_dat;
        mux_xfc <= in_0_xfc;
    end
    
    else
    begin
        mux_dat <= in_1_dat;
        mux_xfc <= in_1_xfc;
    end
    
end 
endmodule
