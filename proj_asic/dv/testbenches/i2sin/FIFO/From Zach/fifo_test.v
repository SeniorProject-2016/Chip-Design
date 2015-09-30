`define BUF_WIDTH 3 // set the buffer width equal to 3

module fifo_test();
reg clk, rst, fifo_inp_rts, fifo_out_rtr ; // clock, reset, write enabled, read enabled
reg[7:0] fifo_inp_data; // buffer input
reg[7:0] tempdata; // temporary data
wire [7:0] fifo_out_data; // buffer output
wire [`BUF_WIDTH :0] fifo_counter; // the number of elements in the buffer

fifo ff( .clk(clk), .rst(rst), .fifo_inp_data(fifo_inp_data), .fifo_out_data(fifo_out_data), 
         .fifo_inp_rts(fifo_inp_rts), .fifo_out_rtr(fifo_out_rtr), .fifo_out_rts(fifo_out_rts), 
         .fifo_inp_rtr(fifo_inp_rtr), .fifo_counter(fifo_counter) );

initial
begin
   clk = 0; // clock starts at false
   rst = 1; // reset starts at true
   fifo_out_rtr = 0; // read enabled starts at false
   fifo_inp_rts= 0; // write enabled starts at false
   tempdata = 0; // temporary data starts at zero
   fifo_inp_data = 0; // buffer input is intially zero
	#15 rst = 0; // after 15ns change the reset to false
  
   push(1); // push the value of 1
   fork // push the value of 2 and pop at the same time
		push(2);
		pop(tempdata);
   join
	
        push(10); // push the value of 10
        push(20); // push the value of 20
        push(30); // push the value of 30
        push(40); // push the value of 40
        push(50); // push the value of 50
        push(60); // push the value of 60
        push(70); // push the value of 70
        push(80); // push the value of 80
        push(90); // push the value of 90
        push(100); // push the value of 100
        push(110); // push the value of 110
        push(120); // push the value of 120
        push(130); // push the value of 130

        pop(tempdata); // pop
        push(tempdata); // push the data that was just popped
        pop(tempdata); // pop
        pop(tempdata); // pop
        pop(tempdata); // pop
        pop(tempdata); // pop
		  push(140); // push the value of 140
        pop(tempdata); // pop
        push(tempdata); // push the data that was just popped
        pop(tempdata); // pop
        pop(tempdata); // pop
        pop(tempdata); // pop
        pop(tempdata); // pop
        pop(tempdata); // pop
        pop(tempdata); // pop
        pop(tempdata); // pop
        pop(tempdata); // pop
        pop(tempdata); // pop
        pop(tempdata); // pop
        pop(tempdata); // pop
        push(5); // push the value of 5
        pop(tempdata); // pop
end

always
   #5 clk = ~clk; // change the clock every 5ns

task push; // define the push task
input[7:0] data; // the data to be pushed
   if( !fifo_inp_rtr ) // if buffer is full display warning
            $display("---Cannot push: Buffer Full---");
        else // if buffer is not full
        begin
           $display("Pushed ",data ); // display that the data was pushed
           fifo_inp_data = data; // the input to the buffer is set as the data
           fifo_inp_rts = 1; // write is enabled
           @(posedge clk); // checks if clock is at postive edge
           #1 fifo_inp_rts = 0; // set write enabled equal to zero then
        end
endtask

task pop; // define the pop task
output [7:0] data; // the data to be popped
   if( !fifo_out_rts ) // if the buffer is empty display a warning
         $display("---Cannot Pop: Buffer Empty---");
   else // if buffer is not empty 
		begin
		   fifo_out_rtr = 1; // read is enabled
         @(posedge clk); // checks if clock is at postive edge
         #1 fifo_out_rtr = 0; // set read enabled qual to zero then
         data = fifo_out_data; // the data is set as the output of the buffer
         $display("-------------------------------Poped ", data); // display that the data was pushed
		end
endtask

endmodule
