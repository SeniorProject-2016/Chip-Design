//////////////////////////////////////////////////////////////////////////////////
// Module Name:             filter_accumulator.v
// Create Date:             ??? 
// Last Modification:       3/25/2016
// Author:                  Dhruvit Naik
// Description:             ????
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module filter_accumulator(clk, rst_n, enable,load, D, Q
    );
    
    input	signed                  clk;
    input   signed                  rst_n;
    input   signed                  enable;
    input   signed                  load;
    input 	signed  [31:0]          D;	                            // Input
    output  signed  [39:0]          Q; 	                            // Output

    reg     signed  [39:0]          tmp;  

    assign Q = tmp; 

    always @(posedge clk or negedge rst_n) 
    begin 
        if (!rst_n)
            tmp <= 1'b0;
            
        else if (enable)
        begin 
            if (load)
                tmp <= D;
            else
                tmp <= tmp + D;
        end
    end
endmodule
