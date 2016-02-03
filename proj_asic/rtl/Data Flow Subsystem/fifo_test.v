`define BUF_WIDTH 3 // set the buffer width equal to 3
`define DATA_SIZE 32 // no. of bits for fifo data

module fifo_test();
                        
    reg                         clk;                                                                        //Master clock
    reg                         rst_n;                                                                      //Reset
    reg                         fifo_inp_rts;                                                               //Write enabled
    reg                         fifo_out_rtr;                                                               //Read enabled
    reg[`DATA_SIZE-1:0]         fifo_inp_data;                                                              //Buffer input
    reg[`DATA_SIZE-1:0]         tempdata;                                                                   //Temporary data
    wire [`DATA_SIZE-1:0]       fifo_out_data;                                                              //Buffer output

    fifo ff( .clk(clk), .rst_n(rst_n), .fifo_inp_data(fifo_inp_data), .fifo_out_data(fifo_out_data), 
             .fifo_inp_rts(fifo_inp_rts), .fifo_out_rtr(fifo_out_rtr), .fifo_out_rts(fifo_out_rts), 
             .fifo_inp_rtr(fifo_inp_rtr));

    initial
    begin
       clk = 0;                                                                                             // clock starts at false
       rst_n = 0;                                                                                           // reset starts at true
       fifo_out_rtr = 0;                                                                                    // read enabled starts at false
       fifo_inp_rts= 0;                                                                                     // write enabled starts at false
       tempdata = 0;                                                                                        // temporary data starts at zero
       fifo_inp_data = 0;                                                                                   // buffer input is intially zero
        #15 rst_n = 1;                                                                                      // after 15ns change the reset to false
      
       queue(1);                                                                                            // queue the value of 1
       fork                                                                                                 // queue the value of 2 and dequeue at the same time
            queue(2);
            dequeue(tempdata);
       join
        
            queue(10);                                                                                      // queue the value of 10
            queue(20);                                                                                      // queue the value of 20
            queue(30);                                                                                      // queue the value of 30
            queue(40);                                                                                      // queue the value of 40
            queue(50);                                                                                      // queue the value of 50
            queue(60);                                                                                      // queue the value of 60
            queue(70);                                                                                      // queue the value of 70
            queue(80);                                                                                      // queue the value of 80
            queue(90);                                                                                      // queue the value of 90
            queue(100);                                                                                     // queue the value of 100
            queue(110);                                                                                     // queue the value of 110
            queue(120);                                                                                     // queue the value of 120
            queue(130);                                                                                     // queue the value of 130

            dequeue(tempdata);                                                                              // dequeue
            queue(tempdata);                                                                                // queue the data that was just dequeued
            dequeue(tempdata);                                                                              // dequeue
            dequeue(tempdata);                                                                              // dequeue
            dequeue(tempdata);                                                                              // dequeue
            dequeue(tempdata);                                                                              // dequeue
            queue(140);                                                                                     // queue the value of 140
            dequeue(tempdata);                                                                              // dequeue
            queue(tempdata);                                                                                // queue the data that was just dequeued
            dequeue(tempdata);                                                                              // dequeue
            dequeue(tempdata);                                                                              // dequeue
            dequeue(tempdata);                                                                              // dequeue
            dequeue(tempdata);                                                                              // dequeue
            dequeue(tempdata);                                                                              // dequeue
            dequeue(tempdata);                                                                              // dequeue
            dequeue(tempdata);                                                                              // dequeue
            dequeue(tempdata);                                                                              // dequeue
            dequeue(tempdata);                                                                              // dequeue
            dequeue(tempdata);                                                                              // dequeue
            dequeue(tempdata);                                                                              // dequeue
            queue(5);                                                                                       // queue the value of 5
            dequeue(tempdata);                                                                              // dequeue
    end

    always
       #5 clk = ~clk;                                                                                       // change the clock every 5ns
                                                                                                                                        
    task queue;                                                                                             // define the queue task
    input[7:0] data;                                                                                        // the data to be queued
       if( !fifo_inp_rtr )                                                                                  // if buffer is full display warning
                $display("---Cannot queue: Buffer Full---");
            else                                                                                            // if buffer is not full
            begin
               $display("Queued ",data );                                                                   // display that the data was queued
               fifo_inp_data = data;                                                                        // the input to the buffer is set as the data
               fifo_inp_rts = 1;                                                                            // write is enabled
               @(posedge clk);                                                                              // checks if clock is at postive edge
               #1 fifo_inp_rts = 0;                                                                         // set write enabled equal to zero then
            end
    endtask

    task dequeue;                                                                                           // define the dequeue task
    output [7:0] data;                                                                                      // the data to be dequeued
       if( !fifo_out_rts )                                                                                  // if the buffer is empty display a warning
             $display("---Cannot dequeue: Buffer Empty---");
       else                                                                                                 // if buffer is not empty 
            begin
               fifo_out_rtr = 1;                                                                            // read is enabled
             @(posedge clk);                                                                                // checks if clock is at postive edge
             #1 fifo_out_rtr = 0;                                                                           // set read enabled qual to zero then
             data = fifo_out_data;                                                                          // the data is set as the output of the buffer
             $display("Dequeued ", data);                                                                   // display that the data was queued
            end
    endtask

endmodule
