`timescale 1ns / 1ps

// Creates a saw-tooth wave based on the bist register values
module i2si_bist_gen(clk,rst,i2si_sck,rf_bist_start_val,rf_bist_inc,rf_bist_up_limit,i2si_bist_out_data);

    input clk,rst,i2si_sck; // clock, reset, serial clock
    input [11:0] rf_bist_start_val; // start value
    input [11:0] rf_bist_up_limit; // upper limit
    input [7:0] rf_bist_inc; // increment signal by this much

    output[31:0] i2si_bist_out_data; // output signal

    reg [2:0]                       sck_vec;                    //Delayed signals of i2si_sck
    reg sck_d1; // serial clock delay
    reg [31:0] i2si_bist_out_data; // output signal
    reg counter=12'b0; // counter
    reg [31:0] sck_cnt=0;
    
    wire sck; //Synchronized sck signal with clk
    wire sck_delay;//Delayed signal of sck
    wire sck_transition; //sck transitions from 0 -> 1. Helps tell the deserializer when to perform certain actions
    


    //Synchronize clk and sck
    //sck[1] = sck synchronized with clk
    //sck[2] = sck delay signal to help create sck_transition
    always @(posedge clk or negedge rst)
    begin
        if (rst)
            sck_vec <= 3'b000;
        else
        begin
            sck_vec[0] <= i2si_sck;
            sck_vec[2:1] <= sck_vec[1:0];
        end
    end

    //Re-assigning sck to be more readable
    assign sck = sck_vec[1];
    assign sck_delay = sck_vec[2];

    //Defines when sck_transition is high or low. Helps define when the deserialzer should read in the left channel and output it to i2si_lft
    assign sck_transition = sck && !sck_delay;

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
