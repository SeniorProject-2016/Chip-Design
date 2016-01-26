`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:             i2si_deserializer
// Create Date:             9/13/2015 
// Last Modification:       11/9/2015
// Author:                  Kevin Cao
//
//Description: The deserializer takes in serial data and converts it to parallel data that is outputted to the mux and fifo sub-blocks.
//
//              Deserializer needs to first be resetted in order to function properly, initializing all values to 0.
//              Once all values are initialized to 0, certain conditions must be met for the deserializer to become active.
//              To become active, rst_n first needs to go from high to low, and then ws needs to go from high to low. 
//              Then when sck_transition high, the deserializer becomes active.
//////////////////////////////////////////////////////////////////////////////////

module i2si_deserializer(clk, rst_n, sck_transition, in_ws, in_sd, rf_i2si_en, out_lft, out_rgt, out_xfc);

    //Ports
    input                           clk;                        //Master clock
    input                           rst_n;                      //Reset
    input                           sck_transition;             //Sck transitions from 0 -> 1. Helps tell the deserializer when to perform certain actions
    input                           in_ws;                      //Word select: defines if left or right channel is being read from. 0 = Left Channel, 1 = Right Channel
    input                           in_sd;                      //Digital audio serial data
    input                           rf_i2si_en;                 //Enabled bit that helps define if the deserializer is active or idle
    output  [15:0]                  out_lft;                    //Parallel output data of left channel
    output  [15:0]                  out_rgt;                    //Parallel output data of right channel
    output                          out_xfc;                    //Transfer Complete
                                                                    
    //Internal Variables                                                                
    reg     [15:0]                  out_lft;                        
    reg     [15:0]                  out_rgt;                        
    reg                             out_xfc;                        
    reg     [ 1:0]                  rst_n_vec;                  //Used to check when rst_n goes from low to high and to trigger armed1
    reg                             armed1;                     //First signal that helps define idle and active
    reg                             armed2;                     //Second signal that helps define idle and active
    reg                             active;                     //Defines if the deserializer is active or not
    reg                             ws_d;                       //Delayed signal of in_ws
    reg                             in_left;                    //Defines when the deserializer should read in the left channel
    reg                             in_left_delay;              //Delayed signal to help define pre_xfc and out_xfc

    wire                            ws_delay;                   //Delayed signal of ws
    wire                            ws_transition;              //Check if ws goes from 1 -> 0 when en = 1
    wire                            pre_xfc;                    //Unsynchronized transfer complete signal




    //delay ws signal
    //used to help create ws_transition to define the deserializer as active
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
            ws_d <= 1'b0;
        else if(sck_transition)
            ws_d <= in_ws;
    end

    //Re-assigning ws to be more readable
    assign ws_delay = ws_d;

    //ws_transition becomes high when ws goes from 1 -> 0
    //used to help define if deserializer is active
    assign ws_transition = !in_ws && ws_delay;

    //Used to help define active when rst_n goes from low to high
    always @(posedge clk)
    begin
        rst_n_vec[0] <= rst_n;
        rst_n_vec[1] <= rst_n_vec[0];
    end

    //Intermediate step to help define active
    //checks if rst_n goes from high to low
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
            armed1 <= 1'b0;
        else if(!rst_n_vec[1] && rst_n_vec[0])
            armed1 <= 1'b1;
        else if(ws_transition)
            armed1 <= 1'b0;
    end

    //Intermediate step to help define active
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
            armed2 <= 1'b0;
        else if(armed1 && ws_transition)
            armed2 <= 1'b1;
        else if(sck_transition)
            armed2 <= 1'b0;
    end

    //Defines when deserializer is idle or active
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
            active <= 1'b0;
        else if(!rf_i2si_en)
            active <= 1'b0;
        else if(armed2 && sck_transition)
            active <= 1'b1;
    end


    //Tells deserializer when to start reading in data from left channel
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
            in_left <= 1'b1;
        else if (!in_ws && sck_transition && active)
            in_left <= 1'b1;
        else if (in_ws && sck_transition && active)
            in_left <= 1'b0;
    end

    //Used to help trigger out_xfc																						  
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
            in_left_delay <= 1'b0;
        else
        begin
            in_left_delay <= in_left;
        end
    end

    //Triggers out_xfc when ws[3] goes from high to low
    //In other words when the system is done reading in the right channel
    //and begins reading in the left channel, trigger xfc.																									
    assign pre_xfc = in_left && !in_left_delay;

    //synchronizing xfc with master clock
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
            out_xfc <= 1'b0;
        else
            out_xfc <= pre_xfc;
    end
                                                                                                        

    //Store data into either the left or right channel when
    //the deserializer is active and when sck_transition is high
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
        begin
            out_lft[15:0] <= 16'b0;
            out_rgt[15:0] <= 16'b0;
        end		
        else if(active)
        begin					
            if(sck_transition)
            begin
                if (in_left)
                begin
                    out_lft[15:1] <= out_lft[14:0];
                    out_lft[0]    <= in_sd;
                end	
                else
                begin
                    out_rgt[15:1] <= out_rgt[14:0];
                    out_rgt[0]    <= in_sd;
                end
            end
        end
    end
    
endmodule
