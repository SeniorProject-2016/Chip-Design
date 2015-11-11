`timescale 1ns / 1ps

// Creates a saw-tooth wave based on the bist register values
module i2si_bist_gen(clk,rst,sck_transition,rf_bist_start_val,rf_bist_inc,rf_bist_up_limit,i2si_bist_out_data, i2si_bist_out_xfc);

    input clk,rst,sck_transition; // clock, reset, serial clock
    input [11:0] rf_bist_start_val; // start value
    input [11:0] rf_bist_up_limit; // upper limit
    input [7:0] rf_bist_inc; // increment signal by this much

    output[31:0] i2si_bist_out_data; // output signal
    output       i2si_bist_out_xfc;

    reg [31:0] i2si_bist_out_data; // output signal
    reg        i2si_bist_out_xfc;
    reg counter=12'b0; // counter
    reg [31:0] sck_cnt=0;
    

    



    always@(posedge clk) 
    begin // at every postive edge of the clock
        if(sck_transition) 
            sck_cnt=sck_cnt+1;
        if(sck_cnt==32'd15)
        begin
            if(counter==12'b0) 
            begin // if counter is just starting
                i2si_bist_out_data<=rf_bist_start_val; // output signal = start value
                counter<=counter+1'b1; // increment counter
            end
            else if(i2si_bist_out_data>=rf_bist_up_limit) 
            begin // if signal exceeds the limit
                i2si_bist_out_data<=rf_bist_start_val; // signal goes back to start value
            end
            else // if the signal is within normal range
                i2si_bist_out_data<=i2si_bist_out_data+rf_bist_inc; // increment the signal
            sck_cnt=0;    
        end
    end

endmodule
