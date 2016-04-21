//////////////////////////////////////////////////////////////////////////////////
//
// Module Name:             synchronizer.v
// Create Date:             10/20/2015 
// Last Modification:       3/20/2016
// Author:                  Kevin Cao
//
//Description:      Delays and synchronizes the sck, sd, and ws signals with master clock
//                      sck: 2 clk cycles
//                      sd : 4 clk cycles
//                      ws : 4 clk cycles
//
//
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module synchronizer(clk, rst_n, _sck, sck, sck_transition, _sd, sd, _ws, ws
    );
    
    //Ports
    input               clk;                        //Master clock
    input               rst_n;                      //Reset
    input               _sck;                       //Non-delayed and non-synchronized sck signal
    input               _sd;                        //Non-delayed and non-synchronized serial data signal
    input               _ws;                        //Non-delayed and non-synchronized word select signal
                                                        
    output              sck;                        //Delayed and Synchronized sck
    output              sck_transition;             //Signal that represents when sck goes from low to high. Helps define when particular actions should occur
    output              sd;                         //Delayed and Synchronized serial data signal
    output              ws;                         //Delayed and Synchronized word select signal
    

    //Internal Variables
    reg     [2:0]       sck_vec;                        
    reg     [3:0]       sd_vec;                         
    reg     [3:0]       ws_vec;                         
                                                    
    wire                sck_delay;                  //Delayed sck signal that helps define sck_transition



    //Delay sck by 2 clk cycles and synchronize with clk
    //sck[1] = sck synchronized with clk
    //sck[2] = sck delay signal to help create sck_transition
    //Delay and synchronize ws signal by 4 clock cycles
    //ws[3] is the synchronized signal
    //Delay and synchronize sd by 4 clock cycles
    //sd[3] is the synchronized signal
    always @(posedge clk or negedge rst_n)
    begin
        if (!rst_n)
         begin
            sck_vec <= 3'b000;
            ws_vec  <= 4'b0000;
            sd_vec  <= 3'b000;
        end
        else
        begin
            sck_vec[0]   <= _sck;
            sck_vec[2:1] <= sck_vec[1:0];
                                
            ws_vec[0]    <= _ws;
            ws_vec[3:1]  <= ws_vec[2:0];
                            
            sd_vec[0]    <= _sd;
            sd_vec[3:1]  <= sd_vec[2:0];
        end
    end

    //Re-assigning sck to be more readable
    assign sck = sck_vec[1];
    
    //Create additional sck delay signal to detect rising edge
    assign sck_delay = sck_vec[2];

    //Defines sck_transition as high when sck transitions from low to high
    //helps define when particular actions should occur
    assign sck_transition = sck && !sck_delay;

    //Re-assigning sd to be more readable
    assign sd = sd_vec[3];

    //Re-assigning ws to be more readable
    assign ws = ws_vec[3];

endmodule
