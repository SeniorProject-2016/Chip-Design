`timescale 1ns / 1ps

module filter_stm( clk, rstb, rts, rtr, do_transfer, do_multiply_1st, do_multiply, aud_in, aud_out, rf_filter_coeff
    );

input		clk;				//Clock for State Machine
input 	rstb; 			//Active -low reset signal
input 	rts;				//Ready to Send
input		[15:0] aud_in;
input 	[15:0] rf_filter_coeff;
output	rtr;				//Ready to Recieve
output 	do_transfer;
output	do_multiply_1st;	//when 1, data will transfer to memory block 
output	do_multiply;	//when 1, data is in memory block and is ready to multiply 
//output	wr_addr;
//output	rd_addr;
output	[15:0] aud_out;

//***********************************************************************************
localparam	IDLE				= 4'b0001,
				TRANSFER			= 4'b0010,
				MULTIPLY_1ST 	= 4'b0100,
				MULTIPLY			= 4'b1000;
//***********************************************************************************
localparam  IDLE_ID				= 0,
				TRANSFER_ID			= 1,
				MULTIPLY_1ST_ID	= 2,
				MULTIPLY_ID			= 3;
//***********************************************************************************
localparam  PTR		= 3,
				WIDTH		= 16;
//***********************************************************************************
reg	[3:0]		filter_state, filter_state_nxt;  //Current State | State for next Clock Cycle
reg				do_transfer, do_transfer_nxt; //Current Status | Status for next Clock Cycle				
reg				do_multiply_1st, do_multiply_1st_nxt; //Current Status | Status for next Clock Cycle
reg				do_multiply, do_multiply_nxt; //Current Status | Status for next Clock Cycle
reg				filter_running_1st, filter_running_1st_nxt; 
reg				filter_running, filter_running_nxt; 
//***********************************************************************************
reg				filter_need_new, filter_need_new_nxt;
reg	[PTR:0]	filter_count, filter_count_nxt; 
reg				rtr, rtr_nxt; 
//***********************************************************************************
reg	[PTR:0]	wr_addr_x, wr_addr_x_nxt;
reg	[PTR:0]	rd_addr_x, rd_addr_x_nxt;
reg				arr_re_x, arr_re_x_nxt;		
//***********************************************************************************
reg	[PTR:0]	wr_addr_h, wr_addr_h_nxt;
reg	[PTR:0]	rd_addr_h, rd_addr_h_nxt;
reg				arr_re_h, arr_re_h_nxt;	
//***********************************************************************************
wire			filter_xfc; 
wire			arr_we_x; // Array X Write Enabled 
wire			arr_we_h;
wire [15:0] x_unit;
wire [15:0]	h_unit;


//***********************************************************************************


assign filter_xfc = rtr && rts;  
assign arr_we_x = filter_xfc;
assign arr_we_h = 1'b1;

always@(*)
	begin
		filter_state_nxt			= filter_state;
		wr_addr_x_nxt				= wr_addr_x;
		rd_addr_x_nxt				= rd_addr_x;
		arr_re_x_nxt				= arr_re_x;
		
		wr_addr_h_nxt				= wr_addr_h;
		rd_addr_h_nxt				= rd_addr_h;
		arr_re_h_nxt				= arr_re_h;
		
		filter_running_1st_nxt	= filter_running_1st;
		filter_running_nxt		= filter_running;
		filter_need_new_nxt		= filter_need_new;
		filter_count_nxt			= filter_count;
		rtr_nxt						= rtr; 
		do_transfer_nxt			= 1'b0;
		do_multiply_1st_nxt		= 1'b0;
		do_multiply_nxt			= 1'b0;
		
		
		
		case(1'b1)
//***********************************************************************************
// IDLE STATE
//***********************************************************************************
		filter_state[IDLE_ID]:begin
			if(filter_xfc) //XFC			when ready to recieve and send are equal it will begin the transfer state 
				begin
					filter_state_nxt		= TRANSFER; 
					do_transfer_nxt		= 1'b1;
				end
			else 
				begin
			
							//filter_count_nxt = 1'b0;
							rtr_nxt = 1'b1; // We can assume input fifo is always ready to recieve data 
						
				end
		end
//***********************************************************************************
// TRANSFER STATE
//***********************************************************************************
	
		filter_state[TRANSFER_ID]:begin
			if(filter_running_1st) //Condition for state to change to the MULTIPLY STATE
				begin
						filter_state_nxt			= MULTIPLY_1ST; 
						do_multiply_1st_nxt		= 1'b1;
						do_multiply_nxt			= 1'b0;
						do_transfer_nxt			= 1'b0;
						filter_running_1st_nxt	= 1'b0;
						arr_re_x_nxt 				= 1'b1;
						arr_re_h_nxt 				= 1'b1;
						//wr_addr_nxt 	   = wr_addr + 1'b1;
				end
			else	// What occurs during the TRANSFER STATE
				begin
						do_transfer_nxt	= 1'b1;
						wr_addr_x_nxt 	   = wr_addr_x + 1'b1;
						wr_addr_h_nxt 	   = wr_addr_h + 1'b1;
						
						if(arr_we_x)
							begin 
							
								rtr_nxt 						= 1'b0;
								filter_running_1st_nxt	= 1'b1;
							end 
				end
		end
	

//***********************************************************************************
// MULTIPLY STATE 1ST
//***********************************************************************************

		filter_state[MULTIPLY_1ST_ID]:begin
		//	when it goes through all 512pts 
			if(filter_running) //Condition for state to change to the TRANSFER STATE
				begin
						filter_state_nxt		= MULTIPLY;
						do_transfer_nxt		= 1'b0;
						do_multiply_1st_nxt	= 1'b0;
						do_multiply_nxt		= 1'b1;		
						filter_need_new_nxt	= 1'b0;
						filter_running_nxt	= 1'b0;
				end
			else	// What Occurs during the MULTIPLY STATE
				begin
						
						rd_addr_x_nxt				= rd_addr_x + 1'b1;
						rd_addr_h_nxt				= rd_addr_h + 1'b1;
						filter_running_nxt	= 1'b1; 
						
				end
		end

//***********************************************************************************
// MULTIPLY STATE
//***********************************************************************************

		filter_state[MULTIPLY_ID]:begin
		//	when it goes through all 512pts 
			if(filter_need_new) //Condition for state to change to the TRANSFER STATE
				begin
						filter_state_nxt		= TRANSFER;
						do_multiply_nxt		= 1'b0;
						do_multiply_1st_nxt	= 1'b0;
						do_transfer_nxt		= 1'b1;
						filter_need_new_nxt	= 1'b0;
						rtr_nxt 					= 1'b1;
				end
			else	// What Occurs during the MULTIPLY STATE
				begin
						//arr_x_re_nxt 		= 1'b1;
						do_multiply_nxt	= 1'b1; 
						rd_addr_x_nxt			= rd_addr_x + 1'b1;
						rd_addr_h_nxt			= rd_addr_h + 1'b1;
						//increment + 1 until 
						
						filter_count_nxt = filter_count + 1'b1;
						
						
						if (filter_count == 1'b1111)
							begin
								//filter_count_nxt = filter_count - 1'b1;
								filter_need_new_nxt = 1'b1;
								arr_re_x_nxt 		= 1'b0;
								arr_re_h_nxt 		= 1'b0;

							end
						
						
				end
		end			
		
	
		default: begin end
		endcase
	end
	
	
assign aud_out = 	x_unit + h_unit ;
	
//***********************************************************************************

always@(posedge clk or negedge rstb)
	begin
	if(!rstb)
		begin
			filter_state				<= IDLE;
			do_transfer					<= 1'b0;
			do_multiply_1st			<= 1'b0;
			do_multiply					<= 1'b0;
			wr_addr_x					<= 1'b0;
			rd_addr_x					<= 1'b0;
			wr_addr_h					<= 1'b0;
			rd_addr_h					<= 1'b0;
			filter_running				<= 1'b0;
			filter_running_1st		<= 1'b0;
			filter_need_new			<= 1'b0;
			filter_count				<= 1'b0;
			rtr							<= 1'b0;
			
		end
	else
		begin
			filter_state				<= filter_state_nxt;
			do_transfer					<= do_transfer_nxt;
			do_multiply_1st			<= do_multiply_1st_nxt;
			do_multiply					<= do_multiply_nxt;
			wr_addr_x					<= wr_addr_x_nxt;
			rd_addr_x					<= rd_addr_x_nxt;
			arr_re_x						<= arr_re_x_nxt;
			wr_addr_h					<= wr_addr_h_nxt;
			rd_addr_h					<= rd_addr_h_nxt;
			arr_re_h						<= arr_re_h_nxt;
			filter_running 			<= filter_running_nxt;
			filter_running_1st 		<= filter_running_1st_nxt;
			filter_need_new			<= filter_need_new_nxt;
			filter_count				<= filter_count_nxt;
			rtr							<=	rtr_nxt;
			
			
		end
	end 
	

	filter_storage	filter_storage_x
					(.clk			(clk), 
					.wren			(arr_we_x), 
					.wrptr		(wr_addr_x), 
					.wrdata		(aud_in), 
					.rden			(arr_re_x), 
					.rdptr		(rd_addr_x), 
					.rddata		(x_unit));
					
	filter_storage	filter_storage_h
					(.clk			(clk), 
					.wren			(arr_we_h), 
					.wrptr		(wr_addr_h), 
					.wrdata		(rf_filter_coeff), 
					.rden			(arr_re_h), 
					.rdptr		(rd_addr_h), 
					.rddata		(h_unit));
					


	
endmodule
