//////////////////////////////////////////////////////////////////////////////////
// Module Name:             filter_barrel_shifter.v
// Create Date:             ??? 
// Last Modification:       3/25/2016
// Author:                  Dhruvit Naik
// Description:             ????
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module filter_barrel_shifter(input_signal, sel_shift, output_signal
    );
    input   [39:0]	    input_signal;
    input   [ 2:0]	    sel_shift;
    output  [39:0]      output_signal;

    reg     [39:0]      output_signal;

    wire    [39:0]      output_signal_12;
    wire    [39:0]      output_signal_13;
    wire    [39:0]      output_signal_14;
    wire    [39:0]      output_signal_15;
    wire    [39:0]      output_signal_16;
    wire    [39:0]      output_signal_17;
    wire    [39:0]      output_signal_18;
    wire    [39:0]      output_signal_19;

    assign output_signal_12 = {input_signal[11:0], input_signal[39:12]};
    assign output_signal_13 = {input_signal[12:0], input_signal[39:13]};
    assign output_signal_14 = {input_signal[13:0], input_signal[39:14]};
    assign output_signal_15 = {input_signal[14:0], input_signal[39:15]};
    assign output_signal_16 = {input_signal[15:0], input_signal[39:16]};
    assign output_signal_17 = {input_signal[16:0], input_signal[39:17]};
    assign output_signal_18 = {input_signal[17:0], input_signal[39:18]};
    assign output_signal_19 = {input_signal[18:0], input_signal[39:19]};



    always @*
    begin
        output_signal = input_signal; 
        case(sel_shift)
            3'b000: output_signal = output_signal_12;
            3'b001: output_signal = output_signal_13;
            3'b010: output_signal = output_signal_14;
            3'b011: output_signal = output_signal_15;
            3'b100: output_signal = output_signal_16;
            3'b101: output_signal = output_signal_17;
            3'b110: output_signal = output_signal_18;
            3'b111: output_signal = output_signal_19;
        endcase 
    end
endmodule
