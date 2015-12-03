`timescale 1ns / 1ps
`define BUF_SIZE (1 << BUF_WIDTH)                                                                 //Number of elements allowed in buffer = 2^Buffer Width
                                                                                                                    
module fifo(clk,rst_n,fifo_inp_data,fifo_out_data,fifo_inp_rts,fifo_out_rtr,fifo_out_rts,fifo_inp_rtr);
                                                                                                                
parameter                       DATA_SIZE = 32;                                                   //Number of bits for fifo data
parameter                       BUF_WIDTH = 3;                                                    //Number of bits to be used in pointer
                                                                            
input                           clk;                                                              //Master clock
input                           rst_n;                                                            //Reset

input                           fifo_inp_rts;                                                     //Write client asserts ready to send 
output                          fifo_inp_rtr;                                                     //Write client asserts ready to read
input [DATA_SIZE - 1:0]         fifo_inp_data;                                                    //Data input to be pushed to buffer
                                                                                                    
output                          fifo_out_rts;                                                     //Output FIFO asserts read to send
input                           fifo_out_rtr;                                                     
output [DATA_SIZE - 1:0]        fifo_out_data;                                                    //Port to output the data using pop.

reg                             fifo_inp_rtr;                                                       

reg                             fifo_out_rts;                                                                                                                                                                                                           
reg [DATA_SIZE - 1:0]           fifo_out_data;                                                              

reg [BUF_WIDTH:0]               fifo_counter;                                                                   
reg [BUF_WIDTH - 1:0]           rd_ptr;                                                           //Pointer to read
reg [BUF_WIDTH - 1:0]           wr_ptr;                                                           //Write addresses  
reg [DATA_SIZE - 1:0]           buf_mem[`BUF_SIZE - 1:0];                                         //Buffer memory

always @(fifo_counter)
begin
   //Output FIFO is ready to send if the buffer is not empty
   fifo_out_rts = (fifo_counter != 0);
   
   //Output FIFO is ready to recieve if the buffer is not full
   fifo_inp_rtr = (fifo_counter != `BUF_SIZE); 
end

//Update counter based on state of fifo
always @(posedge clk or negedge rst_n) 
begin
   if(!rst_n)
       fifo_counter <= 0;
   //if both read and write occur
   else if((fifo_inp_rtr && fifo_inp_rts) && (fifo_out_rts && fifo_out_rtr)) 
       fifo_counter <= fifo_counter;
   //write enabled and buffer is not full
   else if(fifo_inp_rtr && fifo_inp_rts) 
       //counter increased by 1
       fifo_counter <= (fifo_counter + 1'b1);
   //read enabled and buffer is not empty
   else if(fifo_out_rts && fifo_out_rtr)
       //counter decreased by 1
       fifo_counter <= (fifo_counter - 1'b1);
   else
      fifo_counter <= fifo_counter;
end

//Update output of the fifo
always @(posedge clk or negedge rst_n)
begin
   if(!rst_n)
      fifo_out_data <= 0;
   else 
   begin
      //If read enabled and buffer is empty
      if(fifo_out_rtr && fifo_out_rts)
         //Output is equal to the data in memory at the read pointer
         fifo_out_data <= buf_mem[rd_ptr];
      else
         fifo_out_data <= fifo_out_data;
   end
end

//Update fifo memory
always @(posedge clk)
begin
   //If write is enabled and the buffer is not full
   if(fifo_inp_rts && fifo_inp_rtr)
      //Memory at location write pointer is now equal to the input
      buf_mem[wr_ptr] <= fifo_inp_data;
   else
      buf_mem[wr_ptr] <= buf_mem[wr_ptr];
end

//Update pointers
always @(posedge clk or negedge rst_n)
begin
   if(!rst_n)
   begin
      wr_ptr <= 0;
      rd_ptr <= 0;
   end
   else
   begin
      //If buffer is not full and write is enabled then the write pointer is increased by one
      if(fifo_inp_rtr && fifo_inp_rts)   
          wr_ptr <= wr_ptr + 1'b1;
      else  
          wr_ptr <= wr_ptr;
      //If buffer is not empty and read is enabled then the read pointer is increased by one
      if(fifo_out_rts && fifo_out_rtr)   
          rd_ptr <= rd_ptr + 1'b1;
      else 
          rd_ptr <= rd_ptr;
   end   
end

endmodule
