`define BUF_WIDTH 3    //  no. of bits to be used in pointer
`define BUF_SIZE ( 1<<`BUF_WIDTH ) // number of elements allowed in buffer = 2^Buffer Width

module fifo( clk, rst, i2si_fifo_inp_data, i2si_fifo_out_data, i2si_fifo_inp_rts, i2si_fifo_out_rtr, i2si_fifo_out_rts, i2si_fifo_inp_rtr, fifo_counter );

input                 rst, clk, i2si_fifo_inp_rts, i2si_fifo_out_rtr;   
// reset, system clock, write client asserts read to send, and read client asserts ready to recieve.
input [7:0]           i2si_fifo_inp_data;                   
// data input to be pushed to buffer
output[7:0]           i2si_fifo_out_data;                  
// port to output the data using pop.
output                i2si_fifo_out_rts, i2si_fifo_inp_rtr;      
// Output FIFO asserts read to send and Output FIFO asserts read to recieve
output[`BUF_WIDTH :0] fifo_counter;             
// number of elements in the buffer  

reg[7:0]              i2si_fifo_out_data;				  // the output of the buffer
reg                   i2si_fifo_out_rts, i2si_fifo_inp_rtr; // ready to send, ready to recieve
reg[`BUF_WIDTH :0]    fifo_counter;					  // number of elements in buffer
reg[`BUF_WIDTH -1:0]  rd_ptr, wr_ptr;             // pointer to read and write addresses  
reg[7:0]              buf_mem[`BUF_SIZE -1 : 0];  // buffer memory

always @(fifo_counter) // every time the number of elements in the buffer changes
begin
   i2si_fifo_out_rts = (fifo_counter!=0); // Output FIFO is ready to send if the buffer is not empty
   i2si_fifo_inp_rtr = (fifo_counter!= `BUF_SIZE); // Output FIFO is ready to recieve if the buffer is not full
end

always @(posedge clk or posedge rst) // every time the clock or reset changes
begin
   if( rst ) // if reset bit is true
       fifo_counter <= 0; // counter becomes zero
   else if( (i2si_fifo_inp_rtr && i2si_fifo_inp_rts) && ( i2si_fifo_out_rts && i2si_fifo_out_rtr ) ) // if both read and write occur
       fifo_counter <= fifo_counter; // don't change counter
   else if( i2si_fifo_inp_rtr && i2si_fifo_inp_rts ) // write enabled and buffer is not full
       fifo_counter <= fifo_counter + 1; // counter increased by 1
   else if( i2si_fifo_out_rts && i2si_fifo_out_rtr ) // read enabled and buffer is not empty
       fifo_counter <= fifo_counter - 1; // counter decreased by 1
   else // if none of these are true
      fifo_counter <= fifo_counter; // don't change counter
end

always @( posedge clk or posedge rst) // every time the clock or reset changes
begin
   if( rst ) // if reset is true 
      i2si_fifo_out_data <= 0; // output is zero
   else // reset is not true 
   begin
      if( i2si_fifo_out_rtr && i2si_fifo_out_rts ) // if read enabled and buffer is empty
         i2si_fifo_out_data <= buf_mem[rd_ptr]; // output is equal to the data in memory at the read pointer
      else // if read is not enabled or buffer is empty
         i2si_fifo_out_data <= i2si_fifo_out_data; // output doesn't change
   end
end

always @(posedge clk) // every time the clock changes
begin
   if( i2si_fifo_inp_rts && i2si_fifo_inp_rtr ) // if write is enabled and the buffer is not full
      buf_mem[ wr_ptr ] <= i2si_fifo_inp_data; // memory at location write pointer is now equal to the input
   else // if write is not enabled or buffer is full
      buf_mem[ wr_ptr ] <= buf_mem[ wr_ptr ]; // memory doesn't change
end

always@(posedge clk or posedge rst) // every time clock or reset changes
begin
   if( rst ) // if reset is true
   begin
      wr_ptr <= 0; // write pointer is equal to zero
      rd_ptr <= 0; // read pointer is equal to zero
   end
   else // if reset is false
   begin
      if( i2si_fifo_inp_rtr && i2si_fifo_inp_rts )    wr_ptr <= wr_ptr + 1; // if buffer is not full and write is enabled then the write pointer is increased by one
          else  wr_ptr <= wr_ptr; // if not the write pointer stays the same

      if( i2si_fifo_out_rts && i2si_fifo_out_rtr )   rd_ptr <= rd_ptr + 1; // if buffer is not empty and read is enabled then the read pointer is increased by one
      else rd_ptr <= rd_ptr; // if not the read pointer stays the same
   end

end
endmodule
