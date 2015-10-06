module fifo_stm( clk, rst, rts, rtr, do_tranfer, do_multiply
    );

input		clk;				//Clock for State Machine
input 	rst; 				//Active -low reset signal
input 	rts;				//Ready to Send
output	rtr;				//Ready to Recieve
output 	do_transfer;	//when 1, data will transfer to memory block 
output	do_multiply;	//when 1, data is in memory block and is ready to multiply 
//***********************************************************************************
localparam	IDLE		= 3'b001,
				TRANSFER	= 3'b010,
				MULTIPLY	= 3'b100;
//***********************************************************************************
localparam  IDLE_ID		= 0,
				TRANSFER_ID	= 1,
				MULTIPLY_ID	= 2;
//***********************************************************************************
reg	[2:0]	fifo_state, fifo_state_nxt;  //Current State | State for next Clock Cycle
reg			do_transfer, do_transfer_nxt; //Current Status | Status for next Clock Cycle				
reg			do_multiply, do_multiply_nxt; //Current Status | Status for next Clock Cycle				
 				
always@(*)
	begin
		fifo_state_nxt			= fifo_state;
		do_transfer_nxt		= 1'b0;
		do_multiply_nxt		= 1'b0;			
		case(1'b1)
		
		fifo_state[IDLE_ID]:begin
	if(rtr && rts) //XFC
		begin
			fifo_state_nxt		= TRANSFER; 
			do_transfer_nxt		= 1'b1;
		end
			else if (/*FIFO IS READY TO RECIEVE LOGIC*/)
			begin
				rtr = 1'b1;
			end
			else 
			begin
				rtr = 1'b1;
			end
		end
	
		fifo_state[TRANSFER_ID]:begin
		if(/*MEMORY BLOCK IS FILLED*/) 
			begin
				fifo_state_nxt		= MULTIPLY; 
				do_transfer_nxt		= 1'b0;
				do_multiply_nxt		= 1'b1;
			end
		end
			
		fifo_state[MULTIPLY_ID]:begin
		// MULTIPLY
			
		end
			
			
		default: begin end
		endcase
	end
	
	
always@(posedge clk or negedge rst)
	begin
	if(!rstb)
		begin
			fifo_state			<= IDLE;
			do_transfer			<= 1'b0;
			do_multiply			<= 1'b0;
		end
	else
		begin
			fifo_state			<= fifo_state_nxt;
			do_transfer			<= do_transfer_nxt;
			do_multiply			<= do_multiply_nxt;
		end
	end 
endmodule





