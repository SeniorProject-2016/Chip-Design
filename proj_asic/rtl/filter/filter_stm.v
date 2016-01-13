`timescale 1ns / 1ps


module filter_stm( clk, rstb, filter_aud_in_rts, filter_aud_in_rtr, do_transfer, do_multiply_1st, do_multiply, filter_aud_in, filter_aud_out, rf_filter_coeff, mux_re, mux_rdptr
    );

input			clk;					//Clock for State Machine
input 		rstb; 					//Active -low reset signal
input 		filter_aud_in_rts;		//Ready to Send
input			[31:0] filter_aud_in;
input 		[15:0] rf_filter_coeff;
output		filter_aud_in_rtr;		//Ready to Recieve
output 		do_transfer;
output		do_multiply_1st;		//when 1, data will transfer to memory block 
output		do_multiply;			//when 1, data is in memory block and is ready to multiply
output		mux_re; 	
output 		[8:0] mux_rdptr;
output		[39:0] filter_aud_out;

//***********************************************************************************
localparam		IDLE				= 4'b0001,
					TRANSFER			= 4'b0010,
					MULTIPLY_1ST 	= 4'b0100,
					MULTIPLY			= 4'b1000;
//***********************************************************************************
localparam  	IDLE_ID			 = 0,
					TRANSFER_ID		 = 1,
					MULTIPLY_1ST_ID = 2,
					MULTIPLY_ID		 = 3;
//***********************************************************************************
localparam 	 	PTR				= 9,
					WIDTH				= 16,
					TAPS				= 512;
//***********************************************************************************
reg	[3:0]			filter_state, filter_state_nxt;  //Current State | State for next Clock Cycle
reg					do_transfer, do_transfer_nxt; //Current Status | Status for next Clock Cycle				
reg					do_multiply_1st, do_multiply_1st_nxt; //Current Status | Status for next Clock Cycle
reg					do_multiply, do_multiply_nxt; //Current Status | Status for next Clock Cycle
reg					filter_running_1st, filter_running_1st_nxt; 
reg					filter_running, filter_running_nxt; 
//***********************************************************************************
reg					accumulator_enable, accumulator_enable_nxt;
reg					accumulator_load, accumulator_load_nxt;
//***********************************************************************************
reg					filter_init, filter_init_nxt;
reg					filter_need_new, filter_need_new_nxt;
reg	[PTR-1:0]	filter_count, filter_count_nxt; 
reg					filter_aud_in_rtr, filter_aud_in_rtr_nxt; 
//***********************************************************************************
reg	[PTR-1:0]	wr_addr_x, wr_addr_x_nxt;
reg	[PTR-1:0]	rd_addr_x, rd_addr_x_nxt;
reg					arr_re_x, arr_re_x_nxt;		
reg					arr_we_x, arr_we_x_nxt;
//***********************************************************************************
reg	[PTR-1:0]	mux_rdptr, mux_rdptr_nxt;
reg					mux_re, mux_re_nxt;	
//***********************************************************************************
wire							filter_xfc_in; 
wire signed [15:0]		h_unit;
wire signed [31:0] 		x_unit;
wire signed [15:0]		x_unit_left; // Left is 31:16
wire signed [15:0]		x_unit_right;// Right is 15:0
//***********************************************************************************
wire signed [31:0]		accumulator_in_left;
wire signed [39:0]		accumulator_out_left;
wire signed [31:0]		accumulator_in_right;
wire signed [39:0]		accumulator_out_right;
wire signed [39:0]		accumulator_out;
//***********************************************************************************
assign h_unit 						= rf_filter_coeff;
assign x_unit_left 				= x_unit[31:16];
assign x_unit_right				= x_unit[15:0];
assign filter_xfc_in 			= filter_aud_in_rtr && filter_aud_in_rts; 
assign accumulator_out			= {accumulator_out_left, accumulator_out_right};
assign filter_aud_out 			= accumulator_out ;
assign accumulator_in_left 	= x_unit_left * h_unit;
assign accumulator_in_right 	= x_unit_right * h_unit;

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
		mux_rdptr_nxt				= mux_rdptr;
		mux_re_nxt					= mux_re;
//***********************************************************************************
		
		filter_running_1st_nxt	= filter_running_1st;
		filter_running_nxt		= filter_running;
		filter_need_new_nxt		= filter_need_new;
		filter_count_nxt			= filter_count;
//***********************************************************************************		
		filter_aud_in_rtr_nxt	= filter_aud_in_rtr; 
		accumulator_enable_nxt  = accumulator_enable;
		accumulator_load_nxt   	= accumulator_load;
		case(1'b1)
//***********************************************************************************
// IDLE STATE
//***********************************************************************************
		filter_state[IDLE_ID]:begin
			if(filter_xfc_in) 
				begin
						filter_state_nxt	= TRANSFER; 
						do_transfer_nxt	= 1'b1;
						arr_we_x_nxt		= 1'b1;
				end
			else 
				begin
						filter_aud_in_rtr_nxt 	= 1'b1; 
				end
		end
//***********************************************************************************
// TRANSFER STATE
//***********************************************************************************
	
		filter_state[TRANSFER_ID]:begin
			if(filter_running_1st) 
				begin
						filter_state_nxt		= MULTIPLY_1ST; 
						do_multiply_1st_nxt		= 1'b1;
						do_transfer_nxt			= 1'b0;
						filter_running_1st_nxt	= 1'b0;
						filter_running_nxt 		= 1'b1;
						arr_re_x_nxt 			= 1'b1;
						mux_re_nxt 				= 1'b1;
						arr_we_x_nxt 			= 1'b0;
						wr_addr_x_nxt 		    = wr_addr_x + 1'b1;
				end
			else
				begin
						do_transfer_nxt	= 1'b1;
						if(filter_xfc_in)
							begin 
								filter_aud_in_rtr_nxt 	= 1'b0;
								arr_we_x_nxt			= 1'b1;
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
						do_multiply_1st_nxt		= 1'b0;
						do_multiply_nxt			= 1'b1;		
						filter_running_nxt		= 1'b0;
						accumulator_load_nxt	= 1'b1;
						accumulator_enable_nxt 	= 1'b1;
						rd_addr_x_nxt			= rd_addr_x - 1'b1;
						mux_rdptr_nxt			= mux_rdptr + 1'b1;
						filter_count_nxt 		= filter_count + 1'b1;
				end
			else	
				begin			

				end
		end

//***********************************************************************************
// MULTIPLY STATE
//***********************************************************************************

		filter_state[MULTIPLY_ID]:begin
			if(filter_need_new) 
				begin
						filter_state_nxt			= TRANSFER;
						do_multiply_nxt			= 1'b0;
						do_multiply_1st_nxt		= 1'b0;
						do_transfer_nxt			= 1'b1;
						filter_need_new_nxt		= 1'b0;
						filter_aud_in_rtr_nxt	= 1'b1;
						accumulator_enable_nxt 	= 1'b0;
				end
			else	
				begin
						do_multiply_nxt			= 1'b1; 
						rd_addr_x_nxt			= rd_addr_x - 1'b1;
						mux_rdptr_nxt			= mux_rdptr + 1'b1;
						filter_count_nxt 		= filter_count + 1'b1;	
						accumulator_load_nxt	= 1'b0;
						if (filter_count == TAPS-1)
							begin
								rd_addr_x_nxt = rd_addr_x  ;
								filter_need_new_nxt = 1'b1;
								arr_re_x_nxt 		= 1'b0;
								mux_re_nxt 		   = 1'b0;	
							
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
			mux_rdptr					<= 1'b0;
			mux_re						<= 1'b0;
			filter_running				<= 1'b0;
			filter_running_1st		<= 1'b0;
			filter_need_new			<= 1'b0;
			filter_count				<= 1'b0;
			filter_aud_in_rtr			<= 1'b0;
			accumulator_enable		<= 1'b0;
			accumulator_load			<= 1'b0;
			
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
			mux_rdptr					<= mux_rdptr_nxt;	
			mux_re						<= mux_re_nxt;
			
			filter_running 			<= filter_running_nxt;
			filter_running_1st 		<= filter_running_1st_nxt;
			filter_need_new			<= filter_need_new_nxt;
			filter_count				<= filter_count_nxt;
			filter_aud_in_rtr			<=	filter_aud_in_rtr_nxt;
			accumulator_enable		<= accumulator_enable_nxt;	
			accumulator_load			<= accumulator_load_nxt;	
		end
	end 
	filter_storage	filter_storage_x
					(.clk		(clk), 
					.rstb		(rstb),
					.wren		(arr_we_x), 
					.wrptr		(wr_addr_x), 
					.wrdata		(filter_aud_in), 
					.rden		(arr_re_x), 
					.rdptr		(rd_addr_x), 
					.rddata		(x_unit));
					
					
	filter_accumulator filter_accumulator_left 
					(.clk			(clk), 
					.rstb			(rstb), 
					.enable			(accumulator_enable), 
					.load			(accumulator_load), 
					.D				(accumulator_in_left), 
					.Q				(accumulator_out_left));
	filter_accumulator filter_accumulator_right 
					(.clk			(clk), 
					.rstb			(rstb), 
					.enable			(accumulator_enable), 
					.load			(accumulator_load), 
					.D				(accumulator_in_right), 
					.Q				(accumulator_out_right));

endmodule
