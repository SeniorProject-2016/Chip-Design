`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:30:54 10/20/2015 
// Design Name: 
// Module Name:    register 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module register(
    input rst,
    input clk,
    input [10:0] addr,
    input [7:0] wdata,
	 input w_enable,
	 input wxfc, rxfc,
	 input ro_i2c_reg_indir_data, ro_fifo_underrun, ro_fifo_overrun,
	 output reg [7:0] rdata,
	 output reg rf_soft_reset, rf_i2si_bist_en, rf_filter_shift, rf_filter_clip_en, rf_i2si_dec_factor, rf_i2so_dec_factor,
	 output reg rf_i2so_clk2sck_div_a, rf_i2so_clk2sck_div_b, 
	 output reg trig_fifo_overrun, trig_fifo_underrun,
	 output reg rf_i2si_bist_start_val_a, rf_i2si_bist_start_val_b, rf_i2si_bist_incr, rf_i2si_bist_upper_limit_a, rf_i2si_bist_upper_limit_b,
	 output reg rf_i2c_reg_indir_addr_a, rf_i2c_reg_indir_addr_b,
	 output reg rf_filter_coeff0_a, rf_filter_coeff0_b,rf_filter_coeff1_a, rf_filter_coeff1_b,rf_filter_coeff2_a, rf_filter_coeff2_b,rf_filter_coeff3_a, rf_filter_coeff3_b,rf_filter_coeff4_a, rf_filter_coeff4_b,rf_filter_coeff5_a, rf_filter_coeff5_b,rf_filter_coeff6_a, rf_filter_coeff6_b,rf_filter_coeff7_a, rf_filter_coeff7_b,rf_filter_coeff8_a, rf_filter_coeff8_b,rf_filter_coeff9_a, rf_filter_coeff9_b,rf_filter_coeff10_a, rf_filter_coeff10_b,rf_filter_coeff11_a, rf_filter_coeff11_b,rf_filter_coeff12_a, rf_filter_coeff12_b,rf_filter_coeff13_a, rf_filter_coeff13_b,rf_filter_coeff14_a, rf_filter_coeff14_b,rf_filter_coeff15_a, rf_filter_coeff15_b,rf_filter_coeff16_a, rf_filter_coeff16_b,rf_filter_coeff17_a, rf_filter_coeff17_b,rf_filter_coeff18_a, rf_filter_coeff18_b,rf_filter_coeff19_a, rf_filter_coeff19_b,rf_filter_coeff20_a, rf_filter_coeff20_b,rf_filter_coeff21_a, rf_filter_coeff21_b,rf_filter_coeff22_a, rf_filter_coeff22_b,rf_filter_coeff23_a, rf_filter_coeff23_b,rf_filter_coeff24_a, rf_filter_coeff24_b,rf_filter_coeff25_a, rf_filter_coeff25_b,rf_filter_coeff26_a, rf_filter_coeff26_b,rf_filter_coeff27_a, rf_filter_coeff27_b,rf_filter_coeff28_a, rf_filter_coeff28_b,rf_filter_coeff29_a, rf_filter_coeff29_b,rf_filter_coeff30_a, rf_filter_coeff30_b,rf_filter_coeff31_a, rf_filter_coeff31_b,rf_filter_coeff32_a, rf_filter_coeff32_b,rf_filter_coeff33_a, rf_filter_coeff33_b,rf_filter_coeff34_a, rf_filter_coeff34_b,rf_filter_coeff35_a, rf_filter_coeff35_b,rf_filter_coeff36_a, rf_filter_coeff36_b,rf_filter_coeff37_a, rf_filter_coeff37_b,rf_filter_coeff38_a, rf_filter_coeff38_b,rf_filter_coeff39_a, rf_filter_coeff39_b,rf_filter_coeff40_a, rf_filter_coeff40_b,rf_filter_coeff41_a, rf_filter_coeff41_b,rf_filter_coeff42_a, rf_filter_coeff42_b,rf_filter_coeff43_a, rf_filter_coeff43_b,rf_filter_coeff44_a, rf_filter_coeff44_b,rf_filter_coeff45_a, rf_filter_coeff45_b,rf_filter_coeff46_a, rf_filter_coeff46_b,rf_filter_coeff47_a, rf_filter_coeff47_b,rf_filter_coeff48_a, rf_filter_coeff48_b,rf_filter_coeff49_a, rf_filter_coeff49_b,rf_filter_coeff50_a, rf_filter_coeff50_b,rf_filter_coeff51_a, rf_filter_coeff51_b,rf_filter_coeff52_a, rf_filter_coeff52_b,rf_filter_coeff53_a, rf_filter_coeff53_b,rf_filter_coeff54_a, rf_filter_coeff54_b,rf_filter_coeff55_a, rf_filter_coeff55_b,rf_filter_coeff56_a, rf_filter_coeff56_b,rf_filter_coeff57_a, rf_filter_coeff57_b,rf_filter_coeff58_a, rf_filter_coeff58_b,rf_filter_coeff59_a, rf_filter_coeff59_b,rf_filter_coeff60_a, rf_filter_coeff60_b,rf_filter_coeff61_a, rf_filter_coeff61_b,rf_filter_coeff62_a, rf_filter_coeff62_b,rf_filter_coeff63_a, rf_filter_coeff63_b,rf_filter_coeff64_a, rf_filter_coeff64_b,rf_filter_coeff65_a, rf_filter_coeff65_b,rf_filter_coeff66_a, rf_filter_coeff66_b,rf_filter_coeff67_a, rf_filter_coeff67_b,rf_filter_coeff68_a, rf_filter_coeff68_b,rf_filter_coeff69_a, rf_filter_coeff69_b,rf_filter_coeff70_a, rf_filter_coeff70_b,rf_filter_coeff71_a, rf_filter_coeff71_b,rf_filter_coeff72_a, rf_filter_coeff72_b,rf_filter_coeff73_a, rf_filter_coeff73_b,rf_filter_coeff74_a, rf_filter_coeff74_b,rf_filter_coeff75_a, rf_filter_coeff75_b,rf_filter_coeff76_a, rf_filter_coeff76_b,rf_filter_coeff77_a, rf_filter_coeff77_b,rf_filter_coeff78_a, rf_filter_coeff78_b,rf_filter_coeff79_a, rf_filter_coeff79_b,rf_filter_coeff80_a, rf_filter_coeff80_b,rf_filter_coeff81_a, rf_filter_coeff81_b,rf_filter_coeff82_a, rf_filter_coeff82_b,rf_filter_coeff83_a, rf_filter_coeff83_b,rf_filter_coeff84_a, rf_filter_coeff84_b,rf_filter_coeff85_a, rf_filter_coeff85_b,rf_filter_coeff86_a, rf_filter_coeff86_b,rf_filter_coeff87_a, rf_filter_coeff87_b,rf_filter_coeff88_a, rf_filter_coeff88_b,rf_filter_coeff89_a, rf_filter_coeff89_b,rf_filter_coeff90_a, rf_filter_coeff90_b,rf_filter_coeff91_a, rf_filter_coeff91_b,rf_filter_coeff92_a, rf_filter_coeff92_b,rf_filter_coeff93_a, rf_filter_coeff93_b,rf_filter_coeff94_a, rf_filter_coeff94_b,rf_filter_coeff95_a, rf_filter_coeff95_b,rf_filter_coeff96_a, rf_filter_coeff96_b,rf_filter_coeff97_a, rf_filter_coeff97_b,rf_filter_coeff98_a, rf_filter_coeff98_b,rf_filter_coeff99_a, rf_filter_coeff99_b,rf_filter_coeff100_a, rf_filter_coeff100_b,rf_filter_coeff101_a, rf_filter_coeff101_b,rf_filter_coeff102_a, rf_filter_coeff102_b,rf_filter_coeff103_a, rf_filter_coeff103_b,rf_filter_coeff104_a, rf_filter_coeff104_b,rf_filter_coeff105_a, rf_filter_coeff105_b,rf_filter_coeff106_a, rf_filter_coeff106_b,rf_filter_coeff107_a, rf_filter_coeff107_b,rf_filter_coeff108_a, rf_filter_coeff108_b,rf_filter_coeff109_a, rf_filter_coeff109_b,rf_filter_coeff110_a, rf_filter_coeff110_b,rf_filter_coeff111_a, rf_filter_coeff111_b,rf_filter_coeff112_a, rf_filter_coeff112_b,rf_filter_coeff113_a, rf_filter_coeff113_b,rf_filter_coeff114_a, rf_filter_coeff114_b,rf_filter_coeff115_a, rf_filter_coeff115_b,rf_filter_coeff116_a, rf_filter_coeff116_b,rf_filter_coeff117_a, rf_filter_coeff117_b,rf_filter_coeff118_a, rf_filter_coeff118_b,rf_filter_coeff119_a, rf_filter_coeff119_b,rf_filter_coeff120_a, rf_filter_coeff120_b,rf_filter_coeff121_a, rf_filter_coeff121_b,rf_filter_coeff122_a, rf_filter_coeff122_b,rf_filter_coeff123_a, rf_filter_coeff123_b,rf_filter_coeff124_a, rf_filter_coeff124_b,rf_filter_coeff125_a, rf_filter_coeff125_b,rf_filter_coeff126_a, rf_filter_coeff126_b,rf_filter_coeff127_a, rf_filter_coeff127_b,rf_filter_coeff128_a, rf_filter_coeff128_b,rf_filter_coeff129_a, rf_filter_coeff129_b,rf_filter_coeff130_a, rf_filter_coeff130_b,rf_filter_coeff131_a, rf_filter_coeff131_b,rf_filter_coeff132_a, rf_filter_coeff132_b,rf_filter_coeff133_a, rf_filter_coeff133_b,rf_filter_coeff134_a, rf_filter_coeff134_b,rf_filter_coeff135_a, rf_filter_coeff135_b,rf_filter_coeff136_a, rf_filter_coeff136_b,rf_filter_coeff137_a, rf_filter_coeff137_b,rf_filter_coeff138_a, rf_filter_coeff138_b,rf_filter_coeff139_a, rf_filter_coeff139_b,rf_filter_coeff140_a, rf_filter_coeff140_b,rf_filter_coeff141_a, rf_filter_coeff141_b,rf_filter_coeff142_a, rf_filter_coeff142_b,rf_filter_coeff143_a, rf_filter_coeff143_b,rf_filter_coeff144_a, rf_filter_coeff144_b,rf_filter_coeff145_a, rf_filter_coeff145_b,rf_filter_coeff146_a, rf_filter_coeff146_b,rf_filter_coeff147_a, rf_filter_coeff147_b,rf_filter_coeff148_a, rf_filter_coeff148_b,rf_filter_coeff149_a, rf_filter_coeff149_b,rf_filter_coeff150_a, rf_filter_coeff150_b,rf_filter_coeff151_a, rf_filter_coeff151_b,rf_filter_coeff152_a, rf_filter_coeff152_b,rf_filter_coeff153_a, rf_filter_coeff153_b,rf_filter_coeff154_a, rf_filter_coeff154_b,rf_filter_coeff155_a, rf_filter_coeff155_b,rf_filter_coeff156_a, rf_filter_coeff156_b,rf_filter_coeff157_a, rf_filter_coeff157_b,rf_filter_coeff158_a, rf_filter_coeff158_b,rf_filter_coeff159_a, rf_filter_coeff159_b,rf_filter_coeff160_a, rf_filter_coeff160_b,rf_filter_coeff161_a, rf_filter_coeff161_b,rf_filter_coeff162_a, rf_filter_coeff162_b,rf_filter_coeff163_a, rf_filter_coeff163_b,rf_filter_coeff164_a, rf_filter_coeff164_b,rf_filter_coeff165_a, rf_filter_coeff165_b,rf_filter_coeff166_a, rf_filter_coeff166_b,rf_filter_coeff167_a, rf_filter_coeff167_b,rf_filter_coeff168_a, rf_filter_coeff168_b,rf_filter_coeff169_a, rf_filter_coeff169_b,rf_filter_coeff170_a, rf_filter_coeff170_b,rf_filter_coeff171_a, rf_filter_coeff171_b,rf_filter_coeff172_a, rf_filter_coeff172_b,rf_filter_coeff173_a, rf_filter_coeff173_b,rf_filter_coeff174_a, rf_filter_coeff174_b,rf_filter_coeff175_a, rf_filter_coeff175_b,rf_filter_coeff176_a, rf_filter_coeff176_b,rf_filter_coeff177_a, rf_filter_coeff177_b,rf_filter_coeff178_a, rf_filter_coeff178_b,rf_filter_coeff179_a, rf_filter_coeff179_b,rf_filter_coeff180_a, rf_filter_coeff180_b,rf_filter_coeff181_a, rf_filter_coeff181_b,rf_filter_coeff182_a, rf_filter_coeff182_b,rf_filter_coeff183_a, rf_filter_coeff183_b,rf_filter_coeff184_a, rf_filter_coeff184_b,rf_filter_coeff185_a, rf_filter_coeff185_b,rf_filter_coeff186_a, rf_filter_coeff186_b,rf_filter_coeff187_a, rf_filter_coeff187_b,rf_filter_coeff188_a, rf_filter_coeff188_b,rf_filter_coeff189_a, rf_filter_coeff189_b,rf_filter_coeff190_a, rf_filter_coeff190_b,rf_filter_coeff191_a, rf_filter_coeff191_b,rf_filter_coeff192_a, rf_filter_coeff192_b,rf_filter_coeff193_a, rf_filter_coeff193_b,rf_filter_coeff194_a, rf_filter_coeff194_b,rf_filter_coeff195_a, rf_filter_coeff195_b,rf_filter_coeff196_a, rf_filter_coeff196_b,rf_filter_coeff197_a, rf_filter_coeff197_b,rf_filter_coeff198_a, rf_filter_coeff198_b,rf_filter_coeff199_a, rf_filter_coeff199_b,rf_filter_coeff200_a, rf_filter_coeff200_b,rf_filter_coeff201_a, rf_filter_coeff201_b,rf_filter_coeff202_a, rf_filter_coeff202_b,rf_filter_coeff203_a, rf_filter_coeff203_b,rf_filter_coeff204_a, rf_filter_coeff204_b,rf_filter_coeff205_a, rf_filter_coeff205_b,rf_filter_coeff206_a, rf_filter_coeff206_b,rf_filter_coeff207_a, rf_filter_coeff207_b,rf_filter_coeff208_a, rf_filter_coeff208_b,rf_filter_coeff209_a, rf_filter_coeff209_b,rf_filter_coeff210_a, rf_filter_coeff210_b,rf_filter_coeff211_a, rf_filter_coeff211_b,rf_filter_coeff212_a, rf_filter_coeff212_b,rf_filter_coeff213_a, rf_filter_coeff213_b,rf_filter_coeff214_a, rf_filter_coeff214_b,rf_filter_coeff215_a, rf_filter_coeff215_b,rf_filter_coeff216_a, rf_filter_coeff216_b,rf_filter_coeff217_a, rf_filter_coeff217_b,rf_filter_coeff218_a, rf_filter_coeff218_b,rf_filter_coeff219_a, rf_filter_coeff219_b,rf_filter_coeff220_a, rf_filter_coeff220_b,rf_filter_coeff221_a, rf_filter_coeff221_b,rf_filter_coeff222_a, rf_filter_coeff222_b,rf_filter_coeff223_a, rf_filter_coeff223_b,rf_filter_coeff224_a, rf_filter_coeff224_b,rf_filter_coeff225_a, rf_filter_coeff225_b,rf_filter_coeff226_a, rf_filter_coeff226_b,rf_filter_coeff227_a, rf_filter_coeff227_b,rf_filter_coeff228_a, rf_filter_coeff228_b,rf_filter_coeff229_a, rf_filter_coeff229_b,rf_filter_coeff230_a, rf_filter_coeff230_b,rf_filter_coeff231_a, rf_filter_coeff231_b,rf_filter_coeff232_a, rf_filter_coeff232_b,rf_filter_coeff233_a, rf_filter_coeff233_b,rf_filter_coeff234_a, rf_filter_coeff234_b,rf_filter_coeff235_a, rf_filter_coeff235_b,rf_filter_coeff236_a, rf_filter_coeff236_b,rf_filter_coeff237_a, rf_filter_coeff237_b,rf_filter_coeff238_a, rf_filter_coeff238_b,rf_filter_coeff239_a, rf_filter_coeff239_b,rf_filter_coeff240_a, rf_filter_coeff240_b,rf_filter_coeff241_a, rf_filter_coeff241_b,rf_filter_coeff242_a, rf_filter_coeff242_b,rf_filter_coeff243_a, rf_filter_coeff243_b,rf_filter_coeff244_a, rf_filter_coeff244_b,rf_filter_coeff245_a, rf_filter_coeff245_b,rf_filter_coeff246_a, rf_filter_coeff246_b,rf_filter_coeff247_a, rf_filter_coeff247_b,rf_filter_coeff248_a, rf_filter_coeff248_b,rf_filter_coeff249_a, rf_filter_coeff249_b,rf_filter_coeff250_a, rf_filter_coeff250_b,rf_filter_coeff251_a, rf_filter_coeff251_b,rf_filter_coeff252_a, rf_filter_coeff252_b,rf_filter_coeff253_a, rf_filter_coeff253_b,rf_filter_coeff254_a, rf_filter_coeff254_b,rf_filter_coeff255_a, rf_filter_coeff255_b,rf_filter_coeff256_a, rf_filter_coeff256_b,rf_filter_coeff257_a, rf_filter_coeff257_b,rf_filter_coeff258_a, rf_filter_coeff258_b,rf_filter_coeff259_a, rf_filter_coeff259_b,rf_filter_coeff260_a, rf_filter_coeff260_b,rf_filter_coeff261_a, rf_filter_coeff261_b,rf_filter_coeff262_a, rf_filter_coeff262_b,rf_filter_coeff263_a, rf_filter_coeff263_b,rf_filter_coeff264_a, rf_filter_coeff264_b,rf_filter_coeff265_a, rf_filter_coeff265_b,rf_filter_coeff266_a, rf_filter_coeff266_b,rf_filter_coeff267_a, rf_filter_coeff267_b,rf_filter_coeff268_a, rf_filter_coeff268_b,rf_filter_coeff269_a, rf_filter_coeff269_b,rf_filter_coeff270_a, rf_filter_coeff270_b,rf_filter_coeff271_a, rf_filter_coeff271_b,rf_filter_coeff272_a, rf_filter_coeff272_b,rf_filter_coeff273_a, rf_filter_coeff273_b,rf_filter_coeff274_a, rf_filter_coeff274_b,rf_filter_coeff275_a, rf_filter_coeff275_b,rf_filter_coeff276_a, rf_filter_coeff276_b,rf_filter_coeff277_a, rf_filter_coeff277_b,rf_filter_coeff278_a, rf_filter_coeff278_b,rf_filter_coeff279_a, rf_filter_coeff279_b,rf_filter_coeff280_a, rf_filter_coeff280_b,rf_filter_coeff281_a, rf_filter_coeff281_b,rf_filter_coeff282_a, rf_filter_coeff282_b,rf_filter_coeff283_a, rf_filter_coeff283_b,rf_filter_coeff284_a, rf_filter_coeff284_b,rf_filter_coeff285_a, rf_filter_coeff285_b,rf_filter_coeff286_a, rf_filter_coeff286_b,rf_filter_coeff287_a, rf_filter_coeff287_b,rf_filter_coeff288_a, rf_filter_coeff288_b,rf_filter_coeff289_a, rf_filter_coeff289_b,rf_filter_coeff290_a, rf_filter_coeff290_b,rf_filter_coeff291_a, rf_filter_coeff291_b,rf_filter_coeff292_a, rf_filter_coeff292_b,rf_filter_coeff293_a, rf_filter_coeff293_b,rf_filter_coeff294_a, rf_filter_coeff294_b,rf_filter_coeff295_a, rf_filter_coeff295_b,rf_filter_coeff296_a, rf_filter_coeff296_b,rf_filter_coeff297_a, rf_filter_coeff297_b,rf_filter_coeff298_a, rf_filter_coeff298_b,rf_filter_coeff299_a, rf_filter_coeff299_b,rf_filter_coeff300_a, rf_filter_coeff300_b,rf_filter_coeff301_a, rf_filter_coeff301_b,rf_filter_coeff302_a, rf_filter_coeff302_b,rf_filter_coeff303_a, rf_filter_coeff303_b,rf_filter_coeff304_a, rf_filter_coeff304_b,rf_filter_coeff305_a, rf_filter_coeff305_b,rf_filter_coeff306_a, rf_filter_coeff306_b,rf_filter_coeff307_a, rf_filter_coeff307_b,rf_filter_coeff308_a, rf_filter_coeff308_b,rf_filter_coeff309_a, rf_filter_coeff309_b,rf_filter_coeff310_a, rf_filter_coeff310_b,rf_filter_coeff311_a, rf_filter_coeff311_b,rf_filter_coeff312_a, rf_filter_coeff312_b,rf_filter_coeff313_a, rf_filter_coeff313_b,rf_filter_coeff314_a, rf_filter_coeff314_b,rf_filter_coeff315_a, rf_filter_coeff315_b,rf_filter_coeff316_a, rf_filter_coeff316_b,rf_filter_coeff317_a, rf_filter_coeff317_b,rf_filter_coeff318_a, rf_filter_coeff318_b,rf_filter_coeff319_a, rf_filter_coeff319_b,rf_filter_coeff320_a, rf_filter_coeff320_b,rf_filter_coeff321_a, rf_filter_coeff321_b,rf_filter_coeff322_a, rf_filter_coeff322_b,rf_filter_coeff323_a, rf_filter_coeff323_b,rf_filter_coeff324_a, rf_filter_coeff324_b,rf_filter_coeff325_a, rf_filter_coeff325_b,rf_filter_coeff326_a, rf_filter_coeff326_b,rf_filter_coeff327_a, rf_filter_coeff327_b,rf_filter_coeff328_a, rf_filter_coeff328_b,rf_filter_coeff329_a, rf_filter_coeff329_b,rf_filter_coeff330_a, rf_filter_coeff330_b,rf_filter_coeff331_a, rf_filter_coeff331_b,rf_filter_coeff332_a, rf_filter_coeff332_b,rf_filter_coeff333_a, rf_filter_coeff333_b,rf_filter_coeff334_a, rf_filter_coeff334_b,rf_filter_coeff335_a, rf_filter_coeff335_b,rf_filter_coeff336_a, rf_filter_coeff336_b,rf_filter_coeff337_a, rf_filter_coeff337_b,rf_filter_coeff338_a, rf_filter_coeff338_b,rf_filter_coeff339_a, rf_filter_coeff339_b,rf_filter_coeff340_a, rf_filter_coeff340_b,rf_filter_coeff341_a, rf_filter_coeff341_b,rf_filter_coeff342_a, rf_filter_coeff342_b,rf_filter_coeff343_a, rf_filter_coeff343_b,rf_filter_coeff344_a, rf_filter_coeff344_b,rf_filter_coeff345_a, rf_filter_coeff345_b,rf_filter_coeff346_a, rf_filter_coeff346_b,rf_filter_coeff347_a, rf_filter_coeff347_b,rf_filter_coeff348_a, rf_filter_coeff348_b,rf_filter_coeff349_a, rf_filter_coeff349_b,rf_filter_coeff350_a, rf_filter_coeff350_b,rf_filter_coeff351_a, rf_filter_coeff351_b,rf_filter_coeff352_a, rf_filter_coeff352_b,rf_filter_coeff353_a, rf_filter_coeff353_b,rf_filter_coeff354_a, rf_filter_coeff354_b,rf_filter_coeff355_a, rf_filter_coeff355_b,rf_filter_coeff356_a, rf_filter_coeff356_b,rf_filter_coeff357_a, rf_filter_coeff357_b,rf_filter_coeff358_a, rf_filter_coeff358_b,rf_filter_coeff359_a, rf_filter_coeff359_b,rf_filter_coeff360_a, rf_filter_coeff360_b,rf_filter_coeff361_a, rf_filter_coeff361_b,rf_filter_coeff362_a, rf_filter_coeff362_b,rf_filter_coeff363_a, rf_filter_coeff363_b,rf_filter_coeff364_a, rf_filter_coeff364_b,rf_filter_coeff365_a, rf_filter_coeff365_b,rf_filter_coeff366_a, rf_filter_coeff366_b,rf_filter_coeff367_a, rf_filter_coeff367_b,rf_filter_coeff368_a, rf_filter_coeff368_b,rf_filter_coeff369_a, rf_filter_coeff369_b,rf_filter_coeff370_a, rf_filter_coeff370_b,rf_filter_coeff371_a, rf_filter_coeff371_b,rf_filter_coeff372_a, rf_filter_coeff372_b,rf_filter_coeff373_a, rf_filter_coeff373_b,rf_filter_coeff374_a, rf_filter_coeff374_b,rf_filter_coeff375_a, rf_filter_coeff375_b,rf_filter_coeff376_a, rf_filter_coeff376_b,rf_filter_coeff377_a, rf_filter_coeff377_b,rf_filter_coeff378_a, rf_filter_coeff378_b,rf_filter_coeff379_a, rf_filter_coeff379_b,rf_filter_coeff380_a, rf_filter_coeff380_b,rf_filter_coeff381_a, rf_filter_coeff381_b,rf_filter_coeff382_a, rf_filter_coeff382_b,rf_filter_coeff383_a, rf_filter_coeff383_b,rf_filter_coeff384_a, rf_filter_coeff384_b,rf_filter_coeff385_a, rf_filter_coeff385_b,rf_filter_coeff386_a, rf_filter_coeff386_b,rf_filter_coeff387_a, rf_filter_coeff387_b,rf_filter_coeff388_a, rf_filter_coeff388_b,rf_filter_coeff389_a, rf_filter_coeff389_b,rf_filter_coeff390_a, rf_filter_coeff390_b,rf_filter_coeff391_a, rf_filter_coeff391_b,rf_filter_coeff392_a, rf_filter_coeff392_b,rf_filter_coeff393_a, rf_filter_coeff393_b,rf_filter_coeff394_a, rf_filter_coeff394_b,rf_filter_coeff395_a, rf_filter_coeff395_b,rf_filter_coeff396_a, rf_filter_coeff396_b,rf_filter_coeff397_a, rf_filter_coeff397_b,rf_filter_coeff398_a, rf_filter_coeff398_b,rf_filter_coeff399_a, rf_filter_coeff399_b,rf_filter_coeff400_a, rf_filter_coeff400_b,rf_filter_coeff401_a, rf_filter_coeff401_b,rf_filter_coeff402_a, rf_filter_coeff402_b,rf_filter_coeff403_a, rf_filter_coeff403_b,rf_filter_coeff404_a, rf_filter_coeff404_b,rf_filter_coeff405_a, rf_filter_coeff405_b,rf_filter_coeff406_a, rf_filter_coeff406_b,rf_filter_coeff407_a, rf_filter_coeff407_b,rf_filter_coeff408_a, rf_filter_coeff408_b,rf_filter_coeff409_a, rf_filter_coeff409_b,rf_filter_coeff410_a, rf_filter_coeff410_b,rf_filter_coeff411_a, rf_filter_coeff411_b,rf_filter_coeff412_a, rf_filter_coeff412_b,rf_filter_coeff413_a, rf_filter_coeff413_b,rf_filter_coeff414_a, rf_filter_coeff414_b,rf_filter_coeff415_a, rf_filter_coeff415_b,rf_filter_coeff416_a, rf_filter_coeff416_b,rf_filter_coeff417_a, rf_filter_coeff417_b,rf_filter_coeff418_a, rf_filter_coeff418_b,rf_filter_coeff419_a, rf_filter_coeff419_b,rf_filter_coeff420_a, rf_filter_coeff420_b,rf_filter_coeff421_a, rf_filter_coeff421_b,rf_filter_coeff422_a, rf_filter_coeff422_b,rf_filter_coeff423_a, rf_filter_coeff423_b,rf_filter_coeff424_a, rf_filter_coeff424_b,rf_filter_coeff425_a, rf_filter_coeff425_b,rf_filter_coeff426_a, rf_filter_coeff426_b,rf_filter_coeff427_a, rf_filter_coeff427_b,rf_filter_coeff428_a, rf_filter_coeff428_b,rf_filter_coeff429_a, rf_filter_coeff429_b,rf_filter_coeff430_a, rf_filter_coeff430_b,rf_filter_coeff431_a, rf_filter_coeff431_b,rf_filter_coeff432_a, rf_filter_coeff432_b,rf_filter_coeff433_a, rf_filter_coeff433_b,rf_filter_coeff434_a, rf_filter_coeff434_b,rf_filter_coeff435_a, rf_filter_coeff435_b,rf_filter_coeff436_a, rf_filter_coeff436_b,rf_filter_coeff437_a, rf_filter_coeff437_b,rf_filter_coeff438_a, rf_filter_coeff438_b,rf_filter_coeff439_a, rf_filter_coeff439_b,rf_filter_coeff440_a, rf_filter_coeff440_b,rf_filter_coeff441_a, rf_filter_coeff441_b,rf_filter_coeff442_a, rf_filter_coeff442_b,rf_filter_coeff443_a, rf_filter_coeff443_b,rf_filter_coeff444_a, rf_filter_coeff444_b,rf_filter_coeff445_a, rf_filter_coeff445_b,rf_filter_coeff446_a, rf_filter_coeff446_b,rf_filter_coeff447_a, rf_filter_coeff447_b,rf_filter_coeff448_a, rf_filter_coeff448_b,rf_filter_coeff449_a, rf_filter_coeff449_b,rf_filter_coeff450_a, rf_filter_coeff450_b,rf_filter_coeff451_a, rf_filter_coeff451_b,rf_filter_coeff452_a, rf_filter_coeff452_b,rf_filter_coeff453_a, rf_filter_coeff453_b,rf_filter_coeff454_a, rf_filter_coeff454_b,rf_filter_coeff455_a, rf_filter_coeff455_b,rf_filter_coeff456_a, rf_filter_coeff456_b,rf_filter_coeff457_a, rf_filter_coeff457_b,rf_filter_coeff458_a, rf_filter_coeff458_b,rf_filter_coeff459_a, rf_filter_coeff459_b,rf_filter_coeff460_a, rf_filter_coeff460_b,rf_filter_coeff461_a, rf_filter_coeff461_b,rf_filter_coeff462_a, rf_filter_coeff462_b,rf_filter_coeff463_a, rf_filter_coeff463_b,rf_filter_coeff464_a, rf_filter_coeff464_b,rf_filter_coeff465_a, rf_filter_coeff465_b,rf_filter_coeff466_a, rf_filter_coeff466_b,rf_filter_coeff467_a, rf_filter_coeff467_b,rf_filter_coeff468_a, rf_filter_coeff468_b,rf_filter_coeff469_a, rf_filter_coeff469_b,rf_filter_coeff470_a, rf_filter_coeff470_b,rf_filter_coeff471_a, rf_filter_coeff471_b,rf_filter_coeff472_a, rf_filter_coeff472_b,rf_filter_coeff473_a, rf_filter_coeff473_b,rf_filter_coeff474_a, rf_filter_coeff474_b,rf_filter_coeff475_a, rf_filter_coeff475_b,rf_filter_coeff476_a, rf_filter_coeff476_b,rf_filter_coeff477_a, rf_filter_coeff477_b,rf_filter_coeff478_a, rf_filter_coeff478_b,rf_filter_coeff479_a, rf_filter_coeff479_b,rf_filter_coeff480_a, rf_filter_coeff480_b,rf_filter_coeff481_a, rf_filter_coeff481_b,rf_filter_coeff482_a, rf_filter_coeff482_b,rf_filter_coeff483_a, rf_filter_coeff483_b,rf_filter_coeff484_a, rf_filter_coeff484_b,rf_filter_coeff485_a, rf_filter_coeff485_b,rf_filter_coeff486_a, rf_filter_coeff486_b,rf_filter_coeff487_a, rf_filter_coeff487_b,rf_filter_coeff488_a, rf_filter_coeff488_b,rf_filter_coeff489_a, rf_filter_coeff489_b,rf_filter_coeff490_a, rf_filter_coeff490_b,rf_filter_coeff491_a, rf_filter_coeff491_b,rf_filter_coeff492_a, rf_filter_coeff492_b,rf_filter_coeff493_a, rf_filter_coeff493_b,rf_filter_coeff494_a, rf_filter_coeff494_b,rf_filter_coeff495_a, rf_filter_coeff495_b,rf_filter_coeff496_a, rf_filter_coeff496_b,rf_filter_coeff497_a, rf_filter_coeff497_b,rf_filter_coeff498_a, rf_filter_coeff498_b,rf_filter_coeff499_a, rf_filter_coeff499_b,rf_filter_coeff500_a, rf_filter_coeff500_b,rf_filter_coeff501_a, rf_filter_coeff501_b,rf_filter_coeff502_a, rf_filter_coeff502_b,rf_filter_coeff503_a, rf_filter_coeff503_b,rf_filter_coeff504_a, rf_filter_coeff504_b,rf_filter_coeff505_a, rf_filter_coeff505_b,rf_filter_coeff506_a, rf_filter_coeff506_b,rf_filter_coeff507_a, rf_filter_coeff507_b,rf_filter_coeff508_a, rf_filter_coeff508_b,rf_filter_coeff509_a, rf_filter_coeff509_b,rf_filter_coeff510_a, rf_filter_coeff510_b,rf_filter_coeff511_a, rf_filter_coeff511_b
    );

always @(posedge clk or negedge rst)
	
	if (~rst)
	begin
		rf_soft_reset <= 1'h0;
		rf_i2si_bist_en <= 1'h1;
		rf_filter_shift <= 4'hf;
		rf_filter_clip_en <= 1'h1;
		rf_i2si_dec_factor <= 4'h0;
		rf_i2so_dec_factor <= 4'h0;
		rf_i2so_clk2sck_div_a <= 8'h40;
		rf_i2so_clk2sck_div_b <= 8'h40;
		trig_fifo_overrun <= 1'h0; //NA?
		//ro_fifo_overrun <= 1'h0; 
		trig_fifo_underrun <= 1'h0; //NA?
		//ro_fifo_underrun <= 1'h0;
		rf_i2si_bist_incr <= 8'h010;
		rf_i2si_bist_start_val_a <= 8'h800;
		rf_i2si_bist_start_val_b <= 4'h800;
		rf_i2si_bist_upper_limit_a <= 4'h7ff;
		rf_i2si_bist_upper_limit_b <= 8'h7ff;
		rf_i2c_reg_indir_addr_a <= 8'h000;
		rf_i2c_reg_indir_addr_b <= 3'h000;
		rf_filter_coeff0_a <= 11'h000;
		rf_filter_coeff0_b <= 11'h000;
		rf_filter_coeff1_a <= 11'h000;
		rf_filter_coeff1_b <= 11'h000;
		rf_filter_coeff2_a <= 11'h000;
		rf_filter_coeff2_b <= 11'h000;
		rf_filter_coeff3_a <= 11'h000;
		rf_filter_coeff3_b <= 11'h000;
		rf_filter_coeff4_a <= 11'h000;
		rf_filter_coeff4_b <= 11'h000;
		rf_filter_coeff5_a <= 11'h000;
		rf_filter_coeff5_b <= 11'h000;
		rf_filter_coeff6_a <= 11'h000;
		rf_filter_coeff6_b <= 11'h000;
		rf_filter_coeff7_a <= 11'h000;
		rf_filter_coeff7_b <= 11'h000;
		rf_filter_coeff8_a <= 11'h000;
		rf_filter_coeff8_b <= 11'h000;
		rf_filter_coeff9_a <= 11'h000;
		rf_filter_coeff9_b <= 11'h000;
		rf_filter_coeff10_a <= 11'h000;
		rf_filter_coeff10_b <= 11'h000;
		rf_filter_coeff11_a <= 11'h000;
		rf_filter_coeff11_b <= 11'h000;
		rf_filter_coeff12_a <= 11'h000;
		rf_filter_coeff12_b <= 11'h000;
		rf_filter_coeff13_a <= 11'h000;
		rf_filter_coeff13_b <= 11'h000;
		rf_filter_coeff14_a <= 11'h000;
		rf_filter_coeff14_b <= 11'h000;
		rf_filter_coeff15_a <= 11'h000;
		rf_filter_coeff15_b <= 11'h000;
		rf_filter_coeff16_a <= 11'h000;
		rf_filter_coeff16_b <= 11'h000;
		rf_filter_coeff17_a <= 11'h000;
		rf_filter_coeff17_b <= 11'h000;
		rf_filter_coeff18_a <= 11'h000;
		rf_filter_coeff18_b <= 11'h000;
		rf_filter_coeff19_a <= 11'h000;
		rf_filter_coeff19_b <= 11'h000;
		rf_filter_coeff20_a <= 11'h000;
		rf_filter_coeff20_b <= 11'h000;
		rf_filter_coeff21_a <= 11'h000;
		rf_filter_coeff21_b <= 11'h000;
		rf_filter_coeff22_a <= 11'h000;
		rf_filter_coeff22_b <= 11'h000;
		rf_filter_coeff23_a <= 11'h000;
		rf_filter_coeff23_b <= 11'h000;
		rf_filter_coeff24_a <= 11'h000;
		rf_filter_coeff24_b <= 11'h000;
		rf_filter_coeff25_a <= 11'h000;
		rf_filter_coeff25_b <= 11'h000;
		rf_filter_coeff26_a <= 11'h000;
		rf_filter_coeff26_b <= 11'h000;
		rf_filter_coeff27_a <= 11'h000;
		rf_filter_coeff27_b <= 11'h000;
		rf_filter_coeff28_a <= 11'h000;
		rf_filter_coeff28_b <= 11'h000;
		rf_filter_coeff29_a <= 11'h000;
		rf_filter_coeff29_b <= 11'h000;
		rf_filter_coeff30_a <= 11'h000;
		rf_filter_coeff30_b <= 11'h000;
		rf_filter_coeff31_a <= 11'h000;
		rf_filter_coeff31_b <= 11'h000;
		rf_filter_coeff32_a <= 11'h000;
		rf_filter_coeff32_b <= 11'h000;
		rf_filter_coeff33_a <= 11'h000;
		rf_filter_coeff33_b <= 11'h000;
		rf_filter_coeff34_a <= 11'h000;
		rf_filter_coeff34_b <= 11'h000;
		rf_filter_coeff35_a <= 11'h000;
		rf_filter_coeff35_b <= 11'h000;
		rf_filter_coeff36_a <= 11'h000;
		rf_filter_coeff36_b <= 11'h000;
		rf_filter_coeff37_a <= 11'h000;
		rf_filter_coeff37_b <= 11'h000;
		rf_filter_coeff38_a <= 11'h000;
		rf_filter_coeff38_b <= 11'h000;
		rf_filter_coeff39_a <= 11'h000;
		rf_filter_coeff39_b <= 11'h000;
		rf_filter_coeff40_a <= 11'h000;
		rf_filter_coeff40_b <= 11'h000;
		rf_filter_coeff41_a <= 11'h000;
		rf_filter_coeff41_b <= 11'h000;
		rf_filter_coeff42_a <= 11'h000;
		rf_filter_coeff42_b <= 11'h000;
		rf_filter_coeff43_a <= 11'h000;
		rf_filter_coeff43_b <= 11'h000;
		rf_filter_coeff44_a <= 11'h000;
		rf_filter_coeff44_b <= 11'h000;
		rf_filter_coeff45_a <= 11'h000;
		rf_filter_coeff45_b <= 11'h000;
		rf_filter_coeff46_a <= 11'h000;
		rf_filter_coeff46_b <= 11'h000;
		rf_filter_coeff47_a <= 11'h000;
		rf_filter_coeff47_b <= 11'h000;
		rf_filter_coeff48_a <= 11'h000;
		rf_filter_coeff48_b <= 11'h000;
		rf_filter_coeff49_a <= 11'h000;
		rf_filter_coeff49_b <= 11'h000;
		rf_filter_coeff50_a <= 11'h000;
		rf_filter_coeff50_b <= 11'h000;
		rf_filter_coeff51_a <= 11'h000;
		rf_filter_coeff51_b <= 11'h000;
		rf_filter_coeff52_a <= 11'h000;
		rf_filter_coeff52_b <= 11'h000;
		rf_filter_coeff53_a <= 11'h000;
		rf_filter_coeff53_b <= 11'h000;
		rf_filter_coeff54_a <= 11'h000;
		rf_filter_coeff54_b <= 11'h000;
		rf_filter_coeff55_a <= 11'h000;
		rf_filter_coeff55_b <= 11'h000;
		rf_filter_coeff56_a <= 11'h000;
		rf_filter_coeff56_b <= 11'h000;
		rf_filter_coeff57_a <= 11'h000;
		rf_filter_coeff57_b <= 11'h000;
		rf_filter_coeff58_a <= 11'h000;
		rf_filter_coeff58_b <= 11'h000;
		rf_filter_coeff59_a <= 11'h000;
		rf_filter_coeff59_b <= 11'h000;
		rf_filter_coeff60_a <= 11'h000;
		rf_filter_coeff60_b <= 11'h000;
		rf_filter_coeff61_a <= 11'h000;
		rf_filter_coeff61_b <= 11'h000;
		rf_filter_coeff62_a <= 11'h000;
		rf_filter_coeff62_b <= 11'h000;
		rf_filter_coeff63_a <= 11'h000;
		rf_filter_coeff63_b <= 11'h000;
		rf_filter_coeff64_a <= 11'h000;
		rf_filter_coeff64_b <= 11'h000;
		rf_filter_coeff65_a <= 11'h000;
		rf_filter_coeff65_b <= 11'h000;
		rf_filter_coeff66_a <= 11'h000;
		rf_filter_coeff66_b <= 11'h000;
		rf_filter_coeff67_a <= 11'h000;
		rf_filter_coeff67_b <= 11'h000;
		rf_filter_coeff68_a <= 11'h000;
		rf_filter_coeff68_b <= 11'h000;
		rf_filter_coeff69_a <= 11'h000;
		rf_filter_coeff69_b <= 11'h000;
		rf_filter_coeff70_a <= 11'h000;
		rf_filter_coeff70_b <= 11'h000;
		rf_filter_coeff71_a <= 11'h000;
		rf_filter_coeff71_b <= 11'h000;
		rf_filter_coeff72_a <= 11'h000;
		rf_filter_coeff72_b <= 11'h000;
		rf_filter_coeff73_a <= 11'h000;
		rf_filter_coeff73_b <= 11'h000;
		rf_filter_coeff74_a <= 11'h000;
		rf_filter_coeff74_b <= 11'h000;
		rf_filter_coeff75_a <= 11'h000;
		rf_filter_coeff75_b <= 11'h000;
		rf_filter_coeff76_a <= 11'h000;
		rf_filter_coeff76_b <= 11'h000;
		rf_filter_coeff77_a <= 11'h000;
		rf_filter_coeff77_b <= 11'h000;
		rf_filter_coeff78_a <= 11'h000;
		rf_filter_coeff78_b <= 11'h000;
		rf_filter_coeff79_a <= 11'h000;
		rf_filter_coeff79_b <= 11'h000;
		rf_filter_coeff80_a <= 11'h000;
		rf_filter_coeff80_b <= 11'h000;
		rf_filter_coeff81_a <= 11'h000;
		rf_filter_coeff81_b <= 11'h000;
		rf_filter_coeff82_a <= 11'h000;
		rf_filter_coeff82_b <= 11'h000;
		rf_filter_coeff83_a <= 11'h000;
		rf_filter_coeff83_b <= 11'h000;
		rf_filter_coeff84_a <= 11'h000;
		rf_filter_coeff84_b <= 11'h000;
		rf_filter_coeff85_a <= 11'h000;
		rf_filter_coeff85_b <= 11'h000;
		rf_filter_coeff86_a <= 11'h000;
		rf_filter_coeff86_b <= 11'h000;
		rf_filter_coeff87_a <= 11'h000;
		rf_filter_coeff87_b <= 11'h000;
		rf_filter_coeff88_a <= 11'h000;
		rf_filter_coeff88_b <= 11'h000;
		rf_filter_coeff89_a <= 11'h000;
		rf_filter_coeff89_b <= 11'h000;
		rf_filter_coeff90_a <= 11'h000;
		rf_filter_coeff90_b <= 11'h000;
		rf_filter_coeff91_a <= 11'h000;
		rf_filter_coeff91_b <= 11'h000;
		rf_filter_coeff92_a <= 11'h000;
		rf_filter_coeff92_b <= 11'h000;
		rf_filter_coeff93_a <= 11'h000;
		rf_filter_coeff93_b <= 11'h000;
		rf_filter_coeff94_a <= 11'h000;
		rf_filter_coeff94_b <= 11'h000;
		rf_filter_coeff95_a <= 11'h000;
		rf_filter_coeff95_b <= 11'h000;
		rf_filter_coeff96_a <= 11'h000;
		rf_filter_coeff96_b <= 11'h000;
		rf_filter_coeff97_a <= 11'h000;
		rf_filter_coeff97_b <= 11'h000;
		rf_filter_coeff98_a <= 11'h000;
		rf_filter_coeff98_b <= 11'h000;
		rf_filter_coeff99_a <= 11'h000;
		rf_filter_coeff99_b <= 11'h000;
		rf_filter_coeff100_a <= 11'h000;
		rf_filter_coeff100_b <= 11'h000;
		rf_filter_coeff101_a <= 11'h000;
		rf_filter_coeff101_b <= 11'h000;
		rf_filter_coeff102_a <= 11'h000;
		rf_filter_coeff102_b <= 11'h000;
		rf_filter_coeff103_a <= 11'h000;
		rf_filter_coeff103_b <= 11'h000;
		rf_filter_coeff104_a <= 11'h000;
		rf_filter_coeff104_b <= 11'h000;
		rf_filter_coeff105_a <= 11'h000;
		rf_filter_coeff105_b <= 11'h000;
		rf_filter_coeff106_a <= 11'h000;
		rf_filter_coeff106_b <= 11'h000;
		rf_filter_coeff107_a <= 11'h000;
		rf_filter_coeff107_b <= 11'h000;
		rf_filter_coeff108_a <= 11'h000;
		rf_filter_coeff108_b <= 11'h000;
		rf_filter_coeff109_a <= 11'h000;
		rf_filter_coeff109_b <= 11'h000;
		rf_filter_coeff110_a <= 11'h000;
		rf_filter_coeff110_b <= 11'h000;
		rf_filter_coeff111_a <= 11'h000;
		rf_filter_coeff111_b <= 11'h000;
		rf_filter_coeff112_a <= 11'h000;
		rf_filter_coeff112_b <= 11'h000;
		rf_filter_coeff113_a <= 11'h000;
		rf_filter_coeff113_b <= 11'h000;
		rf_filter_coeff114_a <= 11'h000;
		rf_filter_coeff114_b <= 11'h000;
		rf_filter_coeff115_a <= 11'h000;
		rf_filter_coeff115_b <= 11'h000;
		rf_filter_coeff116_a <= 11'h000;
		rf_filter_coeff116_b <= 11'h000;
		rf_filter_coeff117_a <= 11'h000;
		rf_filter_coeff117_b <= 11'h000;
		rf_filter_coeff118_a <= 11'h000;
		rf_filter_coeff118_b <= 11'h000;
		rf_filter_coeff119_a <= 11'h000;
		rf_filter_coeff119_b <= 11'h000;
		rf_filter_coeff120_a <= 11'h000;
		rf_filter_coeff120_b <= 11'h000;
		rf_filter_coeff121_a <= 11'h000;
		rf_filter_coeff121_b <= 11'h000;
		rf_filter_coeff122_a <= 11'h000;
		rf_filter_coeff122_b <= 11'h000;
		rf_filter_coeff123_a <= 11'h000;
		rf_filter_coeff123_b <= 11'h000;
		rf_filter_coeff124_a <= 11'h000;
		rf_filter_coeff124_b <= 11'h000;
		rf_filter_coeff125_a <= 11'h000;
		rf_filter_coeff125_b <= 11'h000;
		rf_filter_coeff126_a <= 11'h000;
		rf_filter_coeff126_b <= 11'h000;
		rf_filter_coeff127_a <= 11'h000;
		rf_filter_coeff127_b <= 11'h000;
		rf_filter_coeff128_a <= 11'h000;
		rf_filter_coeff128_b <= 11'h000;
		rf_filter_coeff129_a <= 11'h000;
		rf_filter_coeff129_b <= 11'h000;
		rf_filter_coeff130_a <= 11'h000;
		rf_filter_coeff130_b <= 11'h000;
		rf_filter_coeff131_a <= 11'h000;
		rf_filter_coeff131_b <= 11'h000;
		rf_filter_coeff132_a <= 11'h000;
		rf_filter_coeff132_b <= 11'h000;
		rf_filter_coeff133_a <= 11'h000;
		rf_filter_coeff133_b <= 11'h000;
		rf_filter_coeff134_a <= 11'h000;
		rf_filter_coeff134_b <= 11'h000;
		rf_filter_coeff135_a <= 11'h000;
		rf_filter_coeff135_b <= 11'h000;
		rf_filter_coeff136_a <= 11'h000;
		rf_filter_coeff136_b <= 11'h000;
		rf_filter_coeff137_a <= 11'h000;
		rf_filter_coeff137_b <= 11'h000;
		rf_filter_coeff138_a <= 11'h000;
		rf_filter_coeff138_b <= 11'h000;
		rf_filter_coeff139_a <= 11'h000;
		rf_filter_coeff139_b <= 11'h000;
		rf_filter_coeff140_a <= 11'h000;
		rf_filter_coeff140_b <= 11'h000;
		rf_filter_coeff141_a <= 11'h000;
		rf_filter_coeff141_b <= 11'h000;
		rf_filter_coeff142_a <= 11'h000;
		rf_filter_coeff142_b <= 11'h000;
		rf_filter_coeff143_a <= 11'h000;
		rf_filter_coeff143_b <= 11'h000;
		rf_filter_coeff144_a <= 11'h000;
		rf_filter_coeff144_b <= 11'h000;
		rf_filter_coeff145_a <= 11'h000;
		rf_filter_coeff145_b <= 11'h000;
		rf_filter_coeff146_a <= 11'h000;
		rf_filter_coeff146_b <= 11'h000;
		rf_filter_coeff147_a <= 11'h000;
		rf_filter_coeff147_b <= 11'h000;
		rf_filter_coeff148_a <= 11'h000;
		rf_filter_coeff148_b <= 11'h000;
		rf_filter_coeff149_a <= 11'h000;
		rf_filter_coeff149_b <= 11'h000;
		rf_filter_coeff150_a <= 11'h000;
		rf_filter_coeff150_b <= 11'h000;
		rf_filter_coeff151_a <= 11'h000;
		rf_filter_coeff151_b <= 11'h000;
		rf_filter_coeff152_a <= 11'h000;
		rf_filter_coeff152_b <= 11'h000;
		rf_filter_coeff153_a <= 11'h000;
		rf_filter_coeff153_b <= 11'h000;
		rf_filter_coeff154_a <= 11'h000;
		rf_filter_coeff154_b <= 11'h000;
		rf_filter_coeff155_a <= 11'h000;
		rf_filter_coeff155_b <= 11'h000;
		rf_filter_coeff156_a <= 11'h000;
		rf_filter_coeff156_b <= 11'h000;
		rf_filter_coeff157_a <= 11'h000;
		rf_filter_coeff157_b <= 11'h000;
		rf_filter_coeff158_a <= 11'h000;
		rf_filter_coeff158_b <= 11'h000;
		rf_filter_coeff159_a <= 11'h000;
		rf_filter_coeff159_b <= 11'h000;
		rf_filter_coeff160_a <= 11'h000;
		rf_filter_coeff160_b <= 11'h000;
		rf_filter_coeff161_a <= 11'h000;
		rf_filter_coeff161_b <= 11'h000;
		rf_filter_coeff162_a <= 11'h000;
		rf_filter_coeff162_b <= 11'h000;
		rf_filter_coeff163_a <= 11'h000;
		rf_filter_coeff163_b <= 11'h000;
		rf_filter_coeff164_a <= 11'h000;
		rf_filter_coeff164_b <= 11'h000;
		rf_filter_coeff165_a <= 11'h000;
		rf_filter_coeff165_b <= 11'h000;
		rf_filter_coeff166_a <= 11'h000;
		rf_filter_coeff166_b <= 11'h000;
		rf_filter_coeff167_a <= 11'h000;
		rf_filter_coeff167_b <= 11'h000;
		rf_filter_coeff168_a <= 11'h000;
		rf_filter_coeff168_b <= 11'h000;
		rf_filter_coeff169_a <= 11'h000;
		rf_filter_coeff169_b <= 11'h000;
		rf_filter_coeff170_a <= 11'h000;
		rf_filter_coeff170_b <= 11'h000;
		rf_filter_coeff171_a <= 11'h000;
		rf_filter_coeff171_b <= 11'h000;
		rf_filter_coeff172_a <= 11'h000;
		rf_filter_coeff172_b <= 11'h000;
		rf_filter_coeff173_a <= 11'h000;
		rf_filter_coeff173_b <= 11'h000;
		rf_filter_coeff174_a <= 11'h000;
		rf_filter_coeff174_b <= 11'h000;
		rf_filter_coeff175_a <= 11'h000;
		rf_filter_coeff175_b <= 11'h000;
		rf_filter_coeff176_a <= 11'h000;
		rf_filter_coeff176_b <= 11'h000;
		rf_filter_coeff177_a <= 11'h000;
		rf_filter_coeff177_b <= 11'h000;
		rf_filter_coeff178_a <= 11'h000;
		rf_filter_coeff178_b <= 11'h000;
		rf_filter_coeff179_a <= 11'h000;
		rf_filter_coeff179_b <= 11'h000;
		rf_filter_coeff180_a <= 11'h000;
		rf_filter_coeff180_b <= 11'h000;
		rf_filter_coeff181_a <= 11'h000;
		rf_filter_coeff181_b <= 11'h000;
		rf_filter_coeff182_a <= 11'h000;
		rf_filter_coeff182_b <= 11'h000;
		rf_filter_coeff183_a <= 11'h000;
		rf_filter_coeff183_b <= 11'h000;
		rf_filter_coeff184_a <= 11'h000;
		rf_filter_coeff184_b <= 11'h000;
		rf_filter_coeff185_a <= 11'h000;
		rf_filter_coeff185_b <= 11'h000;
		rf_filter_coeff186_a <= 11'h000;
		rf_filter_coeff186_b <= 11'h000;
		rf_filter_coeff187_a <= 11'h000;
		rf_filter_coeff187_b <= 11'h000;
		rf_filter_coeff188_a <= 11'h000;
		rf_filter_coeff188_b <= 11'h000;
		rf_filter_coeff189_a <= 11'h000;
		rf_filter_coeff189_b <= 11'h000;
		rf_filter_coeff190_a <= 11'h000;
		rf_filter_coeff190_b <= 11'h000;
		rf_filter_coeff191_a <= 11'h000;
		rf_filter_coeff191_b <= 11'h000;
		rf_filter_coeff192_a <= 11'h000;
		rf_filter_coeff192_b <= 11'h000;
		rf_filter_coeff193_a <= 11'h000;
		rf_filter_coeff193_b <= 11'h000;
		rf_filter_coeff194_a <= 11'h000;
		rf_filter_coeff194_b <= 11'h000;
		rf_filter_coeff195_a <= 11'h000;
		rf_filter_coeff195_b <= 11'h000;
		rf_filter_coeff196_a <= 11'h000;
		rf_filter_coeff196_b <= 11'h000;
		rf_filter_coeff197_a <= 11'h000;
		rf_filter_coeff197_b <= 11'h000;
		rf_filter_coeff198_a <= 11'h000;
		rf_filter_coeff198_b <= 11'h000;
		rf_filter_coeff199_a <= 11'h000;
		rf_filter_coeff199_b <= 11'h000;
		rf_filter_coeff200_a <= 11'h000;
		rf_filter_coeff200_b <= 11'h000;
		rf_filter_coeff201_a <= 11'h000;
		rf_filter_coeff201_b <= 11'h000;
		rf_filter_coeff202_a <= 11'h000;
		rf_filter_coeff202_b <= 11'h000;
		rf_filter_coeff203_a <= 11'h000;
		rf_filter_coeff203_b <= 11'h000;
		rf_filter_coeff204_a <= 11'h000;
		rf_filter_coeff204_b <= 11'h000;
		rf_filter_coeff205_a <= 11'h000;
		rf_filter_coeff205_b <= 11'h000;
		rf_filter_coeff206_a <= 11'h000;
		rf_filter_coeff206_b <= 11'h000;
		rf_filter_coeff207_a <= 11'h000;
		rf_filter_coeff207_b <= 11'h000;
		rf_filter_coeff208_a <= 11'h000;
		rf_filter_coeff208_b <= 11'h000;
		rf_filter_coeff209_a <= 11'h000;
		rf_filter_coeff209_b <= 11'h000;
		rf_filter_coeff210_a <= 11'h000;
		rf_filter_coeff210_b <= 11'h000;
		rf_filter_coeff211_a <= 11'h000;
		rf_filter_coeff211_b <= 11'h000;
		rf_filter_coeff212_a <= 11'h000;
		rf_filter_coeff212_b <= 11'h000;
		rf_filter_coeff213_a <= 11'h000;
		rf_filter_coeff213_b <= 11'h000;
		rf_filter_coeff214_a <= 11'h000;
		rf_filter_coeff214_b <= 11'h000;
		rf_filter_coeff215_a <= 11'h000;
		rf_filter_coeff215_b <= 11'h000;
		rf_filter_coeff216_a <= 11'h000;
		rf_filter_coeff216_b <= 11'h000;
		rf_filter_coeff217_a <= 11'h000;
		rf_filter_coeff217_b <= 11'h000;
		rf_filter_coeff218_a <= 11'h000;
		rf_filter_coeff218_b <= 11'h000;
		rf_filter_coeff219_a <= 11'h000;
		rf_filter_coeff219_b <= 11'h000;
		rf_filter_coeff220_a <= 11'h000;
		rf_filter_coeff220_b <= 11'h000;
		rf_filter_coeff221_a <= 11'h000;
		rf_filter_coeff221_b <= 11'h000;
		rf_filter_coeff222_a <= 11'h000;
		rf_filter_coeff222_b <= 11'h000;
		rf_filter_coeff223_a <= 11'h000;
		rf_filter_coeff223_b <= 11'h000;
		rf_filter_coeff224_a <= 11'h000;
		rf_filter_coeff224_b <= 11'h000;
		rf_filter_coeff225_a <= 11'h000;
		rf_filter_coeff225_b <= 11'h000;
		rf_filter_coeff226_a <= 11'h000;
		rf_filter_coeff226_b <= 11'h000;
		rf_filter_coeff227_a <= 11'h000;
		rf_filter_coeff227_b <= 11'h000;
		rf_filter_coeff228_a <= 11'h000;
		rf_filter_coeff228_b <= 11'h000;
		rf_filter_coeff229_a <= 11'h000;
		rf_filter_coeff229_b <= 11'h000;
		rf_filter_coeff230_a <= 11'h000;
		rf_filter_coeff230_b <= 11'h000;
		rf_filter_coeff231_a <= 11'h000;
		rf_filter_coeff231_b <= 11'h000;
		rf_filter_coeff232_a <= 11'h000;
		rf_filter_coeff232_b <= 11'h000;
		rf_filter_coeff233_a <= 11'h000;
		rf_filter_coeff233_b <= 11'h000;
		rf_filter_coeff234_a <= 11'h000;
		rf_filter_coeff234_b <= 11'h000;
		rf_filter_coeff235_a <= 11'h000;
		rf_filter_coeff235_b <= 11'h000;
		rf_filter_coeff236_a <= 11'h000;
		rf_filter_coeff236_b <= 11'h000;
		rf_filter_coeff237_a <= 11'h000;
		rf_filter_coeff237_b <= 11'h000;
		rf_filter_coeff238_a <= 11'h000;
		rf_filter_coeff238_b <= 11'h000;
		rf_filter_coeff239_a <= 11'h000;
		rf_filter_coeff239_b <= 11'h000;
		rf_filter_coeff240_a <= 11'h000;
		rf_filter_coeff240_b <= 11'h000;
		rf_filter_coeff241_a <= 11'h000;
		rf_filter_coeff241_b <= 11'h000;
		rf_filter_coeff242_a <= 11'h000;
		rf_filter_coeff242_b <= 11'h000;
		rf_filter_coeff243_a <= 11'h000;
		rf_filter_coeff243_b <= 11'h000;
		rf_filter_coeff244_a <= 11'h000;
		rf_filter_coeff244_b <= 11'h000;
		rf_filter_coeff245_a <= 11'h000;
		rf_filter_coeff245_b <= 11'h000;
		rf_filter_coeff246_a <= 11'h000;
		rf_filter_coeff246_b <= 11'h000;
		rf_filter_coeff247_a <= 11'h000;
		rf_filter_coeff247_b <= 11'h000;
		rf_filter_coeff248_a <= 11'h000;
		rf_filter_coeff248_b <= 11'h000;
		rf_filter_coeff249_a <= 11'h000;
		rf_filter_coeff249_b <= 11'h000;
		rf_filter_coeff250_a <= 11'h000;
		rf_filter_coeff250_b <= 11'h000;
		rf_filter_coeff251_a <= 11'h000;
		rf_filter_coeff251_b <= 11'h000;
		rf_filter_coeff252_a <= 11'h000;
		rf_filter_coeff252_b <= 11'h000;
		rf_filter_coeff253_a <= 11'h000;
		rf_filter_coeff253_b <= 11'h000;
		rf_filter_coeff254_a <= 11'h000;
		rf_filter_coeff254_b <= 11'h000;
		rf_filter_coeff255_a <= 11'h000;
		rf_filter_coeff255_b <= 11'h000;
		rf_filter_coeff256_a <= 11'h000;
		rf_filter_coeff256_b <= 11'h000;
		rf_filter_coeff257_a <= 11'h000;
		rf_filter_coeff257_b <= 11'h000;
		rf_filter_coeff258_a <= 11'h000;
		rf_filter_coeff258_b <= 11'h000;
		rf_filter_coeff259_a <= 11'h000;
		rf_filter_coeff259_b <= 11'h000;
		rf_filter_coeff260_a <= 11'h000;
		rf_filter_coeff260_b <= 11'h000;
		rf_filter_coeff261_a <= 11'h000;
		rf_filter_coeff261_b <= 11'h000;
		rf_filter_coeff262_a <= 11'h000;
		rf_filter_coeff262_b <= 11'h000;
		rf_filter_coeff263_a <= 11'h000;
		rf_filter_coeff263_b <= 11'h000;
		rf_filter_coeff264_a <= 11'h000;
		rf_filter_coeff264_b <= 11'h000;
		rf_filter_coeff265_a <= 11'h000;
		rf_filter_coeff265_b <= 11'h000;
		rf_filter_coeff266_a <= 11'h000;
		rf_filter_coeff266_b <= 11'h000;
		rf_filter_coeff267_a <= 11'h000;
		rf_filter_coeff267_b <= 11'h000;
		rf_filter_coeff268_a <= 11'h000;
		rf_filter_coeff268_b <= 11'h000;
		rf_filter_coeff269_a <= 11'h000;
		rf_filter_coeff269_b <= 11'h000;
		rf_filter_coeff270_a <= 11'h000;
		rf_filter_coeff270_b <= 11'h000;
		rf_filter_coeff271_a <= 11'h000;
		rf_filter_coeff271_b <= 11'h000;
		rf_filter_coeff272_a <= 11'h000;
		rf_filter_coeff272_b <= 11'h000;
		rf_filter_coeff273_a <= 11'h000;
		rf_filter_coeff273_b <= 11'h000;
		rf_filter_coeff274_a <= 11'h000;
		rf_filter_coeff274_b <= 11'h000;
		rf_filter_coeff275_a <= 11'h000;
		rf_filter_coeff275_b <= 11'h000;
		rf_filter_coeff276_a <= 11'h000;
		rf_filter_coeff276_b <= 11'h000;
		rf_filter_coeff277_a <= 11'h000;
		rf_filter_coeff277_b <= 11'h000;
		rf_filter_coeff278_a <= 11'h000;
		rf_filter_coeff278_b <= 11'h000;
		rf_filter_coeff279_a <= 11'h000;
		rf_filter_coeff279_b <= 11'h000;
		rf_filter_coeff280_a <= 11'h000;
		rf_filter_coeff280_b <= 11'h000;
		rf_filter_coeff281_a <= 11'h000;
		rf_filter_coeff281_b <= 11'h000;
		rf_filter_coeff282_a <= 11'h000;
		rf_filter_coeff282_b <= 11'h000;
		rf_filter_coeff283_a <= 11'h000;
		rf_filter_coeff283_b <= 11'h000;
		rf_filter_coeff284_a <= 11'h000;
		rf_filter_coeff284_b <= 11'h000;
		rf_filter_coeff285_a <= 11'h000;
		rf_filter_coeff285_b <= 11'h000;
		rf_filter_coeff286_a <= 11'h000;
		rf_filter_coeff286_b <= 11'h000;
		rf_filter_coeff287_a <= 11'h000;
		rf_filter_coeff287_b <= 11'h000;
		rf_filter_coeff288_a <= 11'h000;
		rf_filter_coeff288_b <= 11'h000;
		rf_filter_coeff289_a <= 11'h000;
		rf_filter_coeff289_b <= 11'h000;
		rf_filter_coeff290_a <= 11'h000;
		rf_filter_coeff290_b <= 11'h000;
		rf_filter_coeff291_a <= 11'h000;
		rf_filter_coeff291_b <= 11'h000;
		rf_filter_coeff292_a <= 11'h000;
		rf_filter_coeff292_b <= 11'h000;
		rf_filter_coeff293_a <= 11'h000;
		rf_filter_coeff293_b <= 11'h000;
		rf_filter_coeff294_a <= 11'h000;
		rf_filter_coeff294_b <= 11'h000;
		rf_filter_coeff295_a <= 11'h000;
		rf_filter_coeff295_b <= 11'h000;
		rf_filter_coeff296_a <= 11'h000;
		rf_filter_coeff296_b <= 11'h000;
		rf_filter_coeff297_a <= 11'h000;
		rf_filter_coeff297_b <= 11'h000;
		rf_filter_coeff298_a <= 11'h000;
		rf_filter_coeff298_b <= 11'h000;
		rf_filter_coeff299_a <= 11'h000;
		rf_filter_coeff299_b <= 11'h000;
		rf_filter_coeff300_a <= 11'h000;
		rf_filter_coeff300_b <= 11'h000;
		rf_filter_coeff301_a <= 11'h000;
		rf_filter_coeff301_b <= 11'h000;
		rf_filter_coeff302_a <= 11'h000;
		rf_filter_coeff302_b <= 11'h000;
		rf_filter_coeff303_a <= 11'h000;
		rf_filter_coeff303_b <= 11'h000;
		rf_filter_coeff304_a <= 11'h000;
		rf_filter_coeff304_b <= 11'h000;
		rf_filter_coeff305_a <= 11'h000;
		rf_filter_coeff305_b <= 11'h000;
		rf_filter_coeff306_a <= 11'h000;
		rf_filter_coeff306_b <= 11'h000;
		rf_filter_coeff307_a <= 11'h000;
		rf_filter_coeff307_b <= 11'h000;
		rf_filter_coeff308_a <= 11'h000;
		rf_filter_coeff308_b <= 11'h000;
		rf_filter_coeff309_a <= 11'h000;
		rf_filter_coeff309_b <= 11'h000;
		rf_filter_coeff310_a <= 11'h000;
		rf_filter_coeff310_b <= 11'h000;
		rf_filter_coeff311_a <= 11'h000;
		rf_filter_coeff311_b <= 11'h000;
		rf_filter_coeff312_a <= 11'h000;
		rf_filter_coeff312_b <= 11'h000;
		rf_filter_coeff313_a <= 11'h000;
		rf_filter_coeff313_b <= 11'h000;
		rf_filter_coeff314_a <= 11'h000;
		rf_filter_coeff314_b <= 11'h000;
		rf_filter_coeff315_a <= 11'h000;
		rf_filter_coeff315_b <= 11'h000;
		rf_filter_coeff316_a <= 11'h000;
		rf_filter_coeff316_b <= 11'h000;
		rf_filter_coeff317_a <= 11'h000;
		rf_filter_coeff317_b <= 11'h000;
		rf_filter_coeff318_a <= 11'h000;
		rf_filter_coeff318_b <= 11'h000;
		rf_filter_coeff319_a <= 11'h000;
		rf_filter_coeff319_b <= 11'h000;
		rf_filter_coeff320_a <= 11'h000;
		rf_filter_coeff320_b <= 11'h000;
		rf_filter_coeff321_a <= 11'h000;
		rf_filter_coeff321_b <= 11'h000;
		rf_filter_coeff322_a <= 11'h000;
		rf_filter_coeff322_b <= 11'h000;
		rf_filter_coeff323_a <= 11'h000;
		rf_filter_coeff323_b <= 11'h000;
		rf_filter_coeff324_a <= 11'h000;
		rf_filter_coeff324_b <= 11'h000;
		rf_filter_coeff325_a <= 11'h000;
		rf_filter_coeff325_b <= 11'h000;
		rf_filter_coeff326_a <= 11'h000;
		rf_filter_coeff326_b <= 11'h000;
		rf_filter_coeff327_a <= 11'h000;
		rf_filter_coeff327_b <= 11'h000;
		rf_filter_coeff328_a <= 11'h000;
		rf_filter_coeff328_b <= 11'h000;
		rf_filter_coeff329_a <= 11'h000;
		rf_filter_coeff329_b <= 11'h000;
		rf_filter_coeff330_a <= 11'h000;
		rf_filter_coeff330_b <= 11'h000;
		rf_filter_coeff331_a <= 11'h000;
		rf_filter_coeff331_b <= 11'h000;
		rf_filter_coeff332_a <= 11'h000;
		rf_filter_coeff332_b <= 11'h000;
		rf_filter_coeff333_a <= 11'h000;
		rf_filter_coeff333_b <= 11'h000;
		rf_filter_coeff334_a <= 11'h000;
		rf_filter_coeff334_b <= 11'h000;
		rf_filter_coeff335_a <= 11'h000;
		rf_filter_coeff335_b <= 11'h000;
		rf_filter_coeff336_a <= 11'h000;
		rf_filter_coeff336_b <= 11'h000;
		rf_filter_coeff337_a <= 11'h000;
		rf_filter_coeff337_b <= 11'h000;
		rf_filter_coeff338_a <= 11'h000;
		rf_filter_coeff338_b <= 11'h000;
		rf_filter_coeff339_a <= 11'h000;
		rf_filter_coeff339_b <= 11'h000;
		rf_filter_coeff340_a <= 11'h000;
		rf_filter_coeff340_b <= 11'h000;
		rf_filter_coeff341_a <= 11'h000;
		rf_filter_coeff341_b <= 11'h000;
		rf_filter_coeff342_a <= 11'h000;
		rf_filter_coeff342_b <= 11'h000;
		rf_filter_coeff343_a <= 11'h000;
		rf_filter_coeff343_b <= 11'h000;
		rf_filter_coeff344_a <= 11'h000;
		rf_filter_coeff344_b <= 11'h000;
		rf_filter_coeff345_a <= 11'h000;
		rf_filter_coeff345_b <= 11'h000;
		rf_filter_coeff346_a <= 11'h000;
		rf_filter_coeff346_b <= 11'h000;
		rf_filter_coeff347_a <= 11'h000;
		rf_filter_coeff347_b <= 11'h000;
		rf_filter_coeff348_a <= 11'h000;
		rf_filter_coeff348_b <= 11'h000;
		rf_filter_coeff349_a <= 11'h000;
		rf_filter_coeff349_b <= 11'h000;
		rf_filter_coeff350_a <= 11'h000;
		rf_filter_coeff350_b <= 11'h000;
		rf_filter_coeff351_a <= 11'h000;
		rf_filter_coeff351_b <= 11'h000;
		rf_filter_coeff352_a <= 11'h000;
		rf_filter_coeff352_b <= 11'h000;
		rf_filter_coeff353_a <= 11'h000;
		rf_filter_coeff353_b <= 11'h000;
		rf_filter_coeff354_a <= 11'h000;
		rf_filter_coeff354_b <= 11'h000;
		rf_filter_coeff355_a <= 11'h000;
		rf_filter_coeff355_b <= 11'h000;
		rf_filter_coeff356_a <= 11'h000;
		rf_filter_coeff356_b <= 11'h000;
		rf_filter_coeff357_a <= 11'h000;
		rf_filter_coeff357_b <= 11'h000;
		rf_filter_coeff358_a <= 11'h000;
		rf_filter_coeff358_b <= 11'h000;
		rf_filter_coeff359_a <= 11'h000;
		rf_filter_coeff359_b <= 11'h000;
		rf_filter_coeff360_a <= 11'h000;
		rf_filter_coeff360_b <= 11'h000;
		rf_filter_coeff361_a <= 11'h000;
		rf_filter_coeff361_b <= 11'h000;
		rf_filter_coeff362_a <= 11'h000;
		rf_filter_coeff362_b <= 11'h000;
		rf_filter_coeff363_a <= 11'h000;
		rf_filter_coeff363_b <= 11'h000;
		rf_filter_coeff364_a <= 11'h000;
		rf_filter_coeff364_b <= 11'h000;
		rf_filter_coeff365_a <= 11'h000;
		rf_filter_coeff365_b <= 11'h000;
		rf_filter_coeff366_a <= 11'h000;
		rf_filter_coeff366_b <= 11'h000;
		rf_filter_coeff367_a <= 11'h000;
		rf_filter_coeff367_b <= 11'h000;
		rf_filter_coeff368_a <= 11'h000;
		rf_filter_coeff368_b <= 11'h000;
		rf_filter_coeff369_a <= 11'h000;
		rf_filter_coeff369_b <= 11'h000;
		rf_filter_coeff370_a <= 11'h000;
		rf_filter_coeff370_b <= 11'h000;
		rf_filter_coeff371_a <= 11'h000;
		rf_filter_coeff371_b <= 11'h000;
		rf_filter_coeff372_a <= 11'h000;
		rf_filter_coeff372_b <= 11'h000;
		rf_filter_coeff373_a <= 11'h000;
		rf_filter_coeff373_b <= 11'h000;
		rf_filter_coeff374_a <= 11'h000;
		rf_filter_coeff374_b <= 11'h000;
		rf_filter_coeff375_a <= 11'h000;
		rf_filter_coeff375_b <= 11'h000;
		rf_filter_coeff376_a <= 11'h000;
		rf_filter_coeff376_b <= 11'h000;
		rf_filter_coeff377_a <= 11'h000;
		rf_filter_coeff377_b <= 11'h000;
		rf_filter_coeff378_a <= 11'h000;
		rf_filter_coeff378_b <= 11'h000;
		rf_filter_coeff379_a <= 11'h000;
		rf_filter_coeff379_b <= 11'h000;
		rf_filter_coeff380_a <= 11'h000;
		rf_filter_coeff380_b <= 11'h000;
		rf_filter_coeff381_a <= 11'h000;
		rf_filter_coeff381_b <= 11'h000;
		rf_filter_coeff382_a <= 11'h000;
		rf_filter_coeff382_b <= 11'h000;
		rf_filter_coeff383_a <= 11'h000;
		rf_filter_coeff383_b <= 11'h000;
		rf_filter_coeff384_a <= 11'h000;
		rf_filter_coeff384_b <= 11'h000;
		rf_filter_coeff385_a <= 11'h000;
		rf_filter_coeff385_b <= 11'h000;
		rf_filter_coeff386_a <= 11'h000;
		rf_filter_coeff386_b <= 11'h000;
		rf_filter_coeff387_a <= 11'h000;
		rf_filter_coeff387_b <= 11'h000;
		rf_filter_coeff388_a <= 11'h000;
		rf_filter_coeff388_b <= 11'h000;
		rf_filter_coeff389_a <= 11'h000;
		rf_filter_coeff389_b <= 11'h000;
		rf_filter_coeff390_a <= 11'h000;
		rf_filter_coeff390_b <= 11'h000;
		rf_filter_coeff391_a <= 11'h000;
		rf_filter_coeff391_b <= 11'h000;
		rf_filter_coeff392_a <= 11'h000;
		rf_filter_coeff392_b <= 11'h000;
		rf_filter_coeff393_a <= 11'h000;
		rf_filter_coeff393_b <= 11'h000;
		rf_filter_coeff394_a <= 11'h000;
		rf_filter_coeff394_b <= 11'h000;
		rf_filter_coeff395_a <= 11'h000;
		rf_filter_coeff395_b <= 11'h000;
		rf_filter_coeff396_a <= 11'h000;
		rf_filter_coeff396_b <= 11'h000;
		rf_filter_coeff397_a <= 11'h000;
		rf_filter_coeff397_b <= 11'h000;
		rf_filter_coeff398_a <= 11'h000;
		rf_filter_coeff398_b <= 11'h000;
		rf_filter_coeff399_a <= 11'h000;
		rf_filter_coeff399_b <= 11'h000;
		rf_filter_coeff400_a <= 11'h000;
		rf_filter_coeff400_b <= 11'h000;
		rf_filter_coeff401_a <= 11'h000;
		rf_filter_coeff401_b <= 11'h000;
		rf_filter_coeff402_a <= 11'h000;
		rf_filter_coeff402_b <= 11'h000;
		rf_filter_coeff403_a <= 11'h000;
		rf_filter_coeff403_b <= 11'h000;
		rf_filter_coeff404_a <= 11'h000;
		rf_filter_coeff404_b <= 11'h000;
		rf_filter_coeff405_a <= 11'h000;
		rf_filter_coeff405_b <= 11'h000;
		rf_filter_coeff406_a <= 11'h000;
		rf_filter_coeff406_b <= 11'h000;
		rf_filter_coeff407_a <= 11'h000;
		rf_filter_coeff407_b <= 11'h000;
		rf_filter_coeff408_a <= 11'h000;
		rf_filter_coeff408_b <= 11'h000;
		rf_filter_coeff409_a <= 11'h000;
		rf_filter_coeff409_b <= 11'h000;
		rf_filter_coeff410_a <= 11'h000;
		rf_filter_coeff410_b <= 11'h000;
		rf_filter_coeff411_a <= 11'h000;
		rf_filter_coeff411_b <= 11'h000;
		rf_filter_coeff412_a <= 11'h000;
		rf_filter_coeff412_b <= 11'h000;
		rf_filter_coeff413_a <= 11'h000;
		rf_filter_coeff413_b <= 11'h000;
		rf_filter_coeff414_a <= 11'h000;
		rf_filter_coeff414_b <= 11'h000;
		rf_filter_coeff415_a <= 11'h000;
		rf_filter_coeff415_b <= 11'h000;
		rf_filter_coeff416_a <= 11'h000;
		rf_filter_coeff416_b <= 11'h000;
		rf_filter_coeff417_a <= 11'h000;
		rf_filter_coeff417_b <= 11'h000;
		rf_filter_coeff418_a <= 11'h000;
		rf_filter_coeff418_b <= 11'h000;
		rf_filter_coeff419_a <= 11'h000;
		rf_filter_coeff419_b <= 11'h000;
		rf_filter_coeff420_a <= 11'h000;
		rf_filter_coeff420_b <= 11'h000;
		rf_filter_coeff421_a <= 11'h000;
		rf_filter_coeff421_b <= 11'h000;
		rf_filter_coeff422_a <= 11'h000;
		rf_filter_coeff422_b <= 11'h000;
		rf_filter_coeff423_a <= 11'h000;
		rf_filter_coeff423_b <= 11'h000;
		rf_filter_coeff424_a <= 11'h000;
		rf_filter_coeff424_b <= 11'h000;
		rf_filter_coeff425_a <= 11'h000;
		rf_filter_coeff425_b <= 11'h000;
		rf_filter_coeff426_a <= 11'h000;
		rf_filter_coeff426_b <= 11'h000;
		rf_filter_coeff427_a <= 11'h000;
		rf_filter_coeff427_b <= 11'h000;
		rf_filter_coeff428_a <= 11'h000;
		rf_filter_coeff428_b <= 11'h000;
		rf_filter_coeff429_a <= 11'h000;
		rf_filter_coeff429_b <= 11'h000;
		rf_filter_coeff430_a <= 11'h000;
		rf_filter_coeff430_b <= 11'h000;
		rf_filter_coeff431_a <= 11'h000;
		rf_filter_coeff431_b <= 11'h000;
		rf_filter_coeff432_a <= 11'h000;
		rf_filter_coeff432_b <= 11'h000;
		rf_filter_coeff433_a <= 11'h000;
		rf_filter_coeff433_b <= 11'h000;
		rf_filter_coeff434_a <= 11'h000;
		rf_filter_coeff434_b <= 11'h000;
		rf_filter_coeff435_a <= 11'h000;
		rf_filter_coeff435_b <= 11'h000;
		rf_filter_coeff436_a <= 11'h000;
		rf_filter_coeff436_b <= 11'h000;
		rf_filter_coeff437_a <= 11'h000;
		rf_filter_coeff437_b <= 11'h000;
		rf_filter_coeff438_a <= 11'h000;
		rf_filter_coeff438_b <= 11'h000;
		rf_filter_coeff439_a <= 11'h000;
		rf_filter_coeff439_b <= 11'h000;
		rf_filter_coeff440_a <= 11'h000;
		rf_filter_coeff440_b <= 11'h000;
		rf_filter_coeff441_a <= 11'h000;
		rf_filter_coeff441_b <= 11'h000;
		rf_filter_coeff442_a <= 11'h000;
		rf_filter_coeff442_b <= 11'h000;
		rf_filter_coeff443_a <= 11'h000;
		rf_filter_coeff443_b <= 11'h000;
		rf_filter_coeff444_a <= 11'h000;
		rf_filter_coeff444_b <= 11'h000;
		rf_filter_coeff445_a <= 11'h000;
		rf_filter_coeff445_b <= 11'h000;
		rf_filter_coeff446_a <= 11'h000;
		rf_filter_coeff446_b <= 11'h000;
		rf_filter_coeff447_a <= 11'h000;
		rf_filter_coeff447_b <= 11'h000;
		rf_filter_coeff448_a <= 11'h000;
		rf_filter_coeff448_b <= 11'h000;
		rf_filter_coeff449_a <= 11'h000;
		rf_filter_coeff449_b <= 11'h000;
		rf_filter_coeff450_a <= 11'h000;
		rf_filter_coeff450_b <= 11'h000;
		rf_filter_coeff451_a <= 11'h000;
		rf_filter_coeff451_b <= 11'h000;
		rf_filter_coeff452_a <= 11'h000;
		rf_filter_coeff452_b <= 11'h000;
		rf_filter_coeff453_a <= 11'h000;
		rf_filter_coeff453_b <= 11'h000;
		rf_filter_coeff454_a <= 11'h000;
		rf_filter_coeff454_b <= 11'h000;
		rf_filter_coeff455_a <= 11'h000;
		rf_filter_coeff455_b <= 11'h000;
		rf_filter_coeff456_a <= 11'h000;
		rf_filter_coeff456_b <= 11'h000;
		rf_filter_coeff457_a <= 11'h000;
		rf_filter_coeff457_b <= 11'h000;
		rf_filter_coeff458_a <= 11'h000;
		rf_filter_coeff458_b <= 11'h000;
		rf_filter_coeff459_a <= 11'h000;
		rf_filter_coeff459_b <= 11'h000;
		rf_filter_coeff460_a <= 11'h000;
		rf_filter_coeff460_b <= 11'h000;
		rf_filter_coeff461_a <= 11'h000;
		rf_filter_coeff461_b <= 11'h000;
		rf_filter_coeff462_a <= 11'h000;
		rf_filter_coeff462_b <= 11'h000;
		rf_filter_coeff463_a <= 11'h000;
		rf_filter_coeff463_b <= 11'h000;
		rf_filter_coeff464_a <= 11'h000;
		rf_filter_coeff464_b <= 11'h000;
		rf_filter_coeff465_a <= 11'h000;
		rf_filter_coeff465_b <= 11'h000;
		rf_filter_coeff466_a <= 11'h000;
		rf_filter_coeff466_b <= 11'h000;
		rf_filter_coeff467_a <= 11'h000;
		rf_filter_coeff467_b <= 11'h000;
		rf_filter_coeff468_a <= 11'h000;
		rf_filter_coeff468_b <= 11'h000;
		rf_filter_coeff469_a <= 11'h000;
		rf_filter_coeff469_b <= 11'h000;
		rf_filter_coeff470_a <= 11'h000;
		rf_filter_coeff470_b <= 11'h000;
		rf_filter_coeff471_a <= 11'h000;
		rf_filter_coeff471_b <= 11'h000;
		rf_filter_coeff472_a <= 11'h000;
		rf_filter_coeff472_b <= 11'h000;
		rf_filter_coeff473_a <= 11'h000;
		rf_filter_coeff473_b <= 11'h000;
		rf_filter_coeff474_a <= 11'h000;
		rf_filter_coeff474_b <= 11'h000;
		rf_filter_coeff475_a <= 11'h000;
		rf_filter_coeff475_b <= 11'h000;
		rf_filter_coeff476_a <= 11'h000;
		rf_filter_coeff476_b <= 11'h000;
		rf_filter_coeff477_a <= 11'h000;
		rf_filter_coeff477_b <= 11'h000;
		rf_filter_coeff478_a <= 11'h000;
		rf_filter_coeff478_b <= 11'h000;
		rf_filter_coeff479_a <= 11'h000;
		rf_filter_coeff479_b <= 11'h000;
		rf_filter_coeff480_a <= 11'h000;
		rf_filter_coeff480_b <= 11'h000;
		rf_filter_coeff481_a <= 11'h000;
		rf_filter_coeff481_b <= 11'h000;
		rf_filter_coeff482_a <= 11'h000;
		rf_filter_coeff482_b <= 11'h000;
		rf_filter_coeff483_a <= 11'h000;
		rf_filter_coeff483_b <= 11'h000;
		rf_filter_coeff484_a <= 11'h000;
		rf_filter_coeff484_b <= 11'h000;
		rf_filter_coeff485_a <= 11'h000;
		rf_filter_coeff485_b <= 11'h000;
		rf_filter_coeff486_a <= 11'h000;
		rf_filter_coeff486_b <= 11'h000;
		rf_filter_coeff487_a <= 11'h000;
		rf_filter_coeff487_b <= 11'h000;
		rf_filter_coeff488_a <= 11'h000;
		rf_filter_coeff488_b <= 11'h000;
		rf_filter_coeff489_a <= 11'h000;
		rf_filter_coeff489_b <= 11'h000;
		rf_filter_coeff490_a <= 11'h000;
		rf_filter_coeff490_b <= 11'h000;
		rf_filter_coeff491_a <= 11'h000;
		rf_filter_coeff491_b <= 11'h000;
		rf_filter_coeff492_a <= 11'h000;
		rf_filter_coeff492_b <= 11'h000;
		rf_filter_coeff493_a <= 11'h000;
		rf_filter_coeff493_b <= 11'h000;
		rf_filter_coeff494_a <= 11'h000;
		rf_filter_coeff494_b <= 11'h000;
		rf_filter_coeff495_a <= 11'h000;
		rf_filter_coeff495_b <= 11'h000;
		rf_filter_coeff496_a <= 11'h000;
		rf_filter_coeff496_b <= 11'h000;
		rf_filter_coeff497_a <= 11'h000;
		rf_filter_coeff497_b <= 11'h000;
		rf_filter_coeff498_a <= 11'h000;
		rf_filter_coeff498_b <= 11'h000;
		rf_filter_coeff499_a <= 11'h000;
		rf_filter_coeff499_b <= 11'h000;
		rf_filter_coeff500_a <= 11'h000;
		rf_filter_coeff500_b <= 11'h000;
		rf_filter_coeff501_a <= 11'h000;
		rf_filter_coeff501_b <= 11'h000;
		rf_filter_coeff502_a <= 11'h000;
		rf_filter_coeff502_b <= 11'h000;
		rf_filter_coeff503_a <= 11'h000;
		rf_filter_coeff503_b <= 11'h000;
		rf_filter_coeff504_a <= 11'h000;
		rf_filter_coeff504_b <= 11'h000;
		rf_filter_coeff505_a <= 11'h000;
		rf_filter_coeff505_b <= 11'h000;
		rf_filter_coeff506_a <= 11'h000;
		rf_filter_coeff506_b <= 11'h000;
		rf_filter_coeff507_a <= 11'h000;
		rf_filter_coeff507_b <= 11'h000;
		rf_filter_coeff508_a <= 11'h000;
		rf_filter_coeff508_b <= 11'h000;
		rf_filter_coeff509_a <= 11'h000;
		rf_filter_coeff509_b <= 11'h000;
		rf_filter_coeff510_a <= 11'h000;
		rf_filter_coeff510_b <= 11'h000;
		rf_filter_coeff511_a <= 11'h000;
		rf_filter_coeff511_b <= 11'h000;
	end
	else if (wxfc && w_enable)
		begin
			// Given the address, the signals are assigned to their correlated bits of data
			case(addr)		
				11'h004: begin
					rf_soft_reset <= wdata[0];
					rf_i2si_bist_en <= wdata[1];
					rf_filter_shift <= wdata[5:2];
					rf_filter_clip_en <= wdata[6];
					end
				11'h005: begin
					rf_i2si_dec_factor <= wdata[3:0];
					rf_i2so_dec_factor <= wdata[7:4];
					end
				11'h008:
					rf_i2so_clk2sck_div_a <= wdata[7:0];
				11'h009:
					rf_i2so_clk2sck_div_b <= wdata[7:0];
				11'h00c: begin
					trig_fifo_overrun <= wdata[0];
					trig_fifo_underrun <= wdata[2];
					end
				11'h010:
					rf_i2si_bist_incr <= wdata[7:0];
				11'h011:
					rf_i2si_bist_start_val_a <= wdata[7:0];
				11'h012: begin
					rf_i2si_bist_start_val_b <= wdata[3:0];
					rf_i2si_bist_upper_limit_a <= wdata[7:4];
					end
				11'h013:
					rf_i2si_bist_upper_limit_b <= wdata[7:0];
				11'h014:
					rf_i2c_reg_indir_addr_a <= wdata[7:0];
				11'h015:
					rf_i2c_reg_indir_addr_b <= wdata[3:0];				
				11'h400:
					rf_filter_coeff0_a <= wdata[7:0];
				11'h401:
					rf_filter_coeff0_b <= wdata[7:0];
				11'h402:
					rf_filter_coeff1_a <= wdata[7:0];
				11'h403:
					rf_filter_coeff1_b <= wdata[7:0];
				11'h404:
					rf_filter_coeff2_a <= wdata[7:0];
				11'h405:
					rf_filter_coeff2_b <= wdata[7:0];
				11'h406:
					rf_filter_coeff3_a <= wdata[7:0];
				11'h407:
					rf_filter_coeff3_b <= wdata[7:0];
				11'h408:
					rf_filter_coeff4_a <= wdata[7:0];
				11'h409:
					rf_filter_coeff4_b <= wdata[7:0];
				11'h40a:
					rf_filter_coeff5_a <= wdata[7:0];
				11'h40b:
					rf_filter_coeff5_b <= wdata[7:0];
				11'h40c:
					rf_filter_coeff6_a <= wdata[7:0];
				11'h40d:
					rf_filter_coeff6_b <= wdata[7:0];
				11'h40e:
					rf_filter_coeff7_a <= wdata[7:0];
				11'h40f:
					rf_filter_coeff7_b <= wdata[7:0];
				11'h410:
					rf_filter_coeff8_a <= wdata[7:0];
				11'h411:
					rf_filter_coeff8_b <= wdata[7:0];
				11'h412:
					rf_filter_coeff9_a <= wdata[7:0];
				11'h413:
					rf_filter_coeff9_b <= wdata[7:0];
				11'h414:
					rf_filter_coeff10_a <= wdata[7:0];
				11'h415:
					rf_filter_coeff10_b <= wdata[7:0];
				11'h416:
					rf_filter_coeff11_a <= wdata[7:0];
				11'h417:
					rf_filter_coeff11_b <= wdata[7:0];
				11'h418:
					rf_filter_coeff12_a <= wdata[7:0];
				11'h419:
					rf_filter_coeff12_b <= wdata[7:0];
				11'h41a:
					rf_filter_coeff13_a <= wdata[7:0];
				11'h41b:
					rf_filter_coeff13_b <= wdata[7:0];
				11'h41c:
					rf_filter_coeff14_a <= wdata[7:0];
				11'h41d:
					rf_filter_coeff14_b <= wdata[7:0];
				11'h41e:
					rf_filter_coeff15_a <= wdata[7:0];
				11'h41f:
					rf_filter_coeff15_b <= wdata[7:0];
				11'h420:
					rf_filter_coeff16_a <= wdata[7:0];
				11'h421:
					rf_filter_coeff16_b <= wdata[7:0];
				11'h422:
					rf_filter_coeff17_a <= wdata[7:0];
				11'h423:
					rf_filter_coeff17_b <= wdata[7:0];
				11'h424:
					rf_filter_coeff18_a <= wdata[7:0];
				11'h425:
					rf_filter_coeff18_b <= wdata[7:0];
				11'h426:
					rf_filter_coeff19_a <= wdata[7:0];
				11'h427:
					rf_filter_coeff19_b <= wdata[7:0];
				11'h428:
					rf_filter_coeff20_a <= wdata[7:0];
				11'h429:
					rf_filter_coeff20_b <= wdata[7:0];
				11'h42a:
					rf_filter_coeff21_a <= wdata[7:0];
				11'h42b:
					rf_filter_coeff21_b <= wdata[7:0];
				11'h42c:
					rf_filter_coeff22_a <= wdata[7:0];
				11'h42d:
					rf_filter_coeff22_b <= wdata[7:0];
				11'h42e:
					rf_filter_coeff23_a <= wdata[7:0];
				11'h42f:
					rf_filter_coeff23_b <= wdata[7:0];
				11'h430:
					rf_filter_coeff24_a <= wdata[7:0];
				11'h431:
					rf_filter_coeff24_b <= wdata[7:0];
				11'h432:
					rf_filter_coeff25_a <= wdata[7:0];
				11'h433:
					rf_filter_coeff25_b <= wdata[7:0];
				11'h434:
					rf_filter_coeff26_a <= wdata[7:0];
				11'h435:
					rf_filter_coeff26_b <= wdata[7:0];
				11'h436:
					rf_filter_coeff27_a <= wdata[7:0];
				11'h437:
					rf_filter_coeff27_b <= wdata[7:0];
				11'h438:
					rf_filter_coeff28_a <= wdata[7:0];
				11'h439:
					rf_filter_coeff28_b <= wdata[7:0];
				11'h43a:
					rf_filter_coeff29_a <= wdata[7:0];
				11'h43b:
					rf_filter_coeff29_b <= wdata[7:0];
				11'h43c:
					rf_filter_coeff30_a <= wdata[7:0];
				11'h43d:
					rf_filter_coeff30_b <= wdata[7:0];
				11'h43e:
					rf_filter_coeff31_a <= wdata[7:0];
				11'h43f:
					rf_filter_coeff31_b <= wdata[7:0];
				11'h440:
					rf_filter_coeff32_a <= wdata[7:0];
				11'h441:
					rf_filter_coeff32_b <= wdata[7:0];
				11'h442:
					rf_filter_coeff33_a <= wdata[7:0];
				11'h443:
					rf_filter_coeff33_b <= wdata[7:0];
				11'h444:
					rf_filter_coeff34_a <= wdata[7:0];
				11'h445:
					rf_filter_coeff34_b <= wdata[7:0];
				11'h446:
					rf_filter_coeff35_a <= wdata[7:0];
				11'h447:
					rf_filter_coeff35_b <= wdata[7:0];
				11'h448:
					rf_filter_coeff36_a <= wdata[7:0];
				11'h449:
					rf_filter_coeff36_b <= wdata[7:0];
				11'h44a:
					rf_filter_coeff37_a <= wdata[7:0];
				11'h44b:
					rf_filter_coeff37_b <= wdata[7:0];
				11'h44c:
					rf_filter_coeff38_a <= wdata[7:0];
				11'h44d:
					rf_filter_coeff38_b <= wdata[7:0];
				11'h44e:
					rf_filter_coeff39_a <= wdata[7:0];
				11'h44f:
					rf_filter_coeff39_b <= wdata[7:0];
				11'h450:
					rf_filter_coeff40_a <= wdata[7:0];
				11'h451:
					rf_filter_coeff40_b <= wdata[7:0];
				11'h452:
					rf_filter_coeff41_a <= wdata[7:0];
				11'h453:
					rf_filter_coeff41_b <= wdata[7:0];
				11'h454:
					rf_filter_coeff42_a <= wdata[7:0];
				11'h455:
					rf_filter_coeff42_b <= wdata[7:0];
				11'h456:
					rf_filter_coeff43_a <= wdata[7:0];
				11'h457:
					rf_filter_coeff43_b <= wdata[7:0];
				11'h458:
					rf_filter_coeff44_a <= wdata[7:0];
				11'h459:
					rf_filter_coeff44_b <= wdata[7:0];
				11'h45a:
					rf_filter_coeff45_a <= wdata[7:0];
				11'h45b:
					rf_filter_coeff45_b <= wdata[7:0];
				11'h45c:
					rf_filter_coeff46_a <= wdata[7:0];
				11'h45d:
					rf_filter_coeff46_b <= wdata[7:0];
				11'h45e:
					rf_filter_coeff47_a <= wdata[7:0];
				11'h45f:
					rf_filter_coeff47_b <= wdata[7:0];
				11'h460:
					rf_filter_coeff48_a <= wdata[7:0];
				11'h461:
					rf_filter_coeff48_b <= wdata[7:0];
				11'h462:
					rf_filter_coeff49_a <= wdata[7:0];
				11'h463:
					rf_filter_coeff49_b <= wdata[7:0];
				11'h464:
					rf_filter_coeff50_a <= wdata[7:0];
				11'h465:
					rf_filter_coeff50_b <= wdata[7:0];
				11'h466:
					rf_filter_coeff51_a <= wdata[7:0];
				11'h467:
					rf_filter_coeff51_b <= wdata[7:0];
				11'h468:
					rf_filter_coeff52_a <= wdata[7:0];
				11'h469:
					rf_filter_coeff52_b <= wdata[7:0];
				11'h46a:
					rf_filter_coeff53_a <= wdata[7:0];
				11'h46b:
					rf_filter_coeff53_b <= wdata[7:0];
				11'h46c:
					rf_filter_coeff54_a <= wdata[7:0];
				11'h46d:
					rf_filter_coeff54_b <= wdata[7:0];
				11'h46e:
					rf_filter_coeff55_a <= wdata[7:0];
				11'h46f:
					rf_filter_coeff55_b <= wdata[7:0];
				11'h470:
					rf_filter_coeff56_a <= wdata[7:0];
				11'h471:
					rf_filter_coeff56_b <= wdata[7:0];
				11'h472:
					rf_filter_coeff57_a <= wdata[7:0];
				11'h473:
					rf_filter_coeff57_b <= wdata[7:0];
				11'h474:
					rf_filter_coeff58_a <= wdata[7:0];
				11'h475:
					rf_filter_coeff58_b <= wdata[7:0];
				11'h476:
					rf_filter_coeff59_a <= wdata[7:0];
				11'h477:
					rf_filter_coeff59_b <= wdata[7:0];
				11'h478:
					rf_filter_coeff60_a <= wdata[7:0];
				11'h479:
					rf_filter_coeff60_b <= wdata[7:0];
				11'h47a:
					rf_filter_coeff61_a <= wdata[7:0];
				11'h47b:
					rf_filter_coeff61_b <= wdata[7:0];
				11'h47c:
					rf_filter_coeff62_a <= wdata[7:0];
				11'h47d:
					rf_filter_coeff62_b <= wdata[7:0];
				11'h47e:
					rf_filter_coeff63_a <= wdata[7:0];
				11'h47f:
					rf_filter_coeff63_b <= wdata[7:0];
				11'h480:
					rf_filter_coeff64_a <= wdata[7:0];
				11'h481:
					rf_filter_coeff64_b <= wdata[7:0];
				11'h482:
					rf_filter_coeff65_a <= wdata[7:0];
				11'h483:
					rf_filter_coeff65_b <= wdata[7:0];
				11'h484:
					rf_filter_coeff66_a <= wdata[7:0];
				11'h485:
					rf_filter_coeff66_b <= wdata[7:0];
				11'h486:
					rf_filter_coeff67_a <= wdata[7:0];
				11'h487:
					rf_filter_coeff67_b <= wdata[7:0];
				11'h488:
					rf_filter_coeff68_a <= wdata[7:0];
				11'h489:
					rf_filter_coeff68_b <= wdata[7:0];
				11'h48a:
					rf_filter_coeff69_a <= wdata[7:0];
				11'h48b:
					rf_filter_coeff69_b <= wdata[7:0];
				11'h48c:
					rf_filter_coeff70_a <= wdata[7:0];
				11'h48d:
					rf_filter_coeff70_b <= wdata[7:0];
				11'h48e:
					rf_filter_coeff71_a <= wdata[7:0];
				11'h48f:
					rf_filter_coeff71_b <= wdata[7:0];
				11'h490:
					rf_filter_coeff72_a <= wdata[7:0];
				11'h491:
					rf_filter_coeff72_b <= wdata[7:0];
				11'h492:
					rf_filter_coeff73_a <= wdata[7:0];
				11'h493:
					rf_filter_coeff73_b <= wdata[7:0];
				11'h494:
					rf_filter_coeff74_a <= wdata[7:0];
				11'h495:
					rf_filter_coeff74_b <= wdata[7:0];
				11'h496:
					rf_filter_coeff75_a <= wdata[7:0];
				11'h497:
					rf_filter_coeff75_b <= wdata[7:0];
				11'h498:
					rf_filter_coeff76_a <= wdata[7:0];
				11'h499:
					rf_filter_coeff76_b <= wdata[7:0];
				11'h49a:
					rf_filter_coeff77_a <= wdata[7:0];
				11'h49b:
					rf_filter_coeff77_b <= wdata[7:0];
				11'h49c:
					rf_filter_coeff78_a <= wdata[7:0];
				11'h49d:
					rf_filter_coeff78_b <= wdata[7:0];
				11'h49e:
					rf_filter_coeff79_a <= wdata[7:0];
				11'h49f:
					rf_filter_coeff79_b <= wdata[7:0];
				11'h4a0:
					rf_filter_coeff80_a <= wdata[7:0];
				11'h4a1:
					rf_filter_coeff80_b <= wdata[7:0];
				11'h4a2:
					rf_filter_coeff81_a <= wdata[7:0];
				11'h4a3:
					rf_filter_coeff81_b <= wdata[7:0];
				11'h4a4:
					rf_filter_coeff82_a <= wdata[7:0];
				11'h4a5:
					rf_filter_coeff82_b <= wdata[7:0];
				11'h4a6:
					rf_filter_coeff83_a <= wdata[7:0];
				11'h4a7:
					rf_filter_coeff83_b <= wdata[7:0];
				11'h4a8:
					rf_filter_coeff84_a <= wdata[7:0];
				11'h4a9:
					rf_filter_coeff84_b <= wdata[7:0];
				11'h4aa:
					rf_filter_coeff85_a <= wdata[7:0];
				11'h4ab:
					rf_filter_coeff85_b <= wdata[7:0];
				11'h4ac:
					rf_filter_coeff86_a <= wdata[7:0];
				11'h4ad:
					rf_filter_coeff86_b <= wdata[7:0];
				11'h4ae:
					rf_filter_coeff87_a <= wdata[7:0];
				11'h4af:
					rf_filter_coeff87_b <= wdata[7:0];
				11'h4b0:
					rf_filter_coeff88_a <= wdata[7:0];
				11'h4b1:
					rf_filter_coeff88_b <= wdata[7:0];
				11'h4b2:
					rf_filter_coeff89_a <= wdata[7:0];
				11'h4b3:
					rf_filter_coeff89_b <= wdata[7:0];
				11'h4b4:
					rf_filter_coeff90_a <= wdata[7:0];
				11'h4b5:
					rf_filter_coeff90_b <= wdata[7:0];
				11'h4b6:
					rf_filter_coeff91_a <= wdata[7:0];
				11'h4b7:
					rf_filter_coeff91_b <= wdata[7:0];
				11'h4b8:
					rf_filter_coeff92_a <= wdata[7:0];
				11'h4b9:
					rf_filter_coeff92_b <= wdata[7:0];
				11'h4ba:
					rf_filter_coeff93_a <= wdata[7:0];
				11'h4bb:
					rf_filter_coeff93_b <= wdata[7:0];
				11'h4bc:
					rf_filter_coeff94_a <= wdata[7:0];
				11'h4bd:
					rf_filter_coeff94_b <= wdata[7:0];
				11'h4be:
					rf_filter_coeff95_a <= wdata[7:0];
				11'h4bf:
					rf_filter_coeff95_b <= wdata[7:0];
				11'h4c0:
					rf_filter_coeff96_a <= wdata[7:0];
				11'h4c1:
					rf_filter_coeff96_b <= wdata[7:0];
				11'h4c2:
					rf_filter_coeff97_a <= wdata[7:0];
				11'h4c3:
					rf_filter_coeff97_b <= wdata[7:0];
				11'h4c4:
					rf_filter_coeff98_a <= wdata[7:0];
				11'h4c5:
					rf_filter_coeff98_b <= wdata[7:0];
				11'h4c6:
					rf_filter_coeff99_a <= wdata[7:0];
				11'h4c7:
					rf_filter_coeff99_b <= wdata[7:0];
				11'h4c8:
					rf_filter_coeff100_a <= wdata[7:0];
				11'h4c9:
					rf_filter_coeff100_b <= wdata[7:0];
				11'h4ca:
					rf_filter_coeff101_a <= wdata[7:0];
				11'h4cb:
					rf_filter_coeff101_b <= wdata[7:0];
				11'h4cc:
					rf_filter_coeff102_a <= wdata[7:0];
				11'h4cd:
					rf_filter_coeff102_b <= wdata[7:0];
				11'h4ce:
					rf_filter_coeff103_a <= wdata[7:0];
				11'h4cf:
					rf_filter_coeff103_b <= wdata[7:0];
				11'h4d0:
					rf_filter_coeff104_a <= wdata[7:0];
				11'h4d1:
					rf_filter_coeff104_b <= wdata[7:0];
				11'h4d2:
					rf_filter_coeff105_a <= wdata[7:0];
				11'h4d3:
					rf_filter_coeff105_b <= wdata[7:0];
				11'h4d4:
					rf_filter_coeff106_a <= wdata[7:0];
				11'h4d5:
					rf_filter_coeff106_b <= wdata[7:0];
				11'h4d6:
					rf_filter_coeff107_a <= wdata[7:0];
				11'h4d7:
					rf_filter_coeff107_b <= wdata[7:0];
				11'h4d8:
					rf_filter_coeff108_a <= wdata[7:0];
				11'h4d9:
					rf_filter_coeff108_b <= wdata[7:0];
				11'h4da:
					rf_filter_coeff109_a <= wdata[7:0];
				11'h4db:
					rf_filter_coeff109_b <= wdata[7:0];
				11'h4dc:
					rf_filter_coeff110_a <= wdata[7:0];
				11'h4dd:
					rf_filter_coeff110_b <= wdata[7:0];
				11'h4de:
					rf_filter_coeff111_a <= wdata[7:0];
				11'h4df:
					rf_filter_coeff111_b <= wdata[7:0];
				11'h4e0:
					rf_filter_coeff112_a <= wdata[7:0];
				11'h4e1:
					rf_filter_coeff112_b <= wdata[7:0];
				11'h4e2:
					rf_filter_coeff113_a <= wdata[7:0];
				11'h4e3:
					rf_filter_coeff113_b <= wdata[7:0];
				11'h4e4:
					rf_filter_coeff114_a <= wdata[7:0];
				11'h4e5:
					rf_filter_coeff114_b <= wdata[7:0];
				11'h4e6:
					rf_filter_coeff115_a <= wdata[7:0];
				11'h4e7:
					rf_filter_coeff115_b <= wdata[7:0];
				11'h4e8:
					rf_filter_coeff116_a <= wdata[7:0];
				11'h4e9:
					rf_filter_coeff116_b <= wdata[7:0];
				11'h4ea:
					rf_filter_coeff117_a <= wdata[7:0];
				11'h4eb:
					rf_filter_coeff117_b <= wdata[7:0];
				11'h4ec:
					rf_filter_coeff118_a <= wdata[7:0];
				11'h4ed:
					rf_filter_coeff118_b <= wdata[7:0];
				11'h4ee:
					rf_filter_coeff119_a <= wdata[7:0];
				11'h4ef:
					rf_filter_coeff119_b <= wdata[7:0];
				11'h4f0:
					rf_filter_coeff120_a <= wdata[7:0];
				11'h4f1:
					rf_filter_coeff120_b <= wdata[7:0];
				11'h4f2:
					rf_filter_coeff121_a <= wdata[7:0];
				11'h4f3:
					rf_filter_coeff121_b <= wdata[7:0];
				11'h4f4:
					rf_filter_coeff122_a <= wdata[7:0];
				11'h4f5:
					rf_filter_coeff122_b <= wdata[7:0];
				11'h4f6:
					rf_filter_coeff123_a <= wdata[7:0];
				11'h4f7:
					rf_filter_coeff123_b <= wdata[7:0];
				11'h4f8:
					rf_filter_coeff124_a <= wdata[7:0];
				11'h4f9:
					rf_filter_coeff124_b <= wdata[7:0];
				11'h4fa:
					rf_filter_coeff125_a <= wdata[7:0];
				11'h4fb:
					rf_filter_coeff125_b <= wdata[7:0];
				11'h4fc:
					rf_filter_coeff126_a <= wdata[7:0];
				11'h4fd:
					rf_filter_coeff126_b <= wdata[7:0];
				11'h4fe:
					rf_filter_coeff127_a <= wdata[7:0];
				11'h4ff:
					rf_filter_coeff127_b <= wdata[7:0];
				11'h500:
					rf_filter_coeff128_a <= wdata[7:0];
				11'h501:
					rf_filter_coeff128_b <= wdata[7:0];
				11'h502:
					rf_filter_coeff129_a <= wdata[7:0];
				11'h503:
					rf_filter_coeff129_b <= wdata[7:0];
				11'h504:
					rf_filter_coeff130_a <= wdata[7:0];
				11'h505:
					rf_filter_coeff130_b <= wdata[7:0];
				11'h506:
					rf_filter_coeff131_a <= wdata[7:0];
				11'h507:
					rf_filter_coeff131_b <= wdata[7:0];
				11'h508:
					rf_filter_coeff132_a <= wdata[7:0];
				11'h509:
					rf_filter_coeff132_b <= wdata[7:0];
				11'h50a:
					rf_filter_coeff133_a <= wdata[7:0];
				11'h50b:
					rf_filter_coeff133_b <= wdata[7:0];
				11'h50c:
					rf_filter_coeff134_a <= wdata[7:0];
				11'h50d:
					rf_filter_coeff134_b <= wdata[7:0];
				11'h50e:
					rf_filter_coeff135_a <= wdata[7:0];
				11'h50f:
					rf_filter_coeff135_b <= wdata[7:0];
				11'h510:
					rf_filter_coeff136_a <= wdata[7:0];
				11'h511:
					rf_filter_coeff136_b <= wdata[7:0];
				11'h512:
					rf_filter_coeff137_a <= wdata[7:0];
				11'h513:
					rf_filter_coeff137_b <= wdata[7:0];
				11'h514:
					rf_filter_coeff138_a <= wdata[7:0];
				11'h515:
					rf_filter_coeff138_b <= wdata[7:0];
				11'h516:
					rf_filter_coeff139_a <= wdata[7:0];
				11'h517:
					rf_filter_coeff139_b <= wdata[7:0];
				11'h518:
					rf_filter_coeff140_a <= wdata[7:0];
				11'h519:
					rf_filter_coeff140_b <= wdata[7:0];
				11'h51a:
					rf_filter_coeff141_a <= wdata[7:0];
				11'h51b:
					rf_filter_coeff141_b <= wdata[7:0];
				11'h51c:
					rf_filter_coeff142_a <= wdata[7:0];
				11'h51d:
					rf_filter_coeff142_b <= wdata[7:0];
				11'h51e:
					rf_filter_coeff143_a <= wdata[7:0];
				11'h51f:
					rf_filter_coeff143_b <= wdata[7:0];
				11'h520:
					rf_filter_coeff144_a <= wdata[7:0];
				11'h521:
					rf_filter_coeff144_b <= wdata[7:0];
				11'h522:
					rf_filter_coeff145_a <= wdata[7:0];
				11'h523:
					rf_filter_coeff145_b <= wdata[7:0];
				11'h524:
					rf_filter_coeff146_a <= wdata[7:0];
				11'h525:
					rf_filter_coeff146_b <= wdata[7:0];
				11'h526:
					rf_filter_coeff147_a <= wdata[7:0];
				11'h527:
					rf_filter_coeff147_b <= wdata[7:0];
				11'h528:
					rf_filter_coeff148_a <= wdata[7:0];
				11'h529:
					rf_filter_coeff148_b <= wdata[7:0];
				11'h52a:
					rf_filter_coeff149_a <= wdata[7:0];
				11'h52b:
					rf_filter_coeff149_b <= wdata[7:0];
				11'h52c:
					rf_filter_coeff150_a <= wdata[7:0];
				11'h52d:
					rf_filter_coeff150_b <= wdata[7:0];
				11'h52e:
					rf_filter_coeff151_a <= wdata[7:0];
				11'h52f:
					rf_filter_coeff151_b <= wdata[7:0];
				11'h530:
					rf_filter_coeff152_a <= wdata[7:0];
				11'h531:
					rf_filter_coeff152_b <= wdata[7:0];
				11'h532:
					rf_filter_coeff153_a <= wdata[7:0];
				11'h533:
					rf_filter_coeff153_b <= wdata[7:0];
				11'h534:
					rf_filter_coeff154_a <= wdata[7:0];
				11'h535:
					rf_filter_coeff154_b <= wdata[7:0];
				11'h536:
					rf_filter_coeff155_a <= wdata[7:0];
				11'h537:
					rf_filter_coeff155_b <= wdata[7:0];
				11'h538:
					rf_filter_coeff156_a <= wdata[7:0];
				11'h539:
					rf_filter_coeff156_b <= wdata[7:0];
				11'h53a:
					rf_filter_coeff157_a <= wdata[7:0];
				11'h53b:
					rf_filter_coeff157_b <= wdata[7:0];
				11'h53c:
					rf_filter_coeff158_a <= wdata[7:0];
				11'h53d:
					rf_filter_coeff158_b <= wdata[7:0];
				11'h53e:
					rf_filter_coeff159_a <= wdata[7:0];
				11'h53f:
					rf_filter_coeff159_b <= wdata[7:0];
				11'h540:
					rf_filter_coeff160_a <= wdata[7:0];
				11'h541:
					rf_filter_coeff160_b <= wdata[7:0];
				11'h542:
					rf_filter_coeff161_a <= wdata[7:0];
				11'h543:
					rf_filter_coeff161_b <= wdata[7:0];
				11'h544:
					rf_filter_coeff162_a <= wdata[7:0];
				11'h545:
					rf_filter_coeff162_b <= wdata[7:0];
				11'h546:
					rf_filter_coeff163_a <= wdata[7:0];
				11'h547:
					rf_filter_coeff163_b <= wdata[7:0];
				11'h548:
					rf_filter_coeff164_a <= wdata[7:0];
				11'h549:
					rf_filter_coeff164_b <= wdata[7:0];
				11'h54a:
					rf_filter_coeff165_a <= wdata[7:0];
				11'h54b:
					rf_filter_coeff165_b <= wdata[7:0];
				11'h54c:
					rf_filter_coeff166_a <= wdata[7:0];
				11'h54d:
					rf_filter_coeff166_b <= wdata[7:0];
				11'h54e:
					rf_filter_coeff167_a <= wdata[7:0];
				11'h54f:
					rf_filter_coeff167_b <= wdata[7:0];
				11'h550:
					rf_filter_coeff168_a <= wdata[7:0];
				11'h551:
					rf_filter_coeff168_b <= wdata[7:0];
				11'h552:
					rf_filter_coeff169_a <= wdata[7:0];
				11'h553:
					rf_filter_coeff169_b <= wdata[7:0];
				11'h554:
					rf_filter_coeff170_a <= wdata[7:0];
				11'h555:
					rf_filter_coeff170_b <= wdata[7:0];
				11'h556:
					rf_filter_coeff171_a <= wdata[7:0];
				11'h557:
					rf_filter_coeff171_b <= wdata[7:0];
				11'h558:
					rf_filter_coeff172_a <= wdata[7:0];
				11'h559:
					rf_filter_coeff172_b <= wdata[7:0];
				11'h55a:
					rf_filter_coeff173_a <= wdata[7:0];
				11'h55b:
					rf_filter_coeff173_b <= wdata[7:0];
				11'h55c:
					rf_filter_coeff174_a <= wdata[7:0];
				11'h55d:
					rf_filter_coeff174_b <= wdata[7:0];
				11'h55e:
					rf_filter_coeff175_a <= wdata[7:0];
				11'h55f:
					rf_filter_coeff175_b <= wdata[7:0];
				11'h560:
					rf_filter_coeff176_a <= wdata[7:0];
				11'h561:
					rf_filter_coeff176_b <= wdata[7:0];
				11'h562:
					rf_filter_coeff177_a <= wdata[7:0];
				11'h563:
					rf_filter_coeff177_b <= wdata[7:0];
				11'h564:
					rf_filter_coeff178_a <= wdata[7:0];
				11'h565:
					rf_filter_coeff178_b <= wdata[7:0];
				11'h566:
					rf_filter_coeff179_a <= wdata[7:0];
				11'h567:
					rf_filter_coeff179_b <= wdata[7:0];
				11'h568:
					rf_filter_coeff180_a <= wdata[7:0];
				11'h569:
					rf_filter_coeff180_b <= wdata[7:0];
				11'h56a:
					rf_filter_coeff181_a <= wdata[7:0];
				11'h56b:
					rf_filter_coeff181_b <= wdata[7:0];
				11'h56c:
					rf_filter_coeff182_a <= wdata[7:0];
				11'h56d:
					rf_filter_coeff182_b <= wdata[7:0];
				11'h56e:
					rf_filter_coeff183_a <= wdata[7:0];
				11'h56f:
					rf_filter_coeff183_b <= wdata[7:0];
				11'h570:
					rf_filter_coeff184_a <= wdata[7:0];
				11'h571:
					rf_filter_coeff184_b <= wdata[7:0];
				11'h572:
					rf_filter_coeff185_a <= wdata[7:0];
				11'h573:
					rf_filter_coeff185_b <= wdata[7:0];
				11'h574:
					rf_filter_coeff186_a <= wdata[7:0];
				11'h575:
					rf_filter_coeff186_b <= wdata[7:0];
				11'h576:
					rf_filter_coeff187_a <= wdata[7:0];
				11'h577:
					rf_filter_coeff187_b <= wdata[7:0];
				11'h578:
					rf_filter_coeff188_a <= wdata[7:0];
				11'h579:
					rf_filter_coeff188_b <= wdata[7:0];
				11'h57a:
					rf_filter_coeff189_a <= wdata[7:0];
				11'h57b:
					rf_filter_coeff189_b <= wdata[7:0];
				11'h57c:
					rf_filter_coeff190_a <= wdata[7:0];
				11'h57d:
					rf_filter_coeff190_b <= wdata[7:0];
				11'h57e:
					rf_filter_coeff191_a <= wdata[7:0];
				11'h57f:
					rf_filter_coeff191_b <= wdata[7:0];
				11'h580:
					rf_filter_coeff192_a <= wdata[7:0];
				11'h581:
					rf_filter_coeff192_b <= wdata[7:0];
				11'h582:
					rf_filter_coeff193_a <= wdata[7:0];
				11'h583:
					rf_filter_coeff193_b <= wdata[7:0];
				11'h584:
					rf_filter_coeff194_a <= wdata[7:0];
				11'h585:
					rf_filter_coeff194_b <= wdata[7:0];
				11'h586:
					rf_filter_coeff195_a <= wdata[7:0];
				11'h587:
					rf_filter_coeff195_b <= wdata[7:0];
				11'h588:
					rf_filter_coeff196_a <= wdata[7:0];
				11'h589:
					rf_filter_coeff196_b <= wdata[7:0];
				11'h58a:
					rf_filter_coeff197_a <= wdata[7:0];
				11'h58b:
					rf_filter_coeff197_b <= wdata[7:0];
				11'h58c:
					rf_filter_coeff198_a <= wdata[7:0];
				11'h58d:
					rf_filter_coeff198_b <= wdata[7:0];
				11'h58e:
					rf_filter_coeff199_a <= wdata[7:0];
				11'h58f:
					rf_filter_coeff199_b <= wdata[7:0];
				11'h590:
					rf_filter_coeff200_a <= wdata[7:0];
				11'h591:
					rf_filter_coeff200_b <= wdata[7:0];
				11'h592:
					rf_filter_coeff201_a <= wdata[7:0];
				11'h593:
					rf_filter_coeff201_b <= wdata[7:0];
				11'h594:
					rf_filter_coeff202_a <= wdata[7:0];
				11'h595:
					rf_filter_coeff202_b <= wdata[7:0];
				11'h596:
					rf_filter_coeff203_a <= wdata[7:0];
				11'h597:
					rf_filter_coeff203_b <= wdata[7:0];
				11'h598:
					rf_filter_coeff204_a <= wdata[7:0];
				11'h599:
					rf_filter_coeff204_b <= wdata[7:0];
				11'h59a:
					rf_filter_coeff205_a <= wdata[7:0];
				11'h59b:
					rf_filter_coeff205_b <= wdata[7:0];
				11'h59c:
					rf_filter_coeff206_a <= wdata[7:0];
				11'h59d:
					rf_filter_coeff206_b <= wdata[7:0];
				11'h59e:
					rf_filter_coeff207_a <= wdata[7:0];
				11'h59f:
					rf_filter_coeff207_b <= wdata[7:0];
				11'h5a0:
					rf_filter_coeff208_a <= wdata[7:0];
				11'h5a1:
					rf_filter_coeff208_b <= wdata[7:0];
				11'h5a2:
					rf_filter_coeff209_a <= wdata[7:0];
				11'h5a3:
					rf_filter_coeff209_b <= wdata[7:0];
				11'h5a4:
					rf_filter_coeff210_a <= wdata[7:0];
				11'h5a5:
					rf_filter_coeff210_b <= wdata[7:0];
				11'h5a6:
					rf_filter_coeff211_a <= wdata[7:0];
				11'h5a7:
					rf_filter_coeff211_b <= wdata[7:0];
				11'h5a8:
					rf_filter_coeff212_a <= wdata[7:0];
				11'h5a9:
					rf_filter_coeff212_b <= wdata[7:0];
				11'h5aa:
					rf_filter_coeff213_a <= wdata[7:0];
				11'h5ab:
					rf_filter_coeff213_b <= wdata[7:0];
				11'h5ac:
					rf_filter_coeff214_a <= wdata[7:0];
				11'h5ad:
					rf_filter_coeff214_b <= wdata[7:0];
				11'h5ae:
					rf_filter_coeff215_a <= wdata[7:0];
				11'h5af:
					rf_filter_coeff215_b <= wdata[7:0];
				11'h5b0:
					rf_filter_coeff216_a <= wdata[7:0];
				11'h5b1:
					rf_filter_coeff216_b <= wdata[7:0];
				11'h5b2:
					rf_filter_coeff217_a <= wdata[7:0];
				11'h5b3:
					rf_filter_coeff217_b <= wdata[7:0];
				11'h5b4:
					rf_filter_coeff218_a <= wdata[7:0];
				11'h5b5:
					rf_filter_coeff218_b <= wdata[7:0];
				11'h5b6:
					rf_filter_coeff219_a <= wdata[7:0];
				11'h5b7:
					rf_filter_coeff219_b <= wdata[7:0];
				11'h5b8:
					rf_filter_coeff220_a <= wdata[7:0];
				11'h5b9:
					rf_filter_coeff220_b <= wdata[7:0];
				11'h5ba:
					rf_filter_coeff221_a <= wdata[7:0];
				11'h5bb:
					rf_filter_coeff221_b <= wdata[7:0];
				11'h5bc:
					rf_filter_coeff222_a <= wdata[7:0];
				11'h5bd:
					rf_filter_coeff222_b <= wdata[7:0];
				11'h5be:
					rf_filter_coeff223_a <= wdata[7:0];
				11'h5bf:
					rf_filter_coeff223_b <= wdata[7:0];
				11'h5c0:
					rf_filter_coeff224_a <= wdata[7:0];
				11'h5c1:
					rf_filter_coeff224_b <= wdata[7:0];
				11'h5c2:
					rf_filter_coeff225_a <= wdata[7:0];
				11'h5c3:
					rf_filter_coeff225_b <= wdata[7:0];
				11'h5c4:
					rf_filter_coeff226_a <= wdata[7:0];
				11'h5c5:
					rf_filter_coeff226_b <= wdata[7:0];
				11'h5c6:
					rf_filter_coeff227_a <= wdata[7:0];
				11'h5c7:
					rf_filter_coeff227_b <= wdata[7:0];
				11'h5c8:
					rf_filter_coeff228_a <= wdata[7:0];
				11'h5c9:
					rf_filter_coeff228_b <= wdata[7:0];
				11'h5ca:
					rf_filter_coeff229_a <= wdata[7:0];
				11'h5cb:
					rf_filter_coeff229_b <= wdata[7:0];
				11'h5cc:
					rf_filter_coeff230_a <= wdata[7:0];
				11'h5cd:
					rf_filter_coeff230_b <= wdata[7:0];
				11'h5ce:
					rf_filter_coeff231_a <= wdata[7:0];
				11'h5cf:
					rf_filter_coeff231_b <= wdata[7:0];
				11'h5d0:
					rf_filter_coeff232_a <= wdata[7:0];
				11'h5d1:
					rf_filter_coeff232_b <= wdata[7:0];
				11'h5d2:
					rf_filter_coeff233_a <= wdata[7:0];
				11'h5d3:
					rf_filter_coeff233_b <= wdata[7:0];
				11'h5d4:
					rf_filter_coeff234_a <= wdata[7:0];
				11'h5d5:
					rf_filter_coeff234_b <= wdata[7:0];
				11'h5d6:
					rf_filter_coeff235_a <= wdata[7:0];
				11'h5d7:
					rf_filter_coeff235_b <= wdata[7:0];
				11'h5d8:
					rf_filter_coeff236_a <= wdata[7:0];
				11'h5d9:
					rf_filter_coeff236_b <= wdata[7:0];
				11'h5da:
					rf_filter_coeff237_a <= wdata[7:0];
				11'h5db:
					rf_filter_coeff237_b <= wdata[7:0];
				11'h5dc:
					rf_filter_coeff238_a <= wdata[7:0];
				11'h5dd:
					rf_filter_coeff238_b <= wdata[7:0];
				11'h5de:
					rf_filter_coeff239_a <= wdata[7:0];
				11'h5df:
					rf_filter_coeff239_b <= wdata[7:0];
				11'h5e0:
					rf_filter_coeff240_a <= wdata[7:0];
				11'h5e1:
					rf_filter_coeff240_b <= wdata[7:0];
				11'h5e2:
					rf_filter_coeff241_a <= wdata[7:0];
				11'h5e3:
					rf_filter_coeff241_b <= wdata[7:0];
				11'h5e4:
					rf_filter_coeff242_a <= wdata[7:0];
				11'h5e5:
					rf_filter_coeff242_b <= wdata[7:0];
				11'h5e6:
					rf_filter_coeff243_a <= wdata[7:0];
				11'h5e7:
					rf_filter_coeff243_b <= wdata[7:0];
				11'h5e8:
					rf_filter_coeff244_a <= wdata[7:0];
				11'h5e9:
					rf_filter_coeff244_b <= wdata[7:0];
				11'h5ea:
					rf_filter_coeff245_a <= wdata[7:0];
				11'h5eb:
					rf_filter_coeff245_b <= wdata[7:0];
				11'h5ec:
					rf_filter_coeff246_a <= wdata[7:0];
				11'h5ed:
					rf_filter_coeff246_b <= wdata[7:0];
				11'h5ee:
					rf_filter_coeff247_a <= wdata[7:0];
				11'h5ef:
					rf_filter_coeff247_b <= wdata[7:0];
				11'h5f0:
					rf_filter_coeff248_a <= wdata[7:0];
				11'h5f1:
					rf_filter_coeff248_b <= wdata[7:0];
				11'h5f2:
					rf_filter_coeff249_a <= wdata[7:0];
				11'h5f3:
					rf_filter_coeff249_b <= wdata[7:0];
				11'h5f4:
					rf_filter_coeff250_a <= wdata[7:0];
				11'h5f5:
					rf_filter_coeff250_b <= wdata[7:0];
				11'h5f6:
					rf_filter_coeff251_a <= wdata[7:0];
				11'h5f7:
					rf_filter_coeff251_b <= wdata[7:0];
				11'h5f8:
					rf_filter_coeff252_a <= wdata[7:0];
				11'h5f9:
					rf_filter_coeff252_b <= wdata[7:0];
				11'h5fa:
					rf_filter_coeff253_a <= wdata[7:0];
				11'h5fb:
					rf_filter_coeff253_b <= wdata[7:0];
				11'h5fc:
					rf_filter_coeff254_a <= wdata[7:0];
				11'h5fd:
					rf_filter_coeff254_b <= wdata[7:0];
				11'h5fe:
					rf_filter_coeff255_a <= wdata[7:0];
				11'h5ff:
					rf_filter_coeff255_b <= wdata[7:0];
				11'h600:
					rf_filter_coeff256_a <= wdata[7:0];
				11'h601:
					rf_filter_coeff256_b <= wdata[7:0];
				11'h602:
					rf_filter_coeff257_a <= wdata[7:0];
				11'h603:
					rf_filter_coeff257_b <= wdata[7:0];
				11'h604:
					rf_filter_coeff258_a <= wdata[7:0];
				11'h605:
					rf_filter_coeff258_b <= wdata[7:0];
				11'h606:
					rf_filter_coeff259_a <= wdata[7:0];
				11'h607:
					rf_filter_coeff259_b <= wdata[7:0];
				11'h608:
					rf_filter_coeff260_a <= wdata[7:0];
				11'h609:
					rf_filter_coeff260_b <= wdata[7:0];
				11'h60a:
					rf_filter_coeff261_a <= wdata[7:0];
				11'h60b:
					rf_filter_coeff261_b <= wdata[7:0];
				11'h60c:
					rf_filter_coeff262_a <= wdata[7:0];
				11'h60d:
					rf_filter_coeff262_b <= wdata[7:0];
				11'h60e:
					rf_filter_coeff263_a <= wdata[7:0];
				11'h60f:
					rf_filter_coeff263_b <= wdata[7:0];
				11'h610:
					rf_filter_coeff264_a <= wdata[7:0];
				11'h611:
					rf_filter_coeff264_b <= wdata[7:0];
				11'h612:
					rf_filter_coeff265_a <= wdata[7:0];
				11'h613:
					rf_filter_coeff265_b <= wdata[7:0];
				11'h614:
					rf_filter_coeff266_a <= wdata[7:0];
				11'h615:
					rf_filter_coeff266_b <= wdata[7:0];
				11'h616:
					rf_filter_coeff267_a <= wdata[7:0];
				11'h617:
					rf_filter_coeff267_b <= wdata[7:0];
				11'h618:
					rf_filter_coeff268_a <= wdata[7:0];
				11'h619:
					rf_filter_coeff268_b <= wdata[7:0];
				11'h61a:
					rf_filter_coeff269_a <= wdata[7:0];
				11'h61b:
					rf_filter_coeff269_b <= wdata[7:0];
				11'h61c:
					rf_filter_coeff270_a <= wdata[7:0];
				11'h61d:
					rf_filter_coeff270_b <= wdata[7:0];
				11'h61e:
					rf_filter_coeff271_a <= wdata[7:0];
				11'h61f:
					rf_filter_coeff271_b <= wdata[7:0];
				11'h620:
					rf_filter_coeff272_a <= wdata[7:0];
				11'h621:
					rf_filter_coeff272_b <= wdata[7:0];
				11'h622:
					rf_filter_coeff273_a <= wdata[7:0];
				11'h623:
					rf_filter_coeff273_b <= wdata[7:0];
				11'h624:
					rf_filter_coeff274_a <= wdata[7:0];
				11'h625:
					rf_filter_coeff274_b <= wdata[7:0];
				11'h626:
					rf_filter_coeff275_a <= wdata[7:0];
				11'h627:
					rf_filter_coeff275_b <= wdata[7:0];
				11'h628:
					rf_filter_coeff276_a <= wdata[7:0];
				11'h629:
					rf_filter_coeff276_b <= wdata[7:0];
				11'h62a:
					rf_filter_coeff277_a <= wdata[7:0];
				11'h62b:
					rf_filter_coeff277_b <= wdata[7:0];
				11'h62c:
					rf_filter_coeff278_a <= wdata[7:0];
				11'h62d:
					rf_filter_coeff278_b <= wdata[7:0];
				11'h62e:
					rf_filter_coeff279_a <= wdata[7:0];
				11'h62f:
					rf_filter_coeff279_b <= wdata[7:0];
				11'h630:
					rf_filter_coeff280_a <= wdata[7:0];
				11'h631:
					rf_filter_coeff280_b <= wdata[7:0];
				11'h632:
					rf_filter_coeff281_a <= wdata[7:0];
				11'h633:
					rf_filter_coeff281_b <= wdata[7:0];
				11'h634:
					rf_filter_coeff282_a <= wdata[7:0];
				11'h635:
					rf_filter_coeff282_b <= wdata[7:0];
				11'h636:
					rf_filter_coeff283_a <= wdata[7:0];
				11'h637:
					rf_filter_coeff283_b <= wdata[7:0];
				11'h638:
					rf_filter_coeff284_a <= wdata[7:0];
				11'h639:
					rf_filter_coeff284_b <= wdata[7:0];
				11'h63a:
					rf_filter_coeff285_a <= wdata[7:0];
				11'h63b:
					rf_filter_coeff285_b <= wdata[7:0];
				11'h63c:
					rf_filter_coeff286_a <= wdata[7:0];
				11'h63d:
					rf_filter_coeff286_b <= wdata[7:0];
				11'h63e:
					rf_filter_coeff287_a <= wdata[7:0];
				11'h63f:
					rf_filter_coeff287_b <= wdata[7:0];
				11'h640:
					rf_filter_coeff288_a <= wdata[7:0];
				11'h641:
					rf_filter_coeff288_b <= wdata[7:0];
				11'h642:
					rf_filter_coeff289_a <= wdata[7:0];
				11'h643:
					rf_filter_coeff289_b <= wdata[7:0];
				11'h644:
					rf_filter_coeff290_a <= wdata[7:0];
				11'h645:
					rf_filter_coeff290_b <= wdata[7:0];
				11'h646:
					rf_filter_coeff291_a <= wdata[7:0];
				11'h647:
					rf_filter_coeff291_b <= wdata[7:0];
				11'h648:
					rf_filter_coeff292_a <= wdata[7:0];
				11'h649:
					rf_filter_coeff292_b <= wdata[7:0];
				11'h64a:
					rf_filter_coeff293_a <= wdata[7:0];
				11'h64b:
					rf_filter_coeff293_b <= wdata[7:0];
				11'h64c:
					rf_filter_coeff294_a <= wdata[7:0];
				11'h64d:
					rf_filter_coeff294_b <= wdata[7:0];
				11'h64e:
					rf_filter_coeff295_a <= wdata[7:0];
				11'h64f:
					rf_filter_coeff295_b <= wdata[7:0];
				11'h650:
					rf_filter_coeff296_a <= wdata[7:0];
				11'h651:
					rf_filter_coeff296_b <= wdata[7:0];
				11'h652:
					rf_filter_coeff297_a <= wdata[7:0];
				11'h653:
					rf_filter_coeff297_b <= wdata[7:0];
				11'h654:
					rf_filter_coeff298_a <= wdata[7:0];
				11'h655:
					rf_filter_coeff298_b <= wdata[7:0];
				11'h656:
					rf_filter_coeff299_a <= wdata[7:0];
				11'h657:
					rf_filter_coeff299_b <= wdata[7:0];
				11'h658:
					rf_filter_coeff300_a <= wdata[7:0];
				11'h659:
					rf_filter_coeff300_b <= wdata[7:0];
				11'h65a:
					rf_filter_coeff301_a <= wdata[7:0];
				11'h65b:
					rf_filter_coeff301_b <= wdata[7:0];
				11'h65c:
					rf_filter_coeff302_a <= wdata[7:0];
				11'h65d:
					rf_filter_coeff302_b <= wdata[7:0];
				11'h65e:
					rf_filter_coeff303_a <= wdata[7:0];
				11'h65f:
					rf_filter_coeff303_b <= wdata[7:0];
				11'h660:
					rf_filter_coeff304_a <= wdata[7:0];
				11'h661:
					rf_filter_coeff304_b <= wdata[7:0];
				11'h662:
					rf_filter_coeff305_a <= wdata[7:0];
				11'h663:
					rf_filter_coeff305_b <= wdata[7:0];
				11'h664:
					rf_filter_coeff306_a <= wdata[7:0];
				11'h665:
					rf_filter_coeff306_b <= wdata[7:0];
				11'h666:
					rf_filter_coeff307_a <= wdata[7:0];
				11'h667:
					rf_filter_coeff307_b <= wdata[7:0];
				11'h668:
					rf_filter_coeff308_a <= wdata[7:0];
				11'h669:
					rf_filter_coeff308_b <= wdata[7:0];
				11'h66a:
					rf_filter_coeff309_a <= wdata[7:0];
				11'h66b:
					rf_filter_coeff309_b <= wdata[7:0];
				11'h66c:
					rf_filter_coeff310_a <= wdata[7:0];
				11'h66d:
					rf_filter_coeff310_b <= wdata[7:0];
				11'h66e:
					rf_filter_coeff311_a <= wdata[7:0];
				11'h66f:
					rf_filter_coeff311_b <= wdata[7:0];
				11'h670:
					rf_filter_coeff312_a <= wdata[7:0];
				11'h671:
					rf_filter_coeff312_b <= wdata[7:0];
				11'h672:
					rf_filter_coeff313_a <= wdata[7:0];
				11'h673:
					rf_filter_coeff313_b <= wdata[7:0];
				11'h674:
					rf_filter_coeff314_a <= wdata[7:0];
				11'h675:
					rf_filter_coeff314_b <= wdata[7:0];
				11'h676:
					rf_filter_coeff315_a <= wdata[7:0];
				11'h677:
					rf_filter_coeff315_b <= wdata[7:0];
				11'h678:
					rf_filter_coeff316_a <= wdata[7:0];
				11'h679:
					rf_filter_coeff316_b <= wdata[7:0];
				11'h67a:
					rf_filter_coeff317_a <= wdata[7:0];
				11'h67b:
					rf_filter_coeff317_b <= wdata[7:0];
				11'h67c:
					rf_filter_coeff318_a <= wdata[7:0];
				11'h67d:
					rf_filter_coeff318_b <= wdata[7:0];
				11'h67e:
					rf_filter_coeff319_a <= wdata[7:0];
				11'h67f:
					rf_filter_coeff319_b <= wdata[7:0];
				11'h680:
					rf_filter_coeff320_a <= wdata[7:0];
				11'h681:
					rf_filter_coeff320_b <= wdata[7:0];
				11'h682:
					rf_filter_coeff321_a <= wdata[7:0];
				11'h683:
					rf_filter_coeff321_b <= wdata[7:0];
				11'h684:
					rf_filter_coeff322_a <= wdata[7:0];
				11'h685:
					rf_filter_coeff322_b <= wdata[7:0];
				11'h686:
					rf_filter_coeff323_a <= wdata[7:0];
				11'h687:
					rf_filter_coeff323_b <= wdata[7:0];
				11'h688:
					rf_filter_coeff324_a <= wdata[7:0];
				11'h689:
					rf_filter_coeff324_b <= wdata[7:0];
				11'h68a:
					rf_filter_coeff325_a <= wdata[7:0];
				11'h68b:
					rf_filter_coeff325_b <= wdata[7:0];
				11'h68c:
					rf_filter_coeff326_a <= wdata[7:0];
				11'h68d:
					rf_filter_coeff326_b <= wdata[7:0];
				11'h68e:
					rf_filter_coeff327_a <= wdata[7:0];
				11'h68f:
					rf_filter_coeff327_b <= wdata[7:0];
				11'h690:
					rf_filter_coeff328_a <= wdata[7:0];
				11'h691:
					rf_filter_coeff328_b <= wdata[7:0];
				11'h692:
					rf_filter_coeff329_a <= wdata[7:0];
				11'h693:
					rf_filter_coeff329_b <= wdata[7:0];
				11'h694:
					rf_filter_coeff330_a <= wdata[7:0];
				11'h695:
					rf_filter_coeff330_b <= wdata[7:0];
				11'h696:
					rf_filter_coeff331_a <= wdata[7:0];
				11'h697:
					rf_filter_coeff331_b <= wdata[7:0];
				11'h698:
					rf_filter_coeff332_a <= wdata[7:0];
				11'h699:
					rf_filter_coeff332_b <= wdata[7:0];
				11'h69a:
					rf_filter_coeff333_a <= wdata[7:0];
				11'h69b:
					rf_filter_coeff333_b <= wdata[7:0];
				11'h69c:
					rf_filter_coeff334_a <= wdata[7:0];
				11'h69d:
					rf_filter_coeff334_b <= wdata[7:0];
				11'h69e:
					rf_filter_coeff335_a <= wdata[7:0];
				11'h69f:
					rf_filter_coeff335_b <= wdata[7:0];
				11'h6a0:
					rf_filter_coeff336_a <= wdata[7:0];
				11'h6a1:
					rf_filter_coeff336_b <= wdata[7:0];
				11'h6a2:
					rf_filter_coeff337_a <= wdata[7:0];
				11'h6a3:
					rf_filter_coeff337_b <= wdata[7:0];
				11'h6a4:
					rf_filter_coeff338_a <= wdata[7:0];
				11'h6a5:
					rf_filter_coeff338_b <= wdata[7:0];
				11'h6a6:
					rf_filter_coeff339_a <= wdata[7:0];
				11'h6a7:
					rf_filter_coeff339_b <= wdata[7:0];
				11'h6a8:
					rf_filter_coeff340_a <= wdata[7:0];
				11'h6a9:
					rf_filter_coeff340_b <= wdata[7:0];
				11'h6aa:
					rf_filter_coeff341_a <= wdata[7:0];
				11'h6ab:
					rf_filter_coeff341_b <= wdata[7:0];
				11'h6ac:
					rf_filter_coeff342_a <= wdata[7:0];
				11'h6ad:
					rf_filter_coeff342_b <= wdata[7:0];
				11'h6ae:
					rf_filter_coeff343_a <= wdata[7:0];
				11'h6af:
					rf_filter_coeff343_b <= wdata[7:0];
				11'h6b0:
					rf_filter_coeff344_a <= wdata[7:0];
				11'h6b1:
					rf_filter_coeff344_b <= wdata[7:0];
				11'h6b2:
					rf_filter_coeff345_a <= wdata[7:0];
				11'h6b3:
					rf_filter_coeff345_b <= wdata[7:0];
				11'h6b4:
					rf_filter_coeff346_a <= wdata[7:0];
				11'h6b5:
					rf_filter_coeff346_b <= wdata[7:0];
				11'h6b6:
					rf_filter_coeff347_a <= wdata[7:0];
				11'h6b7:
					rf_filter_coeff347_b <= wdata[7:0];
				11'h6b8:
					rf_filter_coeff348_a <= wdata[7:0];
				11'h6b9:
					rf_filter_coeff348_b <= wdata[7:0];
				11'h6ba:
					rf_filter_coeff349_a <= wdata[7:0];
				11'h6bb:
					rf_filter_coeff349_b <= wdata[7:0];
				11'h6bc:
					rf_filter_coeff350_a <= wdata[7:0];
				11'h6bd:
					rf_filter_coeff350_b <= wdata[7:0];
				11'h6be:
					rf_filter_coeff351_a <= wdata[7:0];
				11'h6bf:
					rf_filter_coeff351_b <= wdata[7:0];
				11'h6c0:
					rf_filter_coeff352_a <= wdata[7:0];
				11'h6c1:
					rf_filter_coeff352_b <= wdata[7:0];
				11'h6c2:
					rf_filter_coeff353_a <= wdata[7:0];
				11'h6c3:
					rf_filter_coeff353_b <= wdata[7:0];
				11'h6c4:
					rf_filter_coeff354_a <= wdata[7:0];
				11'h6c5:
					rf_filter_coeff354_b <= wdata[7:0];
				11'h6c6:
					rf_filter_coeff355_a <= wdata[7:0];
				11'h6c7:
					rf_filter_coeff355_b <= wdata[7:0];
				11'h6c8:
					rf_filter_coeff356_a <= wdata[7:0];
				11'h6c9:
					rf_filter_coeff356_b <= wdata[7:0];
				11'h6ca:
					rf_filter_coeff357_a <= wdata[7:0];
				11'h6cb:
					rf_filter_coeff357_b <= wdata[7:0];
				11'h6cc:
					rf_filter_coeff358_a <= wdata[7:0];
				11'h6cd:
					rf_filter_coeff358_b <= wdata[7:0];
				11'h6ce:
					rf_filter_coeff359_a <= wdata[7:0];
				11'h6cf:
					rf_filter_coeff359_b <= wdata[7:0];
				11'h6d0:
					rf_filter_coeff360_a <= wdata[7:0];
				11'h6d1:
					rf_filter_coeff360_b <= wdata[7:0];
				11'h6d2:
					rf_filter_coeff361_a <= wdata[7:0];
				11'h6d3:
					rf_filter_coeff361_b <= wdata[7:0];
				11'h6d4:
					rf_filter_coeff362_a <= wdata[7:0];
				11'h6d5:
					rf_filter_coeff362_b <= wdata[7:0];
				11'h6d6:
					rf_filter_coeff363_a <= wdata[7:0];
				11'h6d7:
					rf_filter_coeff363_b <= wdata[7:0];
				11'h6d8:
					rf_filter_coeff364_a <= wdata[7:0];
				11'h6d9:
					rf_filter_coeff364_b <= wdata[7:0];
				11'h6da:
					rf_filter_coeff365_a <= wdata[7:0];
				11'h6db:
					rf_filter_coeff365_b <= wdata[7:0];
				11'h6dc:
					rf_filter_coeff366_a <= wdata[7:0];
				11'h6dd:
					rf_filter_coeff366_b <= wdata[7:0];
				11'h6de:
					rf_filter_coeff367_a <= wdata[7:0];
				11'h6df:
					rf_filter_coeff367_b <= wdata[7:0];
				11'h6e0:
					rf_filter_coeff368_a <= wdata[7:0];
				11'h6e1:
					rf_filter_coeff368_b <= wdata[7:0];
				11'h6e2:
					rf_filter_coeff369_a <= wdata[7:0];
				11'h6e3:
					rf_filter_coeff369_b <= wdata[7:0];
				11'h6e4:
					rf_filter_coeff370_a <= wdata[7:0];
				11'h6e5:
					rf_filter_coeff370_b <= wdata[7:0];
				11'h6e6:
					rf_filter_coeff371_a <= wdata[7:0];
				11'h6e7:
					rf_filter_coeff371_b <= wdata[7:0];
				11'h6e8:
					rf_filter_coeff372_a <= wdata[7:0];
				11'h6e9:
					rf_filter_coeff372_b <= wdata[7:0];
				11'h6ea:
					rf_filter_coeff373_a <= wdata[7:0];
				11'h6eb:
					rf_filter_coeff373_b <= wdata[7:0];
				11'h6ec:
					rf_filter_coeff374_a <= wdata[7:0];
				11'h6ed:
					rf_filter_coeff374_b <= wdata[7:0];
				11'h6ee:
					rf_filter_coeff375_a <= wdata[7:0];
				11'h6ef:
					rf_filter_coeff375_b <= wdata[7:0];
				11'h6f0:
					rf_filter_coeff376_a <= wdata[7:0];
				11'h6f1:
					rf_filter_coeff376_b <= wdata[7:0];
				11'h6f2:
					rf_filter_coeff377_a <= wdata[7:0];
				11'h6f3:
					rf_filter_coeff377_b <= wdata[7:0];
				11'h6f4:
					rf_filter_coeff378_a <= wdata[7:0];
				11'h6f5:
					rf_filter_coeff378_b <= wdata[7:0];
				11'h6f6:
					rf_filter_coeff379_a <= wdata[7:0];
				11'h6f7:
					rf_filter_coeff379_b <= wdata[7:0];
				11'h6f8:
					rf_filter_coeff380_a <= wdata[7:0];
				11'h6f9:
					rf_filter_coeff380_b <= wdata[7:0];
				11'h6fa:
					rf_filter_coeff381_a <= wdata[7:0];
				11'h6fb:
					rf_filter_coeff381_b <= wdata[7:0];
				11'h6fc:
					rf_filter_coeff382_a <= wdata[7:0];
				11'h6fd:
					rf_filter_coeff382_b <= wdata[7:0];
				11'h6fe:
					rf_filter_coeff383_a <= wdata[7:0];
				11'h6ff:
					rf_filter_coeff383_b <= wdata[7:0];
				11'h700:
					rf_filter_coeff384_a <= wdata[7:0];
				11'h701:
					rf_filter_coeff384_b <= wdata[7:0];
				11'h702:
					rf_filter_coeff385_a <= wdata[7:0];
				11'h703:
					rf_filter_coeff385_b <= wdata[7:0];
				11'h704:
					rf_filter_coeff386_a <= wdata[7:0];
				11'h705:
					rf_filter_coeff386_b <= wdata[7:0];
				11'h706:
					rf_filter_coeff387_a <= wdata[7:0];
				11'h707:
					rf_filter_coeff387_b <= wdata[7:0];
				11'h708:
					rf_filter_coeff388_a <= wdata[7:0];
				11'h709:
					rf_filter_coeff388_b <= wdata[7:0];
				11'h70a:
					rf_filter_coeff389_a <= wdata[7:0];
				11'h70b:
					rf_filter_coeff389_b <= wdata[7:0];
				11'h70c:
					rf_filter_coeff390_a <= wdata[7:0];
				11'h70d:
					rf_filter_coeff390_b <= wdata[7:0];
				11'h70e:
					rf_filter_coeff391_a <= wdata[7:0];
				11'h70f:
					rf_filter_coeff391_b <= wdata[7:0];
				11'h710:
					rf_filter_coeff392_a <= wdata[7:0];
				11'h711:
					rf_filter_coeff392_b <= wdata[7:0];
				11'h712:
					rf_filter_coeff393_a <= wdata[7:0];
				11'h713:
					rf_filter_coeff393_b <= wdata[7:0];
				11'h714:
					rf_filter_coeff394_a <= wdata[7:0];
				11'h715:
					rf_filter_coeff394_b <= wdata[7:0];
				11'h716:
					rf_filter_coeff395_a <= wdata[7:0];
				11'h717:
					rf_filter_coeff395_b <= wdata[7:0];
				11'h718:
					rf_filter_coeff396_a <= wdata[7:0];
				11'h719:
					rf_filter_coeff396_b <= wdata[7:0];
				11'h71a:
					rf_filter_coeff397_a <= wdata[7:0];
				11'h71b:
					rf_filter_coeff397_b <= wdata[7:0];
				11'h71c:
					rf_filter_coeff398_a <= wdata[7:0];
				11'h71d:
					rf_filter_coeff398_b <= wdata[7:0];
				11'h71e:
					rf_filter_coeff399_a <= wdata[7:0];
				11'h71f:
					rf_filter_coeff399_b <= wdata[7:0];
				11'h720:
					rf_filter_coeff400_a <= wdata[7:0];
				11'h721:
					rf_filter_coeff400_b <= wdata[7:0];
				11'h722:
					rf_filter_coeff401_a <= wdata[7:0];
				11'h723:
					rf_filter_coeff401_b <= wdata[7:0];
				11'h724:
					rf_filter_coeff402_a <= wdata[7:0];
				11'h725:
					rf_filter_coeff402_b <= wdata[7:0];
				11'h726:
					rf_filter_coeff403_a <= wdata[7:0];
				11'h727:
					rf_filter_coeff403_b <= wdata[7:0];
				11'h728:
					rf_filter_coeff404_a <= wdata[7:0];
				11'h729:
					rf_filter_coeff404_b <= wdata[7:0];
				11'h72a:
					rf_filter_coeff405_a <= wdata[7:0];
				11'h72b:
					rf_filter_coeff405_b <= wdata[7:0];
				11'h72c:
					rf_filter_coeff406_a <= wdata[7:0];
				11'h72d:
					rf_filter_coeff406_b <= wdata[7:0];
				11'h72e:
					rf_filter_coeff407_a <= wdata[7:0];
				11'h72f:
					rf_filter_coeff407_b <= wdata[7:0];
				11'h730:
					rf_filter_coeff408_a <= wdata[7:0];
				11'h731:
					rf_filter_coeff408_b <= wdata[7:0];
				11'h732:
					rf_filter_coeff409_a <= wdata[7:0];
				11'h733:
					rf_filter_coeff409_b <= wdata[7:0];
				11'h734:
					rf_filter_coeff410_a <= wdata[7:0];
				11'h735:
					rf_filter_coeff410_b <= wdata[7:0];
				11'h736:
					rf_filter_coeff411_a <= wdata[7:0];
				11'h737:
					rf_filter_coeff411_b <= wdata[7:0];
				11'h738:
					rf_filter_coeff412_a <= wdata[7:0];
				11'h739:
					rf_filter_coeff412_b <= wdata[7:0];
				11'h73a:
					rf_filter_coeff413_a <= wdata[7:0];
				11'h73b:
					rf_filter_coeff413_b <= wdata[7:0];
				11'h73c:
					rf_filter_coeff414_a <= wdata[7:0];
				11'h73d:
					rf_filter_coeff414_b <= wdata[7:0];
				11'h73e:
					rf_filter_coeff415_a <= wdata[7:0];
				11'h73f:
					rf_filter_coeff415_b <= wdata[7:0];
				11'h740:
					rf_filter_coeff416_a <= wdata[7:0];
				11'h741:
					rf_filter_coeff416_b <= wdata[7:0];
				11'h742:
					rf_filter_coeff417_a <= wdata[7:0];
				11'h743:
					rf_filter_coeff417_b <= wdata[7:0];
				11'h744:
					rf_filter_coeff418_a <= wdata[7:0];
				11'h745:
					rf_filter_coeff418_b <= wdata[7:0];
				11'h746:
					rf_filter_coeff419_a <= wdata[7:0];
				11'h747:
					rf_filter_coeff419_b <= wdata[7:0];
				11'h748:
					rf_filter_coeff420_a <= wdata[7:0];
				11'h749:
					rf_filter_coeff420_b <= wdata[7:0];
				11'h74a:
					rf_filter_coeff421_a <= wdata[7:0];
				11'h74b:
					rf_filter_coeff421_b <= wdata[7:0];
				11'h74c:
					rf_filter_coeff422_a <= wdata[7:0];
				11'h74d:
					rf_filter_coeff422_b <= wdata[7:0];
				11'h74e:
					rf_filter_coeff423_a <= wdata[7:0];
				11'h74f:
					rf_filter_coeff423_b <= wdata[7:0];
				11'h750:
					rf_filter_coeff424_a <= wdata[7:0];
				11'h751:
					rf_filter_coeff424_b <= wdata[7:0];
				11'h752:
					rf_filter_coeff425_a <= wdata[7:0];
				11'h753:
					rf_filter_coeff425_b <= wdata[7:0];
				11'h754:
					rf_filter_coeff426_a <= wdata[7:0];
				11'h755:
					rf_filter_coeff426_b <= wdata[7:0];
				11'h756:
					rf_filter_coeff427_a <= wdata[7:0];
				11'h757:
					rf_filter_coeff427_b <= wdata[7:0];
				11'h758:
					rf_filter_coeff428_a <= wdata[7:0];
				11'h759:
					rf_filter_coeff428_b <= wdata[7:0];
				11'h75a:
					rf_filter_coeff429_a <= wdata[7:0];
				11'h75b:
					rf_filter_coeff429_b <= wdata[7:0];
				11'h75c:
					rf_filter_coeff430_a <= wdata[7:0];
				11'h75d:
					rf_filter_coeff430_b <= wdata[7:0];
				11'h75e:
					rf_filter_coeff431_a <= wdata[7:0];
				11'h75f:
					rf_filter_coeff431_b <= wdata[7:0];
				11'h760:
					rf_filter_coeff432_a <= wdata[7:0];
				11'h761:
					rf_filter_coeff432_b <= wdata[7:0];
				11'h762:
					rf_filter_coeff433_a <= wdata[7:0];
				11'h763:
					rf_filter_coeff433_b <= wdata[7:0];
				11'h764:
					rf_filter_coeff434_a <= wdata[7:0];
				11'h765:
					rf_filter_coeff434_b <= wdata[7:0];
				11'h766:
					rf_filter_coeff435_a <= wdata[7:0];
				11'h767:
					rf_filter_coeff435_b <= wdata[7:0];
				11'h768:
					rf_filter_coeff436_a <= wdata[7:0];
				11'h769:
					rf_filter_coeff436_b <= wdata[7:0];
				11'h76a:
					rf_filter_coeff437_a <= wdata[7:0];
				11'h76b:
					rf_filter_coeff437_b <= wdata[7:0];
				11'h76c:
					rf_filter_coeff438_a <= wdata[7:0];
				11'h76d:
					rf_filter_coeff438_b <= wdata[7:0];
				11'h76e:
					rf_filter_coeff439_a <= wdata[7:0];
				11'h76f:
					rf_filter_coeff439_b <= wdata[7:0];
				11'h770:
					rf_filter_coeff440_a <= wdata[7:0];
				11'h771:
					rf_filter_coeff440_b <= wdata[7:0];
				11'h772:
					rf_filter_coeff441_a <= wdata[7:0];
				11'h773:
					rf_filter_coeff441_b <= wdata[7:0];
				11'h774:
					rf_filter_coeff442_a <= wdata[7:0];
				11'h775:
					rf_filter_coeff442_b <= wdata[7:0];
				11'h776:
					rf_filter_coeff443_a <= wdata[7:0];
				11'h777:
					rf_filter_coeff443_b <= wdata[7:0];
				11'h778:
					rf_filter_coeff444_a <= wdata[7:0];
				11'h779:
					rf_filter_coeff444_b <= wdata[7:0];
				11'h77a:
					rf_filter_coeff445_a <= wdata[7:0];
				11'h77b:
					rf_filter_coeff445_b <= wdata[7:0];
				11'h77c:
					rf_filter_coeff446_a <= wdata[7:0];
				11'h77d:
					rf_filter_coeff446_b <= wdata[7:0];
				11'h77e:
					rf_filter_coeff447_a <= wdata[7:0];
				11'h77f:
					rf_filter_coeff447_b <= wdata[7:0];
				11'h780:
					rf_filter_coeff448_a <= wdata[7:0];
				11'h781:
					rf_filter_coeff448_b <= wdata[7:0];
				11'h782:
					rf_filter_coeff449_a <= wdata[7:0];
				11'h783:
					rf_filter_coeff449_b <= wdata[7:0];
				11'h784:
					rf_filter_coeff450_a <= wdata[7:0];
				11'h785:
					rf_filter_coeff450_b <= wdata[7:0];
				11'h786:
					rf_filter_coeff451_a <= wdata[7:0];
				11'h787:
					rf_filter_coeff451_b <= wdata[7:0];
				11'h788:
					rf_filter_coeff452_a <= wdata[7:0];
				11'h789:
					rf_filter_coeff452_b <= wdata[7:0];
				11'h78a:
					rf_filter_coeff453_a <= wdata[7:0];
				11'h78b:
					rf_filter_coeff453_b <= wdata[7:0];
				11'h78c:
					rf_filter_coeff454_a <= wdata[7:0];
				11'h78d:
					rf_filter_coeff454_b <= wdata[7:0];
				11'h78e:
					rf_filter_coeff455_a <= wdata[7:0];
				11'h78f:
					rf_filter_coeff455_b <= wdata[7:0];
				11'h790:
					rf_filter_coeff456_a <= wdata[7:0];
				11'h791:
					rf_filter_coeff456_b <= wdata[7:0];
				11'h792:
					rf_filter_coeff457_a <= wdata[7:0];
				11'h793:
					rf_filter_coeff457_b <= wdata[7:0];
				11'h794:
					rf_filter_coeff458_a <= wdata[7:0];
				11'h795:
					rf_filter_coeff458_b <= wdata[7:0];
				11'h796:
					rf_filter_coeff459_a <= wdata[7:0];
				11'h797:
					rf_filter_coeff459_b <= wdata[7:0];
				11'h798:
					rf_filter_coeff460_a <= wdata[7:0];
				11'h799:
					rf_filter_coeff460_b <= wdata[7:0];
				11'h79a:
					rf_filter_coeff461_a <= wdata[7:0];
				11'h79b:
					rf_filter_coeff461_b <= wdata[7:0];
				11'h79c:
					rf_filter_coeff462_a <= wdata[7:0];
				11'h79d:
					rf_filter_coeff462_b <= wdata[7:0];
				11'h79e:
					rf_filter_coeff463_a <= wdata[7:0];
				11'h79f:
					rf_filter_coeff463_b <= wdata[7:0];
				11'h7a0:
					rf_filter_coeff464_a <= wdata[7:0];
				11'h7a1:
					rf_filter_coeff464_b <= wdata[7:0];
				11'h7a2:
					rf_filter_coeff465_a <= wdata[7:0];
				11'h7a3:
					rf_filter_coeff465_b <= wdata[7:0];
				11'h7a4:
					rf_filter_coeff466_a <= wdata[7:0];
				11'h7a5:
					rf_filter_coeff466_b <= wdata[7:0];
				11'h7a6:
					rf_filter_coeff467_a <= wdata[7:0];
				11'h7a7:
					rf_filter_coeff467_b <= wdata[7:0];
				11'h7a8:
					rf_filter_coeff468_a <= wdata[7:0];
				11'h7a9:
					rf_filter_coeff468_b <= wdata[7:0];
				11'h7aa:
					rf_filter_coeff469_a <= wdata[7:0];
				11'h7ab:
					rf_filter_coeff469_b <= wdata[7:0];
				11'h7ac:
					rf_filter_coeff470_a <= wdata[7:0];
				11'h7ad:
					rf_filter_coeff470_b <= wdata[7:0];
				11'h7ae:
					rf_filter_coeff471_a <= wdata[7:0];
				11'h7af:
					rf_filter_coeff471_b <= wdata[7:0];
				11'h7b0:
					rf_filter_coeff472_a <= wdata[7:0];
				11'h7b1:
					rf_filter_coeff472_b <= wdata[7:0];
				11'h7b2:
					rf_filter_coeff473_a <= wdata[7:0];
				11'h7b3:
					rf_filter_coeff473_b <= wdata[7:0];
				11'h7b4:
					rf_filter_coeff474_a <= wdata[7:0];
				11'h7b5:
					rf_filter_coeff474_b <= wdata[7:0];
				11'h7b6:
					rf_filter_coeff475_a <= wdata[7:0];
				11'h7b7:
					rf_filter_coeff475_b <= wdata[7:0];
				11'h7b8:
					rf_filter_coeff476_a <= wdata[7:0];
				11'h7b9:
					rf_filter_coeff476_b <= wdata[7:0];
				11'h7ba:
					rf_filter_coeff477_a <= wdata[7:0];
				11'h7bb:
					rf_filter_coeff477_b <= wdata[7:0];
				11'h7bc:
					rf_filter_coeff478_a <= wdata[7:0];
				11'h7bd:
					rf_filter_coeff478_b <= wdata[7:0];
				11'h7be:
					rf_filter_coeff479_a <= wdata[7:0];
				11'h7bf:
					rf_filter_coeff479_b <= wdata[7:0];
				11'h7c0:
					rf_filter_coeff480_a <= wdata[7:0];
				11'h7c1:
					rf_filter_coeff480_b <= wdata[7:0];
				11'h7c2:
					rf_filter_coeff481_a <= wdata[7:0];
				11'h7c3:
					rf_filter_coeff481_b <= wdata[7:0];
				11'h7c4:
					rf_filter_coeff482_a <= wdata[7:0];
				11'h7c5:
					rf_filter_coeff482_b <= wdata[7:0];
				11'h7c6:
					rf_filter_coeff483_a <= wdata[7:0];
				11'h7c7:
					rf_filter_coeff483_b <= wdata[7:0];
				11'h7c8:
					rf_filter_coeff484_a <= wdata[7:0];
				11'h7c9:
					rf_filter_coeff484_b <= wdata[7:0];
				11'h7ca:
					rf_filter_coeff485_a <= wdata[7:0];
				11'h7cb:
					rf_filter_coeff485_b <= wdata[7:0];
				11'h7cc:
					rf_filter_coeff486_a <= wdata[7:0];
				11'h7cd:
					rf_filter_coeff486_b <= wdata[7:0];
				11'h7ce:
					rf_filter_coeff487_a <= wdata[7:0];
				11'h7cf:
					rf_filter_coeff487_b <= wdata[7:0];
				11'h7d0:
					rf_filter_coeff488_a <= wdata[7:0];
				11'h7d1:
					rf_filter_coeff488_b <= wdata[7:0];
				11'h7d2:
					rf_filter_coeff489_a <= wdata[7:0];
				11'h7d3:
					rf_filter_coeff489_b <= wdata[7:0];
				11'h7d4:
					rf_filter_coeff490_a <= wdata[7:0];
				11'h7d5:
					rf_filter_coeff490_b <= wdata[7:0];
				11'h7d6:
					rf_filter_coeff491_a <= wdata[7:0];
				11'h7d7:
					rf_filter_coeff491_b <= wdata[7:0];
				11'h7d8:
					rf_filter_coeff492_a <= wdata[7:0];
				11'h7d9:
					rf_filter_coeff492_b <= wdata[7:0];
				11'h7da:
					rf_filter_coeff493_a <= wdata[7:0];
				11'h7db:
					rf_filter_coeff493_b <= wdata[7:0];
				11'h7dc:
					rf_filter_coeff494_a <= wdata[7:0];
				11'h7dd:
					rf_filter_coeff494_b <= wdata[7:0];
				11'h7de:
					rf_filter_coeff495_a <= wdata[7:0];
				11'h7df:
					rf_filter_coeff495_b <= wdata[7:0];
				11'h7e0:
					rf_filter_coeff496_a <= wdata[7:0];
				11'h7e1:
					rf_filter_coeff496_b <= wdata[7:0];
				11'h7e2:
					rf_filter_coeff497_a <= wdata[7:0];
				11'h7e3:
					rf_filter_coeff497_b <= wdata[7:0];
				11'h7e4:
					rf_filter_coeff498_a <= wdata[7:0];
				11'h7e5:
					rf_filter_coeff498_b <= wdata[7:0];
				11'h7e6:
					rf_filter_coeff499_a <= wdata[7:0];
				11'h7e7:
					rf_filter_coeff499_b <= wdata[7:0];
				11'h7e8:
					rf_filter_coeff500_a <= wdata[7:0];
				11'h7e9:
					rf_filter_coeff500_b <= wdata[7:0];
				11'h7ea:
					rf_filter_coeff501_a <= wdata[7:0];
				11'h7eb:
					rf_filter_coeff501_b <= wdata[7:0];
				11'h7ec:
					rf_filter_coeff502_a <= wdata[7:0];
				11'h7ed:
					rf_filter_coeff502_b <= wdata[7:0];
				11'h7ee:
					rf_filter_coeff503_a <= wdata[7:0];
				11'h7ef:
					rf_filter_coeff503_b <= wdata[7:0];
				11'h7f0:
					rf_filter_coeff504_a <= wdata[7:0];
				11'h7f1:
					rf_filter_coeff504_b <= wdata[7:0];
				11'h7f2:
					rf_filter_coeff505_a <= wdata[7:0];
				11'h7f3:
					rf_filter_coeff505_b <= wdata[7:0];
				11'h7f4:
					rf_filter_coeff506_a <= wdata[7:0];
				11'h7f5:
					rf_filter_coeff506_b <= wdata[7:0];
				11'h7f6:
					rf_filter_coeff507_a <= wdata[7:0];
				11'h7f7:
					rf_filter_coeff507_b <= wdata[7:0];
				11'h7f8:
					rf_filter_coeff508_a <= wdata[7:0];
				11'h7f9:
					rf_filter_coeff508_b <= wdata[7:0];
				11'h7fa:
					rf_filter_coeff509_a <= wdata[7:0];
				11'h7fb:
					rf_filter_coeff509_b <= wdata[7:0];
				11'h7fc:
					rf_filter_coeff510_a <= wdata[7:0];
				11'h7fd:
					rf_filter_coeff510_b <= wdata[7:0];
				11'h7fe:
					rf_filter_coeff511_a <= wdata[7:0];
				11'h7ff:
					rf_filter_coeff511_b <= wdata[7:0];
			endcase
		end
		
always @ (posedge clk)
	if (rxfc)
		begin
			// Given the address, the signals are assigned to their correlated bits of data
			case(addr)
				11'h004: begin
					rdata[0] = rf_soft_reset;
					rdata[1] = rf_i2si_bist_en;
					rdata[5:2] = rf_filter_shift;
					rdata[6] = rf_filter_clip_en;
					end
				11'h005: begin
					rdata[3:0] = rf_i2si_dec_factor;
					rdata[7:4] = rf_i2so_dec_factor;
					end
				11'h008:
					rdata[7:0] = rf_i2so_clk2sck_div_a;
				11'h009:
					rdata[7:0] = rf_i2so_clk2sck_div_b;
				11'h00c: begin
					rdata[0] = trig_fifo_overrun;
					rdata[1] = ro_fifo_overrun;
					rdata[2] = trig_fifo_underrun;
					rdata[3] = ro_fifo_underrun;
					end
				11'h010:
					rdata[7:0] = rf_i2si_bist_incr;
				11'h011:
					rdata[7:0] = rf_i2si_bist_start_val_a;
				11'h012: begin
					rdata[3:0] = rf_i2si_bist_start_val_b;
					rdata[7:4] = rf_i2si_bist_upper_limit_a;
					end
				11'h013:
					rdata[7:0] = rf_i2si_bist_upper_limit_b;
				11'h014:
					rdata[7:0] = rf_i2c_reg_indir_addr_a;
				11'h015:
					rdata[3:0] = rf_i2c_reg_indir_addr_b;
				11'h400:
					rdata[7:0] = rf_filter_coeff0_a;
				11'h401:
					rdata[7:0] = rf_filter_coeff0_b;
				11'h402:
					rdata[7:0] = rf_filter_coeff1_a;
				11'h403:
					rdata[7:0] = rf_filter_coeff1_b;
				11'h404:
					rdata[7:0] = rf_filter_coeff2_a;
				11'h405:
					rdata[7:0] = rf_filter_coeff2_b;
				11'h406:
					rdata[7:0] = rf_filter_coeff3_a;
				11'h407:
					rdata[7:0] = rf_filter_coeff3_b;
				11'h408:
					rdata[7:0] = rf_filter_coeff4_a;
				11'h409:
					rdata[7:0] = rf_filter_coeff4_b;
				11'h40a:
					rdata[7:0] = rf_filter_coeff5_a;
				11'h40b:
					rdata[7:0] = rf_filter_coeff5_b;
				11'h40c:
					rdata[7:0] = rf_filter_coeff6_a;
				11'h40d:
					rdata[7:0] = rf_filter_coeff6_b;
				11'h40e:
					rdata[7:0] = rf_filter_coeff7_a;
				11'h40f:
					rdata[7:0] = rf_filter_coeff7_b;
				11'h410:
					rdata[7:0] = rf_filter_coeff8_a;
				11'h411:
					rdata[7:0] = rf_filter_coeff8_b;
				11'h412:
					rdata[7:0] = rf_filter_coeff9_a;
				11'h413:
					rdata[7:0] = rf_filter_coeff9_b;
				11'h414:
					rdata[7:0] = rf_filter_coeff10_a;
				11'h415:
					rdata[7:0] = rf_filter_coeff10_b;
				11'h416:
					rdata[7:0] = rf_filter_coeff11_a;
				11'h417:
					rdata[7:0] = rf_filter_coeff11_b;
				11'h418:
					rdata[7:0] = rf_filter_coeff12_a;
				11'h419:
					rdata[7:0] = rf_filter_coeff12_b;
				11'h41a:
					rdata[7:0] = rf_filter_coeff13_a;
				11'h41b:
					rdata[7:0] = rf_filter_coeff13_b;
				11'h41c:
					rdata[7:0] = rf_filter_coeff14_a;
				11'h41d:
					rdata[7:0] = rf_filter_coeff14_b;
				11'h41e:
					rdata[7:0] = rf_filter_coeff15_a;
				11'h41f:
					rdata[7:0] = rf_filter_coeff15_b;
				11'h420:
					rdata[7:0] = rf_filter_coeff16_a;
				11'h421:
					rdata[7:0] = rf_filter_coeff16_b;
				11'h422:
					rdata[7:0] = rf_filter_coeff17_a;
				11'h423:
					rdata[7:0] = rf_filter_coeff17_b;
				11'h424:
					rdata[7:0] = rf_filter_coeff18_a;
				11'h425:
					rdata[7:0] = rf_filter_coeff18_b;
				11'h426:
					rdata[7:0] = rf_filter_coeff19_a;
				11'h427:
					rdata[7:0] = rf_filter_coeff19_b;
				11'h428:
					rdata[7:0] = rf_filter_coeff20_a;
				11'h429:
					rdata[7:0] = rf_filter_coeff20_b;
				11'h42a:
					rdata[7:0] = rf_filter_coeff21_a;
				11'h42b:
					rdata[7:0] = rf_filter_coeff21_b;
				11'h42c:
					rdata[7:0] = rf_filter_coeff22_a;
				11'h42d:
					rdata[7:0] = rf_filter_coeff22_b;
				11'h42e:
					rdata[7:0] = rf_filter_coeff23_a;
				11'h42f:
					rdata[7:0] = rf_filter_coeff23_b;
				11'h430:
					rdata[7:0] = rf_filter_coeff24_a;
				11'h431:
					rdata[7:0] = rf_filter_coeff24_b;
				11'h432:
					rdata[7:0] = rf_filter_coeff25_a;
				11'h433:
					rdata[7:0] = rf_filter_coeff25_b;
				11'h434:
					rdata[7:0] = rf_filter_coeff26_a;
				11'h435:
					rdata[7:0] = rf_filter_coeff26_b;
				11'h436:
					rdata[7:0] = rf_filter_coeff27_a;
				11'h437:
					rdata[7:0] = rf_filter_coeff27_b;
				11'h438:
					rdata[7:0] = rf_filter_coeff28_a;
				11'h439:
					rdata[7:0] = rf_filter_coeff28_b;
				11'h43a:
					rdata[7:0] = rf_filter_coeff29_a;
				11'h43b:
					rdata[7:0] = rf_filter_coeff29_b;
				11'h43c:
					rdata[7:0] = rf_filter_coeff30_a;
				11'h43d:
					rdata[7:0] = rf_filter_coeff30_b;
				11'h43e:
					rdata[7:0] = rf_filter_coeff31_a;
				11'h43f:
					rdata[7:0] = rf_filter_coeff31_b;
				11'h440:
					rdata[7:0] = rf_filter_coeff32_a;
				11'h441:
					rdata[7:0] = rf_filter_coeff32_b;
				11'h442:
					rdata[7:0] = rf_filter_coeff33_a;
				11'h443:
					rdata[7:0] = rf_filter_coeff33_b;
				11'h444:
					rdata[7:0] = rf_filter_coeff34_a;
				11'h445:
					rdata[7:0] = rf_filter_coeff34_b;
				11'h446:
					rdata[7:0] = rf_filter_coeff35_a;
				11'h447:
					rdata[7:0] = rf_filter_coeff35_b;
				11'h448:
					rdata[7:0] = rf_filter_coeff36_a;
				11'h449:
					rdata[7:0] = rf_filter_coeff36_b;
				11'h44a:
					rdata[7:0] = rf_filter_coeff37_a;
				11'h44b:
					rdata[7:0] = rf_filter_coeff37_b;
				11'h44c:
					rdata[7:0] = rf_filter_coeff38_a;
				11'h44d:
					rdata[7:0] = rf_filter_coeff38_b;
				11'h44e:
					rdata[7:0] = rf_filter_coeff39_a;
				11'h44f:
					rdata[7:0] = rf_filter_coeff39_b;
				11'h450:
					rdata[7:0] = rf_filter_coeff40_a;
				11'h451:
					rdata[7:0] = rf_filter_coeff40_b;
				11'h452:
					rdata[7:0] = rf_filter_coeff41_a;
				11'h453:
					rdata[7:0] = rf_filter_coeff41_b;
				11'h454:
					rdata[7:0] = rf_filter_coeff42_a;
				11'h455:
					rdata[7:0] = rf_filter_coeff42_b;
				11'h456:
					rdata[7:0] = rf_filter_coeff43_a;
				11'h457:
					rdata[7:0] = rf_filter_coeff43_b;
				11'h458:
					rdata[7:0] = rf_filter_coeff44_a;
				11'h459:
					rdata[7:0] = rf_filter_coeff44_b;
				11'h45a:
					rdata[7:0] = rf_filter_coeff45_a;
				11'h45b:
					rdata[7:0] = rf_filter_coeff45_b;
				11'h45c:
					rdata[7:0] = rf_filter_coeff46_a;
				11'h45d:
					rdata[7:0] = rf_filter_coeff46_b;
				11'h45e:
					rdata[7:0] = rf_filter_coeff47_a;
				11'h45f:
					rdata[7:0] = rf_filter_coeff47_b;
				11'h460:
					rdata[7:0] = rf_filter_coeff48_a;
				11'h461:
					rdata[7:0] = rf_filter_coeff48_b;
				11'h462:
					rdata[7:0] = rf_filter_coeff49_a;
				11'h463:
					rdata[7:0] = rf_filter_coeff49_b;
				11'h464:
					rdata[7:0] = rf_filter_coeff50_a;
				11'h465:
					rdata[7:0] = rf_filter_coeff50_b;
				11'h466:
					rdata[7:0] = rf_filter_coeff51_a;
				11'h467:
					rdata[7:0] = rf_filter_coeff51_b;
				11'h468:
					rdata[7:0] = rf_filter_coeff52_a;
				11'h469:
					rdata[7:0] = rf_filter_coeff52_b;
				11'h46a:
					rdata[7:0] = rf_filter_coeff53_a;
				11'h46b:
					rdata[7:0] = rf_filter_coeff53_b;
				11'h46c:
					rdata[7:0] = rf_filter_coeff54_a;
				11'h46d:
					rdata[7:0] = rf_filter_coeff54_b;
				11'h46e:
					rdata[7:0] = rf_filter_coeff55_a;
				11'h46f:
					rdata[7:0] = rf_filter_coeff55_b;
				11'h470:
					rdata[7:0] = rf_filter_coeff56_a;
				11'h471:
					rdata[7:0] = rf_filter_coeff56_b;
				11'h472:
					rdata[7:0] = rf_filter_coeff57_a;
				11'h473:
					rdata[7:0] = rf_filter_coeff57_b;
				11'h474:
					rdata[7:0] = rf_filter_coeff58_a;
				11'h475:
					rdata[7:0] = rf_filter_coeff58_b;
				11'h476:
					rdata[7:0] = rf_filter_coeff59_a;
				11'h477:
					rdata[7:0] = rf_filter_coeff59_b;
				11'h478:
					rdata[7:0] = rf_filter_coeff60_a;
				11'h479:
					rdata[7:0] = rf_filter_coeff60_b;
				11'h47a:
					rdata[7:0] = rf_filter_coeff61_a;
				11'h47b:
					rdata[7:0] = rf_filter_coeff61_b;
				11'h47c:
					rdata[7:0] = rf_filter_coeff62_a;
				11'h47d:
					rdata[7:0] = rf_filter_coeff62_b;
				11'h47e:
					rdata[7:0] = rf_filter_coeff63_a;
				11'h47f:
					rdata[7:0] = rf_filter_coeff63_b;
				11'h480:
					rdata[7:0] = rf_filter_coeff64_a;
				11'h481:
					rdata[7:0] = rf_filter_coeff64_b;
				11'h482:
					rdata[7:0] = rf_filter_coeff65_a;
				11'h483:
					rdata[7:0] = rf_filter_coeff65_b;
				11'h484:
					rdata[7:0] = rf_filter_coeff66_a;
				11'h485:
					rdata[7:0] = rf_filter_coeff66_b;
				11'h486:
					rdata[7:0] = rf_filter_coeff67_a;
				11'h487:
					rdata[7:0] = rf_filter_coeff67_b;
				11'h488:
					rdata[7:0] = rf_filter_coeff68_a;
				11'h489:
					rdata[7:0] = rf_filter_coeff68_b;
				11'h48a:
					rdata[7:0] = rf_filter_coeff69_a;
				11'h48b:
					rdata[7:0] = rf_filter_coeff69_b;
				11'h48c:
					rdata[7:0] = rf_filter_coeff70_a;
				11'h48d:
					rdata[7:0] = rf_filter_coeff70_b;
				11'h48e:
					rdata[7:0] = rf_filter_coeff71_a;
				11'h48f:
					rdata[7:0] = rf_filter_coeff71_b;
				11'h490:
					rdata[7:0] = rf_filter_coeff72_a;
				11'h491:
					rdata[7:0] = rf_filter_coeff72_b;
				11'h492:
					rdata[7:0] = rf_filter_coeff73_a;
				11'h493:
					rdata[7:0] = rf_filter_coeff73_b;
				11'h494:
					rdata[7:0] = rf_filter_coeff74_a;
				11'h495:
					rdata[7:0] = rf_filter_coeff74_b;
				11'h496:
					rdata[7:0] = rf_filter_coeff75_a;
				11'h497:
					rdata[7:0] = rf_filter_coeff75_b;
				11'h498:
					rdata[7:0] = rf_filter_coeff76_a;
				11'h499:
					rdata[7:0] = rf_filter_coeff76_b;
				11'h49a:
					rdata[7:0] = rf_filter_coeff77_a;
				11'h49b:
					rdata[7:0] = rf_filter_coeff77_b;
				11'h49c:
					rdata[7:0] = rf_filter_coeff78_a;
				11'h49d:
					rdata[7:0] = rf_filter_coeff78_b;
				11'h49e:
					rdata[7:0] = rf_filter_coeff79_a;
				11'h49f:
					rdata[7:0] = rf_filter_coeff79_b;
				11'h4a0:
					rdata[7:0] = rf_filter_coeff80_a;
				11'h4a1:
					rdata[7:0] = rf_filter_coeff80_b;
				11'h4a2:
					rdata[7:0] = rf_filter_coeff81_a;
				11'h4a3:
					rdata[7:0] = rf_filter_coeff81_b;
				11'h4a4:
					rdata[7:0] = rf_filter_coeff82_a;
				11'h4a5:
					rdata[7:0] = rf_filter_coeff82_b;
				11'h4a6:
					rdata[7:0] = rf_filter_coeff83_a;
				11'h4a7:
					rdata[7:0] = rf_filter_coeff83_b;
				11'h4a8:
					rdata[7:0] = rf_filter_coeff84_a;
				11'h4a9:
					rdata[7:0] = rf_filter_coeff84_b;
				11'h4aa:
					rdata[7:0] = rf_filter_coeff85_a;
				11'h4ab:
					rdata[7:0] = rf_filter_coeff85_b;
				11'h4ac:
					rdata[7:0] = rf_filter_coeff86_a;
				11'h4ad:
					rdata[7:0] = rf_filter_coeff86_b;
				11'h4ae:
					rdata[7:0] = rf_filter_coeff87_a;
				11'h4af:
					rdata[7:0] = rf_filter_coeff87_b;
				11'h4b0:
					rdata[7:0] = rf_filter_coeff88_a;
				11'h4b1:
					rdata[7:0] = rf_filter_coeff88_b;
				11'h4b2:
					rdata[7:0] = rf_filter_coeff89_a;
				11'h4b3:
					rdata[7:0] = rf_filter_coeff89_b;
				11'h4b4:
					rdata[7:0] = rf_filter_coeff90_a;
				11'h4b5:
					rdata[7:0] = rf_filter_coeff90_b;
				11'h4b6:
					rdata[7:0] = rf_filter_coeff91_a;
				11'h4b7:
					rdata[7:0] = rf_filter_coeff91_b;
				11'h4b8:
					rdata[7:0] = rf_filter_coeff92_a;
				11'h4b9:
					rdata[7:0] = rf_filter_coeff92_b;
				11'h4ba:
					rdata[7:0] = rf_filter_coeff93_a;
				11'h4bb:
					rdata[7:0] = rf_filter_coeff93_b;
				11'h4bc:
					rdata[7:0] = rf_filter_coeff94_a;
				11'h4bd:
					rdata[7:0] = rf_filter_coeff94_b;
				11'h4be:
					rdata[7:0] = rf_filter_coeff95_a;
				11'h4bf:
					rdata[7:0] = rf_filter_coeff95_b;
				11'h4c0:
					rdata[7:0] = rf_filter_coeff96_a;
				11'h4c1:
					rdata[7:0] = rf_filter_coeff96_b;
				11'h4c2:
					rdata[7:0] = rf_filter_coeff97_a;
				11'h4c3:
					rdata[7:0] = rf_filter_coeff97_b;
				11'h4c4:
					rdata[7:0] = rf_filter_coeff98_a;
				11'h4c5:
					rdata[7:0] = rf_filter_coeff98_b;
				11'h4c6:
					rdata[7:0] = rf_filter_coeff99_a;
				11'h4c7:
					rdata[7:0] = rf_filter_coeff99_b;
				11'h4c8:
					rdata[7:0] = rf_filter_coeff100_a;
				11'h4c9:
					rdata[7:0] = rf_filter_coeff100_b;
				11'h4ca:
					rdata[7:0] = rf_filter_coeff101_a;
				11'h4cb:
					rdata[7:0] = rf_filter_coeff101_b;
				11'h4cc:
					rdata[7:0] = rf_filter_coeff102_a;
				11'h4cd:
					rdata[7:0] = rf_filter_coeff102_b;
				11'h4ce:
					rdata[7:0] = rf_filter_coeff103_a;
				11'h4cf:
					rdata[7:0] = rf_filter_coeff103_b;
				11'h4d0:
					rdata[7:0] = rf_filter_coeff104_a;
				11'h4d1:
					rdata[7:0] = rf_filter_coeff104_b;
				11'h4d2:
					rdata[7:0] = rf_filter_coeff105_a;
				11'h4d3:
					rdata[7:0] = rf_filter_coeff105_b;
				11'h4d4:
					rdata[7:0] = rf_filter_coeff106_a;
				11'h4d5:
					rdata[7:0] = rf_filter_coeff106_b;
				11'h4d6:
					rdata[7:0] = rf_filter_coeff107_a;
				11'h4d7:
					rdata[7:0] = rf_filter_coeff107_b;
				11'h4d8:
					rdata[7:0] = rf_filter_coeff108_a;
				11'h4d9:
					rdata[7:0] = rf_filter_coeff108_b;
				11'h4da:
					rdata[7:0] = rf_filter_coeff109_a;
				11'h4db:
					rdata[7:0] = rf_filter_coeff109_b;
				11'h4dc:
					rdata[7:0] = rf_filter_coeff110_a;
				11'h4dd:
					rdata[7:0] = rf_filter_coeff110_b;
				11'h4de:
					rdata[7:0] = rf_filter_coeff111_a;
				11'h4df:
					rdata[7:0] = rf_filter_coeff111_b;
				11'h4e0:
					rdata[7:0] = rf_filter_coeff112_a;
				11'h4e1:
					rdata[7:0] = rf_filter_coeff112_b;
				11'h4e2:
					rdata[7:0] = rf_filter_coeff113_a;
				11'h4e3:
					rdata[7:0] = rf_filter_coeff113_b;
				11'h4e4:
					rdata[7:0] = rf_filter_coeff114_a;
				11'h4e5:
					rdata[7:0] = rf_filter_coeff114_b;
				11'h4e6:
					rdata[7:0] = rf_filter_coeff115_a;
				11'h4e7:
					rdata[7:0] = rf_filter_coeff115_b;
				11'h4e8:
					rdata[7:0] = rf_filter_coeff116_a;
				11'h4e9:
					rdata[7:0] = rf_filter_coeff116_b;
				11'h4ea:
					rdata[7:0] = rf_filter_coeff117_a;
				11'h4eb:
					rdata[7:0] = rf_filter_coeff117_b;
				11'h4ec:
					rdata[7:0] = rf_filter_coeff118_a;
				11'h4ed:
					rdata[7:0] = rf_filter_coeff118_b;
				11'h4ee:
					rdata[7:0] = rf_filter_coeff119_a;
				11'h4ef:
					rdata[7:0] = rf_filter_coeff119_b;
				11'h4f0:
					rdata[7:0] = rf_filter_coeff120_a;
				11'h4f1:
					rdata[7:0] = rf_filter_coeff120_b;
				11'h4f2:
					rdata[7:0] = rf_filter_coeff121_a;
				11'h4f3:
					rdata[7:0] = rf_filter_coeff121_b;
				11'h4f4:
					rdata[7:0] = rf_filter_coeff122_a;
				11'h4f5:
					rdata[7:0] = rf_filter_coeff122_b;
				11'h4f6:
					rdata[7:0] = rf_filter_coeff123_a;
				11'h4f7:
					rdata[7:0] = rf_filter_coeff123_b;
				11'h4f8:
					rdata[7:0] = rf_filter_coeff124_a;
				11'h4f9:
					rdata[7:0] = rf_filter_coeff124_b;
				11'h4fa:
					rdata[7:0] = rf_filter_coeff125_a;
				11'h4fb:
					rdata[7:0] = rf_filter_coeff125_b;
				11'h4fc:
					rdata[7:0] = rf_filter_coeff126_a;
				11'h4fd:
					rdata[7:0] = rf_filter_coeff126_b;
				11'h4fe:
					rdata[7:0] = rf_filter_coeff127_a;
				11'h4ff:
					rdata[7:0] = rf_filter_coeff127_b;
				11'h500:
					rdata[7:0] = rf_filter_coeff128_a;
				11'h501:
					rdata[7:0] = rf_filter_coeff128_b;
				11'h502:
					rdata[7:0] = rf_filter_coeff129_a;
				11'h503:
					rdata[7:0] = rf_filter_coeff129_b;
				11'h504:
					rdata[7:0] = rf_filter_coeff130_a;
				11'h505:
					rdata[7:0] = rf_filter_coeff130_b;
				11'h506:
					rdata[7:0] = rf_filter_coeff131_a;
				11'h507:
					rdata[7:0] = rf_filter_coeff131_b;
				11'h508:
					rdata[7:0] = rf_filter_coeff132_a;
				11'h509:
					rdata[7:0] = rf_filter_coeff132_b;
				11'h50a:
					rdata[7:0] = rf_filter_coeff133_a;
				11'h50b:
					rdata[7:0] = rf_filter_coeff133_b;
				11'h50c:
					rdata[7:0] = rf_filter_coeff134_a;
				11'h50d:
					rdata[7:0] = rf_filter_coeff134_b;
				11'h50e:
					rdata[7:0] = rf_filter_coeff135_a;
				11'h50f:
					rdata[7:0] = rf_filter_coeff135_b;
				11'h510:
					rdata[7:0] = rf_filter_coeff136_a;
				11'h511:
					rdata[7:0] = rf_filter_coeff136_b;
				11'h512:
					rdata[7:0] = rf_filter_coeff137_a;
				11'h513:
					rdata[7:0] = rf_filter_coeff137_b;
				11'h514:
					rdata[7:0] = rf_filter_coeff138_a;
				11'h515:
					rdata[7:0] = rf_filter_coeff138_b;
				11'h516:
					rdata[7:0] = rf_filter_coeff139_a;
				11'h517:
					rdata[7:0] = rf_filter_coeff139_b;
				11'h518:
					rdata[7:0] = rf_filter_coeff140_a;
				11'h519:
					rdata[7:0] = rf_filter_coeff140_b;
				11'h51a:
					rdata[7:0] = rf_filter_coeff141_a;
				11'h51b:
					rdata[7:0] = rf_filter_coeff141_b;
				11'h51c:
					rdata[7:0] = rf_filter_coeff142_a;
				11'h51d:
					rdata[7:0] = rf_filter_coeff142_b;
				11'h51e:
					rdata[7:0] = rf_filter_coeff143_a;
				11'h51f:
					rdata[7:0] = rf_filter_coeff143_b;
				11'h520:
					rdata[7:0] = rf_filter_coeff144_a;
				11'h521:
					rdata[7:0] = rf_filter_coeff144_b;
				11'h522:
					rdata[7:0] = rf_filter_coeff145_a;
				11'h523:
					rdata[7:0] = rf_filter_coeff145_b;
				11'h524:
					rdata[7:0] = rf_filter_coeff146_a;
				11'h525:
					rdata[7:0] = rf_filter_coeff146_b;
				11'h526:
					rdata[7:0] = rf_filter_coeff147_a;
				11'h527:
					rdata[7:0] = rf_filter_coeff147_b;
				11'h528:
					rdata[7:0] = rf_filter_coeff148_a;
				11'h529:
					rdata[7:0] = rf_filter_coeff148_b;
				11'h52a:
					rdata[7:0] = rf_filter_coeff149_a;
				11'h52b:
					rdata[7:0] = rf_filter_coeff149_b;
				11'h52c:
					rdata[7:0] = rf_filter_coeff150_a;
				11'h52d:
					rdata[7:0] = rf_filter_coeff150_b;
				11'h52e:
					rdata[7:0] = rf_filter_coeff151_a;
				11'h52f:
					rdata[7:0] = rf_filter_coeff151_b;
				11'h530:
					rdata[7:0] = rf_filter_coeff152_a;
				11'h531:
					rdata[7:0] = rf_filter_coeff152_b;
				11'h532:
					rdata[7:0] = rf_filter_coeff153_a;
				11'h533:
					rdata[7:0] = rf_filter_coeff153_b;
				11'h534:
					rdata[7:0] = rf_filter_coeff154_a;
				11'h535:
					rdata[7:0] = rf_filter_coeff154_b;
				11'h536:
					rdata[7:0] = rf_filter_coeff155_a;
				11'h537:
					rdata[7:0] = rf_filter_coeff155_b;
				11'h538:
					rdata[7:0] = rf_filter_coeff156_a;
				11'h539:
					rdata[7:0] = rf_filter_coeff156_b;
				11'h53a:
					rdata[7:0] = rf_filter_coeff157_a;
				11'h53b:
					rdata[7:0] = rf_filter_coeff157_b;
				11'h53c:
					rdata[7:0] = rf_filter_coeff158_a;
				11'h53d:
					rdata[7:0] = rf_filter_coeff158_b;
				11'h53e:
					rdata[7:0] = rf_filter_coeff159_a;
				11'h53f:
					rdata[7:0] = rf_filter_coeff159_b;
				11'h540:
					rdata[7:0] = rf_filter_coeff160_a;
				11'h541:
					rdata[7:0] = rf_filter_coeff160_b;
				11'h542:
					rdata[7:0] = rf_filter_coeff161_a;
				11'h543:
					rdata[7:0] = rf_filter_coeff161_b;
				11'h544:
					rdata[7:0] = rf_filter_coeff162_a;
				11'h545:
					rdata[7:0] = rf_filter_coeff162_b;
				11'h546:
					rdata[7:0] = rf_filter_coeff163_a;
				11'h547:
					rdata[7:0] = rf_filter_coeff163_b;
				11'h548:
					rdata[7:0] = rf_filter_coeff164_a;
				11'h549:
					rdata[7:0] = rf_filter_coeff164_b;
				11'h54a:
					rdata[7:0] = rf_filter_coeff165_a;
				11'h54b:
					rdata[7:0] = rf_filter_coeff165_b;
				11'h54c:
					rdata[7:0] = rf_filter_coeff166_a;
				11'h54d:
					rdata[7:0] = rf_filter_coeff166_b;
				11'h54e:
					rdata[7:0] = rf_filter_coeff167_a;
				11'h54f:
					rdata[7:0] = rf_filter_coeff167_b;
				11'h550:
					rdata[7:0] = rf_filter_coeff168_a;
				11'h551:
					rdata[7:0] = rf_filter_coeff168_b;
				11'h552:
					rdata[7:0] = rf_filter_coeff169_a;
				11'h553:
					rdata[7:0] = rf_filter_coeff169_b;
				11'h554:
					rdata[7:0] = rf_filter_coeff170_a;
				11'h555:
					rdata[7:0] = rf_filter_coeff170_b;
				11'h556:
					rdata[7:0] = rf_filter_coeff171_a;
				11'h557:
					rdata[7:0] = rf_filter_coeff171_b;
				11'h558:
					rdata[7:0] = rf_filter_coeff172_a;
				11'h559:
					rdata[7:0] = rf_filter_coeff172_b;
				11'h55a:
					rdata[7:0] = rf_filter_coeff173_a;
				11'h55b:
					rdata[7:0] = rf_filter_coeff173_b;
				11'h55c:
					rdata[7:0] = rf_filter_coeff174_a;
				11'h55d:
					rdata[7:0] = rf_filter_coeff174_b;
				11'h55e:
					rdata[7:0] = rf_filter_coeff175_a;
				11'h55f:
					rdata[7:0] = rf_filter_coeff175_b;
				11'h560:
					rdata[7:0] = rf_filter_coeff176_a;
				11'h561:
					rdata[7:0] = rf_filter_coeff176_b;
				11'h562:
					rdata[7:0] = rf_filter_coeff177_a;
				11'h563:
					rdata[7:0] = rf_filter_coeff177_b;
				11'h564:
					rdata[7:0] = rf_filter_coeff178_a;
				11'h565:
					rdata[7:0] = rf_filter_coeff178_b;
				11'h566:
					rdata[7:0] = rf_filter_coeff179_a;
				11'h567:
					rdata[7:0] = rf_filter_coeff179_b;
				11'h568:
					rdata[7:0] = rf_filter_coeff180_a;
				11'h569:
					rdata[7:0] = rf_filter_coeff180_b;
				11'h56a:
					rdata[7:0] = rf_filter_coeff181_a;
				11'h56b:
					rdata[7:0] = rf_filter_coeff181_b;
				11'h56c:
					rdata[7:0] = rf_filter_coeff182_a;
				11'h56d:
					rdata[7:0] = rf_filter_coeff182_b;
				11'h56e:
					rdata[7:0] = rf_filter_coeff183_a;
				11'h56f:
					rdata[7:0] = rf_filter_coeff183_b;
				11'h570:
					rdata[7:0] = rf_filter_coeff184_a;
				11'h571:
					rdata[7:0] = rf_filter_coeff184_b;
				11'h572:
					rdata[7:0] = rf_filter_coeff185_a;
				11'h573:
					rdata[7:0] = rf_filter_coeff185_b;
				11'h574:
					rdata[7:0] = rf_filter_coeff186_a;
				11'h575:
					rdata[7:0] = rf_filter_coeff186_b;
				11'h576:
					rdata[7:0] = rf_filter_coeff187_a;
				11'h577:
					rdata[7:0] = rf_filter_coeff187_b;
				11'h578:
					rdata[7:0] = rf_filter_coeff188_a;
				11'h579:
					rdata[7:0] = rf_filter_coeff188_b;
				11'h57a:
					rdata[7:0] = rf_filter_coeff189_a;
				11'h57b:
					rdata[7:0] = rf_filter_coeff189_b;
				11'h57c:
					rdata[7:0] = rf_filter_coeff190_a;
				11'h57d:
					rdata[7:0] = rf_filter_coeff190_b;
				11'h57e:
					rdata[7:0] = rf_filter_coeff191_a;
				11'h57f:
					rdata[7:0] = rf_filter_coeff191_b;
				11'h580:
					rdata[7:0] = rf_filter_coeff192_a;
				11'h581:
					rdata[7:0] = rf_filter_coeff192_b;
				11'h582:
					rdata[7:0] = rf_filter_coeff193_a;
				11'h583:
					rdata[7:0] = rf_filter_coeff193_b;
				11'h584:
					rdata[7:0] = rf_filter_coeff194_a;
				11'h585:
					rdata[7:0] = rf_filter_coeff194_b;
				11'h586:
					rdata[7:0] = rf_filter_coeff195_a;
				11'h587:
					rdata[7:0] = rf_filter_coeff195_b;
				11'h588:
					rdata[7:0] = rf_filter_coeff196_a;
				11'h589:
					rdata[7:0] = rf_filter_coeff196_b;
				11'h58a:
					rdata[7:0] = rf_filter_coeff197_a;
				11'h58b:
					rdata[7:0] = rf_filter_coeff197_b;
				11'h58c:
					rdata[7:0] = rf_filter_coeff198_a;
				11'h58d:
					rdata[7:0] = rf_filter_coeff198_b;
				11'h58e:
					rdata[7:0] = rf_filter_coeff199_a;
				11'h58f:
					rdata[7:0] = rf_filter_coeff199_b;
				11'h590:
					rdata[7:0] = rf_filter_coeff200_a;
				11'h591:
					rdata[7:0] = rf_filter_coeff200_b;
				11'h592:
					rdata[7:0] = rf_filter_coeff201_a;
				11'h593:
					rdata[7:0] = rf_filter_coeff201_b;
				11'h594:
					rdata[7:0] = rf_filter_coeff202_a;
				11'h595:
					rdata[7:0] = rf_filter_coeff202_b;
				11'h596:
					rdata[7:0] = rf_filter_coeff203_a;
				11'h597:
					rdata[7:0] = rf_filter_coeff203_b;
				11'h598:
					rdata[7:0] = rf_filter_coeff204_a;
				11'h599:
					rdata[7:0] = rf_filter_coeff204_b;
				11'h59a:
					rdata[7:0] = rf_filter_coeff205_a;
				11'h59b:
					rdata[7:0] = rf_filter_coeff205_b;
				11'h59c:
					rdata[7:0] = rf_filter_coeff206_a;
				11'h59d:
					rdata[7:0] = rf_filter_coeff206_b;
				11'h59e:
					rdata[7:0] = rf_filter_coeff207_a;
				11'h59f:
					rdata[7:0] = rf_filter_coeff207_b;
				11'h5a0:
					rdata[7:0] = rf_filter_coeff208_a;
				11'h5a1:
					rdata[7:0] = rf_filter_coeff208_b;
				11'h5a2:
					rdata[7:0] = rf_filter_coeff209_a;
				11'h5a3:
					rdata[7:0] = rf_filter_coeff209_b;
				11'h5a4:
					rdata[7:0] = rf_filter_coeff210_a;
				11'h5a5:
					rdata[7:0] = rf_filter_coeff210_b;
				11'h5a6:
					rdata[7:0] = rf_filter_coeff211_a;
				11'h5a7:
					rdata[7:0] = rf_filter_coeff211_b;
				11'h5a8:
					rdata[7:0] = rf_filter_coeff212_a;
				11'h5a9:
					rdata[7:0] = rf_filter_coeff212_b;
				11'h5aa:
					rdata[7:0] = rf_filter_coeff213_a;
				11'h5ab:
					rdata[7:0] = rf_filter_coeff213_b;
				11'h5ac:
					rdata[7:0] = rf_filter_coeff214_a;
				11'h5ad:
					rdata[7:0] = rf_filter_coeff214_b;
				11'h5ae:
					rdata[7:0] = rf_filter_coeff215_a;
				11'h5af:
					rdata[7:0] = rf_filter_coeff215_b;
				11'h5b0:
					rdata[7:0] = rf_filter_coeff216_a;
				11'h5b1:
					rdata[7:0] = rf_filter_coeff216_b;
				11'h5b2:
					rdata[7:0] = rf_filter_coeff217_a;
				11'h5b3:
					rdata[7:0] = rf_filter_coeff217_b;
				11'h5b4:
					rdata[7:0] = rf_filter_coeff218_a;
				11'h5b5:
					rdata[7:0] = rf_filter_coeff218_b;
				11'h5b6:
					rdata[7:0] = rf_filter_coeff219_a;
				11'h5b7:
					rdata[7:0] = rf_filter_coeff219_b;
				11'h5b8:
					rdata[7:0] = rf_filter_coeff220_a;
				11'h5b9:
					rdata[7:0] = rf_filter_coeff220_b;
				11'h5ba:
					rdata[7:0] = rf_filter_coeff221_a;
				11'h5bb:
					rdata[7:0] = rf_filter_coeff221_b;
				11'h5bc:
					rdata[7:0] = rf_filter_coeff222_a;
				11'h5bd:
					rdata[7:0] = rf_filter_coeff222_b;
				11'h5be:
					rdata[7:0] = rf_filter_coeff223_a;
				11'h5bf:
					rdata[7:0] = rf_filter_coeff223_b;
				11'h5c0:
					rdata[7:0] = rf_filter_coeff224_a;
				11'h5c1:
					rdata[7:0] = rf_filter_coeff224_b;
				11'h5c2:
					rdata[7:0] = rf_filter_coeff225_a;
				11'h5c3:
					rdata[7:0] = rf_filter_coeff225_b;
				11'h5c4:
					rdata[7:0] = rf_filter_coeff226_a;
				11'h5c5:
					rdata[7:0] = rf_filter_coeff226_b;
				11'h5c6:
					rdata[7:0] = rf_filter_coeff227_a;
				11'h5c7:
					rdata[7:0] = rf_filter_coeff227_b;
				11'h5c8:
					rdata[7:0] = rf_filter_coeff228_a;
				11'h5c9:
					rdata[7:0] = rf_filter_coeff228_b;
				11'h5ca:
					rdata[7:0] = rf_filter_coeff229_a;
				11'h5cb:
					rdata[7:0] = rf_filter_coeff229_b;
				11'h5cc:
					rdata[7:0] = rf_filter_coeff230_a;
				11'h5cd:
					rdata[7:0] = rf_filter_coeff230_b;
				11'h5ce:
					rdata[7:0] = rf_filter_coeff231_a;
				11'h5cf:
					rdata[7:0] = rf_filter_coeff231_b;
				11'h5d0:
					rdata[7:0] = rf_filter_coeff232_a;
				11'h5d1:
					rdata[7:0] = rf_filter_coeff232_b;
				11'h5d2:
					rdata[7:0] = rf_filter_coeff233_a;
				11'h5d3:
					rdata[7:0] = rf_filter_coeff233_b;
				11'h5d4:
					rdata[7:0] = rf_filter_coeff234_a;
				11'h5d5:
					rdata[7:0] = rf_filter_coeff234_b;
				11'h5d6:
					rdata[7:0] = rf_filter_coeff235_a;
				11'h5d7:
					rdata[7:0] = rf_filter_coeff235_b;
				11'h5d8:
					rdata[7:0] = rf_filter_coeff236_a;
				11'h5d9:
					rdata[7:0] = rf_filter_coeff236_b;
				11'h5da:
					rdata[7:0] = rf_filter_coeff237_a;
				11'h5db:
					rdata[7:0] = rf_filter_coeff237_b;
				11'h5dc:
					rdata[7:0] = rf_filter_coeff238_a;
				11'h5dd:
					rdata[7:0] = rf_filter_coeff238_b;
				11'h5de:
					rdata[7:0] = rf_filter_coeff239_a;
				11'h5df:
					rdata[7:0] = rf_filter_coeff239_b;
				11'h5e0:
					rdata[7:0] = rf_filter_coeff240_a;
				11'h5e1:
					rdata[7:0] = rf_filter_coeff240_b;
				11'h5e2:
					rdata[7:0] = rf_filter_coeff241_a;
				11'h5e3:
					rdata[7:0] = rf_filter_coeff241_b;
				11'h5e4:
					rdata[7:0] = rf_filter_coeff242_a;
				11'h5e5:
					rdata[7:0] = rf_filter_coeff242_b;
				11'h5e6:
					rdata[7:0] = rf_filter_coeff243_a;
				11'h5e7:
					rdata[7:0] = rf_filter_coeff243_b;
				11'h5e8:
					rdata[7:0] = rf_filter_coeff244_a;
				11'h5e9:
					rdata[7:0] = rf_filter_coeff244_b;
				11'h5ea:
					rdata[7:0] = rf_filter_coeff245_a;
				11'h5eb:
					rdata[7:0] = rf_filter_coeff245_b;
				11'h5ec:
					rdata[7:0] = rf_filter_coeff246_a;
				11'h5ed:
					rdata[7:0] = rf_filter_coeff246_b;
				11'h5ee:
					rdata[7:0] = rf_filter_coeff247_a;
				11'h5ef:
					rdata[7:0] = rf_filter_coeff247_b;
				11'h5f0:
					rdata[7:0] = rf_filter_coeff248_a;
				11'h5f1:
					rdata[7:0] = rf_filter_coeff248_b;
				11'h5f2:
					rdata[7:0] = rf_filter_coeff249_a;
				11'h5f3:
					rdata[7:0] = rf_filter_coeff249_b;
				11'h5f4:
					rdata[7:0] = rf_filter_coeff250_a;
				11'h5f5:
					rdata[7:0] = rf_filter_coeff250_b;
				11'h5f6:
					rdata[7:0] = rf_filter_coeff251_a;
				11'h5f7:
					rdata[7:0] = rf_filter_coeff251_b;
				11'h5f8:
					rdata[7:0] = rf_filter_coeff252_a;
				11'h5f9:
					rdata[7:0] = rf_filter_coeff252_b;
				11'h5fa:
					rdata[7:0] = rf_filter_coeff253_a;
				11'h5fb:
					rdata[7:0] = rf_filter_coeff253_b;
				11'h5fc:
					rdata[7:0] = rf_filter_coeff254_a;
				11'h5fd:
					rdata[7:0] = rf_filter_coeff254_b;
				11'h5fe:
					rdata[7:0] = rf_filter_coeff255_a;
				11'h5ff:
					rdata[7:0] = rf_filter_coeff255_b;
				11'h600:
					rdata[7:0] = rf_filter_coeff256_a;
				11'h601:
					rdata[7:0] = rf_filter_coeff256_b;
				11'h602:
					rdata[7:0] = rf_filter_coeff257_a;
				11'h603:
					rdata[7:0] = rf_filter_coeff257_b;
				11'h604:
					rdata[7:0] = rf_filter_coeff258_a;
				11'h605:
					rdata[7:0] = rf_filter_coeff258_b;
				11'h606:
					rdata[7:0] = rf_filter_coeff259_a;
				11'h607:
					rdata[7:0] = rf_filter_coeff259_b;
				11'h608:
					rdata[7:0] = rf_filter_coeff260_a;
				11'h609:
					rdata[7:0] = rf_filter_coeff260_b;
				11'h60a:
					rdata[7:0] = rf_filter_coeff261_a;
				11'h60b:
					rdata[7:0] = rf_filter_coeff261_b;
				11'h60c:
					rdata[7:0] = rf_filter_coeff262_a;
				11'h60d:
					rdata[7:0] = rf_filter_coeff262_b;
				11'h60e:
					rdata[7:0] = rf_filter_coeff263_a;
				11'h60f:
					rdata[7:0] = rf_filter_coeff263_b;
				11'h610:
					rdata[7:0] = rf_filter_coeff264_a;
				11'h611:
					rdata[7:0] = rf_filter_coeff264_b;
				11'h612:
					rdata[7:0] = rf_filter_coeff265_a;
				11'h613:
					rdata[7:0] = rf_filter_coeff265_b;
				11'h614:
					rdata[7:0] = rf_filter_coeff266_a;
				11'h615:
					rdata[7:0] = rf_filter_coeff266_b;
				11'h616:
					rdata[7:0] = rf_filter_coeff267_a;
				11'h617:
					rdata[7:0] = rf_filter_coeff267_b;
				11'h618:
					rdata[7:0] = rf_filter_coeff268_a;
				11'h619:
					rdata[7:0] = rf_filter_coeff268_b;
				11'h61a:
					rdata[7:0] = rf_filter_coeff269_a;
				11'h61b:
					rdata[7:0] = rf_filter_coeff269_b;
				11'h61c:
					rdata[7:0] = rf_filter_coeff270_a;
				11'h61d:
					rdata[7:0] = rf_filter_coeff270_b;
				11'h61e:
					rdata[7:0] = rf_filter_coeff271_a;
				11'h61f:
					rdata[7:0] = rf_filter_coeff271_b;
				11'h620:
					rdata[7:0] = rf_filter_coeff272_a;
				11'h621:
					rdata[7:0] = rf_filter_coeff272_b;
				11'h622:
					rdata[7:0] = rf_filter_coeff273_a;
				11'h623:
					rdata[7:0] = rf_filter_coeff273_b;
				11'h624:
					rdata[7:0] = rf_filter_coeff274_a;
				11'h625:
					rdata[7:0] = rf_filter_coeff274_b;
				11'h626:
					rdata[7:0] = rf_filter_coeff275_a;
				11'h627:
					rdata[7:0] = rf_filter_coeff275_b;
				11'h628:
					rdata[7:0] = rf_filter_coeff276_a;
				11'h629:
					rdata[7:0] = rf_filter_coeff276_b;
				11'h62a:
					rdata[7:0] = rf_filter_coeff277_a;
				11'h62b:
					rdata[7:0] = rf_filter_coeff277_b;
				11'h62c:
					rdata[7:0] = rf_filter_coeff278_a;
				11'h62d:
					rdata[7:0] = rf_filter_coeff278_b;
				11'h62e:
					rdata[7:0] = rf_filter_coeff279_a;
				11'h62f:
					rdata[7:0] = rf_filter_coeff279_b;
				11'h630:
					rdata[7:0] = rf_filter_coeff280_a;
				11'h631:
					rdata[7:0] = rf_filter_coeff280_b;
				11'h632:
					rdata[7:0] = rf_filter_coeff281_a;
				11'h633:
					rdata[7:0] = rf_filter_coeff281_b;
				11'h634:
					rdata[7:0] = rf_filter_coeff282_a;
				11'h635:
					rdata[7:0] = rf_filter_coeff282_b;
				11'h636:
					rdata[7:0] = rf_filter_coeff283_a;
				11'h637:
					rdata[7:0] = rf_filter_coeff283_b;
				11'h638:
					rdata[7:0] = rf_filter_coeff284_a;
				11'h639:
					rdata[7:0] = rf_filter_coeff284_b;
				11'h63a:
					rdata[7:0] = rf_filter_coeff285_a;
				11'h63b:
					rdata[7:0] = rf_filter_coeff285_b;
				11'h63c:
					rdata[7:0] = rf_filter_coeff286_a;
				11'h63d:
					rdata[7:0] = rf_filter_coeff286_b;
				11'h63e:
					rdata[7:0] = rf_filter_coeff287_a;
				11'h63f:
					rdata[7:0] = rf_filter_coeff287_b;
				11'h640:
					rdata[7:0] = rf_filter_coeff288_a;
				11'h641:
					rdata[7:0] = rf_filter_coeff288_b;
				11'h642:
					rdata[7:0] = rf_filter_coeff289_a;
				11'h643:
					rdata[7:0] = rf_filter_coeff289_b;
				11'h644:
					rdata[7:0] = rf_filter_coeff290_a;
				11'h645:
					rdata[7:0] = rf_filter_coeff290_b;
				11'h646:
					rdata[7:0] = rf_filter_coeff291_a;
				11'h647:
					rdata[7:0] = rf_filter_coeff291_b;
				11'h648:
					rdata[7:0] = rf_filter_coeff292_a;
				11'h649:
					rdata[7:0] = rf_filter_coeff292_b;
				11'h64a:
					rdata[7:0] = rf_filter_coeff293_a;
				11'h64b:
					rdata[7:0] = rf_filter_coeff293_b;
				11'h64c:
					rdata[7:0] = rf_filter_coeff294_a;
				11'h64d:
					rdata[7:0] = rf_filter_coeff294_b;
				11'h64e:
					rdata[7:0] = rf_filter_coeff295_a;
				11'h64f:
					rdata[7:0] = rf_filter_coeff295_b;
				11'h650:
					rdata[7:0] = rf_filter_coeff296_a;
				11'h651:
					rdata[7:0] = rf_filter_coeff296_b;
				11'h652:
					rdata[7:0] = rf_filter_coeff297_a;
				11'h653:
					rdata[7:0] = rf_filter_coeff297_b;
				11'h654:
					rdata[7:0] = rf_filter_coeff298_a;
				11'h655:
					rdata[7:0] = rf_filter_coeff298_b;
				11'h656:
					rdata[7:0] = rf_filter_coeff299_a;
				11'h657:
					rdata[7:0] = rf_filter_coeff299_b;
				11'h658:
					rdata[7:0] = rf_filter_coeff300_a;
				11'h659:
					rdata[7:0] = rf_filter_coeff300_b;
				11'h65a:
					rdata[7:0] = rf_filter_coeff301_a;
				11'h65b:
					rdata[7:0] = rf_filter_coeff301_b;
				11'h65c:
					rdata[7:0] = rf_filter_coeff302_a;
				11'h65d:
					rdata[7:0] = rf_filter_coeff302_b;
				11'h65e:
					rdata[7:0] = rf_filter_coeff303_a;
				11'h65f:
					rdata[7:0] = rf_filter_coeff303_b;
				11'h660:
					rdata[7:0] = rf_filter_coeff304_a;
				11'h661:
					rdata[7:0] = rf_filter_coeff304_b;
				11'h662:
					rdata[7:0] = rf_filter_coeff305_a;
				11'h663:
					rdata[7:0] = rf_filter_coeff305_b;
				11'h664:
					rdata[7:0] = rf_filter_coeff306_a;
				11'h665:
					rdata[7:0] = rf_filter_coeff306_b;
				11'h666:
					rdata[7:0] = rf_filter_coeff307_a;
				11'h667:
					rdata[7:0] = rf_filter_coeff307_b;
				11'h668:
					rdata[7:0] = rf_filter_coeff308_a;
				11'h669:
					rdata[7:0] = rf_filter_coeff308_b;
				11'h66a:
					rdata[7:0] = rf_filter_coeff309_a;
				11'h66b:
					rdata[7:0] = rf_filter_coeff309_b;
				11'h66c:
					rdata[7:0] = rf_filter_coeff310_a;
				11'h66d:
					rdata[7:0] = rf_filter_coeff310_b;
				11'h66e:
					rdata[7:0] = rf_filter_coeff311_a;
				11'h66f:
					rdata[7:0] = rf_filter_coeff311_b;
				11'h670:
					rdata[7:0] = rf_filter_coeff312_a;
				11'h671:
					rdata[7:0] = rf_filter_coeff312_b;
				11'h672:
					rdata[7:0] = rf_filter_coeff313_a;
				11'h673:
					rdata[7:0] = rf_filter_coeff313_b;
				11'h674:
					rdata[7:0] = rf_filter_coeff314_a;
				11'h675:
					rdata[7:0] = rf_filter_coeff314_b;
				11'h676:
					rdata[7:0] = rf_filter_coeff315_a;
				11'h677:
					rdata[7:0] = rf_filter_coeff315_b;
				11'h678:
					rdata[7:0] = rf_filter_coeff316_a;
				11'h679:
					rdata[7:0] = rf_filter_coeff316_b;
				11'h67a:
					rdata[7:0] = rf_filter_coeff317_a;
				11'h67b:
					rdata[7:0] = rf_filter_coeff317_b;
				11'h67c:
					rdata[7:0] = rf_filter_coeff318_a;
				11'h67d:
					rdata[7:0] = rf_filter_coeff318_b;
				11'h67e:
					rdata[7:0] = rf_filter_coeff319_a;
				11'h67f:
					rdata[7:0] = rf_filter_coeff319_b;
				11'h680:
					rdata[7:0] = rf_filter_coeff320_a;
				11'h681:
					rdata[7:0] = rf_filter_coeff320_b;
				11'h682:
					rdata[7:0] = rf_filter_coeff321_a;
				11'h683:
					rdata[7:0] = rf_filter_coeff321_b;
				11'h684:
					rdata[7:0] = rf_filter_coeff322_a;
				11'h685:
					rdata[7:0] = rf_filter_coeff322_b;
				11'h686:
					rdata[7:0] = rf_filter_coeff323_a;
				11'h687:
					rdata[7:0] = rf_filter_coeff323_b;
				11'h688:
					rdata[7:0] = rf_filter_coeff324_a;
				11'h689:
					rdata[7:0] = rf_filter_coeff324_b;
				11'h68a:
					rdata[7:0] = rf_filter_coeff325_a;
				11'h68b:
					rdata[7:0] = rf_filter_coeff325_b;
				11'h68c:
					rdata[7:0] = rf_filter_coeff326_a;
				11'h68d:
					rdata[7:0] = rf_filter_coeff326_b;
				11'h68e:
					rdata[7:0] = rf_filter_coeff327_a;
				11'h68f:
					rdata[7:0] = rf_filter_coeff327_b;
				11'h690:
					rdata[7:0] = rf_filter_coeff328_a;
				11'h691:
					rdata[7:0] = rf_filter_coeff328_b;
				11'h692:
					rdata[7:0] = rf_filter_coeff329_a;
				11'h693:
					rdata[7:0] = rf_filter_coeff329_b;
				11'h694:
					rdata[7:0] = rf_filter_coeff330_a;
				11'h695:
					rdata[7:0] = rf_filter_coeff330_b;
				11'h696:
					rdata[7:0] = rf_filter_coeff331_a;
				11'h697:
					rdata[7:0] = rf_filter_coeff331_b;
				11'h698:
					rdata[7:0] = rf_filter_coeff332_a;
				11'h699:
					rdata[7:0] = rf_filter_coeff332_b;
				11'h69a:
					rdata[7:0] = rf_filter_coeff333_a;
				11'h69b:
					rdata[7:0] = rf_filter_coeff333_b;
				11'h69c:
					rdata[7:0] = rf_filter_coeff334_a;
				11'h69d:
					rdata[7:0] = rf_filter_coeff334_b;
				11'h69e:
					rdata[7:0] = rf_filter_coeff335_a;
				11'h69f:
					rdata[7:0] = rf_filter_coeff335_b;
				11'h6a0:
					rdata[7:0] = rf_filter_coeff336_a;
				11'h6a1:
					rdata[7:0] = rf_filter_coeff336_b;
				11'h6a2:
					rdata[7:0] = rf_filter_coeff337_a;
				11'h6a3:
					rdata[7:0] = rf_filter_coeff337_b;
				11'h6a4:
					rdata[7:0] = rf_filter_coeff338_a;
				11'h6a5:
					rdata[7:0] = rf_filter_coeff338_b;
				11'h6a6:
					rdata[7:0] = rf_filter_coeff339_a;
				11'h6a7:
					rdata[7:0] = rf_filter_coeff339_b;
				11'h6a8:
					rdata[7:0] = rf_filter_coeff340_a;
				11'h6a9:
					rdata[7:0] = rf_filter_coeff340_b;
				11'h6aa:
					rdata[7:0] = rf_filter_coeff341_a;
				11'h6ab:
					rdata[7:0] = rf_filter_coeff341_b;
				11'h6ac:
					rdata[7:0] = rf_filter_coeff342_a;
				11'h6ad:
					rdata[7:0] = rf_filter_coeff342_b;
				11'h6ae:
					rdata[7:0] = rf_filter_coeff343_a;
				11'h6af:
					rdata[7:0] = rf_filter_coeff343_b;
				11'h6b0:
					rdata[7:0] = rf_filter_coeff344_a;
				11'h6b1:
					rdata[7:0] = rf_filter_coeff344_b;
				11'h6b2:
					rdata[7:0] = rf_filter_coeff345_a;
				11'h6b3:
					rdata[7:0] = rf_filter_coeff345_b;
				11'h6b4:
					rdata[7:0] = rf_filter_coeff346_a;
				11'h6b5:
					rdata[7:0] = rf_filter_coeff346_b;
				11'h6b6:
					rdata[7:0] = rf_filter_coeff347_a;
				11'h6b7:
					rdata[7:0] = rf_filter_coeff347_b;
				11'h6b8:
					rdata[7:0] = rf_filter_coeff348_a;
				11'h6b9:
					rdata[7:0] = rf_filter_coeff348_b;
				11'h6ba:
					rdata[7:0] = rf_filter_coeff349_a;
				11'h6bb:
					rdata[7:0] = rf_filter_coeff349_b;
				11'h6bc:
					rdata[7:0] = rf_filter_coeff350_a;
				11'h6bd:
					rdata[7:0] = rf_filter_coeff350_b;
				11'h6be:
					rdata[7:0] = rf_filter_coeff351_a;
				11'h6bf:
					rdata[7:0] = rf_filter_coeff351_b;
				11'h6c0:
					rdata[7:0] = rf_filter_coeff352_a;
				11'h6c1:
					rdata[7:0] = rf_filter_coeff352_b;
				11'h6c2:
					rdata[7:0] = rf_filter_coeff353_a;
				11'h6c3:
					rdata[7:0] = rf_filter_coeff353_b;
				11'h6c4:
					rdata[7:0] = rf_filter_coeff354_a;
				11'h6c5:
					rdata[7:0] = rf_filter_coeff354_b;
				11'h6c6:
					rdata[7:0] = rf_filter_coeff355_a;
				11'h6c7:
					rdata[7:0] = rf_filter_coeff355_b;
				11'h6c8:
					rdata[7:0] = rf_filter_coeff356_a;
				11'h6c9:
					rdata[7:0] = rf_filter_coeff356_b;
				11'h6ca:
					rdata[7:0] = rf_filter_coeff357_a;
				11'h6cb:
					rdata[7:0] = rf_filter_coeff357_b;
				11'h6cc:
					rdata[7:0] = rf_filter_coeff358_a;
				11'h6cd:
					rdata[7:0] = rf_filter_coeff358_b;
				11'h6ce:
					rdata[7:0] = rf_filter_coeff359_a;
				11'h6cf:
					rdata[7:0] = rf_filter_coeff359_b;
				11'h6d0:
					rdata[7:0] = rf_filter_coeff360_a;
				11'h6d1:
					rdata[7:0] = rf_filter_coeff360_b;
				11'h6d2:
					rdata[7:0] = rf_filter_coeff361_a;
				11'h6d3:
					rdata[7:0] = rf_filter_coeff361_b;
				11'h6d4:
					rdata[7:0] = rf_filter_coeff362_a;
				11'h6d5:
					rdata[7:0] = rf_filter_coeff362_b;
				11'h6d6:
					rdata[7:0] = rf_filter_coeff363_a;
				11'h6d7:
					rdata[7:0] = rf_filter_coeff363_b;
				11'h6d8:
					rdata[7:0] = rf_filter_coeff364_a;
				11'h6d9:
					rdata[7:0] = rf_filter_coeff364_b;
				11'h6da:
					rdata[7:0] = rf_filter_coeff365_a;
				11'h6db:
					rdata[7:0] = rf_filter_coeff365_b;
				11'h6dc:
					rdata[7:0] = rf_filter_coeff366_a;
				11'h6dd:
					rdata[7:0] = rf_filter_coeff366_b;
				11'h6de:
					rdata[7:0] = rf_filter_coeff367_a;
				11'h6df:
					rdata[7:0] = rf_filter_coeff367_b;
				11'h6e0:
					rdata[7:0] = rf_filter_coeff368_a;
				11'h6e1:
					rdata[7:0] = rf_filter_coeff368_b;
				11'h6e2:
					rdata[7:0] = rf_filter_coeff369_a;
				11'h6e3:
					rdata[7:0] = rf_filter_coeff369_b;
				11'h6e4:
					rdata[7:0] = rf_filter_coeff370_a;
				11'h6e5:
					rdata[7:0] = rf_filter_coeff370_b;
				11'h6e6:
					rdata[7:0] = rf_filter_coeff371_a;
				11'h6e7:
					rdata[7:0] = rf_filter_coeff371_b;
				11'h6e8:
					rdata[7:0] = rf_filter_coeff372_a;
				11'h6e9:
					rdata[7:0] = rf_filter_coeff372_b;
				11'h6ea:
					rdata[7:0] = rf_filter_coeff373_a;
				11'h6eb:
					rdata[7:0] = rf_filter_coeff373_b;
				11'h6ec:
					rdata[7:0] = rf_filter_coeff374_a;
				11'h6ed:
					rdata[7:0] = rf_filter_coeff374_b;
				11'h6ee:
					rdata[7:0] = rf_filter_coeff375_a;
				11'h6ef:
					rdata[7:0] = rf_filter_coeff375_b;
				11'h6f0:
					rdata[7:0] = rf_filter_coeff376_a;
				11'h6f1:
					rdata[7:0] = rf_filter_coeff376_b;
				11'h6f2:
					rdata[7:0] = rf_filter_coeff377_a;
				11'h6f3:
					rdata[7:0] = rf_filter_coeff377_b;
				11'h6f4:
					rdata[7:0] = rf_filter_coeff378_a;
				11'h6f5:
					rdata[7:0] = rf_filter_coeff378_b;
				11'h6f6:
					rdata[7:0] = rf_filter_coeff379_a;
				11'h6f7:
					rdata[7:0] = rf_filter_coeff379_b;
				11'h6f8:
					rdata[7:0] = rf_filter_coeff380_a;
				11'h6f9:
					rdata[7:0] = rf_filter_coeff380_b;
				11'h6fa:
					rdata[7:0] = rf_filter_coeff381_a;
				11'h6fb:
					rdata[7:0] = rf_filter_coeff381_b;
				11'h6fc:
					rdata[7:0] = rf_filter_coeff382_a;
				11'h6fd:
					rdata[7:0] = rf_filter_coeff382_b;
				11'h6fe:
					rdata[7:0] = rf_filter_coeff383_a;
				11'h6ff:
					rdata[7:0] = rf_filter_coeff383_b;
				11'h700:
					rdata[7:0] = rf_filter_coeff384_a;
				11'h701:
					rdata[7:0] = rf_filter_coeff384_b;
				11'h702:
					rdata[7:0] = rf_filter_coeff385_a;
				11'h703:
					rdata[7:0] = rf_filter_coeff385_b;
				11'h704:
					rdata[7:0] = rf_filter_coeff386_a;
				11'h705:
					rdata[7:0] = rf_filter_coeff386_b;
				11'h706:
					rdata[7:0] = rf_filter_coeff387_a;
				11'h707:
					rdata[7:0] = rf_filter_coeff387_b;
				11'h708:
					rdata[7:0] = rf_filter_coeff388_a;
				11'h709:
					rdata[7:0] = rf_filter_coeff388_b;
				11'h70a:
					rdata[7:0] = rf_filter_coeff389_a;
				11'h70b:
					rdata[7:0] = rf_filter_coeff389_b;
				11'h70c:
					rdata[7:0] = rf_filter_coeff390_a;
				11'h70d:
					rdata[7:0] = rf_filter_coeff390_b;
				11'h70e:
					rdata[7:0] = rf_filter_coeff391_a;
				11'h70f:
					rdata[7:0] = rf_filter_coeff391_b;
				11'h710:
					rdata[7:0] = rf_filter_coeff392_a;
				11'h711:
					rdata[7:0] = rf_filter_coeff392_b;
				11'h712:
					rdata[7:0] = rf_filter_coeff393_a;
				11'h713:
					rdata[7:0] = rf_filter_coeff393_b;
				11'h714:
					rdata[7:0] = rf_filter_coeff394_a;
				11'h715:
					rdata[7:0] = rf_filter_coeff394_b;
				11'h716:
					rdata[7:0] = rf_filter_coeff395_a;
				11'h717:
					rdata[7:0] = rf_filter_coeff395_b;
				11'h718:
					rdata[7:0] = rf_filter_coeff396_a;
				11'h719:
					rdata[7:0] = rf_filter_coeff396_b;
				11'h71a:
					rdata[7:0] = rf_filter_coeff397_a;
				11'h71b:
					rdata[7:0] = rf_filter_coeff397_b;
				11'h71c:
					rdata[7:0] = rf_filter_coeff398_a;
				11'h71d:
					rdata[7:0] = rf_filter_coeff398_b;
				11'h71e:
					rdata[7:0] = rf_filter_coeff399_a;
				11'h71f:
					rdata[7:0] = rf_filter_coeff399_b;
				11'h720:
					rdata[7:0] = rf_filter_coeff400_a;
				11'h721:
					rdata[7:0] = rf_filter_coeff400_b;
				11'h722:
					rdata[7:0] = rf_filter_coeff401_a;
				11'h723:
					rdata[7:0] = rf_filter_coeff401_b;
				11'h724:
					rdata[7:0] = rf_filter_coeff402_a;
				11'h725:
					rdata[7:0] = rf_filter_coeff402_b;
				11'h726:
					rdata[7:0] = rf_filter_coeff403_a;
				11'h727:
					rdata[7:0] = rf_filter_coeff403_b;
				11'h728:
					rdata[7:0] = rf_filter_coeff404_a;
				11'h729:
					rdata[7:0] = rf_filter_coeff404_b;
				11'h72a:
					rdata[7:0] = rf_filter_coeff405_a;
				11'h72b:
					rdata[7:0] = rf_filter_coeff405_b;
				11'h72c:
					rdata[7:0] = rf_filter_coeff406_a;
				11'h72d:
					rdata[7:0] = rf_filter_coeff406_b;
				11'h72e:
					rdata[7:0] = rf_filter_coeff407_a;
				11'h72f:
					rdata[7:0] = rf_filter_coeff407_b;
				11'h730:
					rdata[7:0] = rf_filter_coeff408_a;
				11'h731:
					rdata[7:0] = rf_filter_coeff408_b;
				11'h732:
					rdata[7:0] = rf_filter_coeff409_a;
				11'h733:
					rdata[7:0] = rf_filter_coeff409_b;
				11'h734:
					rdata[7:0] = rf_filter_coeff410_a;
				11'h735:
					rdata[7:0] = rf_filter_coeff410_b;
				11'h736:
					rdata[7:0] = rf_filter_coeff411_a;
				11'h737:
					rdata[7:0] = rf_filter_coeff411_b;
				11'h738:
					rdata[7:0] = rf_filter_coeff412_a;
				11'h739:
					rdata[7:0] = rf_filter_coeff412_b;
				11'h73a:
					rdata[7:0] = rf_filter_coeff413_a;
				11'h73b:
					rdata[7:0] = rf_filter_coeff413_b;
				11'h73c:
					rdata[7:0] = rf_filter_coeff414_a;
				11'h73d:
					rdata[7:0] = rf_filter_coeff414_b;
				11'h73e:
					rdata[7:0] = rf_filter_coeff415_a;
				11'h73f:
					rdata[7:0] = rf_filter_coeff415_b;
				11'h740:
					rdata[7:0] = rf_filter_coeff416_a;
				11'h741:
					rdata[7:0] = rf_filter_coeff416_b;
				11'h742:
					rdata[7:0] = rf_filter_coeff417_a;
				11'h743:
					rdata[7:0] = rf_filter_coeff417_b;
				11'h744:
					rdata[7:0] = rf_filter_coeff418_a;
				11'h745:
					rdata[7:0] = rf_filter_coeff418_b;
				11'h746:
					rdata[7:0] = rf_filter_coeff419_a;
				11'h747:
					rdata[7:0] = rf_filter_coeff419_b;
				11'h748:
					rdata[7:0] = rf_filter_coeff420_a;
				11'h749:
					rdata[7:0] = rf_filter_coeff420_b;
				11'h74a:
					rdata[7:0] = rf_filter_coeff421_a;
				11'h74b:
					rdata[7:0] = rf_filter_coeff421_b;
				11'h74c:
					rdata[7:0] = rf_filter_coeff422_a;
				11'h74d:
					rdata[7:0] = rf_filter_coeff422_b;
				11'h74e:
					rdata[7:0] = rf_filter_coeff423_a;
				11'h74f:
					rdata[7:0] = rf_filter_coeff423_b;
				11'h750:
					rdata[7:0] = rf_filter_coeff424_a;
				11'h751:
					rdata[7:0] = rf_filter_coeff424_b;
				11'h752:
					rdata[7:0] = rf_filter_coeff425_a;
				11'h753:
					rdata[7:0] = rf_filter_coeff425_b;
				11'h754:
					rdata[7:0] = rf_filter_coeff426_a;
				11'h755:
					rdata[7:0] = rf_filter_coeff426_b;
				11'h756:
					rdata[7:0] = rf_filter_coeff427_a;
				11'h757:
					rdata[7:0] = rf_filter_coeff427_b;
				11'h758:
					rdata[7:0] = rf_filter_coeff428_a;
				11'h759:
					rdata[7:0] = rf_filter_coeff428_b;
				11'h75a:
					rdata[7:0] = rf_filter_coeff429_a;
				11'h75b:
					rdata[7:0] = rf_filter_coeff429_b;
				11'h75c:
					rdata[7:0] = rf_filter_coeff430_a;
				11'h75d:
					rdata[7:0] = rf_filter_coeff430_b;
				11'h75e:
					rdata[7:0] = rf_filter_coeff431_a;
				11'h75f:
					rdata[7:0] = rf_filter_coeff431_b;
				11'h760:
					rdata[7:0] = rf_filter_coeff432_a;
				11'h761:
					rdata[7:0] = rf_filter_coeff432_b;
				11'h762:
					rdata[7:0] = rf_filter_coeff433_a;
				11'h763:
					rdata[7:0] = rf_filter_coeff433_b;
				11'h764:
					rdata[7:0] = rf_filter_coeff434_a;
				11'h765:
					rdata[7:0] = rf_filter_coeff434_b;
				11'h766:
					rdata[7:0] = rf_filter_coeff435_a;
				11'h767:
					rdata[7:0] = rf_filter_coeff435_b;
				11'h768:
					rdata[7:0] = rf_filter_coeff436_a;
				11'h769:
					rdata[7:0] = rf_filter_coeff436_b;
				11'h76a:
					rdata[7:0] = rf_filter_coeff437_a;
				11'h76b:
					rdata[7:0] = rf_filter_coeff437_b;
				11'h76c:
					rdata[7:0] = rf_filter_coeff438_a;
				11'h76d:
					rdata[7:0] = rf_filter_coeff438_b;
				11'h76e:
					rdata[7:0] = rf_filter_coeff439_a;
				11'h76f:
					rdata[7:0] = rf_filter_coeff439_b;
				11'h770:
					rdata[7:0] = rf_filter_coeff440_a;
				11'h771:
					rdata[7:0] = rf_filter_coeff440_b;
				11'h772:
					rdata[7:0] = rf_filter_coeff441_a;
				11'h773:
					rdata[7:0] = rf_filter_coeff441_b;
				11'h774:
					rdata[7:0] = rf_filter_coeff442_a;
				11'h775:
					rdata[7:0] = rf_filter_coeff442_b;
				11'h776:
					rdata[7:0] = rf_filter_coeff443_a;
				11'h777:
					rdata[7:0] = rf_filter_coeff443_b;
				11'h778:
					rdata[7:0] = rf_filter_coeff444_a;
				11'h779:
					rdata[7:0] = rf_filter_coeff444_b;
				11'h77a:
					rdata[7:0] = rf_filter_coeff445_a;
				11'h77b:
					rdata[7:0] = rf_filter_coeff445_b;
				11'h77c:
					rdata[7:0] = rf_filter_coeff446_a;
				11'h77d:
					rdata[7:0] = rf_filter_coeff446_b;
				11'h77e:
					rdata[7:0] = rf_filter_coeff447_a;
				11'h77f:
					rdata[7:0] = rf_filter_coeff447_b;
				11'h780:
					rdata[7:0] = rf_filter_coeff448_a;
				11'h781:
					rdata[7:0] = rf_filter_coeff448_b;
				11'h782:
					rdata[7:0] = rf_filter_coeff449_a;
				11'h783:
					rdata[7:0] = rf_filter_coeff449_b;
				11'h784:
					rdata[7:0] = rf_filter_coeff450_a;
				11'h785:
					rdata[7:0] = rf_filter_coeff450_b;
				11'h786:
					rdata[7:0] = rf_filter_coeff451_a;
				11'h787:
					rdata[7:0] = rf_filter_coeff451_b;
				11'h788:
					rdata[7:0] = rf_filter_coeff452_a;
				11'h789:
					rdata[7:0] = rf_filter_coeff452_b;
				11'h78a:
					rdata[7:0] = rf_filter_coeff453_a;
				11'h78b:
					rdata[7:0] = rf_filter_coeff453_b;
				11'h78c:
					rdata[7:0] = rf_filter_coeff454_a;
				11'h78d:
					rdata[7:0] = rf_filter_coeff454_b;
				11'h78e:
					rdata[7:0] = rf_filter_coeff455_a;
				11'h78f:
					rdata[7:0] = rf_filter_coeff455_b;
				11'h790:
					rdata[7:0] = rf_filter_coeff456_a;
				11'h791:
					rdata[7:0] = rf_filter_coeff456_b;
				11'h792:
					rdata[7:0] = rf_filter_coeff457_a;
				11'h793:
					rdata[7:0] = rf_filter_coeff457_b;
				11'h794:
					rdata[7:0] = rf_filter_coeff458_a;
				11'h795:
					rdata[7:0] = rf_filter_coeff458_b;
				11'h796:
					rdata[7:0] = rf_filter_coeff459_a;
				11'h797:
					rdata[7:0] = rf_filter_coeff459_b;
				11'h798:
					rdata[7:0] = rf_filter_coeff460_a;
				11'h799:
					rdata[7:0] = rf_filter_coeff460_b;
				11'h79a:
					rdata[7:0] = rf_filter_coeff461_a;
				11'h79b:
					rdata[7:0] = rf_filter_coeff461_b;
				11'h79c:
					rdata[7:0] = rf_filter_coeff462_a;
				11'h79d:
					rdata[7:0] = rf_filter_coeff462_b;
				11'h79e:
					rdata[7:0] = rf_filter_coeff463_a;
				11'h79f:
					rdata[7:0] = rf_filter_coeff463_b;
				11'h7a0:
					rdata[7:0] = rf_filter_coeff464_a;
				11'h7a1:
					rdata[7:0] = rf_filter_coeff464_b;
				11'h7a2:
					rdata[7:0] = rf_filter_coeff465_a;
				11'h7a3:
					rdata[7:0] = rf_filter_coeff465_b;
				11'h7a4:
					rdata[7:0] = rf_filter_coeff466_a;
				11'h7a5:
					rdata[7:0] = rf_filter_coeff466_b;
				11'h7a6:
					rdata[7:0] = rf_filter_coeff467_a;
				11'h7a7:
					rdata[7:0] = rf_filter_coeff467_b;
				11'h7a8:
					rdata[7:0] = rf_filter_coeff468_a;
				11'h7a9:
					rdata[7:0] = rf_filter_coeff468_b;
				11'h7aa:
					rdata[7:0] = rf_filter_coeff469_a;
				11'h7ab:
					rdata[7:0] = rf_filter_coeff469_b;
				11'h7ac:
					rdata[7:0] = rf_filter_coeff470_a;
				11'h7ad:
					rdata[7:0] = rf_filter_coeff470_b;
				11'h7ae:
					rdata[7:0] = rf_filter_coeff471_a;
				11'h7af:
					rdata[7:0] = rf_filter_coeff471_b;
				11'h7b0:
					rdata[7:0] = rf_filter_coeff472_a;
				11'h7b1:
					rdata[7:0] = rf_filter_coeff472_b;
				11'h7b2:
					rdata[7:0] = rf_filter_coeff473_a;
				11'h7b3:
					rdata[7:0] = rf_filter_coeff473_b;
				11'h7b4:
					rdata[7:0] = rf_filter_coeff474_a;
				11'h7b5:
					rdata[7:0] = rf_filter_coeff474_b;
				11'h7b6:
					rdata[7:0] = rf_filter_coeff475_a;
				11'h7b7:
					rdata[7:0] = rf_filter_coeff475_b;
				11'h7b8:
					rdata[7:0] = rf_filter_coeff476_a;
				11'h7b9:
					rdata[7:0] = rf_filter_coeff476_b;
				11'h7ba:
					rdata[7:0] = rf_filter_coeff477_a;
				11'h7bb:
					rdata[7:0] = rf_filter_coeff477_b;
				11'h7bc:
					rdata[7:0] = rf_filter_coeff478_a;
				11'h7bd:
					rdata[7:0] = rf_filter_coeff478_b;
				11'h7be:
					rdata[7:0] = rf_filter_coeff479_a;
				11'h7bf:
					rdata[7:0] = rf_filter_coeff479_b;
				11'h7c0:
					rdata[7:0] = rf_filter_coeff480_a;
				11'h7c1:
					rdata[7:0] = rf_filter_coeff480_b;
				11'h7c2:
					rdata[7:0] = rf_filter_coeff481_a;
				11'h7c3:
					rdata[7:0] = rf_filter_coeff481_b;
				11'h7c4:
					rdata[7:0] = rf_filter_coeff482_a;
				11'h7c5:
					rdata[7:0] = rf_filter_coeff482_b;
				11'h7c6:
					rdata[7:0] = rf_filter_coeff483_a;
				11'h7c7:
					rdata[7:0] = rf_filter_coeff483_b;
				11'h7c8:
					rdata[7:0] = rf_filter_coeff484_a;
				11'h7c9:
					rdata[7:0] = rf_filter_coeff484_b;
				11'h7ca:
					rdata[7:0] = rf_filter_coeff485_a;
				11'h7cb:
					rdata[7:0] = rf_filter_coeff485_b;
				11'h7cc:
					rdata[7:0] = rf_filter_coeff486_a;
				11'h7cd:
					rdata[7:0] = rf_filter_coeff486_b;
				11'h7ce:
					rdata[7:0] = rf_filter_coeff487_a;
				11'h7cf:
					rdata[7:0] = rf_filter_coeff487_b;
				11'h7d0:
					rdata[7:0] = rf_filter_coeff488_a;
				11'h7d1:
					rdata[7:0] = rf_filter_coeff488_b;
				11'h7d2:
					rdata[7:0] = rf_filter_coeff489_a;
				11'h7d3:
					rdata[7:0] = rf_filter_coeff489_b;
				11'h7d4:
					rdata[7:0] = rf_filter_coeff490_a;
				11'h7d5:
					rdata[7:0] = rf_filter_coeff490_b;
				11'h7d6:
					rdata[7:0] = rf_filter_coeff491_a;
				11'h7d7:
					rdata[7:0] = rf_filter_coeff491_b;
				11'h7d8:
					rdata[7:0] = rf_filter_coeff492_a;
				11'h7d9:
					rdata[7:0] = rf_filter_coeff492_b;
				11'h7da:
					rdata[7:0] = rf_filter_coeff493_a;
				11'h7db:
					rdata[7:0] = rf_filter_coeff493_b;
				11'h7dc:
					rdata[7:0] = rf_filter_coeff494_a;
				11'h7dd:
					rdata[7:0] = rf_filter_coeff494_b;
				11'h7de:
					rdata[7:0] = rf_filter_coeff495_a;
				11'h7df:
					rdata[7:0] = rf_filter_coeff495_b;
				11'h7e0:
					rdata[7:0] = rf_filter_coeff496_a;
				11'h7e1:
					rdata[7:0] = rf_filter_coeff496_b;
				11'h7e2:
					rdata[7:0] = rf_filter_coeff497_a;
				11'h7e3:
					rdata[7:0] = rf_filter_coeff497_b;
				11'h7e4:
					rdata[7:0] = rf_filter_coeff498_a;
				11'h7e5:
					rdata[7:0] = rf_filter_coeff498_b;
				11'h7e6:
					rdata[7:0] = rf_filter_coeff499_a;
				11'h7e7:
					rdata[7:0] = rf_filter_coeff499_b;
				11'h7e8:
					rdata[7:0] = rf_filter_coeff500_a;
				11'h7e9:
					rdata[7:0] = rf_filter_coeff500_b;
				11'h7ea:
					rdata[7:0] = rf_filter_coeff501_a;
				11'h7eb:
					rdata[7:0] = rf_filter_coeff501_b;
				11'h7ec:
					rdata[7:0] = rf_filter_coeff502_a;
				11'h7ed:
					rdata[7:0] = rf_filter_coeff502_b;
				11'h7ee:
					rdata[7:0] = rf_filter_coeff503_a;
				11'h7ef:
					rdata[7:0] = rf_filter_coeff503_b;
				11'h7f0:
					rdata[7:0] = rf_filter_coeff504_a;
				11'h7f1:
					rdata[7:0] = rf_filter_coeff504_b;
				11'h7f2:
					rdata[7:0] = rf_filter_coeff505_a;
				11'h7f3:
					rdata[7:0] = rf_filter_coeff505_b;
				11'h7f4:
					rdata[7:0] = rf_filter_coeff506_a;
				11'h7f5:
					rdata[7:0] = rf_filter_coeff506_b;
				11'h7f6:
					rdata[7:0] = rf_filter_coeff507_a;
				11'h7f7:
					rdata[7:0] = rf_filter_coeff507_b;
				11'h7f8:
					rdata[7:0] = rf_filter_coeff508_a;
				11'h7f9:
					rdata[7:0] = rf_filter_coeff508_b;
				11'h7fa:
					rdata[7:0] = rf_filter_coeff509_a;
				11'h7fb:
					rdata[7:0] = rf_filter_coeff509_b;
				11'h7fc:
					rdata[7:0] = rf_filter_coeff510_a;
				11'h7fd:
					rdata[7:0] = rf_filter_coeff510_b;
				11'h7fe:
					rdata[7:0] = rf_filter_coeff511_a;
				11'h7ff:
					rdata[7:0] = rf_filter_coeff511_b;
			endcase
		end
endmodule 