`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:             filter.v
// Create Date:             
// Last Modification:       1/12/2015
// Author:                  Dhruvit Naik
// Description: 
//////////////////////////////////////////////////////////////////////////////////

module filter(clk, rstb, aud_in, aud_in_rts, aud_in_rtr, aud_out, aud_out_rts, aud_out_rtr,
              trig_filter_ovf_flag_clear, ro_filter_ovf_flag, rf_filter_shift, rf_filter_clip_en, rf_filter_coeffs);
             
    input 	clk;                                         // master clock
    input 	rstb;                                        // reset
    input 	[31:0] aud_in;                               // input parallel digital audio
    input 	aud_in_rts;                                  // ready to send (input)
    output 	aud_in_rtr;                                  // ready to recieve (input)
    input trig_filter_ovf_flag_clear;                    // signal to reset ro_filter_ovf_flag_clear
    output ro_filter_ovf_flag;                           // filter overflow flag
    output 	[31:0] aud_out;                              // output parallel digital audio
    output 	aud_out_rts;                                 // ready to send (output)
    input 	aud_out_rtr;                                 // ready to recieve (output)
    input	rf_filter_shift;                             // # of bits to shift after accumulator
    input	rf_filter_clip_en;                           // select bit (1- perform clipping, 0- no clipping)
    input [7:0] rf_filter_coeffs;                         // filter coeffs 
    
endmodule
