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
				WIDTH		= 16,
				TAPS		= 8;
//***********************************************************************************
reg	[3:0]			filter_state, filter_state_nxt;  //Current State | State for next Clock Cycle
reg					do_transfer, do_transfer_nxt; //Current Status | Status for next Clock Cycle				
reg					do_multiply_1st, do_multiply_1st_nxt; //Current Status | Status for next Clock Cycle
reg					do_multiply, do_multiply_nxt; //Current Status | Status for next Clock Cycle
reg					filter_running_1st, filter_running_1st_nxt; 
reg					filter_running, filter_running_nxt; 
//***********************************************************************************
reg					accumulator_reset, accumulator_reset_nxt;
//***********************************************************************************
reg	[PTR:0]	   filter_init_count, filter_init_count_nxt;
//***********************************************************************************
reg					filter_init, filter_init_nxt;
reg					filter_need_new, filter_need_new_nxt;
reg					multiply_1st_check, multiply_1st_check_nxt;
reg	[PTR-1:0]	filter_count, filter_count_nxt; 
reg					rtr, rtr_nxt; 
//***********************************************************************************
reg	[PTR-1:0]	wr_addr_x, wr_addr_x_nxt;
reg	[PTR-1:0]	rd_addr_x, rd_addr_x_nxt;
reg					arr_re_x, arr_re_x_nxt;		
reg					arr_we_x, arr_we_x_nxt;
//***********************************************************************************
reg	[PTR-1:0]	wr_addr_h, wr_addr_h_nxt;
reg	[PTR-1:0]	rd_addr_h, rd_addr_h_nxt;
reg					arr_re_h, arr_re_h_nxt;	
reg					arr_we_h, arr_we_h_nxt;
//***********************************************************************************
wire					filter_xfc; 
wire [15:0] 		x_unit;
wire [15:0]			h_unit;
//***********************************************************************************
wire [15:0]			accumulator_in;
wire [15:0]			accumulator_out;
//***********************************************************************************

assign filter_xfc = rtr && rts;  
assign aud_out = 	accumulator_out ;
assign accumulator_in = x_unit * h_unit;

//***********************************************************************************

always@(*)
	begin
	
		filter_state_nxt			= filter_state;
		do_transfer_nxt			= 1'b0;
		do_multiply_1st_nxt		= 1'b0;
		do_multiply_nxt			= 1'b0;
//***********************************************************************************		
		wr_addr_x_nxt				= wr_addr_x;
		rd_addr_x_nxt				= rd_addr_x;
		arr_re_x_nxt				= arr_re_x;
		arr_we_x_nxt				= arr_we_x;
//***********************************************************************************		
		wr_addr_h_nxt				= wr_addr_h;
		rd_addr_h_nxt				= rd_addr_h;
		arr_re_h_nxt				= arr_re_h;
		arr_we_h_nxt				= arr_we_h;
//***********************************************************************************
		multiply_1st_check_nxt	= multiply_1st_check;		
		filter_running_1st_nxt	= filter_running_1st;
		filter_running_nxt		= filter_running;
		filter_need_new_nxt		= filter_need_new;
		filter_count_nxt			= filter_count;
		filter_init_count_nxt   = filter_init_count;
		filter_init					= filter_init_nxt;
