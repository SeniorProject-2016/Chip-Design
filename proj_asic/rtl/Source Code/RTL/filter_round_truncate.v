//////////////////////////////////////////////////////////////////////////////////
// Module Name:             filter_round_truncate.v
// Create Date:             10/15/2016 
// Last Modification:       4/1/2016
// Author:                  Dhruvit Naik
// Description:             ????
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

// ext_acc_in, acc_r should be 43 bits, not 47 bits
// Reasoning:
//      12-19 bits lopped off during shift
//      16 bits to keep
//      8 bits of integer overflow, used for clipping
//  MAX needed is 8 + 16 + 19 bits
//
//  After rounding, keep 24 bits
//  acc_t should be 24 bits, not 28 bits

module filter_round_truncate(clk, rst_n, acc_in, rf_sat, rf_shift, trig_filter_ovf_flag_clear, filter_out, ro_filter_ovf_flag
    );
    
    // MODULE CONNECTIONS
    //---------------------------------------------------------------------------  
    //---------------------------------------------------------------------------  
    input                                   clk; 
    input                                   rst_n;
    input               [39:0]              acc_in; 
    input                                   rf_sat;
    input               [2:0]               rf_shift;
    input                                   trig_filter_ovf_flag_clear;
    output reg          [15:0]              filter_out;
    output reg                              ro_filter_ovf_flag; 
    reg signed          [42:0]              acc_r;
    //---------------------------------------------------------------------------  
    //---------------------------------------------------------------------------      
    
    reg signed          [23:0]              acc_t;
    wire                [4:0]               num_shift;
    wire                                    sign_bit; 
    wire                [42:0]              ext_acc_in;
    
    
    assign num_shift = rf_shift + 12; 
    assign sign_bit = acc_in[39];
    assign ext_acc_in = {{3{sign_bit}}, acc_in};

    always@(posedge clk or negedge rst_n)
    begin 
        if(!rst_n)
        begin
            filter_out <= 1'b0; 
            ro_filter_ovf_flag <= 1'b0;
        end
        
        else
        begin
		  
            acc_r <= ext_acc_in + (1<<(num_shift-1));            
            acc_t <= acc_r[num_shift+:24];
            // when num_shift is 12 == acc_t[35:12]
            // when num_shift is 19 == acc_t[42:19]
            if (acc_t > (1<<15)-1)
            begin 
                ro_filter_ovf_flag <= 1; 
                if (rf_sat)
                    acc_r <= (1<<15)-1;
                else
                    filter_out <= acc_t[15:0];
            end
                
            else if (acc_t < -(1<<15)) 
            begin
                ro_filter_ovf_flag <= 1; 
                if (rf_sat) 
                    acc_r <= (1<<15)-1;
                else
                    filter_out <= acc_t[15:0];
            end
				
            else 
                filter_out <= acc_t[15:0];

            if (trig_filter_ovf_flag_clear)
                ro_filter_ovf_flag <= 1'b0; 
        end		
    end

endmodule
