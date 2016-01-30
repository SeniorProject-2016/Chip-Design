`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:             i2si_mux
// Create Date:             10/13/2015 
// Last Modification:       1/23/2016
// Author:                  Kevin Cao
//
//Description: Multiplexer that outputs either the BIST or Deserializer input data and xfc signals
//////////////////////////////////////////////////////////////////////////////////

module i2si_mux(in_0_data, in_0_xfc, in_1_data, in_1_xfc, sel, mux_data, mux_xfc);
    
    //Ports
    input   [31:0]              in_0_data;                  //First input data value
    input                       in_0_xfc;                   //First input xfc value
    input   [31:0]              in_1_data;                  //Second input data value
    input                       in_1_xfc;                   //Second input xfc value
    input                       sel;                        //select input to select either input 0 or 1

    output  [31:0]              mux_data;                   //mux data output value
    output                      mux_xfc;                    //mux xfc output value
                
                
    //Port Data Types
    reg     [31:0]              mux_data;
    reg                         mux_xfc;

    always @ (sel or in_0_data or in_0_xfc or in_1_data or in_1_xfc)
    begin
        if (sel == 1'b0)
        begin
            mux_data <= in_0_data;
            mux_xfc  <= in_0_xfc;
        end
        else
        begin
            mux_data <= in_1_data;
            mux_xfc  <= in_1_xfc;
        end
    end 
    
endmodule