//***********************************************************************************		
		rtr_nxt						= rtr; 
		accumulator_reset_nxt   = accumulator_reset;


		case(1'b1)
//***********************************************************************************
// IDLE STATE
//***********************************************************************************
		filter_state[IDLE_ID]:begin
			if(filter_xfc) 
				begin
						filter_state_nxt		= TRANSFER; 
						do_transfer_nxt		= 1'b1;
						arr_we_x_nxt			= 1'b1;
				end
			else 
				begin
						filter_init_nxt = 1'b1;
						
						if(filter_init == 1'b1)
							begin
								arr_we_x = 1'b1;
								arr_we_h = 1'b1;
								wr_addr_x_nxt 	   = wr_addr_x + 1'b1;
								wr_addr_h_nxt 	   = wr_addr_h + 1'b1;
								filter_init_count_nxt = filter_init_count + 1'b1;
							end
						
						if(filter_init_count == TAPS)
							begin
								filter_init		= 1'b0;
								wr_addr_x_nxt	= 1'b0;
								wr_addr_h_nxt	= 1'b0;
								arr_we_h 		= 1'b0;
								arr_we_x 		= 1'b0;
								rtr_nxt 			= 1'b1; 
							end
				end
		end
//***********************************************************************************
// TRANSFER STATE
//***********************************************************************************
	
		filter_state[TRANSFER_ID]:begin
			if(filter_running_1st) 
				begin
						filter_state_nxt			= MULTIPLY_1ST; 
						do_multiply_1st_nxt		= 1'b1;
						do_multiply_nxt			= 1'b0;
						do_transfer_nxt			= 1'b0;
						filter_running_1st_nxt	= 1'b0;
						//filter_running_nxt		= 1'b1;
						accumulator_reset_nxt 	= 1'b0;
				end
			else
				begin
						do_transfer_nxt	= 1'b1;
						wr_addr_x_nxt 	   = wr_addr_x + 1'b1;
						//wr_addr_h_nxt 	   = wr_addr_h + 1'b1;
						
						if(filter_xfc)
							begin 
								
								rtr_nxt 						= 1'b0;
								arr_we_h_nxt 				= 1'b0;
								arr_we_x_nxt 				= 1'b0;
								arr_re_x_nxt 				= 1'b1;
								arr_re_h_nxt 				= 1'b1;
								filter_running_1st_nxt	= 1'b1;
								
							end 
				end
		end
	

//***********************************************************************************
// MULTIPLY STATE 1ST
//***********************************************************************************

		filter_state[MULTIPLY_1ST_ID]:begin

			if(filter_running) 
				begin
						filter_state_nxt		= MULTIPLY;
						do_transfer_nxt		= 1'b0;
						do_multiply_1st_nxt	= 1'b0;
						do_multiply_nxt		= 1'b1;		
						filter_need_new_nxt	= 1'b0;
						filter_running_nxt	= 1'b0;
				end
			else	
				begin
						
								filter_count_nxt = filter_count + 1'b1;
								rd_addr_x_nxt				= rd_addr_x + 1'b1;
								rd_addr_h_nxt				= rd_addr_h + 1'b1;
								multiply_1st_check_nxt = 1'b0;
								filter_running_nxt 		= 1'b1;
						
						
				end
		end

//***********************************************************************************
// MULTIPLY STATE
//***********************************************************************************

		filter_state[MULTIPLY_ID]:begin
			if(filter_need_new) 
				begin
						filter_state_nxt		= TRANSFER;
						do_multiply_nxt		= 1'b0;
						do_multiply_1st_nxt	= 1'b0;
						do_transfer_nxt		= 1'b1;
						filter_need_new_nxt	= 1'b0;
						rtr_nxt 					= 1'b1;
						arr_we_x_nxt			= 1'b1;
						accumulator_reset_nxt 	= 1'b1;
						
				end
			else	
				begin
					
						do_multiply_nxt	= 1'b1; 
						rd_addr_x_nxt			= rd_addr_x + 1'b1;
						rd_addr_h_nxt			= rd_addr_h + 1'b1;
		
						filter_count_nxt = filter_count + 1'b1;
						
						
						if (filter_count == TAPS-1)
							begin
								rd_addr_x_nxt = rd_addr_x + 2'b10;
								filter_need_new_nxt = 1'b1;
								arr_re_x_nxt 		= 1'b0;
								arr_re_h_nxt 		= 1'b0;	
								
							end
				end
		end			

		default: begin end
		endcase
	end
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
			arr_re_x						<= 1'b0;
			arr_we_x						<= 1'b0;
			wr_addr_h					<= 1'b0;
			rd_addr_h					<= 1'b0;
			arr_re_h						<= 1'b0;
			arr_we_h						<= 1'b0;
			filter_running				<= 1'b0;
			filter_running_1st		<= 1'b0;
			filter_need_new			<= 1'b0;
			filter_count				<= 1'b0;
			rtr							<= 1'b0;
			accumulator_reset			<= 1'b0;
			filter_init_count			<= 1'b0;
			filter_init_nxt			<= 1'b0;
			multiply_1st_check		<= 1'b0;
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
			arr_we_x						<= arr_we_x_nxt;
			wr_addr_h					<= wr_addr_h_nxt;
			rd_addr_h					<= rd_addr_h_nxt;	
			arr_re_h						<= arr_re_h_nxt;
			arr_we_h						<= arr_we_h_nxt;
			multiply_1st_check		<= multiply_1st_check_nxt;
			filter_running 			<= filter_running_nxt;
			filter_running_1st 		<= filter_running_1st_nxt;
			filter_need_new			<= filter_need_new_nxt;
			filter_count				<= filter_count_nxt;
			filter_init_count			<= filter_init_count_nxt;
			filter_init					<= filter_init_nxt;
			rtr							<=	rtr_nxt;
			accumulator_reset			<= accumulator_reset_nxt;	
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
					
	filter_accumulator filter_accumulator_0 
					(.clk			(clk), 
					.zero			(accumulator_reset), 
					.D				(accumulator_in), 
					.Q				(accumulator_out));
endmodule
