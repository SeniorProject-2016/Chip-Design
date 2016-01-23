`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:             i2si_bist_gen.v
// Create Date:             10/13/2015 
// Last Modification:       1/22/2016
// Author:                  Kevin Cao, Zachary Nelson
// Description: Creates a saw-tooth wave based on the bist register values
//////////////////////////////////////////////////////////////////////////////////

module i2si_bist_gen(clk,rst_n,sck_transition,rf_bist_start_val,rf_bist_inc,rf_bist_up_limit,i2si_bist_out_data, i2si_bist_out_xfc);

    input               clk;                                          //Master Clock
    input               rst_n;                                        //Reset
    input               sck_transition;                               //Serial Clock Level to Pulse Converter
    
    input  [11:0]       rf_bist_start_val;                            //Start value
    input  [11:0]       rf_bist_up_limit;                             //Upper limit
    input  [ 7:0]       rf_bist_inc;                                  //Increment signal by this much
                                                                        
    output [31:0]       i2si_bist_out_data;                           //Output data
    output              i2si_bist_out_xfc;                            //Transfer Complete
                                                                                
    //Port Data Types
    reg    [31:0]       i2si_bist_out_data;                             
    wire                i2si_bist_out_xfc;
                                                                                                    
    //Internal Variables
    reg                 bist_active;                                  //Defines if BIST generator is active
    reg    [ 4:0]       sck_count;                                    //Serial clock counter                    
    wire   [15:0]       ext_start_val;                                //16 bit sign extension of rf_bist_start_val    
    wire   [15:0]       ext_up_limit;                                 //16 bit sign extension of rf_bist_up_limit
    
                                                                                                    
                                                                                                    
                                                                                                    
    //sign extend rf_bist_start_val
    assign ext_start_val = {{4{rf_bist_start_val[11]}}, rf_bist_start_val};
                                                                            
    //sign extend rf_bist_up_limit
    assign ext_up_limit = {{4{rf_bist_up_limit[11]}}, rf_bist_up_limit};
                                                                                        
    //define xfc signal as high after bist_out_data increments
    assign i2si_bist_out_xfc = bist_active && sck_count == 5'd31 && sck_transition;
                                                                                    
                                                                                    
                                                                                        
    //serial clock counter. Helps define when bist_out_data when sck_count reaches 31
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
            sck_count <= 5'd31;
        else if(sck_transition)
           sck_count <= sck_count + 1'b1;
    end

    //defines if bist generator becomes active
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
            bist_active <= 1'b0;
        else if(sck_count == 5'd31 && sck_transition)
        begin
            if(!bist_active)
                bist_active <= 1'b1;
        end
    end
    
    //increments bist_out_data from the start value to the upper limit and then resets to the start value again
    always @(posedge clk or negedge rst_n)
    begin
        if(!rst_n)
        begin
            i2si_bist_out_data[15: 0] <=  16'd0;
            i2si_bist_out_data[31:16] <= ~16'd0;
		end
        else if (sck_count == 5'd31 && sck_transition)
        begin
            //If bist_active is just starting  
            if(!bist_active)
			begin
                //Output signal = start value
                i2si_bist_out_data[15: 0] <=  ext_start_val;                                        //{rf_bist_start_val, 4'b0000};
                i2si_bist_out_data[31:16] <= ~ext_start_val;                                        //~{rf_bist_start_val, 4'b0000};
            end
            else if($signed(i2si_bist_out_data[15:0]) >= $signed(ext_up_limit))                     //$signed({rf_bist_up_limit, 4'b0000}))
            begin
                //Signal goes back to start value
                i2si_bist_out_data[15:0]  <=  ext_start_val;                                        //{rf_bist_start_val, 4'b0000};
                i2si_bist_out_data[31:16] <= ~ext_start_val;                                        //~{rf_bist_start_val, 4'b0000};

            end
            //If the signal is within normal range
            //Increment the signal
            else
            begin
                i2si_bist_out_data[15: 0] <=   i2si_bist_out_data[15:0] + {4'b0000, rf_bist_inc};   //{rf_bist_inc, 4'b0000};         
                i2si_bist_out_data[31:16] <= ~(i2si_bist_out_data[15:0] + {4'b0000, rf_bist_inc});  //{rf_bist_inc, 4'b0000});          

           end
        end
    end
    
endmodule
