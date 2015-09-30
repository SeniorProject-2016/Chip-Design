`define BUF_WIDTH 3    // BUF_SIZE = 16 -> BUF_WIDTH = 4, no. of bits to be used in pointer
`define BUF_SIZE ( 1<<`BUF_WIDTH )

module fifo( clk, rst, buf_in, buf_out, wr_en, rd_en, buf_empty, buf_full, fifo_counter );

input                 rst, clk, wr_en, rd_en;   
// reset, system clock, write enable and read enable.
input [7:0]           buf_in;                   
// data input to be pushed to buffer
output[7:0]           buf_out;                  
// port to output the data using pop.
output                buf_empty, buf_full;      
// buffer empty and full indication 
output[`BUF_WIDTH :0] fifo_counter;             
// number of data pushed in to buffer   

reg[7:0]              buf_out;					    // the output of the buffer
reg                   buf_empty, buf_full;		 // status bit: buffer is empty, buffer is full
reg[`BUF_WIDTH :0]    fifo_counter;					 // number of elements in buffer
reg[`BUF_WIDTH -1:0]  rd_ptr, wr_ptr;            // pointer to read and write addresses  
reg[7:0]              buf_mem[`BUF_SIZE -1 : 0]; // buffer memory

always @(fifo_counter) // every time the number of elements in the buffer changes
begin
   buf_empty = (fifo_counter==0); // buffer is empty if fifo_counter is zero
   buf_full = (fifo_counter== `BUF_SIZE); // buffer counter is full if fifo_counter is equal to the buffer size
end

always @(posedge clk or posedge rst) // every time the clock or reset changes
begin
   if( rst ) // if reset bit is true
       fifo_counter <= 0; // counter becomes zero
   else if( (!buf_full && wr_en) && ( !buf_empty && rd_en ) ) // if both read and write occur
       fifo_counter <= fifo_counter; // don't change counter
   else if( !buf_full && wr_en ) // write enabled and buffer is not full
       fifo_counter <= fifo_counter + 1; // counter increased by 1
   else if( !buf_empty && rd_en ) // read enabled and buffer is not empty
       fifo_counter <= fifo_counter - 1; // counter decreased by 1
   else // if none of these are true
      fifo_counter <= fifo_counter; // don't change counter
end

always @( posedge clk or posedge rst) // every time the clock or reset changes
begin
   if( rst ) // if reset is true 
      buf_out <= 0; // output is zero
   else // reset is not true 
   begin
      if( rd_en && !buf_empty ) // if read enabled and buffer is empty
         buf_out <= buf_mem[rd_ptr]; // output is equal to the data in memory at the read pointer
      else // if read is not enabled or buffer is empty
         buf_out <= buf_out; // output doesn't change
   end
end

always @(posedge clk) // every time the clock changes
begin
   if( wr_en && !buf_full ) // if write is enabled and the buffer is not full
      buf_mem[ wr_ptr ] <= buf_in; // memory at location write pointer is now equal to the input
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
      if( !buf_full && wr_en )    wr_ptr <= wr_ptr + 1; // if buffer is not full and write is enabled then the write pointer is increased by one
          else  wr_ptr <= wr_ptr; // if not the write pointer stays the same

      if( !buf_empty && rd_en )   rd_ptr <= rd_ptr + 1; // if buffer is not empty and read is enabled then the read pointer is increased by one
      else rd_ptr <= rd_ptr; // if not the read pointer stays the same
   end

end
endmodule