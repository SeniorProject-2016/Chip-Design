`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:             i2si_mux
// Create Date:             10/13/2015 
// Last Modification:       10/14/2015
// Author:                  Kevin Cao
//
//Description: Multiplexer that selects either the 12 bit (BIST) or 32 bit bus (Deserializer) input
//////////////////////////////////////////////////////////////////////////////////
module i2si_mux(in_0, in_1, sel, mux_out);
    
input [11:0]                in_0;               //mux first input: Deserializer output
input [31:0]                in_1;               //mux second input: BIST output
input                       sel;                //select input
output [31:0]               mux_out;            //mux output
    
reg [15:0] mux_out;

always @ (sel or in_0 or in_1)
begin
    
    if (sel == 1'b0)
    begin
        mux_out = in_0;
    end
    
    else
    begin
        mux_out [11:0] = in_1;
    end
    
end 
endmodule
