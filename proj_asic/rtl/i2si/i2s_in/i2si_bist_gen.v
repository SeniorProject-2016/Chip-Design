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
    reg [11:0]          counter;                                      //Counter
    reg [3:0]           sck_count;     
                                                                                    
                                                                                    
                                                                                     
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
        begin
            counter <= 12'b0;
            i2si_bist_out_data <= 0;
        end
        else if (sck_count == 4'd15 && sck_transition)
        begin
            //If counter is just starting  
            if(counter == 12'b0)                                                      
            begin                  
                //Output signal = start value
                i2si_bist_out_data <= rf_bist_start_val;                
                counter <= counter + 1'b1;
            end
            else if(i2si_bist_out_data >= rf_bist_up_limit)               
            begin                                                     
                //Signal goes back to start value
                i2si_bist_out_data <= rf_bist_start_val;
            end
            //If the signal is within normal range
            //Increment the signal
            else                                   
                i2si_bist_out_data <= i2si_bist_out_data + rf_bist_inc;            
        end
        else
            i2si_bist_out_data <= i2si_bist_out_data;
    end
    
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
            i2si_bist_out_xfc <= 0;
        else if(sck_count == 4'd15 && i2si_bist_out_data >= rf_bist_up_limit)
            i2si_bist_out_xfc <= 1;
        else
            i2si_bist_out_xfc <= 0;
    end
    
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
        begin
            sck_count <= 4'd15;
        end
        else if(sck_transition)
           sck_count <= sck_count + 1'b1;
    end

endmodule
