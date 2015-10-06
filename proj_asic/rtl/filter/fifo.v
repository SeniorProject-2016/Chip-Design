/****************************************************************

*****************************************************************/
module fifo
#(parameter FIFO_PTR		= 4,	//PTR - 2^n = DEPTH
				FIFO_WIDTH	= 16,
				FIFO_DEPTH	= 16)
				
( fifo_clk, rst, fifo_wren, fifo_wrdata, fifo_rden, fifo_rddata, 
	fifo_full, fifo_empty);
/****************************************************************
//
//	INPUTS for FIFO:
//	
//	rst:		reset control bit
// clk:		system clock
//	wr_en:	write enable
//	rd_en:	read enable
//	buf_in:	8bit data input being buffered in fifo	
//
*****************************************************************/
input								fifo_clk;                 
input								rst;
input								fifo_wren;
input [FIFO_WIDTH -1:0]		fifo_wrdata;
input            				fifo_rden;          

/****************************************************************
//
//	OUTPUTS for FIFO
//
//	buf_empty:		bit to indicate empty
//	buf_full:		bit to indicate full
//	buf_out:			8bit data input being buffered out of fifo
//	fifo_counter:	number of data pushed into buffer	
//
*****************************************************************/
output [FIFO_WIDTH -1:0]		fifo_rddata;                 
output								fifo_full;
output								fifo_empty;

localparam	FIFO_DEPTH_MINUS1 = FIFO_DEPTH - 1;

/****************************************************************
//
//	Internal Variables for FIFO
//
//	buf_out:			8bit data outputed being buffered out of fifo
// buf_empty:		bit to indicate empty
//	buf_full:		bit to indicate full
//	fifo_counter:	number of data pushed into buffer	
//	rd_ptr:			pointer to read addresses 
//	wr_ptr:			pointer to write addresses 
//	buf_mem: 		buffer memory
//
*****************************************************************/

reg [FIFO_PTR-1:0]    			wr_ptr, wr_ptr_nxt;
reg [FIFO_PTR-1:0]    			rd_ptr, rd_ptr_nxt;
reg [FIFO_PTR:0]    				num_entries, num_entries_nxt;
wire									fifo_full_nxt, fifo_empty_nxt;
reg									fifo_full, fifo_empty;					
					

/****************************************************************
//
//
*****************************************************************/

always@(*)
begin
  wr_ptr_nxt	=	wr_ptr;
  if (fifo_wren)
	begin
			if (wr_ptr == FIFO_DEPTH_MINUS1)
					wr_ptr_nxt = 'd0;
			else
					wr_ptr_nxt = wr_ptr + 1'b1;
	end
end

/****************************************************************
//	
//
*****************************************************************/

always@(*)
begin
  rd_ptr_nxt	=	rd_ptr;
  if (fifo_rden)
	begin
			if (rd_ptr == FIFO_DEPTH_MINUS1)
					rd_ptr_nxt = 'd0;
			else
					rd_ptr_nxt = rd_ptr + 1'b1;
	end
end

/****************************************************************
//	
//
*****************************************************************/
always@(*)
	begin
			num_entries_nxt = num_entries; 
			if (fifo_wren && fifo_rden)	//no change 
			num_entries_nxt = num_entries; 
			else if (fifo_wren)
			num_entries_nxt = num_entries + 1'b1; 
			else if (fifo_rden)
			num_entries_nxt = num_entries - 1'b1;
	end 
	
assign	fifo_full_nxt	=(num_entries_nxt == FIFO_DEPTH);
assign	fifo_empty_nxt	=(num_entries_nxt == 'd0);
/****************************************************************
//	
//
*****************************************************************/

always @(posedge fifo_clk or negedge rst)
	begin
		if(!rst)
			begin
					wr_ptr					<= 'd0;
					rd_ptr					<= 'd0;
					fifo_full				<= 1'b0;
					fifo_empty				<= 1'b1;
					num_entries 		<= 1'b0;

			end
		else
			begin
					wr_ptr					<= wr_ptr_nxt;
					rd_ptr					<= rd_ptr_nxt;
					fifo_full				<= fifo_full_nxt;
					fifo_empty				<= fifo_empty_nxt;
					num_entries				<= num_entries_nxt; 

					
			end
	end
			
/****************************************************************
//	
//
*****************************************************************/

sram	#(.FIFO_PTR	(FIFO_PTR),
		.FIFO_WIDTH (FIFO_WIDTH)) sram_0
				

		(.wrclk			(fifo_clk), 
		 .wren			(fifo_wren), 
		 .wrptr			(wr_ptr),
		 .wrdata			(fifo_wrdata),
		 .rdclk			(fifo_clk), 
		 .rden			(fifo_rden), 
		 .rdptr			(rd_ptr),
		 .rddata			(fifo_rddata));
endmodule

