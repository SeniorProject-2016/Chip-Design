`timescale 1ns / 1ps

// Creates a saw-tooth wave based on the bist register values
module i2si_bist_gen(clk,rst_n,sck_transition,rf_bist_start_val,rf_bist_inc,rf_bist_up_limit,i2si_bist_out_data, i2si_bist_out_xfc);

    input               clk;                                          //Master Clock
    input               rst_n;                                        //Reset
    input               sck_transition;                               //Serial Clock Level to Pulse Converter
    input [11:0]        rf_bist_start_val;                            //Start value
    input [11:0]        rf_bist_up_limit;                             //Upper limit
    input [7:0]         rf_bist_inc;                                  //Increment signal by this much
                                                                        
    output[31:0]        i2si_bist_out_data;                           //Output data
    output              i2si_bist_out_xfc;                            //Transfer Complete
                                                                        
    reg [31:0]          i2si_bist_out_data;                             
    reg                 i2si_bist_out_xfc;                              
    reg                 bist_active;                                  //Defines if BIST generator is active
    reg [3:0]           sck_count;     
                                                                                    
              


    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
            sck_count <= 4'd15;
        else if(sck_transition)
           sck_count <= sck_count + 1'b1;
    end

    //defines if bist generator becomes active
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
            bist_active <= 1'b0;
        else if(sck_count == 4'd15 && sck_transition)
        begin
            if(!bist_active)
                bist_active <= 1'b1;
        end
    end
    
    //increments bist_out_data from the start value to the upper limit and then resets to the start value again
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
            i2si_bist_out_data <= 32'b0;
        else if (sck_count == 4'd15 && sck_transition)
        begin
            //If bist_active is just starting  
            if(!bist_active)                                                                       
                //Output signal = start value
                i2si_bist_out_data <= rf_bist_start_val;                
            else if(i2si_bist_out_data >= rf_bist_up_limit)                                                                   
                //Signal goes back to start value
                i2si_bist_out_data <= rf_bist_start_val;
            //If the signal is within normal range
            //Increment the signal
            else                                   
                i2si_bist_out_data <= i2si_bist_out_data + rf_bist_inc;            
        end
        else
            i2si_bist_out_data <= i2si_bist_out_data;
    end
    
    //define xfc as high at the peak of each sawtooth
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
            i2si_bist_out_xfc <= 0;
        else if(sck_count == 4'd15 && i2si_bist_out_data >= rf_bist_up_limit)
            i2si_bist_out_xfc <= 1;
        else
            i2si_bist_out_xfc <= 0;
    end
    

endmodule
