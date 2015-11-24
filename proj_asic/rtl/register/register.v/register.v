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
	 input i2c_xfc_write,
	 input ro_i2c_reg_indir_data, ro_fifo_underrun, ro_fifo_overrun,
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
		rf_soft_reset <= 11'h000;
		rf_i2si_bist_en <= 11'h001;
		rf_filter_shift <= 11'h00f;
		rf_filter_clip_en <= 11'h001;
		rf_i2si_dec_factor <= 11'h000;
		rf_i2so_dec_factor <= 11'h000;
		rf_i2so_clk2sck_div_a <= 11'h040;
		rf_i2so_clk2sck_div_b <= 11'h040;
		trig_fifo_overrun <= 11'h000; //NA?
		ro_fifo_overrun <= 11'h000; 
		trig_fifo_underrun <= 11'h000; //NA?
		ro_fifo_underrun <= 11'h000;
		rf_i2si_bist_incr <= 11'h010;
		rf_i2si_bist_start_val_a <= 11'h800;
		rf_i2si_bist_start_val_b <= 11'h800;
		rf_i2si_bist_upper_limit_a <= 11'h7ff;
		rf_i2si_bist_upper_limit_b <= 11'h7ff;
		rf_i2c_reg_indir_addr_a <= 11'h000;
		rf_i2c_reg_indir_addr_b <= 11'h000;
		rf_filter_coeff0_a <= 16'h000;
		rf_filter_coeff0_b <= 16'h000;
		rf_filter_coeff1_a <= 16'h000;
		rf_filter_coeff1_b <= 16'h000;
		rf_filter_coeff2_a <= 16'h000;
		rf_filter_coeff2_b <= 16'h000;
		rf_filter_coeff3_a <= 16'h000;
		rf_filter_coeff3_b <= 16'h000;
		rf_filter_coeff4_a <= 16'h000;
		rf_filter_coeff4_b <= 16'h000;
		rf_filter_coeff5_a <= 16'h000;
		rf_filter_coeff5_b <= 16'h000;
		rf_filter_coeff6_a <= 16'h000;
		rf_filter_coeff6_b <= 16'h000;
		rf_filter_coeff7_a <= 16'h000;
		rf_filter_coeff7_b <= 16'h000;
		rf_filter_coeff8_a <= 16'h000;
		rf_filter_coeff8_b <= 16'h000;
		rf_filter_coeff9_a <= 16'h000;
		rf_filter_coeff9_b <= 16'h000;
		rf_filter_coeff10_a <= 16'h000;
		rf_filter_coeff10_b <= 16'h000;
		rf_filter_coeff11_a <= 16'h000;
		rf_filter_coeff11_b <= 16'h000;
		rf_filter_coeff12_a <= 16'h000;
		rf_filter_coeff12_b <= 16'h000;
		rf_filter_coeff13_a <= 16'h000;
		rf_filter_coeff13_b <= 16'h000;
		rf_filter_coeff14_a <= 16'h000;
		rf_filter_coeff14_b <= 16'h000;
		rf_filter_coeff15_a <= 16'h000;
		rf_filter_coeff15_b <= 16'h000;
		rf_filter_coeff16_a <= 16'h000;
		rf_filter_coeff16_b <= 16'h000;
		rf_filter_coeff17_a <= 16'h000;
		rf_filter_coeff17_b <= 16'h000;
		rf_filter_coeff18_a <= 16'h000;
		rf_filter_coeff18_b <= 16'h000;
		rf_filter_coeff19_a <= 16'h000;
		rf_filter_coeff19_b <= 16'h000;
		rf_filter_coeff20_a <= 16'h000;
		rf_filter_coeff20_b <= 16'h000;
		rf_filter_coeff21_a <= 16'h000;
		rf_filter_coeff21_b <= 16'h000;
		rf_filter_coeff22_a <= 16'h000;
		rf_filter_coeff22_b <= 16'h000;
		rf_filter_coeff23_a <= 16'h000;
		rf_filter_coeff23_b <= 16'h000;
		rf_filter_coeff24_a <= 16'h000;
		rf_filter_coeff24_b <= 16'h000;
		rf_filter_coeff25_a <= 16'h000;
		rf_filter_coeff25_b <= 16'h000;
		rf_filter_coeff26_a <= 16'h000;
		rf_filter_coeff26_b <= 16'h000;
		rf_filter_coeff27_a <= 16'h000;
		rf_filter_coeff27_b <= 16'h000;
		rf_filter_coeff28_a <= 16'h000;
		rf_filter_coeff28_b <= 16'h000;
		rf_filter_coeff29_a <= 16'h000;
		rf_filter_coeff29_b <= 16'h000;
		rf_filter_coeff30_a <= 16'h000;
		rf_filter_coeff30_b <= 16'h000;
		rf_filter_coeff31_a <= 16'h000;
		rf_filter_coeff31_b <= 16'h000;
		rf_filter_coeff32_a <= 16'h000;
		rf_filter_coeff32_b <= 16'h000;
		rf_filter_coeff33_a <= 16'h000;
		rf_filter_coeff33_b <= 16'h000;
		rf_filter_coeff34_a <= 16'h000;
		rf_filter_coeff34_b <= 16'h000;
		rf_filter_coeff35_a <= 16'h000;
		rf_filter_coeff35_b <= 16'h000;
		rf_filter_coeff36_a <= 16'h000;
		rf_filter_coeff36_b <= 16'h000;
		rf_filter_coeff37_a <= 16'h000;
		rf_filter_coeff37_b <= 16'h000;
		rf_filter_coeff38_a <= 16'h000;
		rf_filter_coeff38_b <= 16'h000;
		rf_filter_coeff39_a <= 16'h000;
		rf_filter_coeff39_b <= 16'h000;
		rf_filter_coeff40_a <= 16'h000;
		rf_filter_coeff40_b <= 16'h000;
		rf_filter_coeff41_a <= 16'h000;
		rf_filter_coeff41_b <= 16'h000;
		rf_filter_coeff42_a <= 16'h000;
		rf_filter_coeff42_b <= 16'h000;
		rf_filter_coeff43_a <= 16'h000;
		rf_filter_coeff43_b <= 16'h000;
		rf_filter_coeff44_a <= 16'h000;
		rf_filter_coeff44_b <= 16'h000;
		rf_filter_coeff45_a <= 16'h000;
		rf_filter_coeff45_b <= 16'h000;
		rf_filter_coeff46_a <= 16'h000;
		rf_filter_coeff46_b <= 16'h000;
		rf_filter_coeff47_a <= 16'h000;
		rf_filter_coeff47_b <= 16'h000;
		rf_filter_coeff48_a <= 16'h000;
		rf_filter_coeff48_b <= 16'h000;
		rf_filter_coeff49_a <= 16'h000;
		rf_filter_coeff49_b <= 16'h000;
		rf_filter_coeff50_a <= 16'h000;
		rf_filter_coeff50_b <= 16'h000;
		rf_filter_coeff51_a <= 16'h000;
		rf_filter_coeff51_b <= 16'h000;
		rf_filter_coeff52_a <= 16'h000;
		rf_filter_coeff52_b <= 16'h000;
		rf_filter_coeff53_a <= 16'h000;
		rf_filter_coeff53_b <= 16'h000;
		rf_filter_coeff54_a <= 16'h000;
		rf_filter_coeff54_b <= 16'h000;
		rf_filter_coeff55_a <= 16'h000;
		rf_filter_coeff55_b <= 16'h000;
		rf_filter_coeff56_a <= 16'h000;
		rf_filter_coeff56_b <= 16'h000;
		rf_filter_coeff57_a <= 16'h000;
		rf_filter_coeff57_b <= 16'h000;
		rf_filter_coeff58_a <= 16'h000;
		rf_filter_coeff58_b <= 16'h000;
		rf_filter_coeff59_a <= 16'h000;
		rf_filter_coeff59_b <= 16'h000;
		rf_filter_coeff60_a <= 16'h000;
		rf_filter_coeff60_b <= 16'h000;
		rf_filter_coeff61_a <= 16'h000;
		rf_filter_coeff61_b <= 16'h000;
		rf_filter_coeff62_a <= 16'h000;
		rf_filter_coeff62_b <= 16'h000;
		rf_filter_coeff63_a <= 16'h000;
		rf_filter_coeff63_b <= 16'h000;
		rf_filter_coeff64_a <= 16'h000;
		rf_filter_coeff64_b <= 16'h000;
		rf_filter_coeff65_a <= 16'h000;
		rf_filter_coeff65_b <= 16'h000;
		rf_filter_coeff66_a <= 16'h000;
		rf_filter_coeff66_b <= 16'h000;
		rf_filter_coeff67_a <= 16'h000;
		rf_filter_coeff67_b <= 16'h000;
		rf_filter_coeff68_a <= 16'h000;
		rf_filter_coeff68_b <= 16'h000;
		rf_filter_coeff69_a <= 16'h000;
		rf_filter_coeff69_b <= 16'h000;
		rf_filter_coeff70_a <= 16'h000;
		rf_filter_coeff70_b <= 16'h000;
		rf_filter_coeff71_a <= 16'h000;
		rf_filter_coeff71_b <= 16'h000;
		rf_filter_coeff72_a <= 16'h000;
		rf_filter_coeff72_b <= 16'h000;
		rf_filter_coeff73_a <= 16'h000;
		rf_filter_coeff73_b <= 16'h000;
		rf_filter_coeff74_a <= 16'h000;
		rf_filter_coeff74_b <= 16'h000;
		rf_filter_coeff75_a <= 16'h000;
		rf_filter_coeff75_b <= 16'h000;
		rf_filter_coeff76_a <= 16'h000;
		rf_filter_coeff76_b <= 16'h000;
		rf_filter_coeff77_a <= 16'h000;
		rf_filter_coeff77_b <= 16'h000;
		rf_filter_coeff78_a <= 16'h000;
		rf_filter_coeff78_b <= 16'h000;
		rf_filter_coeff79_a <= 16'h000;
		rf_filter_coeff79_b <= 16'h000;
		rf_filter_coeff80_a <= 16'h000;
		rf_filter_coeff80_b <= 16'h000;
		rf_filter_coeff81_a <= 16'h000;
		rf_filter_coeff81_b <= 16'h000;
		rf_filter_coeff82_a <= 16'h000;
		rf_filter_coeff82_b <= 16'h000;
		rf_filter_coeff83_a <= 16'h000;
		rf_filter_coeff83_b <= 16'h000;
		rf_filter_coeff84_a <= 16'h000;
		rf_filter_coeff84_b <= 16'h000;
		rf_filter_coeff85_a <= 16'h000;
		rf_filter_coeff85_b <= 16'h000;
		rf_filter_coeff86_a <= 16'h000;
		rf_filter_coeff86_b <= 16'h000;
		rf_filter_coeff87_a <= 16'h000;
		rf_filter_coeff87_b <= 16'h000;
		rf_filter_coeff88_a <= 16'h000;
		rf_filter_coeff88_b <= 16'h000;
		rf_filter_coeff89_a <= 16'h000;
		rf_filter_coeff89_b <= 16'h000;
		rf_filter_coeff90_a <= 16'h000;
		rf_filter_coeff90_b <= 16'h000;
		rf_filter_coeff91_a <= 16'h000;
		rf_filter_coeff91_b <= 16'h000;
		rf_filter_coeff92_a <= 16'h000;
		rf_filter_coeff92_b <= 16'h000;
		rf_filter_coeff93_a <= 16'h000;
		rf_filter_coeff93_b <= 16'h000;
		rf_filter_coeff94_a <= 16'h000;
		rf_filter_coeff94_b <= 16'h000;
		rf_filter_coeff95_a <= 16'h000;
		rf_filter_coeff95_b <= 16'h000;
		rf_filter_coeff96_a <= 16'h000;
		rf_filter_coeff96_b <= 16'h000;
		rf_filter_coeff97_a <= 16'h000;
		rf_filter_coeff97_b <= 16'h000;
		rf_filter_coeff98_a <= 16'h000;
		rf_filter_coeff98_b <= 16'h000;
		rf_filter_coeff99_a <= 16'h000;
		rf_filter_coeff99_b <= 16'h000;
		rf_filter_coeff100_a <= 16'h000;
		rf_filter_coeff100_b <= 16'h000;
		rf_filter_coeff101_a <= 16'h000;
		rf_filter_coeff101_b <= 16'h000;
		rf_filter_coeff102_a <= 16'h000;
		rf_filter_coeff102_b <= 16'h000;
		rf_filter_coeff103_a <= 16'h000;
		rf_filter_coeff103_b <= 16'h000;
		rf_filter_coeff104_a <= 16'h000;
		rf_filter_coeff104_b <= 16'h000;
		rf_filter_coeff105_a <= 16'h000;
		rf_filter_coeff105_b <= 16'h000;
		rf_filter_coeff106_a <= 16'h000;
		rf_filter_coeff106_b <= 16'h000;
		rf_filter_coeff107_a <= 16'h000;
		rf_filter_coeff107_b <= 16'h000;
		rf_filter_coeff108_a <= 16'h000;
		rf_filter_coeff108_b <= 16'h000;
		rf_filter_coeff109_a <= 16'h000;
		rf_filter_coeff109_b <= 16'h000;
		rf_filter_coeff110_a <= 16'h000;
		rf_filter_coeff110_b <= 16'h000;
		rf_filter_coeff111_a <= 16'h000;
		rf_filter_coeff111_b <= 16'h000;
		rf_filter_coeff112_a <= 16'h000;
		rf_filter_coeff112_b <= 16'h000;
		rf_filter_coeff113_a <= 16'h000;
		rf_filter_coeff113_b <= 16'h000;
		rf_filter_coeff114_a <= 16'h000;
		rf_filter_coeff114_b <= 16'h000;
		rf_filter_coeff115_a <= 16'h000;
		rf_filter_coeff115_b <= 16'h000;
		rf_filter_coeff116_a <= 16'h000;
		rf_filter_coeff116_b <= 16'h000;
		rf_filter_coeff117_a <= 16'h000;
		rf_filter_coeff117_b <= 16'h000;
		rf_filter_coeff118_a <= 16'h000;
		rf_filter_coeff118_b <= 16'h000;
		rf_filter_coeff119_a <= 16'h000;
		rf_filter_coeff119_b <= 16'h000;
		rf_filter_coeff120_a <= 16'h000;
		rf_filter_coeff120_b <= 16'h000;
		rf_filter_coeff121_a <= 16'h000;
		rf_filter_coeff121_b <= 16'h000;
		rf_filter_coeff122_a <= 16'h000;
		rf_filter_coeff122_b <= 16'h000;
		rf_filter_coeff123_a <= 16'h000;
		rf_filter_coeff123_b <= 16'h000;
		rf_filter_coeff124_a <= 16'h000;
		rf_filter_coeff124_b <= 16'h000;
		rf_filter_coeff125_a <= 16'h000;
		rf_filter_coeff125_b <= 16'h000;
		rf_filter_coeff126_a <= 16'h000;
		rf_filter_coeff126_b <= 16'h000;
		rf_filter_coeff127_a <= 16'h000;
		rf_filter_coeff127_b <= 16'h000;
		rf_filter_coeff128_a <= 16'h000;
		rf_filter_coeff128_b <= 16'h000;
		rf_filter_coeff129_a <= 16'h000;
		rf_filter_coeff129_b <= 16'h000;
		rf_filter_coeff130_a <= 16'h000;
		rf_filter_coeff130_b <= 16'h000;
		rf_filter_coeff131_a <= 16'h000;
		rf_filter_coeff131_b <= 16'h000;
		rf_filter_coeff132_a <= 16'h000;
		rf_filter_coeff132_b <= 16'h000;
		rf_filter_coeff133_a <= 16'h000;
		rf_filter_coeff133_b <= 16'h000;
		rf_filter_coeff134_a <= 16'h000;
		rf_filter_coeff134_b <= 16'h000;
		rf_filter_coeff135_a <= 16'h000;
		rf_filter_coeff135_b <= 16'h000;
		rf_filter_coeff136_a <= 16'h000;
		rf_filter_coeff136_b <= 16'h000;
		rf_filter_coeff137_a <= 16'h000;
		rf_filter_coeff137_b <= 16'h000;
		rf_filter_coeff138_a <= 16'h000;
		rf_filter_coeff138_b <= 16'h000;
		rf_filter_coeff139_a <= 16'h000;
		rf_filter_coeff139_b <= 16'h000;
		rf_filter_coeff140_a <= 16'h000;
		rf_filter_coeff140_b <= 16'h000;
		rf_filter_coeff141_a <= 16'h000;
		rf_filter_coeff141_b <= 16'h000;
		rf_filter_coeff142_a <= 16'h000;
		rf_filter_coeff142_b <= 16'h000;
		rf_filter_coeff143_a <= 16'h000;
		rf_filter_coeff143_b <= 16'h000;
		rf_filter_coeff144_a <= 16'h000;
		rf_filter_coeff144_b <= 16'h000;
		rf_filter_coeff145_a <= 16'h000;
		rf_filter_coeff145_b <= 16'h000;
		rf_filter_coeff146_a <= 16'h000;
		rf_filter_coeff146_b <= 16'h000;
		rf_filter_coeff147_a <= 16'h000;
		rf_filter_coeff147_b <= 16'h000;
		rf_filter_coeff148_a <= 16'h000;
		rf_filter_coeff148_b <= 16'h000;
		rf_filter_coeff149_a <= 16'h000;
		rf_filter_coeff149_b <= 16'h000;
		rf_filter_coeff150_a <= 16'h000;
		rf_filter_coeff150_b <= 16'h000;
		rf_filter_coeff151_a <= 16'h000;
		rf_filter_coeff151_b <= 16'h000;
		rf_filter_coeff152_a <= 16'h000;
		rf_filter_coeff152_b <= 16'h000;
		rf_filter_coeff153_a <= 16'h000;
		rf_filter_coeff153_b <= 16'h000;
		rf_filter_coeff154_a <= 16'h000;
		rf_filter_coeff154_b <= 16'h000;
		rf_filter_coeff155_a <= 16'h000;
		rf_filter_coeff155_b <= 16'h000;
		rf_filter_coeff156_a <= 16'h000;
		rf_filter_coeff156_b <= 16'h000;
		rf_filter_coeff157_a <= 16'h000;
		rf_filter_coeff157_b <= 16'h000;
		rf_filter_coeff158_a <= 16'h000;
		rf_filter_coeff158_b <= 16'h000;
		rf_filter_coeff159_a <= 16'h000;
		rf_filter_coeff159_b <= 16'h000;
		rf_filter_coeff160_a <= 16'h000;
		rf_filter_coeff160_b <= 16'h000;
		rf_filter_coeff161_a <= 16'h000;
		rf_filter_coeff161_b <= 16'h000;
		rf_filter_coeff162_a <= 16'h000;
		rf_filter_coeff162_b <= 16'h000;
		rf_filter_coeff163_a <= 16'h000;
		rf_filter_coeff163_b <= 16'h000;
		rf_filter_coeff164_a <= 16'h000;
		rf_filter_coeff164_b <= 16'h000;
		rf_filter_coeff165_a <= 16'h000;
		rf_filter_coeff165_b <= 16'h000;
		rf_filter_coeff166_a <= 16'h000;
		rf_filter_coeff166_b <= 16'h000;
		rf_filter_coeff167_a <= 16'h000;
		rf_filter_coeff167_b <= 16'h000;
		rf_filter_coeff168_a <= 16'h000;
		rf_filter_coeff168_b <= 16'h000;
		rf_filter_coeff169_a <= 16'h000;
		rf_filter_coeff169_b <= 16'h000;
		rf_filter_coeff170_a <= 16'h000;
		rf_filter_coeff170_b <= 16'h000;
		rf_filter_coeff171_a <= 16'h000;
		rf_filter_coeff171_b <= 16'h000;
		rf_filter_coeff172_a <= 16'h000;
		rf_filter_coeff172_b <= 16'h000;
		rf_filter_coeff173_a <= 16'h000;
		rf_filter_coeff173_b <= 16'h000;
		rf_filter_coeff174_a <= 16'h000;
		rf_filter_coeff174_b <= 16'h000;
		rf_filter_coeff175_a <= 16'h000;
		rf_filter_coeff175_b <= 16'h000;
		rf_filter_coeff176_a <= 16'h000;
		rf_filter_coeff176_b <= 16'h000;
		rf_filter_coeff177_a <= 16'h000;
		rf_filter_coeff177_b <= 16'h000;
		rf_filter_coeff178_a <= 16'h000;
		rf_filter_coeff178_b <= 16'h000;
		rf_filter_coeff179_a <= 16'h000;
		rf_filter_coeff179_b <= 16'h000;
		rf_filter_coeff180_a <= 16'h000;
		rf_filter_coeff180_b <= 16'h000;
		rf_filter_coeff181_a <= 16'h000;
		rf_filter_coeff181_b <= 16'h000;
		rf_filter_coeff182_a <= 16'h000;
		rf_filter_coeff182_b <= 16'h000;
		rf_filter_coeff183_a <= 16'h000;
		rf_filter_coeff183_b <= 16'h000;
		rf_filter_coeff184_a <= 16'h000;
		rf_filter_coeff184_b <= 16'h000;
		rf_filter_coeff185_a <= 16'h000;
		rf_filter_coeff185_b <= 16'h000;
		rf_filter_coeff186_a <= 16'h000;
		rf_filter_coeff186_b <= 16'h000;
		rf_filter_coeff187_a <= 16'h000;
		rf_filter_coeff187_b <= 16'h000;
		rf_filter_coeff188_a <= 16'h000;
		rf_filter_coeff188_b <= 16'h000;
		rf_filter_coeff189_a <= 16'h000;
		rf_filter_coeff189_b <= 16'h000;
		rf_filter_coeff190_a <= 16'h000;
		rf_filter_coeff190_b <= 16'h000;
		rf_filter_coeff191_a <= 16'h000;
		rf_filter_coeff191_b <= 16'h000;
		rf_filter_coeff192_a <= 16'h000;
		rf_filter_coeff192_b <= 16'h000;
		rf_filter_coeff193_a <= 16'h000;
		rf_filter_coeff193_b <= 16'h000;
		rf_filter_coeff194_a <= 16'h000;
		rf_filter_coeff194_b <= 16'h000;
		rf_filter_coeff195_a <= 16'h000;
		rf_filter_coeff195_b <= 16'h000;
		rf_filter_coeff196_a <= 16'h000;
		rf_filter_coeff196_b <= 16'h000;
		rf_filter_coeff197_a <= 16'h000;
		rf_filter_coeff197_b <= 16'h000;
		rf_filter_coeff198_a <= 16'h000;
		rf_filter_coeff198_b <= 16'h000;
		rf_filter_coeff199_a <= 16'h000;
		rf_filter_coeff199_b <= 16'h000;
		rf_filter_coeff200_a <= 16'h000;
		rf_filter_coeff200_b <= 16'h000;
		rf_filter_coeff201_a <= 16'h000;
		rf_filter_coeff201_b <= 16'h000;
		rf_filter_coeff202_a <= 16'h000;
		rf_filter_coeff202_b <= 16'h000;
		rf_filter_coeff203_a <= 16'h000;
		rf_filter_coeff203_b <= 16'h000;
		rf_filter_coeff204_a <= 16'h000;
		rf_filter_coeff204_b <= 16'h000;
		rf_filter_coeff205_a <= 16'h000;
		rf_filter_coeff205_b <= 16'h000;
		rf_filter_coeff206_a <= 16'h000;
		rf_filter_coeff206_b <= 16'h000;
		rf_filter_coeff207_a <= 16'h000;
		rf_filter_coeff207_b <= 16'h000;
		rf_filter_coeff208_a <= 16'h000;
		rf_filter_coeff208_b <= 16'h000;
		rf_filter_coeff209_a <= 16'h000;
		rf_filter_coeff209_b <= 16'h000;
		rf_filter_coeff210_a <= 16'h000;
		rf_filter_coeff210_b <= 16'h000;
		rf_filter_coeff211_a <= 16'h000;
		rf_filter_coeff211_b <= 16'h000;
		rf_filter_coeff212_a <= 16'h000;
		rf_filter_coeff212_b <= 16'h000;
		rf_filter_coeff213_a <= 16'h000;
		rf_filter_coeff213_b <= 16'h000;
		rf_filter_coeff214_a <= 16'h000;
		rf_filter_coeff214_b <= 16'h000;
		rf_filter_coeff215_a <= 16'h000;
		rf_filter_coeff215_b <= 16'h000;
		rf_filter_coeff216_a <= 16'h000;
		rf_filter_coeff216_b <= 16'h000;
		rf_filter_coeff217_a <= 16'h000;
		rf_filter_coeff217_b <= 16'h000;
		rf_filter_coeff218_a <= 16'h000;
		rf_filter_coeff218_b <= 16'h000;
		rf_filter_coeff219_a <= 16'h000;
		rf_filter_coeff219_b <= 16'h000;
		rf_filter_coeff220_a <= 16'h000;
		rf_filter_coeff220_b <= 16'h000;
		rf_filter_coeff221_a <= 16'h000;
		rf_filter_coeff221_b <= 16'h000;
		rf_filter_coeff222_a <= 16'h000;
		rf_filter_coeff222_b <= 16'h000;
		rf_filter_coeff223_a <= 16'h000;
		rf_filter_coeff223_b <= 16'h000;
		rf_filter_coeff224_a <= 16'h000;
		rf_filter_coeff224_b <= 16'h000;
		rf_filter_coeff225_a <= 16'h000;
		rf_filter_coeff225_b <= 16'h000;
		rf_filter_coeff226_a <= 16'h000;
		rf_filter_coeff226_b <= 16'h000;
		rf_filter_coeff227_a <= 16'h000;
		rf_filter_coeff227_b <= 16'h000;
		rf_filter_coeff228_a <= 16'h000;
		rf_filter_coeff228_b <= 16'h000;
		rf_filter_coeff229_a <= 16'h000;
		rf_filter_coeff229_b <= 16'h000;
		rf_filter_coeff230_a <= 16'h000;
		rf_filter_coeff230_b <= 16'h000;
		rf_filter_coeff231_a <= 16'h000;
		rf_filter_coeff231_b <= 16'h000;
		rf_filter_coeff232_a <= 16'h000;
		rf_filter_coeff232_b <= 16'h000;
		rf_filter_coeff233_a <= 16'h000;
		rf_filter_coeff233_b <= 16'h000;
		rf_filter_coeff234_a <= 16'h000;
		rf_filter_coeff234_b <= 16'h000;
		rf_filter_coeff235_a <= 16'h000;
		rf_filter_coeff235_b <= 16'h000;
		rf_filter_coeff236_a <= 16'h000;
		rf_filter_coeff236_b <= 16'h000;
		rf_filter_coeff237_a <= 16'h000;
		rf_filter_coeff237_b <= 16'h000;
		rf_filter_coeff238_a <= 16'h000;
		rf_filter_coeff238_b <= 16'h000;
		rf_filter_coeff239_a <= 16'h000;
		rf_filter_coeff239_b <= 16'h000;
		rf_filter_coeff240_a <= 16'h000;
		rf_filter_coeff240_b <= 16'h000;
		rf_filter_coeff241_a <= 16'h000;
		rf_filter_coeff241_b <= 16'h000;
		rf_filter_coeff242_a <= 16'h000;
		rf_filter_coeff242_b <= 16'h000;
		rf_filter_coeff243_a <= 16'h000;
		rf_filter_coeff243_b <= 16'h000;
		rf_filter_coeff244_a <= 16'h000;
		rf_filter_coeff244_b <= 16'h000;
		rf_filter_coeff245_a <= 16'h000;
		rf_filter_coeff245_b <= 16'h000;
		rf_filter_coeff246_a <= 16'h000;
		rf_filter_coeff246_b <= 16'h000;
		rf_filter_coeff247_a <= 16'h000;
		rf_filter_coeff247_b <= 16'h000;
		rf_filter_coeff248_a <= 16'h000;
		rf_filter_coeff248_b <= 16'h000;
		rf_filter_coeff249_a <= 16'h000;
		rf_filter_coeff249_b <= 16'h000;
		rf_filter_coeff250_a <= 16'h000;
		rf_filter_coeff250_b <= 16'h000;
		rf_filter_coeff251_a <= 16'h000;
		rf_filter_coeff251_b <= 16'h000;
		rf_filter_coeff252_a <= 16'h000;
		rf_filter_coeff252_b <= 16'h000;
		rf_filter_coeff253_a <= 16'h000;
		rf_filter_coeff253_b <= 16'h000;
		rf_filter_coeff254_a <= 16'h000;
		rf_filter_coeff254_b <= 16'h000;
		rf_filter_coeff255_a <= 16'h000;
		rf_filter_coeff255_b <= 16'h000;
		rf_filter_coeff256_a <= 16'h000;
		rf_filter_coeff256_b <= 16'h000;
		rf_filter_coeff257_a <= 16'h000;
		rf_filter_coeff257_b <= 16'h000;
		rf_filter_coeff258_a <= 16'h000;
		rf_filter_coeff258_b <= 16'h000;
		rf_filter_coeff259_a <= 16'h000;
		rf_filter_coeff259_b <= 16'h000;
		rf_filter_coeff260_a <= 16'h000;
		rf_filter_coeff260_b <= 16'h000;
		rf_filter_coeff261_a <= 16'h000;
		rf_filter_coeff261_b <= 16'h000;
		rf_filter_coeff262_a <= 16'h000;
		rf_filter_coeff262_b <= 16'h000;
		rf_filter_coeff263_a <= 16'h000;
		rf_filter_coeff263_b <= 16'h000;
		rf_filter_coeff264_a <= 16'h000;
		rf_filter_coeff264_b <= 16'h000;
		rf_filter_coeff265_a <= 16'h000;
		rf_filter_coeff265_b <= 16'h000;
		rf_filter_coeff266_a <= 16'h000;
		rf_filter_coeff266_b <= 16'h000;
		rf_filter_coeff267_a <= 16'h000;
		rf_filter_coeff267_b <= 16'h000;
		rf_filter_coeff268_a <= 16'h000;
		rf_filter_coeff268_b <= 16'h000;
		rf_filter_coeff269_a <= 16'h000;
		rf_filter_coeff269_b <= 16'h000;
		rf_filter_coeff270_a <= 16'h000;
		rf_filter_coeff270_b <= 16'h000;
		rf_filter_coeff271_a <= 16'h000;
		rf_filter_coeff271_b <= 16'h000;
		rf_filter_coeff272_a <= 16'h000;
		rf_filter_coeff272_b <= 16'h000;
		rf_filter_coeff273_a <= 16'h000;
		rf_filter_coeff273_b <= 16'h000;
		rf_filter_coeff274_a <= 16'h000;
		rf_filter_coeff274_b <= 16'h000;
		rf_filter_coeff275_a <= 16'h000;
		rf_filter_coeff275_b <= 16'h000;
		rf_filter_coeff276_a <= 16'h000;
		rf_filter_coeff276_b <= 16'h000;
		rf_filter_coeff277_a <= 16'h000;
		rf_filter_coeff277_b <= 16'h000;
		rf_filter_coeff278_a <= 16'h000;
		rf_filter_coeff278_b <= 16'h000;
		rf_filter_coeff279_a <= 16'h000;
		rf_filter_coeff279_b <= 16'h000;
		rf_filter_coeff280_a <= 16'h000;
		rf_filter_coeff280_b <= 16'h000;
		rf_filter_coeff281_a <= 16'h000;
		rf_filter_coeff281_b <= 16'h000;
		rf_filter_coeff282_a <= 16'h000;
		rf_filter_coeff282_b <= 16'h000;
		rf_filter_coeff283_a <= 16'h000;
		rf_filter_coeff283_b <= 16'h000;
		rf_filter_coeff284_a <= 16'h000;
		rf_filter_coeff284_b <= 16'h000;
		rf_filter_coeff285_a <= 16'h000;
		rf_filter_coeff285_b <= 16'h000;
		rf_filter_coeff286_a <= 16'h000;
		rf_filter_coeff286_b <= 16'h000;
		rf_filter_coeff287_a <= 16'h000;
		rf_filter_coeff287_b <= 16'h000;
		rf_filter_coeff288_a <= 16'h000;
		rf_filter_coeff288_b <= 16'h000;
		rf_filter_coeff289_a <= 16'h000;
		rf_filter_coeff289_b <= 16'h000;
		rf_filter_coeff290_a <= 16'h000;
		rf_filter_coeff290_b <= 16'h000;
		rf_filter_coeff291_a <= 16'h000;
		rf_filter_coeff291_b <= 16'h000;
		rf_filter_coeff292_a <= 16'h000;
		rf_filter_coeff292_b <= 16'h000;
		rf_filter_coeff293_a <= 16'h000;
		rf_filter_coeff293_b <= 16'h000;
		rf_filter_coeff294_a <= 16'h000;
		rf_filter_coeff294_b <= 16'h000;
		rf_filter_coeff295_a <= 16'h000;
		rf_filter_coeff295_b <= 16'h000;
		rf_filter_coeff296_a <= 16'h000;
		rf_filter_coeff296_b <= 16'h000;
		rf_filter_coeff297_a <= 16'h000;
		rf_filter_coeff297_b <= 16'h000;
		rf_filter_coeff298_a <= 16'h000;
		rf_filter_coeff298_b <= 16'h000;
		rf_filter_coeff299_a <= 16'h000;
		rf_filter_coeff299_b <= 16'h000;
		rf_filter_coeff300_a <= 16'h000;
		rf_filter_coeff300_b <= 16'h000;
		rf_filter_coeff301_a <= 16'h000;
		rf_filter_coeff301_b <= 16'h000;
		rf_filter_coeff302_a <= 16'h000;
		rf_filter_coeff302_b <= 16'h000;
		rf_filter_coeff303_a <= 16'h000;
		rf_filter_coeff303_b <= 16'h000;
		rf_filter_coeff304_a <= 16'h000;
		rf_filter_coeff304_b <= 16'h000;
		rf_filter_coeff305_a <= 16'h000;
		rf_filter_coeff305_b <= 16'h000;
		rf_filter_coeff306_a <= 16'h000;
		rf_filter_coeff306_b <= 16'h000;
		rf_filter_coeff307_a <= 16'h000;
		rf_filter_coeff307_b <= 16'h000;
		rf_filter_coeff308_a <= 16'h000;
		rf_filter_coeff308_b <= 16'h000;
		rf_filter_coeff309_a <= 16'h000;
		rf_filter_coeff309_b <= 16'h000;
		rf_filter_coeff310_a <= 16'h000;
		rf_filter_coeff310_b <= 16'h000;
		rf_filter_coeff311_a <= 16'h000;
		rf_filter_coeff311_b <= 16'h000;
		rf_filter_coeff312_a <= 16'h000;
		rf_filter_coeff312_b <= 16'h000;
		rf_filter_coeff313_a <= 16'h000;
		rf_filter_coeff313_b <= 16'h000;
		rf_filter_coeff314_a <= 16'h000;
		rf_filter_coeff314_b <= 16'h000;
		rf_filter_coeff315_a <= 16'h000;
		rf_filter_coeff315_b <= 16'h000;
		rf_filter_coeff316_a <= 16'h000;
		rf_filter_coeff316_b <= 16'h000;
		rf_filter_coeff317_a <= 16'h000;
		rf_filter_coeff317_b <= 16'h000;
		rf_filter_coeff318_a <= 16'h000;
		rf_filter_coeff318_b <= 16'h000;
		rf_filter_coeff319_a <= 16'h000;
		rf_filter_coeff319_b <= 16'h000;
		rf_filter_coeff320_a <= 16'h000;
		rf_filter_coeff320_b <= 16'h000;
		rf_filter_coeff321_a <= 16'h000;
		rf_filter_coeff321_b <= 16'h000;
		rf_filter_coeff322_a <= 16'h000;
		rf_filter_coeff322_b <= 16'h000;
		rf_filter_coeff323_a <= 16'h000;
		rf_filter_coeff323_b <= 16'h000;
		rf_filter_coeff324_a <= 16'h000;
		rf_filter_coeff324_b <= 16'h000;
		rf_filter_coeff325_a <= 16'h000;
		rf_filter_coeff325_b <= 16'h000;
		rf_filter_coeff326_a <= 16'h000;
		rf_filter_coeff326_b <= 16'h000;
		rf_filter_coeff327_a <= 16'h000;
		rf_filter_coeff327_b <= 16'h000;
		rf_filter_coeff328_a <= 16'h000;
		rf_filter_coeff328_b <= 16'h000;
		rf_filter_coeff329_a <= 16'h000;
		rf_filter_coeff329_b <= 16'h000;
		rf_filter_coeff330_a <= 16'h000;
		rf_filter_coeff330_b <= 16'h000;
		rf_filter_coeff331_a <= 16'h000;
		rf_filter_coeff331_b <= 16'h000;
		rf_filter_coeff332_a <= 16'h000;
		rf_filter_coeff332_b <= 16'h000;
		rf_filter_coeff333_a <= 16'h000;
		rf_filter_coeff333_b <= 16'h000;
		rf_filter_coeff334_a <= 16'h000;
		rf_filter_coeff334_b <= 16'h000;
		rf_filter_coeff335_a <= 16'h000;
		rf_filter_coeff335_b <= 16'h000;
		rf_filter_coeff336_a <= 16'h000;
		rf_filter_coeff336_b <= 16'h000;
		rf_filter_coeff337_a <= 16'h000;
		rf_filter_coeff337_b <= 16'h000;
		rf_filter_coeff338_a <= 16'h000;
		rf_filter_coeff338_b <= 16'h000;
		rf_filter_coeff339_a <= 16'h000;
		rf_filter_coeff339_b <= 16'h000;
		rf_filter_coeff340_a <= 16'h000;
		rf_filter_coeff340_b <= 16'h000;
		rf_filter_coeff341_a <= 16'h000;
		rf_filter_coeff341_b <= 16'h000;
		rf_filter_coeff342_a <= 16'h000;
		rf_filter_coeff342_b <= 16'h000;
		rf_filter_coeff343_a <= 16'h000;
		rf_filter_coeff343_b <= 16'h000;
		rf_filter_coeff344_a <= 16'h000;
		rf_filter_coeff344_b <= 16'h000;
		rf_filter_coeff345_a <= 16'h000;
		rf_filter_coeff345_b <= 16'h000;
		rf_filter_coeff346_a <= 16'h000;
		rf_filter_coeff346_b <= 16'h000;
		rf_filter_coeff347_a <= 16'h000;
		rf_filter_coeff347_b <= 16'h000;
		rf_filter_coeff348_a <= 16'h000;
		rf_filter_coeff348_b <= 16'h000;
		rf_filter_coeff349_a <= 16'h000;
		rf_filter_coeff349_b <= 16'h000;
		rf_filter_coeff350_a <= 16'h000;
		rf_filter_coeff350_b <= 16'h000;
		rf_filter_coeff351_a <= 16'h000;
		rf_filter_coeff351_b <= 16'h000;
		rf_filter_coeff352_a <= 16'h000;
		rf_filter_coeff352_b <= 16'h000;
		rf_filter_coeff353_a <= 16'h000;
		rf_filter_coeff353_b <= 16'h000;
		rf_filter_coeff354_a <= 16'h000;
		rf_filter_coeff354_b <= 16'h000;
		rf_filter_coeff355_a <= 16'h000;
		rf_filter_coeff355_b <= 16'h000;
		rf_filter_coeff356_a <= 16'h000;
		rf_filter_coeff356_b <= 16'h000;
		rf_filter_coeff357_a <= 16'h000;
		rf_filter_coeff357_b <= 16'h000;
		rf_filter_coeff358_a <= 16'h000;
		rf_filter_coeff358_b <= 16'h000;
		rf_filter_coeff359_a <= 16'h000;
		rf_filter_coeff359_b <= 16'h000;
		rf_filter_coeff360_a <= 16'h000;
		rf_filter_coeff360_b <= 16'h000;
		rf_filter_coeff361_a <= 16'h000;
		rf_filter_coeff361_b <= 16'h000;
		rf_filter_coeff362_a <= 16'h000;
		rf_filter_coeff362_b <= 16'h000;
		rf_filter_coeff363_a <= 16'h000;
		rf_filter_coeff363_b <= 16'h000;
		rf_filter_coeff364_a <= 16'h000;
		rf_filter_coeff364_b <= 16'h000;
		rf_filter_coeff365_a <= 16'h000;
		rf_filter_coeff365_b <= 16'h000;
		rf_filter_coeff366_a <= 16'h000;
		rf_filter_coeff366_b <= 16'h000;
		rf_filter_coeff367_a <= 16'h000;
		rf_filter_coeff367_b <= 16'h000;
		rf_filter_coeff368_a <= 16'h000;
		rf_filter_coeff368_b <= 16'h000;
		rf_filter_coeff369_a <= 16'h000;
		rf_filter_coeff369_b <= 16'h000;
		rf_filter_coeff370_a <= 16'h000;
		rf_filter_coeff370_b <= 16'h000;
		rf_filter_coeff371_a <= 16'h000;
		rf_filter_coeff371_b <= 16'h000;
		rf_filter_coeff372_a <= 16'h000;
		rf_filter_coeff372_b <= 16'h000;
		rf_filter_coeff373_a <= 16'h000;
		rf_filter_coeff373_b <= 16'h000;
		rf_filter_coeff374_a <= 16'h000;
		rf_filter_coeff374_b <= 16'h000;
		rf_filter_coeff375_a <= 16'h000;
		rf_filter_coeff375_b <= 16'h000;
		rf_filter_coeff376_a <= 16'h000;
		rf_filter_coeff376_b <= 16'h000;
		rf_filter_coeff377_a <= 16'h000;
		rf_filter_coeff377_b <= 16'h000;
		rf_filter_coeff378_a <= 16'h000;
		rf_filter_coeff378_b <= 16'h000;
		rf_filter_coeff379_a <= 16'h000;
		rf_filter_coeff379_b <= 16'h000;
		rf_filter_coeff380_a <= 16'h000;
		rf_filter_coeff380_b <= 16'h000;
		rf_filter_coeff381_a <= 16'h000;
		rf_filter_coeff381_b <= 16'h000;
		rf_filter_coeff382_a <= 16'h000;
		rf_filter_coeff382_b <= 16'h000;
		rf_filter_coeff383_a <= 16'h000;
		rf_filter_coeff383_b <= 16'h000;
		rf_filter_coeff384_a <= 16'h000;
		rf_filter_coeff384_b <= 16'h000;
		rf_filter_coeff385_a <= 16'h000;
		rf_filter_coeff385_b <= 16'h000;
		rf_filter_coeff386_a <= 16'h000;
		rf_filter_coeff386_b <= 16'h000;
		rf_filter_coeff387_a <= 16'h000;
		rf_filter_coeff387_b <= 16'h000;
		rf_filter_coeff388_a <= 16'h000;
		rf_filter_coeff388_b <= 16'h000;
		rf_filter_coeff389_a <= 16'h000;
		rf_filter_coeff389_b <= 16'h000;
		rf_filter_coeff390_a <= 16'h000;
		rf_filter_coeff390_b <= 16'h000;
		rf_filter_coeff391_a <= 16'h000;
		rf_filter_coeff391_b <= 16'h000;
		rf_filter_coeff392_a <= 16'h000;
		rf_filter_coeff392_b <= 16'h000;
		rf_filter_coeff393_a <= 16'h000;
		rf_filter_coeff393_b <= 16'h000;
		rf_filter_coeff394_a <= 16'h000;
		rf_filter_coeff394_b <= 16'h000;
		rf_filter_coeff395_a <= 16'h000;
		rf_filter_coeff395_b <= 16'h000;
		rf_filter_coeff396_a <= 16'h000;
		rf_filter_coeff396_b <= 16'h000;
		rf_filter_coeff397_a <= 16'h000;
		rf_filter_coeff397_b <= 16'h000;
		rf_filter_coeff398_a <= 16'h000;
		rf_filter_coeff398_b <= 16'h000;
		rf_filter_coeff399_a <= 16'h000;
		rf_filter_coeff399_b <= 16'h000;
		rf_filter_coeff400_a <= 16'h000;
		rf_filter_coeff400_b <= 16'h000;
		rf_filter_coeff401_a <= 16'h000;
		rf_filter_coeff401_b <= 16'h000;
		rf_filter_coeff402_a <= 16'h000;
		rf_filter_coeff402_b <= 16'h000;
		rf_filter_coeff403_a <= 16'h000;
		rf_filter_coeff403_b <= 16'h000;
		rf_filter_coeff404_a <= 16'h000;
		rf_filter_coeff404_b <= 16'h000;
		rf_filter_coeff405_a <= 16'h000;
		rf_filter_coeff405_b <= 16'h000;
		rf_filter_coeff406_a <= 16'h000;
		rf_filter_coeff406_b <= 16'h000;
		rf_filter_coeff407_a <= 16'h000;
		rf_filter_coeff407_b <= 16'h000;
		rf_filter_coeff408_a <= 16'h000;
		rf_filter_coeff408_b <= 16'h000;
		rf_filter_coeff409_a <= 16'h000;
		rf_filter_coeff409_b <= 16'h000;
		rf_filter_coeff410_a <= 16'h000;
		rf_filter_coeff410_b <= 16'h000;
		rf_filter_coeff411_a <= 16'h000;
		rf_filter_coeff411_b <= 16'h000;
		rf_filter_coeff412_a <= 16'h000;
		rf_filter_coeff412_b <= 16'h000;
		rf_filter_coeff413_a <= 16'h000;
		rf_filter_coeff413_b <= 16'h000;
		rf_filter_coeff414_a <= 16'h000;
		rf_filter_coeff414_b <= 16'h000;
		rf_filter_coeff415_a <= 16'h000;
		rf_filter_coeff415_b <= 16'h000;
		rf_filter_coeff416_a <= 16'h000;
		rf_filter_coeff416_b <= 16'h000;
		rf_filter_coeff417_a <= 16'h000;
		rf_filter_coeff417_b <= 16'h000;
		rf_filter_coeff418_a <= 16'h000;
		rf_filter_coeff418_b <= 16'h000;
		rf_filter_coeff419_a <= 16'h000;
		rf_filter_coeff419_b <= 16'h000;
		rf_filter_coeff420_a <= 16'h000;
		rf_filter_coeff420_b <= 16'h000;
		rf_filter_coeff421_a <= 16'h000;
		rf_filter_coeff421_b <= 16'h000;
		rf_filter_coeff422_a <= 16'h000;
		rf_filter_coeff422_b <= 16'h000;
		rf_filter_coeff423_a <= 16'h000;
		rf_filter_coeff423_b <= 16'h000;
		rf_filter_coeff424_a <= 16'h000;
		rf_filter_coeff424_b <= 16'h000;
		rf_filter_coeff425_a <= 16'h000;
		rf_filter_coeff425_b <= 16'h000;
		rf_filter_coeff426_a <= 16'h000;
		rf_filter_coeff426_b <= 16'h000;
		rf_filter_coeff427_a <= 16'h000;
		rf_filter_coeff427_b <= 16'h000;
		rf_filter_coeff428_a <= 16'h000;
		rf_filter_coeff428_b <= 16'h000;
		rf_filter_coeff429_a <= 16'h000;
		rf_filter_coeff429_b <= 16'h000;
		rf_filter_coeff430_a <= 16'h000;
		rf_filter_coeff430_b <= 16'h000;
		rf_filter_coeff431_a <= 16'h000;
		rf_filter_coeff431_b <= 16'h000;
		rf_filter_coeff432_a <= 16'h000;
		rf_filter_coeff432_b <= 16'h000;
		rf_filter_coeff433_a <= 16'h000;
		rf_filter_coeff433_b <= 16'h000;
		rf_filter_coeff434_a <= 16'h000;
		rf_filter_coeff434_b <= 16'h000;
		rf_filter_coeff435_a <= 16'h000;
		rf_filter_coeff435_b <= 16'h000;
		rf_filter_coeff436_a <= 16'h000;
		rf_filter_coeff436_b <= 16'h000;
		rf_filter_coeff437_a <= 16'h000;
		rf_filter_coeff437_b <= 16'h000;
		rf_filter_coeff438_a <= 16'h000;
		rf_filter_coeff438_b <= 16'h000;
		rf_filter_coeff439_a <= 16'h000;
		rf_filter_coeff439_b <= 16'h000;
		rf_filter_coeff440_a <= 16'h000;
		rf_filter_coeff440_b <= 16'h000;
		rf_filter_coeff441_a <= 16'h000;
		rf_filter_coeff441_b <= 16'h000;
		rf_filter_coeff442_a <= 16'h000;
		rf_filter_coeff442_b <= 16'h000;
		rf_filter_coeff443_a <= 16'h000;
		rf_filter_coeff443_b <= 16'h000;
		rf_filter_coeff444_a <= 16'h000;
		rf_filter_coeff444_b <= 16'h000;
		rf_filter_coeff445_a <= 16'h000;
		rf_filter_coeff445_b <= 16'h000;
		rf_filter_coeff446_a <= 16'h000;
		rf_filter_coeff446_b <= 16'h000;
		rf_filter_coeff447_a <= 16'h000;
		rf_filter_coeff447_b <= 16'h000;
		rf_filter_coeff448_a <= 16'h000;
		rf_filter_coeff448_b <= 16'h000;
		rf_filter_coeff449_a <= 16'h000;
		rf_filter_coeff449_b <= 16'h000;
		rf_filter_coeff450_a <= 16'h000;
		rf_filter_coeff450_b <= 16'h000;
		rf_filter_coeff451_a <= 16'h000;
		rf_filter_coeff451_b <= 16'h000;
		rf_filter_coeff452_a <= 16'h000;
		rf_filter_coeff452_b <= 16'h000;
		rf_filter_coeff453_a <= 16'h000;
		rf_filter_coeff453_b <= 16'h000;
		rf_filter_coeff454_a <= 16'h000;
		rf_filter_coeff454_b <= 16'h000;
		rf_filter_coeff455_a <= 16'h000;
		rf_filter_coeff455_b <= 16'h000;
		rf_filter_coeff456_a <= 16'h000;
		rf_filter_coeff456_b <= 16'h000;
		rf_filter_coeff457_a <= 16'h000;
		rf_filter_coeff457_b <= 16'h000;
		rf_filter_coeff458_a <= 16'h000;
		rf_filter_coeff458_b <= 16'h000;
		rf_filter_coeff459_a <= 16'h000;
		rf_filter_coeff459_b <= 16'h000;
		rf_filter_coeff460_a <= 16'h000;
		rf_filter_coeff460_b <= 16'h000;
		rf_filter_coeff461_a <= 16'h000;
		rf_filter_coeff461_b <= 16'h000;
		rf_filter_coeff462_a <= 16'h000;
		rf_filter_coeff462_b <= 16'h000;
		rf_filter_coeff463_a <= 16'h000;
		rf_filter_coeff463_b <= 16'h000;
		rf_filter_coeff464_a <= 16'h000;
		rf_filter_coeff464_b <= 16'h000;
		rf_filter_coeff465_a <= 16'h000;
		rf_filter_coeff465_b <= 16'h000;
		rf_filter_coeff466_a <= 16'h000;
		rf_filter_coeff466_b <= 16'h000;
		rf_filter_coeff467_a <= 16'h000;
		rf_filter_coeff467_b <= 16'h000;
		rf_filter_coeff468_a <= 16'h000;
		rf_filter_coeff468_b <= 16'h000;
		rf_filter_coeff469_a <= 16'h000;
		rf_filter_coeff469_b <= 16'h000;
		rf_filter_coeff470_a <= 16'h000;
		rf_filter_coeff470_b <= 16'h000;
		rf_filter_coeff471_a <= 16'h000;
		rf_filter_coeff471_b <= 16'h000;
		rf_filter_coeff472_a <= 16'h000;
		rf_filter_coeff472_b <= 16'h000;
		rf_filter_coeff473_a <= 16'h000;
		rf_filter_coeff473_b <= 16'h000;
		rf_filter_coeff474_a <= 16'h000;
		rf_filter_coeff474_b <= 16'h000;
		rf_filter_coeff475_a <= 16'h000;
		rf_filter_coeff475_b <= 16'h000;
		rf_filter_coeff476_a <= 16'h000;
		rf_filter_coeff476_b <= 16'h000;
		rf_filter_coeff477_a <= 16'h000;
		rf_filter_coeff477_b <= 16'h000;
		rf_filter_coeff478_a <= 16'h000;
		rf_filter_coeff478_b <= 16'h000;
		rf_filter_coeff479_a <= 16'h000;
		rf_filter_coeff479_b <= 16'h000;
		rf_filter_coeff480_a <= 16'h000;
		rf_filter_coeff480_b <= 16'h000;
		rf_filter_coeff481_a <= 16'h000;
		rf_filter_coeff481_b <= 16'h000;
		rf_filter_coeff482_a <= 16'h000;
		rf_filter_coeff482_b <= 16'h000;
		rf_filter_coeff483_a <= 16'h000;
		rf_filter_coeff483_b <= 16'h000;
		rf_filter_coeff484_a <= 16'h000;
		rf_filter_coeff484_b <= 16'h000;
		rf_filter_coeff485_a <= 16'h000;
		rf_filter_coeff485_b <= 16'h000;
		rf_filter_coeff486_a <= 16'h000;
		rf_filter_coeff486_b <= 16'h000;
		rf_filter_coeff487_a <= 16'h000;
		rf_filter_coeff487_b <= 16'h000;
		rf_filter_coeff488_a <= 16'h000;
		rf_filter_coeff488_b <= 16'h000;
		rf_filter_coeff489_a <= 16'h000;
		rf_filter_coeff489_b <= 16'h000;
		rf_filter_coeff490_a <= 16'h000;
		rf_filter_coeff490_b <= 16'h000;
		rf_filter_coeff491_a <= 16'h000;
		rf_filter_coeff491_b <= 16'h000;
		rf_filter_coeff492_a <= 16'h000;
		rf_filter_coeff492_b <= 16'h000;
		rf_filter_coeff493_a <= 16'h000;
		rf_filter_coeff493_b <= 16'h000;
		rf_filter_coeff494_a <= 16'h000;
		rf_filter_coeff494_b <= 16'h000;
		rf_filter_coeff495_a <= 16'h000;
		rf_filter_coeff495_b <= 16'h000;
		rf_filter_coeff496_a <= 16'h000;
		rf_filter_coeff496_b <= 16'h000;
		rf_filter_coeff497_a <= 16'h000;
		rf_filter_coeff497_b <= 16'h000;
		rf_filter_coeff498_a <= 16'h000;
		rf_filter_coeff498_b <= 16'h000;
		rf_filter_coeff499_a <= 16'h000;
		rf_filter_coeff499_b <= 16'h000;
		rf_filter_coeff500_a <= 16'h000;
		rf_filter_coeff500_b <= 16'h000;
		rf_filter_coeff501_a <= 16'h000;
		rf_filter_coeff501_b <= 16'h000;
		rf_filter_coeff502_a <= 16'h000;
		rf_filter_coeff502_b <= 16'h000;
		rf_filter_coeff503_a <= 16'h000;
		rf_filter_coeff503_b <= 16'h000;
		rf_filter_coeff504_a <= 16'h000;
		rf_filter_coeff504_b <= 16'h000;
		rf_filter_coeff505_a <= 16'h000;
		rf_filter_coeff505_b <= 16'h000;
		rf_filter_coeff506_a <= 16'h000;
		rf_filter_coeff506_b <= 16'h000;
		rf_filter_coeff507_a <= 16'h000;
		rf_filter_coeff507_b <= 16'h000;
		rf_filter_coeff508_a <= 16'h000;
		rf_filter_coeff508_b <= 16'h000;
		rf_filter_coeff509_a <= 16'h000;
		rf_filter_coeff509_b <= 16'h000;
		rf_filter_coeff510_a <= 16'h000;
		rf_filter_coeff510_b <= 16'h000;
		rf_filter_coeff511_a <= 16'h000;
		rf_filter_coeff511_b <= 16'h000;	 
	end
	else if (i2c_xfc_write && w_enable)
		begin
			// Given the address, the signals are assigned to their correlated bits of data
			case(addr)		
				11'h004:
					rf_soft_rest <= wdata[0];
					rf_i2si_bist_en <= wdata[1];
					rf_filter_shift <= wdata[5:2];
					rf_filter_clip_en <= wdata[6];
				11'h005:
					rf_i2si_dec_factor <= wdata[3:0];
					rf_i2so_dec_factor <= wdata[7:4];
				11'h008:
					rf_i2so_clk2sck_div_a <= wdata[7:0];
				11'h009:
					rf_i2so_clk2sck_div_b <= wdata[7:0];
				11'h00c:
					trig_fifo_overrun <= wdata[0];
					ro_fifo_overrun <= wdata[1];
					trig_fifo_underrun <= wdata[2];
					ro_fifo_underrun <= wdata[3];
				11'h010:
					rf_i2si_bist_incr <= wdata[7:0];
				11'h011:
					rf_i2si_bist_start_val_a <= wdata[7:0];
				11'h012:
					rf_i2si_bist_start_val_b <= wdata[3:0];
					rf_i2si_bist_upper_limit_a <= wdata[7:4];
				11'h013:
					rf_i2si_bist_upper_limit_b <= wdata[7:0];
				11'h014:
					rf_i2c_reg_indir_addr_a <= wdata[7:0];
				11'h015:
					rf_i2c_reg_indir_addr_b <= wdata[3:0];				
				16'h400:
					rf_filter_coeff0_a <= wdata[7:0];
				16'h401:
					rf_filter_coeff0_b <= wdata[7:0];
				16'h402:
					rf_filter_coeff1_a <= wdata[7:0];
				16'h403:
					rf_filter_coeff1_b <= wdata[7:0];
				16'h404:
					rf_filter_coeff2_a <= wdata[7:0];
				16'h405:
					rf_filter_coeff2_b <= wdata[7:0];
				16'h406:
					rf_filter_coeff3_a <= wdata[7:0];
				16'h407:
					rf_filter_coeff3_b <= wdata[7:0];
				16'h408:
					rf_filter_coeff4_a <= wdata[7:0];
				16'h409:
					rf_filter_coeff4_b <= wdata[7:0];
				16'h40a:
					rf_filter_coeff5_a <= wdata[7:0];
				16'h40b:
					rf_filter_coeff5_b <= wdata[7:0];
				16'h40c:
					rf_filter_coeff6_a <= wdata[7:0];
				16'h40d:
					rf_filter_coeff6_b <= wdata[7:0];
				16'h40e:
					rf_filter_coeff7_a <= wdata[7:0];
				16'h40f:
					rf_filter_coeff7_b <= wdata[7:0];
				16'h410:
					rf_filter_coeff8_a <= wdata[7:0];
				16'h411:
					rf_filter_coeff8_b <= wdata[7:0];
				16'h412:
					rf_filter_coeff9_a <= wdata[7:0];
				16'h413:
					rf_filter_coeff9_b <= wdata[7:0];
				16'h414:
					rf_filter_coeff10_a <= wdata[7:0];
				16'h415:
					rf_filter_coeff10_b <= wdata[7:0];
				16'h416:
					rf_filter_coeff11_a <= wdata[7:0];
				16'h417:
					rf_filter_coeff11_b <= wdata[7:0];
				16'h418:
					rf_filter_coeff12_a <= wdata[7:0];
				16'h419:
					rf_filter_coeff12_b <= wdata[7:0];
				16'h41a:
					rf_filter_coeff13_a <= wdata[7:0];
				16'h41b:
					rf_filter_coeff13_b <= wdata[7:0];
				16'h41c:
					rf_filter_coeff14_a <= wdata[7:0];
				16'h41d:
					rf_filter_coeff14_b <= wdata[7:0];
				16'h41e:
					rf_filter_coeff15_a <= wdata[7:0];
				16'h41f:
					rf_filter_coeff15_b <= wdata[7:0];
				16'h420:
					rf_filter_coeff16_a <= wdata[7:0];
				16'h421:
					rf_filter_coeff16_b <= wdata[7:0];
				16'h422:
					rf_filter_coeff17_a <= wdata[7:0];
				16'h423:
					rf_filter_coeff17_b <= wdata[7:0];
				16'h424:
					rf_filter_coeff18_a <= wdata[7:0];
				16'h425:
					rf_filter_coeff18_b <= wdata[7:0];
				16'h426:
					rf_filter_coeff19_a <= wdata[7:0];
				16'h427:
					rf_filter_coeff19_b <= wdata[7:0];
				16'h428:
					rf_filter_coeff20_a <= wdata[7:0];
				16'h429:
					rf_filter_coeff20_b <= wdata[7:0];
				16'h42a:
					rf_filter_coeff21_a <= wdata[7:0];
				16'h42b:
					rf_filter_coeff21_b <= wdata[7:0];
				16'h42c:
					rf_filter_coeff22_a <= wdata[7:0];
				16'h42d:
					rf_filter_coeff22_b <= wdata[7:0];
				16'h42e:
					rf_filter_coeff23_a <= wdata[7:0];
				16'h42f:
					rf_filter_coeff23_b <= wdata[7:0];
				16'h430:
					rf_filter_coeff24_a <= wdata[7:0];
				16'h431:
					rf_filter_coeff24_b <= wdata[7:0];
				16'h432:
					rf_filter_coeff25_a <= wdata[7:0];
				16'h433:
					rf_filter_coeff25_b <= wdata[7:0];
				16'h434:
					rf_filter_coeff26_a <= wdata[7:0];
				16'h435:
					rf_filter_coeff26_b <= wdata[7:0];
				16'h436:
					rf_filter_coeff27_a <= wdata[7:0];
				16'h437:
					rf_filter_coeff27_b <= wdata[7:0];
				16'h438:
					rf_filter_coeff28_a <= wdata[7:0];
				16'h439:
					rf_filter_coeff28_b <= wdata[7:0];
				16'h43a:
					rf_filter_coeff29_a <= wdata[7:0];
				16'h43b:
					rf_filter_coeff29_b <= wdata[7:0];
				16'h43c:
					rf_filter_coeff30_a <= wdata[7:0];
				16'h43d:
					rf_filter_coeff30_b <= wdata[7:0];
				16'h43e:
					rf_filter_coeff31_a <= wdata[7:0];
				16'h43f:
					rf_filter_coeff31_b <= wdata[7:0];
				16'h440:
					rf_filter_coeff32_a <= wdata[7:0];
				16'h441:
					rf_filter_coeff32_b <= wdata[7:0];
				16'h442:
					rf_filter_coeff33_a <= wdata[7:0];
				16'h443:
					rf_filter_coeff33_b <= wdata[7:0];
				16'h444:
					rf_filter_coeff34_a <= wdata[7:0];
				16'h445:
					rf_filter_coeff34_b <= wdata[7:0];
				16'h446:
					rf_filter_coeff35_a <= wdata[7:0];
				16'h447:
					rf_filter_coeff35_b <= wdata[7:0];
				16'h448:
					rf_filter_coeff36_a <= wdata[7:0];
				16'h449:
					rf_filter_coeff36_b <= wdata[7:0];
				16'h44a:
					rf_filter_coeff37_a <= wdata[7:0];
				16'h44b:
					rf_filter_coeff37_b <= wdata[7:0];
				16'h44c:
					rf_filter_coeff38_a <= wdata[7:0];
				16'h44d:
					rf_filter_coeff38_b <= wdata[7:0];
				16'h44e:
					rf_filter_coeff39_a <= wdata[7:0];
				16'h44f:
					rf_filter_coeff39_b <= wdata[7:0];
				16'h450:
					rf_filter_coeff40_a <= wdata[7:0];
				16'h451:
					rf_filter_coeff40_b <= wdata[7:0];
				16'h452:
					rf_filter_coeff41_a <= wdata[7:0];
				16'h453:
					rf_filter_coeff41_b <= wdata[7:0];
				16'h454:
					rf_filter_coeff42_a <= wdata[7:0];
				16'h455:
					rf_filter_coeff42_b <= wdata[7:0];
				16'h456:
					rf_filter_coeff43_a <= wdata[7:0];
				16'h457:
					rf_filter_coeff43_b <= wdata[7:0];
				16'h458:
					rf_filter_coeff44_a <= wdata[7:0];
				16'h459:
					rf_filter_coeff44_b <= wdata[7:0];
				16'h45a:
					rf_filter_coeff45_a <= wdata[7:0];
				16'h45b:
					rf_filter_coeff45_b <= wdata[7:0];
				16'h45c:
					rf_filter_coeff46_a <= wdata[7:0];
				16'h45d:
					rf_filter_coeff46_b <= wdata[7:0];
				16'h45e:
					rf_filter_coeff47_a <= wdata[7:0];
				16'h45f:
					rf_filter_coeff47_b <= wdata[7:0];
				16'h460:
					rf_filter_coeff48_a <= wdata[7:0];
				16'h461:
					rf_filter_coeff48_b <= wdata[7:0];
				16'h462:
					rf_filter_coeff49_a <= wdata[7:0];
				16'h463:
					rf_filter_coeff49_b <= wdata[7:0];
				16'h464:
					rf_filter_coeff50_a <= wdata[7:0];
				16'h465:
					rf_filter_coeff50_b <= wdata[7:0];
				16'h466:
					rf_filter_coeff51_a <= wdata[7:0];
				16'h467:
					rf_filter_coeff51_b <= wdata[7:0];
				16'h468:
					rf_filter_coeff52_a <= wdata[7:0];
				16'h469:
					rf_filter_coeff52_b <= wdata[7:0];
				16'h46a:
					rf_filter_coeff53_a <= wdata[7:0];
				16'h46b:
					rf_filter_coeff53_b <= wdata[7:0];
				16'h46c:
					rf_filter_coeff54_a <= wdata[7:0];
				16'h46d:
					rf_filter_coeff54_b <= wdata[7:0];
				16'h46e:
					rf_filter_coeff55_a <= wdata[7:0];
				16'h46f:
					rf_filter_coeff55_b <= wdata[7:0];
				16'h470:
					rf_filter_coeff56_a <= wdata[7:0];
				16'h471:
					rf_filter_coeff56_b <= wdata[7:0];
				16'h472:
					rf_filter_coeff57_a <= wdata[7:0];
				16'h473:
					rf_filter_coeff57_b <= wdata[7:0];
				16'h474:
					rf_filter_coeff58_a <= wdata[7:0];
				16'h475:
					rf_filter_coeff58_b <= wdata[7:0];
				16'h476:
					rf_filter_coeff59_a <= wdata[7:0];
				16'h477:
					rf_filter_coeff59_b <= wdata[7:0];
				16'h478:
					rf_filter_coeff60_a <= wdata[7:0];
				16'h479:
					rf_filter_coeff60_b <= wdata[7:0];
				16'h47a:
					rf_filter_coeff61_a <= wdata[7:0];
				16'h47b:
					rf_filter_coeff61_b <= wdata[7:0];
				16'h47c:
					rf_filter_coeff62_a <= wdata[7:0];
				16'h47d:
					rf_filter_coeff62_b <= wdata[7:0];
				16'h47e:
					rf_filter_coeff63_a <= wdata[7:0];
				16'h47f:
					rf_filter_coeff63_b <= wdata[7:0];
				16'h480:
					rf_filter_coeff64_a <= wdata[7:0];
				16'h481:
					rf_filter_coeff64_b <= wdata[7:0];
				16'h482:
					rf_filter_coeff65_a <= wdata[7:0];
				16'h483:
					rf_filter_coeff65_b <= wdata[7:0];
				16'h484:
					rf_filter_coeff66_a <= wdata[7:0];
				16'h485:
					rf_filter_coeff66_b <= wdata[7:0];
				16'h486:
					rf_filter_coeff67_a <= wdata[7:0];
				16'h487:
					rf_filter_coeff67_b <= wdata[7:0];
				16'h488:
					rf_filter_coeff68_a <= wdata[7:0];
				16'h489:
					rf_filter_coeff68_b <= wdata[7:0];
				16'h48a:
					rf_filter_coeff69_a <= wdata[7:0];
				16'h48b:
					rf_filter_coeff69_b <= wdata[7:0];
				16'h48c:
					rf_filter_coeff70_a <= wdata[7:0];
				16'h48d:
					rf_filter_coeff70_b <= wdata[7:0];
				16'h48e:
					rf_filter_coeff71_a <= wdata[7:0];
				16'h48f:
					rf_filter_coeff71_b <= wdata[7:0];
				16'h490:
					rf_filter_coeff72_a <= wdata[7:0];
				16'h491:
					rf_filter_coeff72_b <= wdata[7:0];
				16'h492:
					rf_filter_coeff73_a <= wdata[7:0];
				16'h493:
					rf_filter_coeff73_b <= wdata[7:0];
				16'h494:
					rf_filter_coeff74_a <= wdata[7:0];
				16'h495:
					rf_filter_coeff74_b <= wdata[7:0];
				16'h496:
					rf_filter_coeff75_a <= wdata[7:0];
				16'h497:
					rf_filter_coeff75_b <= wdata[7:0];
				16'h498:
					rf_filter_coeff76_a <= wdata[7:0];
				16'h499:
					rf_filter_coeff76_b <= wdata[7:0];
				16'h49a:
					rf_filter_coeff77_a <= wdata[7:0];
				16'h49b:
					rf_filter_coeff77_b <= wdata[7:0];
				16'h49c:
					rf_filter_coeff78_a <= wdata[7:0];
				16'h49d:
					rf_filter_coeff78_b <= wdata[7:0];
				16'h49e:
					rf_filter_coeff79_a <= wdata[7:0];
				16'h49f:
					rf_filter_coeff79_b <= wdata[7:0];
				16'h4a0:
					rf_filter_coeff80_a <= wdata[7:0];
				16'h4a1:
					rf_filter_coeff80_b <= wdata[7:0];
				16'h4a2:
					rf_filter_coeff81_a <= wdata[7:0];
				16'h4a3:
					rf_filter_coeff81_b <= wdata[7:0];
				16'h4a4:
					rf_filter_coeff82_a <= wdata[7:0];
				16'h4a5:
					rf_filter_coeff82_b <= wdata[7:0];
				16'h4a6:
					rf_filter_coeff83_a <= wdata[7:0];
				16'h4a7:
					rf_filter_coeff83_b <= wdata[7:0];
				16'h4a8:
					rf_filter_coeff84_a <= wdata[7:0];
				16'h4a9:
					rf_filter_coeff84_b <= wdata[7:0];
				16'h4aa:
					rf_filter_coeff85_a <= wdata[7:0];
				16'h4ab:
					rf_filter_coeff85_b <= wdata[7:0];
				16'h4ac:
					rf_filter_coeff86_a <= wdata[7:0];
				16'h4ad:
					rf_filter_coeff86_b <= wdata[7:0];
				16'h4ae:
					rf_filter_coeff87_a <= wdata[7:0];
				16'h4af:
					rf_filter_coeff87_b <= wdata[7:0];
				16'h4b0:
					rf_filter_coeff88_a <= wdata[7:0];
				16'h4b1:
					rf_filter_coeff88_b <= wdata[7:0];
				16'h4b2:
					rf_filter_coeff89_a <= wdata[7:0];
				16'h4b3:
					rf_filter_coeff89_b <= wdata[7:0];
				16'h4b4:
					rf_filter_coeff90_a <= wdata[7:0];
				16'h4b5:
					rf_filter_coeff90_b <= wdata[7:0];
				16'h4b6:
					rf_filter_coeff91_a <= wdata[7:0];
				16'h4b7:
					rf_filter_coeff91_b <= wdata[7:0];
				16'h4b8:
					rf_filter_coeff92_a <= wdata[7:0];
				16'h4b9:
					rf_filter_coeff92_b <= wdata[7:0];
				16'h4ba:
					rf_filter_coeff93_a <= wdata[7:0];
				16'h4bb:
					rf_filter_coeff93_b <= wdata[7:0];
				16'h4bc:
					rf_filter_coeff94_a <= wdata[7:0];
				16'h4bd:
					rf_filter_coeff94_b <= wdata[7:0];
				16'h4be:
					rf_filter_coeff95_a <= wdata[7:0];
				16'h4bf:
					rf_filter_coeff95_b <= wdata[7:0];
				16'h4c0:
					rf_filter_coeff96_a <= wdata[7:0];
				16'h4c1:
					rf_filter_coeff96_b <= wdata[7:0];
				16'h4c2:
					rf_filter_coeff97_a <= wdata[7:0];
				16'h4c3:
					rf_filter_coeff97_b <= wdata[7:0];
				16'h4c4:
					rf_filter_coeff98_a <= wdata[7:0];
				16'h4c5:
					rf_filter_coeff98_b <= wdata[7:0];
				16'h4c6:
					rf_filter_coeff99_a <= wdata[7:0];
				16'h4c7:
					rf_filter_coeff99_b <= wdata[7:0];
				16'h4c8:
					rf_filter_coeff100_a <= wdata[7:0];
				16'h4c9:
					rf_filter_coeff100_b <= wdata[7:0];
				16'h4ca:
					rf_filter_coeff101_a <= wdata[7:0];
				16'h4cb:
					rf_filter_coeff101_b <= wdata[7:0];
				16'h4cc:
					rf_filter_coeff102_a <= wdata[7:0];
				16'h4cd:
					rf_filter_coeff102_b <= wdata[7:0];
				16'h4ce:
					rf_filter_coeff103_a <= wdata[7:0];
				16'h4cf:
					rf_filter_coeff103_b <= wdata[7:0];
				16'h4d0:
					rf_filter_coeff104_a <= wdata[7:0];
				16'h4d1:
					rf_filter_coeff104_b <= wdata[7:0];
				16'h4d2:
					rf_filter_coeff105_a <= wdata[7:0];
				16'h4d3:
					rf_filter_coeff105_b <= wdata[7:0];
				16'h4d4:
					rf_filter_coeff106_a <= wdata[7:0];
				16'h4d5:
					rf_filter_coeff106_b <= wdata[7:0];
				16'h4d6:
					rf_filter_coeff107_a <= wdata[7:0];
				16'h4d7:
					rf_filter_coeff107_b <= wdata[7:0];
				16'h4d8:
					rf_filter_coeff108_a <= wdata[7:0];
				16'h4d9:
					rf_filter_coeff108_b <= wdata[7:0];
				16'h4da:
					rf_filter_coeff109_a <= wdata[7:0];
				16'h4db:
					rf_filter_coeff109_b <= wdata[7:0];
				16'h4dc:
					rf_filter_coeff110_a <= wdata[7:0];
				16'h4dd:
					rf_filter_coeff110_b <= wdata[7:0];
				16'h4de:
					rf_filter_coeff111_a <= wdata[7:0];
				16'h4df:
					rf_filter_coeff111_b <= wdata[7:0];
				16'h4e0:
					rf_filter_coeff112_a <= wdata[7:0];
				16'h4e1:
					rf_filter_coeff112_b <= wdata[7:0];
				16'h4e2:
					rf_filter_coeff113_a <= wdata[7:0];
				16'h4e3:
					rf_filter_coeff113_b <= wdata[7:0];
				16'h4e4:
					rf_filter_coeff114_a <= wdata[7:0];
				16'h4e5:
					rf_filter_coeff114_b <= wdata[7:0];
				16'h4e6:
					rf_filter_coeff115_a <= wdata[7:0];
				16'h4e7:
					rf_filter_coeff115_b <= wdata[7:0];
				16'h4e8:
					rf_filter_coeff116_a <= wdata[7:0];
				16'h4e9:
					rf_filter_coeff116_b <= wdata[7:0];
				16'h4ea:
					rf_filter_coeff117_a <= wdata[7:0];
				16'h4eb:
					rf_filter_coeff117_b <= wdata[7:0];
				16'h4ec:
					rf_filter_coeff118_a <= wdata[7:0];
				16'h4ed:
					rf_filter_coeff118_b <= wdata[7:0];
				16'h4ee:
					rf_filter_coeff119_a <= wdata[7:0];
				16'h4ef:
					rf_filter_coeff119_b <= wdata[7:0];
				16'h4f0:
					rf_filter_coeff120_a <= wdata[7:0];
				16'h4f1:
					rf_filter_coeff120_b <= wdata[7:0];
				16'h4f2:
					rf_filter_coeff121_a <= wdata[7:0];
				16'h4f3:
					rf_filter_coeff121_b <= wdata[7:0];
				16'h4f4:
					rf_filter_coeff122_a <= wdata[7:0];
				16'h4f5:
					rf_filter_coeff122_b <= wdata[7:0];
				16'h4f6:
					rf_filter_coeff123_a <= wdata[7:0];
				16'h4f7:
					rf_filter_coeff123_b <= wdata[7:0];
				16'h4f8:
					rf_filter_coeff124_a <= wdata[7:0];
				16'h4f9:
					rf_filter_coeff124_b <= wdata[7:0];
				16'h4fa:
					rf_filter_coeff125_a <= wdata[7:0];
				16'h4fb:
					rf_filter_coeff125_b <= wdata[7:0];
				16'h4fc:
					rf_filter_coeff126_a <= wdata[7:0];
				16'h4fd:
					rf_filter_coeff126_b <= wdata[7:0];
				16'h4fe:
					rf_filter_coeff127_a <= wdata[7:0];
				16'h4ff:
					rf_filter_coeff127_b <= wdata[7:0];
				16'h500:
					rf_filter_coeff128_a <= wdata[7:0];
				16'h501:
					rf_filter_coeff128_b <= wdata[7:0];
				16'h502:
					rf_filter_coeff129_a <= wdata[7:0];
				16'h503:
					rf_filter_coeff129_b <= wdata[7:0];
				16'h504:
					rf_filter_coeff130_a <= wdata[7:0];
				16'h505:
					rf_filter_coeff130_b <= wdata[7:0];
				16'h506:
					rf_filter_coeff131_a <= wdata[7:0];
				16'h507:
					rf_filter_coeff131_b <= wdata[7:0];
				16'h508:
					rf_filter_coeff132_a <= wdata[7:0];
				16'h509:
					rf_filter_coeff132_b <= wdata[7:0];
				16'h50a:
					rf_filter_coeff133_a <= wdata[7:0];
				16'h50b:
					rf_filter_coeff133_b <= wdata[7:0];
				16'h50c:
					rf_filter_coeff134_a <= wdata[7:0];
				16'h50d:
					rf_filter_coeff134_b <= wdata[7:0];
				16'h50e:
					rf_filter_coeff135_a <= wdata[7:0];
				16'h50f:
					rf_filter_coeff135_b <= wdata[7:0];
				16'h510:
					rf_filter_coeff136_a <= wdata[7:0];
				16'h511:
					rf_filter_coeff136_b <= wdata[7:0];
				16'h512:
					rf_filter_coeff137_a <= wdata[7:0];
				16'h513:
					rf_filter_coeff137_b <= wdata[7:0];
				16'h514:
					rf_filter_coeff138_a <= wdata[7:0];
				16'h515:
					rf_filter_coeff138_b <= wdata[7:0];
				16'h516:
					rf_filter_coeff139_a <= wdata[7:0];
				16'h517:
					rf_filter_coeff139_b <= wdata[7:0];
				16'h518:
					rf_filter_coeff140_a <= wdata[7:0];
				16'h519:
					rf_filter_coeff140_b <= wdata[7:0];
				16'h51a:
					rf_filter_coeff141_a <= wdata[7:0];
				16'h51b:
					rf_filter_coeff141_b <= wdata[7:0];
				16'h51c:
					rf_filter_coeff142_a <= wdata[7:0];
				16'h51d:
					rf_filter_coeff142_b <= wdata[7:0];
				16'h51e:
					rf_filter_coeff143_a <= wdata[7:0];
				16'h51f:
					rf_filter_coeff143_b <= wdata[7:0];
				16'h520:
					rf_filter_coeff144_a <= wdata[7:0];
				16'h521:
					rf_filter_coeff144_b <= wdata[7:0];
				16'h522:
					rf_filter_coeff145_a <= wdata[7:0];
				16'h523:
					rf_filter_coeff145_b <= wdata[7:0];
				16'h524:
					rf_filter_coeff146_a <= wdata[7:0];
				16'h525:
					rf_filter_coeff146_b <= wdata[7:0];
				16'h526:
					rf_filter_coeff147_a <= wdata[7:0];
				16'h527:
					rf_filter_coeff147_b <= wdata[7:0];
				16'h528:
					rf_filter_coeff148_a <= wdata[7:0];
				16'h529:
					rf_filter_coeff148_b <= wdata[7:0];
				16'h52a:
					rf_filter_coeff149_a <= wdata[7:0];
				16'h52b:
					rf_filter_coeff149_b <= wdata[7:0];
				16'h52c:
					rf_filter_coeff150_a <= wdata[7:0];
				16'h52d:
					rf_filter_coeff150_b <= wdata[7:0];
				16'h52e:
					rf_filter_coeff151_a <= wdata[7:0];
				16'h52f:
					rf_filter_coeff151_b <= wdata[7:0];
				16'h530:
					rf_filter_coeff152_a <= wdata[7:0];
				16'h531:
					rf_filter_coeff152_b <= wdata[7:0];
				16'h532:
					rf_filter_coeff153_a <= wdata[7:0];
				16'h533:
					rf_filter_coeff153_b <= wdata[7:0];
				16'h534:
					rf_filter_coeff154_a <= wdata[7:0];
				16'h535:
					rf_filter_coeff154_b <= wdata[7:0];
				16'h536:
					rf_filter_coeff155_a <= wdata[7:0];
				16'h537:
					rf_filter_coeff155_b <= wdata[7:0];
				16'h538:
					rf_filter_coeff156_a <= wdata[7:0];
				16'h539:
					rf_filter_coeff156_b <= wdata[7:0];
				16'h53a:
					rf_filter_coeff157_a <= wdata[7:0];
				16'h53b:
					rf_filter_coeff157_b <= wdata[7:0];
				16'h53c:
					rf_filter_coeff158_a <= wdata[7:0];
				16'h53d:
					rf_filter_coeff158_b <= wdata[7:0];
				16'h53e:
					rf_filter_coeff159_a <= wdata[7:0];
				16'h53f:
					rf_filter_coeff159_b <= wdata[7:0];
				16'h540:
					rf_filter_coeff160_a <= wdata[7:0];
				16'h541:
					rf_filter_coeff160_b <= wdata[7:0];
				16'h542:
					rf_filter_coeff161_a <= wdata[7:0];
				16'h543:
					rf_filter_coeff161_b <= wdata[7:0];
				16'h544:
					rf_filter_coeff162_a <= wdata[7:0];
				16'h545:
					rf_filter_coeff162_b <= wdata[7:0];
				16'h546:
					rf_filter_coeff163_a <= wdata[7:0];
				16'h547:
					rf_filter_coeff163_b <= wdata[7:0];
				16'h548:
					rf_filter_coeff164_a <= wdata[7:0];
				16'h549:
					rf_filter_coeff164_b <= wdata[7:0];
				16'h54a:
					rf_filter_coeff165_a <= wdata[7:0];
				16'h54b:
					rf_filter_coeff165_b <= wdata[7:0];
				16'h54c:
					rf_filter_coeff166_a <= wdata[7:0];
				16'h54d:
					rf_filter_coeff166_b <= wdata[7:0];
				16'h54e:
					rf_filter_coeff167_a <= wdata[7:0];
				16'h54f:
					rf_filter_coeff167_b <= wdata[7:0];
				16'h550:
					rf_filter_coeff168_a <= wdata[7:0];
				16'h551:
					rf_filter_coeff168_b <= wdata[7:0];
				16'h552:
					rf_filter_coeff169_a <= wdata[7:0];
				16'h553:
					rf_filter_coeff169_b <= wdata[7:0];
				16'h554:
					rf_filter_coeff170_a <= wdata[7:0];
				16'h555:
					rf_filter_coeff170_b <= wdata[7:0];
				16'h556:
					rf_filter_coeff171_a <= wdata[7:0];
				16'h557:
					rf_filter_coeff171_b <= wdata[7:0];
				16'h558:
					rf_filter_coeff172_a <= wdata[7:0];
				16'h559:
					rf_filter_coeff172_b <= wdata[7:0];
				16'h55a:
					rf_filter_coeff173_a <= wdata[7:0];
				16'h55b:
					rf_filter_coeff173_b <= wdata[7:0];
				16'h55c:
					rf_filter_coeff174_a <= wdata[7:0];
				16'h55d:
					rf_filter_coeff174_b <= wdata[7:0];
				16'h55e:
					rf_filter_coeff175_a <= wdata[7:0];
				16'h55f:
					rf_filter_coeff175_b <= wdata[7:0];
				16'h560:
					rf_filter_coeff176_a <= wdata[7:0];
				16'h561:
					rf_filter_coeff176_b <= wdata[7:0];
				16'h562:
					rf_filter_coeff177_a <= wdata[7:0];
				16'h563:
					rf_filter_coeff177_b <= wdata[7:0];
				16'h564:
					rf_filter_coeff178_a <= wdata[7:0];
				16'h565:
					rf_filter_coeff178_b <= wdata[7:0];
				16'h566:
					rf_filter_coeff179_a <= wdata[7:0];
				16'h567:
					rf_filter_coeff179_b <= wdata[7:0];
				16'h568:
					rf_filter_coeff180_a <= wdata[7:0];
				16'h569:
					rf_filter_coeff180_b <= wdata[7:0];
				16'h56a:
					rf_filter_coeff181_a <= wdata[7:0];
				16'h56b:
					rf_filter_coeff181_b <= wdata[7:0];
				16'h56c:
					rf_filter_coeff182_a <= wdata[7:0];
				16'h56d:
					rf_filter_coeff182_b <= wdata[7:0];
				16'h56e:
					rf_filter_coeff183_a <= wdata[7:0];
				16'h56f:
					rf_filter_coeff183_b <= wdata[7:0];
				16'h570:
					rf_filter_coeff184_a <= wdata[7:0];
				16'h571:
					rf_filter_coeff184_b <= wdata[7:0];
				16'h572:
					rf_filter_coeff185_a <= wdata[7:0];
				16'h573:
					rf_filter_coeff185_b <= wdata[7:0];
				16'h574:
					rf_filter_coeff186_a <= wdata[7:0];
				16'h575:
					rf_filter_coeff186_b <= wdata[7:0];
				16'h576:
					rf_filter_coeff187_a <= wdata[7:0];
				16'h577:
					rf_filter_coeff187_b <= wdata[7:0];
				16'h578:
					rf_filter_coeff188_a <= wdata[7:0];
				16'h579:
					rf_filter_coeff188_b <= wdata[7:0];
				16'h57a:
					rf_filter_coeff189_a <= wdata[7:0];
				16'h57b:
					rf_filter_coeff189_b <= wdata[7:0];
				16'h57c:
					rf_filter_coeff190_a <= wdata[7:0];
				16'h57d:
					rf_filter_coeff190_b <= wdata[7:0];
				16'h57e:
					rf_filter_coeff191_a <= wdata[7:0];
				16'h57f:
					rf_filter_coeff191_b <= wdata[7:0];
				16'h580:
					rf_filter_coeff192_a <= wdata[7:0];
				16'h581:
					rf_filter_coeff192_b <= wdata[7:0];
				16'h582:
					rf_filter_coeff193_a <= wdata[7:0];
				16'h583:
					rf_filter_coeff193_b <= wdata[7:0];
				16'h584:
					rf_filter_coeff194_a <= wdata[7:0];
				16'h585:
					rf_filter_coeff194_b <= wdata[7:0];
				16'h586:
					rf_filter_coeff195_a <= wdata[7:0];
				16'h587:
					rf_filter_coeff195_b <= wdata[7:0];
				16'h588:
					rf_filter_coeff196_a <= wdata[7:0];
				16'h589:
					rf_filter_coeff196_b <= wdata[7:0];
				16'h58a:
					rf_filter_coeff197_a <= wdata[7:0];
				16'h58b:
					rf_filter_coeff197_b <= wdata[7:0];
				16'h58c:
					rf_filter_coeff198_a <= wdata[7:0];
				16'h58d:
					rf_filter_coeff198_b <= wdata[7:0];
				16'h58e:
					rf_filter_coeff199_a <= wdata[7:0];
				16'h58f:
					rf_filter_coeff199_b <= wdata[7:0];
				16'h590:
					rf_filter_coeff200_a <= wdata[7:0];
				16'h591:
					rf_filter_coeff200_b <= wdata[7:0];
				16'h592:
					rf_filter_coeff201_a <= wdata[7:0];
				16'h593:
					rf_filter_coeff201_b <= wdata[7:0];
				16'h594:
					rf_filter_coeff202_a <= wdata[7:0];
				16'h595:
					rf_filter_coeff202_b <= wdata[7:0];
				16'h596:
					rf_filter_coeff203_a <= wdata[7:0];
				16'h597:
					rf_filter_coeff203_b <= wdata[7:0];
				16'h598:
					rf_filter_coeff204_a <= wdata[7:0];
				16'h599:
					rf_filter_coeff204_b <= wdata[7:0];
				16'h59a:
					rf_filter_coeff205_a <= wdata[7:0];
				16'h59b:
					rf_filter_coeff205_b <= wdata[7:0];
				16'h59c:
					rf_filter_coeff206_a <= wdata[7:0];
				16'h59d:
					rf_filter_coeff206_b <= wdata[7:0];
				16'h59e:
					rf_filter_coeff207_a <= wdata[7:0];
				16'h59f:
					rf_filter_coeff207_b <= wdata[7:0];
				16'h5a0:
					rf_filter_coeff208_a <= wdata[7:0];
				16'h5a1:
					rf_filter_coeff208_b <= wdata[7:0];
				16'h5a2:
					rf_filter_coeff209_a <= wdata[7:0];
				16'h5a3:
					rf_filter_coeff209_b <= wdata[7:0];
				16'h5a4:
					rf_filter_coeff210_a <= wdata[7:0];
				16'h5a5:
					rf_filter_coeff210_b <= wdata[7:0];
				16'h5a6:
					rf_filter_coeff211_a <= wdata[7:0];
				16'h5a7:
					rf_filter_coeff211_b <= wdata[7:0];
				16'h5a8:
					rf_filter_coeff212_a <= wdata[7:0];
				16'h5a9:
					rf_filter_coeff212_b <= wdata[7:0];
				16'h5aa:
					rf_filter_coeff213_a <= wdata[7:0];
				16'h5ab:
					rf_filter_coeff213_b <= wdata[7:0];
				16'h5ac:
					rf_filter_coeff214_a <= wdata[7:0];
				16'h5ad:
					rf_filter_coeff214_b <= wdata[7:0];
				16'h5ae:
					rf_filter_coeff215_a <= wdata[7:0];
				16'h5af:
					rf_filter_coeff215_b <= wdata[7:0];
				16'h5b0:
					rf_filter_coeff216_a <= wdata[7:0];
				16'h5b1:
					rf_filter_coeff216_b <= wdata[7:0];
				16'h5b2:
					rf_filter_coeff217_a <= wdata[7:0];
				16'h5b3:
					rf_filter_coeff217_b <= wdata[7:0];
				16'h5b4:
					rf_filter_coeff218_a <= wdata[7:0];
				16'h5b5:
					rf_filter_coeff218_b <= wdata[7:0];
				16'h5b6:
					rf_filter_coeff219_a <= wdata[7:0];
				16'h5b7:
					rf_filter_coeff219_b <= wdata[7:0];
				16'h5b8:
					rf_filter_coeff220_a <= wdata[7:0];
				16'h5b9:
					rf_filter_coeff220_b <= wdata[7:0];
				16'h5ba:
					rf_filter_coeff221_a <= wdata[7:0];
				16'h5bb:
					rf_filter_coeff221_b <= wdata[7:0];
				16'h5bc:
					rf_filter_coeff222_a <= wdata[7:0];
				16'h5bd:
					rf_filter_coeff222_b <= wdata[7:0];
				16'h5be:
					rf_filter_coeff223_a <= wdata[7:0];
				16'h5bf:
					rf_filter_coeff223_b <= wdata[7:0];
				16'h5c0:
					rf_filter_coeff224_a <= wdata[7:0];
				16'h5c1:
					rf_filter_coeff224_b <= wdata[7:0];
				16'h5c2:
					rf_filter_coeff225_a <= wdata[7:0];
				16'h5c3:
					rf_filter_coeff225_b <= wdata[7:0];
				16'h5c4:
					rf_filter_coeff226_a <= wdata[7:0];
				16'h5c5:
					rf_filter_coeff226_b <= wdata[7:0];
				16'h5c6:
					rf_filter_coeff227_a <= wdata[7:0];
				16'h5c7:
					rf_filter_coeff227_b <= wdata[7:0];
				16'h5c8:
					rf_filter_coeff228_a <= wdata[7:0];
				16'h5c9:
					rf_filter_coeff228_b <= wdata[7:0];
				16'h5ca:
					rf_filter_coeff229_a <= wdata[7:0];
				16'h5cb:
					rf_filter_coeff229_b <= wdata[7:0];
				16'h5cc:
					rf_filter_coeff230_a <= wdata[7:0];
				16'h5cd:
					rf_filter_coeff230_b <= wdata[7:0];
				16'h5ce:
					rf_filter_coeff231_a <= wdata[7:0];
				16'h5cf:
					rf_filter_coeff231_b <= wdata[7:0];
				16'h5d0:
					rf_filter_coeff232_a <= wdata[7:0];
				16'h5d1:
					rf_filter_coeff232_b <= wdata[7:0];
				16'h5d2:
					rf_filter_coeff233_a <= wdata[7:0];
				16'h5d3:
					rf_filter_coeff233_b <= wdata[7:0];
				16'h5d4:
					rf_filter_coeff234_a <= wdata[7:0];
				16'h5d5:
					rf_filter_coeff234_b <= wdata[7:0];
				16'h5d6:
					rf_filter_coeff235_a <= wdata[7:0];
				16'h5d7:
					rf_filter_coeff235_b <= wdata[7:0];
				16'h5d8:
					rf_filter_coeff236_a <= wdata[7:0];
				16'h5d9:
					rf_filter_coeff236_b <= wdata[7:0];
				16'h5da:
					rf_filter_coeff237_a <= wdata[7:0];
				16'h5db:
					rf_filter_coeff237_b <= wdata[7:0];
				16'h5dc:
					rf_filter_coeff238_a <= wdata[7:0];
				16'h5dd:
					rf_filter_coeff238_b <= wdata[7:0];
				16'h5de:
					rf_filter_coeff239_a <= wdata[7:0];
				16'h5df:
					rf_filter_coeff239_b <= wdata[7:0];
				16'h5e0:
					rf_filter_coeff240_a <= wdata[7:0];
				16'h5e1:
					rf_filter_coeff240_b <= wdata[7:0];
				16'h5e2:
					rf_filter_coeff241_a <= wdata[7:0];
				16'h5e3:
					rf_filter_coeff241_b <= wdata[7:0];
				16'h5e4:
					rf_filter_coeff242_a <= wdata[7:0];
				16'h5e5:
					rf_filter_coeff242_b <= wdata[7:0];
				16'h5e6:
					rf_filter_coeff243_a <= wdata[7:0];
				16'h5e7:
					rf_filter_coeff243_b <= wdata[7:0];
				16'h5e8:
					rf_filter_coeff244_a <= wdata[7:0];
				16'h5e9:
					rf_filter_coeff244_b <= wdata[7:0];
				16'h5ea:
					rf_filter_coeff245_a <= wdata[7:0];
				16'h5eb:
					rf_filter_coeff245_b <= wdata[7:0];
				16'h5ec:
					rf_filter_coeff246_a <= wdata[7:0];
				16'h5ed:
					rf_filter_coeff246_b <= wdata[7:0];
				16'h5ee:
					rf_filter_coeff247_a <= wdata[7:0];
				16'h5ef:
					rf_filter_coeff247_b <= wdata[7:0];
				16'h5f0:
					rf_filter_coeff248_a <= wdata[7:0];
				16'h5f1:
					rf_filter_coeff248_b <= wdata[7:0];
				16'h5f2:
					rf_filter_coeff249_a <= wdata[7:0];
				16'h5f3:
					rf_filter_coeff249_b <= wdata[7:0];
				16'h5f4:
					rf_filter_coeff250_a <= wdata[7:0];
				16'h5f5:
					rf_filter_coeff250_b <= wdata[7:0];
				16'h5f6:
					rf_filter_coeff251_a <= wdata[7:0];
				16'h5f7:
					rf_filter_coeff251_b <= wdata[7:0];
				16'h5f8:
					rf_filter_coeff252_a <= wdata[7:0];
				16'h5f9:
					rf_filter_coeff252_b <= wdata[7:0];
				16'h5fa:
					rf_filter_coeff253_a <= wdata[7:0];
				16'h5fb:
					rf_filter_coeff253_b <= wdata[7:0];
				16'h5fc:
					rf_filter_coeff254_a <= wdata[7:0];
				16'h5fd:
					rf_filter_coeff254_b <= wdata[7:0];
				16'h5fe:
					rf_filter_coeff255_a <= wdata[7:0];
				16'h5ff:
					rf_filter_coeff255_b <= wdata[7:0];
				16'h600:
					rf_filter_coeff256_a <= wdata[7:0];
				16'h601:
					rf_filter_coeff256_b <= wdata[7:0];
				16'h602:
					rf_filter_coeff257_a <= wdata[7:0];
				16'h603:
					rf_filter_coeff257_b <= wdata[7:0];
				16'h604:
					rf_filter_coeff258_a <= wdata[7:0];
				16'h605:
					rf_filter_coeff258_b <= wdata[7:0];
				16'h606:
					rf_filter_coeff259_a <= wdata[7:0];
				16'h607:
					rf_filter_coeff259_b <= wdata[7:0];
				16'h608:
					rf_filter_coeff260_a <= wdata[7:0];
				16'h609:
					rf_filter_coeff260_b <= wdata[7:0];
				16'h60a:
					rf_filter_coeff261_a <= wdata[7:0];
				16'h60b:
					rf_filter_coeff261_b <= wdata[7:0];
				16'h60c:
					rf_filter_coeff262_a <= wdata[7:0];
				16'h60d:
					rf_filter_coeff262_b <= wdata[7:0];
				16'h60e:
					rf_filter_coeff263_a <= wdata[7:0];
				16'h60f:
					rf_filter_coeff263_b <= wdata[7:0];
				16'h610:
					rf_filter_coeff264_a <= wdata[7:0];
				16'h611:
					rf_filter_coeff264_b <= wdata[7:0];
				16'h612:
					rf_filter_coeff265_a <= wdata[7:0];
				16'h613:
					rf_filter_coeff265_b <= wdata[7:0];
				16'h614:
					rf_filter_coeff266_a <= wdata[7:0];
				16'h615:
					rf_filter_coeff266_b <= wdata[7:0];
				16'h616:
					rf_filter_coeff267_a <= wdata[7:0];
				16'h617:
					rf_filter_coeff267_b <= wdata[7:0];
				16'h618:
					rf_filter_coeff268_a <= wdata[7:0];
				16'h619:
					rf_filter_coeff268_b <= wdata[7:0];
				16'h61a:
					rf_filter_coeff269_a <= wdata[7:0];
				16'h61b:
					rf_filter_coeff269_b <= wdata[7:0];
				16'h61c:
					rf_filter_coeff270_a <= wdata[7:0];
				16'h61d:
					rf_filter_coeff270_b <= wdata[7:0];
				16'h61e:
					rf_filter_coeff271_a <= wdata[7:0];
				16'h61f:
					rf_filter_coeff271_b <= wdata[7:0];
				16'h620:
					rf_filter_coeff272_a <= wdata[7:0];
				16'h621:
					rf_filter_coeff272_b <= wdata[7:0];
				16'h622:
					rf_filter_coeff273_a <= wdata[7:0];
				16'h623:
					rf_filter_coeff273_b <= wdata[7:0];
				16'h624:
					rf_filter_coeff274_a <= wdata[7:0];
				16'h625:
					rf_filter_coeff274_b <= wdata[7:0];
				16'h626:
					rf_filter_coeff275_a <= wdata[7:0];
				16'h627:
					rf_filter_coeff275_b <= wdata[7:0];
				16'h628:
					rf_filter_coeff276_a <= wdata[7:0];
				16'h629:
					rf_filter_coeff276_b <= wdata[7:0];
				16'h62a:
					rf_filter_coeff277_a <= wdata[7:0];
				16'h62b:
					rf_filter_coeff277_b <= wdata[7:0];
				16'h62c:
					rf_filter_coeff278_a <= wdata[7:0];
				16'h62d:
					rf_filter_coeff278_b <= wdata[7:0];
				16'h62e:
					rf_filter_coeff279_a <= wdata[7:0];
				16'h62f:
					rf_filter_coeff279_b <= wdata[7:0];
				16'h630:
					rf_filter_coeff280_a <= wdata[7:0];
				16'h631:
					rf_filter_coeff280_b <= wdata[7:0];
				16'h632:
					rf_filter_coeff281_a <= wdata[7:0];
				16'h633:
					rf_filter_coeff281_b <= wdata[7:0];
				16'h634:
					rf_filter_coeff282_a <= wdata[7:0];
				16'h635:
					rf_filter_coeff282_b <= wdata[7:0];
				16'h636:
					rf_filter_coeff283_a <= wdata[7:0];
				16'h637:
					rf_filter_coeff283_b <= wdata[7:0];
				16'h638:
					rf_filter_coeff284_a <= wdata[7:0];
				16'h639:
					rf_filter_coeff284_b <= wdata[7:0];
				16'h63a:
					rf_filter_coeff285_a <= wdata[7:0];
				16'h63b:
					rf_filter_coeff285_b <= wdata[7:0];
				16'h63c:
					rf_filter_coeff286_a <= wdata[7:0];
				16'h63d:
					rf_filter_coeff286_b <= wdata[7:0];
				16'h63e:
					rf_filter_coeff287_a <= wdata[7:0];
				16'h63f:
					rf_filter_coeff287_b <= wdata[7:0];
				16'h640:
					rf_filter_coeff288_a <= wdata[7:0];
				16'h641:
					rf_filter_coeff288_b <= wdata[7:0];
				16'h642:
					rf_filter_coeff289_a <= wdata[7:0];
				16'h643:
					rf_filter_coeff289_b <= wdata[7:0];
				16'h644:
					rf_filter_coeff290_a <= wdata[7:0];
				16'h645:
					rf_filter_coeff290_b <= wdata[7:0];
				16'h646:
					rf_filter_coeff291_a <= wdata[7:0];
				16'h647:
					rf_filter_coeff291_b <= wdata[7:0];
				16'h648:
					rf_filter_coeff292_a <= wdata[7:0];
				16'h649:
					rf_filter_coeff292_b <= wdata[7:0];
				16'h64a:
					rf_filter_coeff293_a <= wdata[7:0];
				16'h64b:
					rf_filter_coeff293_b <= wdata[7:0];
				16'h64c:
					rf_filter_coeff294_a <= wdata[7:0];
				16'h64d:
					rf_filter_coeff294_b <= wdata[7:0];
				16'h64e:
					rf_filter_coeff295_a <= wdata[7:0];
				16'h64f:
					rf_filter_coeff295_b <= wdata[7:0];
				16'h650:
					rf_filter_coeff296_a <= wdata[7:0];
				16'h651:
					rf_filter_coeff296_b <= wdata[7:0];
				16'h652:
					rf_filter_coeff297_a <= wdata[7:0];
				16'h653:
					rf_filter_coeff297_b <= wdata[7:0];
				16'h654:
					rf_filter_coeff298_a <= wdata[7:0];
				16'h655:
					rf_filter_coeff298_b <= wdata[7:0];
				16'h656:
					rf_filter_coeff299_a <= wdata[7:0];
				16'h657:
					rf_filter_coeff299_b <= wdata[7:0];
				16'h658:
					rf_filter_coeff300_a <= wdata[7:0];
				16'h659:
					rf_filter_coeff300_b <= wdata[7:0];
				16'h65a:
					rf_filter_coeff301_a <= wdata[7:0];
				16'h65b:
					rf_filter_coeff301_b <= wdata[7:0];
				16'h65c:
					rf_filter_coeff302_a <= wdata[7:0];
				16'h65d:
					rf_filter_coeff302_b <= wdata[7:0];
				16'h65e:
					rf_filter_coeff303_a <= wdata[7:0];
				16'h65f:
					rf_filter_coeff303_b <= wdata[7:0];
				16'h660:
					rf_filter_coeff304_a <= wdata[7:0];
				16'h661:
					rf_filter_coeff304_b <= wdata[7:0];
				16'h662:
					rf_filter_coeff305_a <= wdata[7:0];
				16'h663:
					rf_filter_coeff305_b <= wdata[7:0];
				16'h664:
					rf_filter_coeff306_a <= wdata[7:0];
				16'h665:
					rf_filter_coeff306_b <= wdata[7:0];
				16'h666:
					rf_filter_coeff307_a <= wdata[7:0];
				16'h667:
					rf_filter_coeff307_b <= wdata[7:0];
				16'h668:
					rf_filter_coeff308_a <= wdata[7:0];
				16'h669:
					rf_filter_coeff308_b <= wdata[7:0];
				16'h66a:
					rf_filter_coeff309_a <= wdata[7:0];
				16'h66b:
					rf_filter_coeff309_b <= wdata[7:0];
				16'h66c:
					rf_filter_coeff310_a <= wdata[7:0];
				16'h66d:
					rf_filter_coeff310_b <= wdata[7:0];
				16'h66e:
					rf_filter_coeff311_a <= wdata[7:0];
				16'h66f:
					rf_filter_coeff311_b <= wdata[7:0];
				16'h670:
					rf_filter_coeff312_a <= wdata[7:0];
				16'h671:
					rf_filter_coeff312_b <= wdata[7:0];
				16'h672:
					rf_filter_coeff313_a <= wdata[7:0];
				16'h673:
					rf_filter_coeff313_b <= wdata[7:0];
				16'h674:
					rf_filter_coeff314_a <= wdata[7:0];
				16'h675:
					rf_filter_coeff314_b <= wdata[7:0];
				16'h676:
					rf_filter_coeff315_a <= wdata[7:0];
				16'h677:
					rf_filter_coeff315_b <= wdata[7:0];
				16'h678:
					rf_filter_coeff316_a <= wdata[7:0];
				16'h679:
					rf_filter_coeff316_b <= wdata[7:0];
				16'h67a:
					rf_filter_coeff317_a <= wdata[7:0];
				16'h67b:
					rf_filter_coeff317_b <= wdata[7:0];
				16'h67c:
					rf_filter_coeff318_a <= wdata[7:0];
				16'h67d:
					rf_filter_coeff318_b <= wdata[7:0];
				16'h67e:
					rf_filter_coeff319_a <= wdata[7:0];
				16'h67f:
					rf_filter_coeff319_b <= wdata[7:0];
				16'h680:
					rf_filter_coeff320_a <= wdata[7:0];
				16'h681:
					rf_filter_coeff320_b <= wdata[7:0];
				16'h682:
					rf_filter_coeff321_a <= wdata[7:0];
				16'h683:
					rf_filter_coeff321_b <= wdata[7:0];
				16'h684:
					rf_filter_coeff322_a <= wdata[7:0];
				16'h685:
					rf_filter_coeff322_b <= wdata[7:0];
				16'h686:
					rf_filter_coeff323_a <= wdata[7:0];
				16'h687:
					rf_filter_coeff323_b <= wdata[7:0];
				16'h688:
					rf_filter_coeff324_a <= wdata[7:0];
				16'h689:
					rf_filter_coeff324_b <= wdata[7:0];
				16'h68a:
					rf_filter_coeff325_a <= wdata[7:0];
				16'h68b:
					rf_filter_coeff325_b <= wdata[7:0];
				16'h68c:
					rf_filter_coeff326_a <= wdata[7:0];
				16'h68d:
					rf_filter_coeff326_b <= wdata[7:0];
				16'h68e:
					rf_filter_coeff327_a <= wdata[7:0];
				16'h68f:
					rf_filter_coeff327_b <= wdata[7:0];
				16'h690:
					rf_filter_coeff328_a <= wdata[7:0];
				16'h691:
					rf_filter_coeff328_b <= wdata[7:0];
				16'h692:
					rf_filter_coeff329_a <= wdata[7:0];
				16'h693:
					rf_filter_coeff329_b <= wdata[7:0];
				16'h694:
					rf_filter_coeff330_a <= wdata[7:0];
				16'h695:
					rf_filter_coeff330_b <= wdata[7:0];
				16'h696:
					rf_filter_coeff331_a <= wdata[7:0];
				16'h697:
					rf_filter_coeff331_b <= wdata[7:0];
				16'h698:
					rf_filter_coeff332_a <= wdata[7:0];
				16'h699:
					rf_filter_coeff332_b <= wdata[7:0];
				16'h69a:
					rf_filter_coeff333_a <= wdata[7:0];
				16'h69b:
					rf_filter_coeff333_b <= wdata[7:0];
				16'h69c:
					rf_filter_coeff334_a <= wdata[7:0];
				16'h69d:
					rf_filter_coeff334_b <= wdata[7:0];
				16'h69e:
					rf_filter_coeff335_a <= wdata[7:0];
				16'h69f:
					rf_filter_coeff335_b <= wdata[7:0];
				16'h6a0:
					rf_filter_coeff336_a <= wdata[7:0];
				16'h6a1:
					rf_filter_coeff336_b <= wdata[7:0];
				16'h6a2:
					rf_filter_coeff337_a <= wdata[7:0];
				16'h6a3:
					rf_filter_coeff337_b <= wdata[7:0];
				16'h6a4:
					rf_filter_coeff338_a <= wdata[7:0];
				16'h6a5:
					rf_filter_coeff338_b <= wdata[7:0];
				16'h6a6:
					rf_filter_coeff339_a <= wdata[7:0];
				16'h6a7:
					rf_filter_coeff339_b <= wdata[7:0];
				16'h6a8:
					rf_filter_coeff340_a <= wdata[7:0];
				16'h6a9:
					rf_filter_coeff340_b <= wdata[7:0];
				16'h6aa:
					rf_filter_coeff341_a <= wdata[7:0];
				16'h6ab:
					rf_filter_coeff341_b <= wdata[7:0];
				16'h6ac:
					rf_filter_coeff342_a <= wdata[7:0];
				16'h6ad:
					rf_filter_coeff342_b <= wdata[7:0];
				16'h6ae:
					rf_filter_coeff343_a <= wdata[7:0];
				16'h6af:
					rf_filter_coeff343_b <= wdata[7:0];
				16'h6b0:
					rf_filter_coeff344_a <= wdata[7:0];
				16'h6b1:
					rf_filter_coeff344_b <= wdata[7:0];
				16'h6b2:
					rf_filter_coeff345_a <= wdata[7:0];
				16'h6b3:
					rf_filter_coeff345_b <= wdata[7:0];
				16'h6b4:
					rf_filter_coeff346_a <= wdata[7:0];
				16'h6b5:
					rf_filter_coeff346_b <= wdata[7:0];
				16'h6b6:
					rf_filter_coeff347_a <= wdata[7:0];
				16'h6b7:
					rf_filter_coeff347_b <= wdata[7:0];
				16'h6b8:
					rf_filter_coeff348_a <= wdata[7:0];
				16'h6b9:
					rf_filter_coeff348_b <= wdata[7:0];
				16'h6ba:
					rf_filter_coeff349_a <= wdata[7:0];
				16'h6bb:
					rf_filter_coeff349_b <= wdata[7:0];
				16'h6bc:
					rf_filter_coeff350_a <= wdata[7:0];
				16'h6bd:
					rf_filter_coeff350_b <= wdata[7:0];
				16'h6be:
					rf_filter_coeff351_a <= wdata[7:0];
				16'h6bf:
					rf_filter_coeff351_b <= wdata[7:0];
				16'h6c0:
					rf_filter_coeff352_a <= wdata[7:0];
				16'h6c1:
					rf_filter_coeff352_b <= wdata[7:0];
				16'h6c2:
					rf_filter_coeff353_a <= wdata[7:0];
				16'h6c3:
					rf_filter_coeff353_b <= wdata[7:0];
				16'h6c4:
					rf_filter_coeff354_a <= wdata[7:0];
				16'h6c5:
					rf_filter_coeff354_b <= wdata[7:0];
				16'h6c6:
					rf_filter_coeff355_a <= wdata[7:0];
				16'h6c7:
					rf_filter_coeff355_b <= wdata[7:0];
				16'h6c8:
					rf_filter_coeff356_a <= wdata[7:0];
				16'h6c9:
					rf_filter_coeff356_b <= wdata[7:0];
				16'h6ca:
					rf_filter_coeff357_a <= wdata[7:0];
				16'h6cb:
					rf_filter_coeff357_b <= wdata[7:0];
				16'h6cc:
					rf_filter_coeff358_a <= wdata[7:0];
				16'h6cd:
					rf_filter_coeff358_b <= wdata[7:0];
				16'h6ce:
					rf_filter_coeff359_a <= wdata[7:0];
				16'h6cf:
					rf_filter_coeff359_b <= wdata[7:0];
				16'h6d0:
					rf_filter_coeff360_a <= wdata[7:0];
				16'h6d1:
					rf_filter_coeff360_b <= wdata[7:0];
				16'h6d2:
					rf_filter_coeff361_a <= wdata[7:0];
				16'h6d3:
					rf_filter_coeff361_b <= wdata[7:0];
				16'h6d4:
					rf_filter_coeff362_a <= wdata[7:0];
				16'h6d5:
					rf_filter_coeff362_b <= wdata[7:0];
				16'h6d6:
					rf_filter_coeff363_a <= wdata[7:0];
				16'h6d7:
					rf_filter_coeff363_b <= wdata[7:0];
				16'h6d8:
					rf_filter_coeff364_a <= wdata[7:0];
				16'h6d9:
					rf_filter_coeff364_b <= wdata[7:0];
				16'h6da:
					rf_filter_coeff365_a <= wdata[7:0];
				16'h6db:
					rf_filter_coeff365_b <= wdata[7:0];
				16'h6dc:
					rf_filter_coeff366_a <= wdata[7:0];
				16'h6dd:
					rf_filter_coeff366_b <= wdata[7:0];
				16'h6de:
					rf_filter_coeff367_a <= wdata[7:0];
				16'h6df:
					rf_filter_coeff367_b <= wdata[7:0];
				16'h6e0:
					rf_filter_coeff368_a <= wdata[7:0];
				16'h6e1:
					rf_filter_coeff368_b <= wdata[7:0];
				16'h6e2:
					rf_filter_coeff369_a <= wdata[7:0];
				16'h6e3:
					rf_filter_coeff369_b <= wdata[7:0];
				16'h6e4:
					rf_filter_coeff370_a <= wdata[7:0];
				16'h6e5:
					rf_filter_coeff370_b <= wdata[7:0];
				16'h6e6:
					rf_filter_coeff371_a <= wdata[7:0];
				16'h6e7:
					rf_filter_coeff371_b <= wdata[7:0];
				16'h6e8:
					rf_filter_coeff372_a <= wdata[7:0];
				16'h6e9:
					rf_filter_coeff372_b <= wdata[7:0];
				16'h6ea:
					rf_filter_coeff373_a <= wdata[7:0];
				16'h6eb:
					rf_filter_coeff373_b <= wdata[7:0];
				16'h6ec:
					rf_filter_coeff374_a <= wdata[7:0];
				16'h6ed:
					rf_filter_coeff374_b <= wdata[7:0];
				16'h6ee:
					rf_filter_coeff375_a <= wdata[7:0];
				16'h6ef:
					rf_filter_coeff375_b <= wdata[7:0];
				16'h6f0:
					rf_filter_coeff376_a <= wdata[7:0];
				16'h6f1:
					rf_filter_coeff376_b <= wdata[7:0];
				16'h6f2:
					rf_filter_coeff377_a <= wdata[7:0];
				16'h6f3:
					rf_filter_coeff377_b <= wdata[7:0];
				16'h6f4:
					rf_filter_coeff378_a <= wdata[7:0];
				16'h6f5:
					rf_filter_coeff378_b <= wdata[7:0];
				16'h6f6:
					rf_filter_coeff379_a <= wdata[7:0];
				16'h6f7:
					rf_filter_coeff379_b <= wdata[7:0];
				16'h6f8:
					rf_filter_coeff380_a <= wdata[7:0];
				16'h6f9:
					rf_filter_coeff380_b <= wdata[7:0];
				16'h6fa:
					rf_filter_coeff381_a <= wdata[7:0];
				16'h6fb:
					rf_filter_coeff381_b <= wdata[7:0];
				16'h6fc:
					rf_filter_coeff382_a <= wdata[7:0];
				16'h6fd:
					rf_filter_coeff382_b <= wdata[7:0];
				16'h6fe:
					rf_filter_coeff383_a <= wdata[7:0];
				16'h6ff:
					rf_filter_coeff383_b <= wdata[7:0];
				16'h700:
					rf_filter_coeff384_a <= wdata[7:0];
				16'h701:
					rf_filter_coeff384_b <= wdata[7:0];
				16'h702:
					rf_filter_coeff385_a <= wdata[7:0];
				16'h703:
					rf_filter_coeff385_b <= wdata[7:0];
				16'h704:
					rf_filter_coeff386_a <= wdata[7:0];
				16'h705:
					rf_filter_coeff386_b <= wdata[7:0];
				16'h706:
					rf_filter_coeff387_a <= wdata[7:0];
				16'h707:
					rf_filter_coeff387_b <= wdata[7:0];
				16'h708:
					rf_filter_coeff388_a <= wdata[7:0];
				16'h709:
					rf_filter_coeff388_b <= wdata[7:0];
				16'h70a:
					rf_filter_coeff389_a <= wdata[7:0];
				16'h70b:
					rf_filter_coeff389_b <= wdata[7:0];
				16'h70c:
					rf_filter_coeff390_a <= wdata[7:0];
				16'h70d:
					rf_filter_coeff390_b <= wdata[7:0];
				16'h70e:
					rf_filter_coeff391_a <= wdata[7:0];
				16'h70f:
					rf_filter_coeff391_b <= wdata[7:0];
				16'h710:
					rf_filter_coeff392_a <= wdata[7:0];
				16'h711:
					rf_filter_coeff392_b <= wdata[7:0];
				16'h712:
					rf_filter_coeff393_a <= wdata[7:0];
				16'h713:
					rf_filter_coeff393_b <= wdata[7:0];
				16'h714:
					rf_filter_coeff394_a <= wdata[7:0];
				16'h715:
					rf_filter_coeff394_b <= wdata[7:0];
				16'h716:
					rf_filter_coeff395_a <= wdata[7:0];
				16'h717:
					rf_filter_coeff395_b <= wdata[7:0];
				16'h718:
					rf_filter_coeff396_a <= wdata[7:0];
				16'h719:
					rf_filter_coeff396_b <= wdata[7:0];
				16'h71a:
					rf_filter_coeff397_a <= wdata[7:0];
				16'h71b:
					rf_filter_coeff397_b <= wdata[7:0];
				16'h71c:
					rf_filter_coeff398_a <= wdata[7:0];
				16'h71d:
					rf_filter_coeff398_b <= wdata[7:0];
				16'h71e:
					rf_filter_coeff399_a <= wdata[7:0];
				16'h71f:
					rf_filter_coeff399_b <= wdata[7:0];
				16'h720:
					rf_filter_coeff400_a <= wdata[7:0];
				16'h721:
					rf_filter_coeff400_b <= wdata[7:0];
				16'h722:
					rf_filter_coeff401_a <= wdata[7:0];
				16'h723:
					rf_filter_coeff401_b <= wdata[7:0];
				16'h724:
					rf_filter_coeff402_a <= wdata[7:0];
				16'h725:
					rf_filter_coeff402_b <= wdata[7:0];
				16'h726:
					rf_filter_coeff403_a <= wdata[7:0];
				16'h727:
					rf_filter_coeff403_b <= wdata[7:0];
				16'h728:
					rf_filter_coeff404_a <= wdata[7:0];
				16'h729:
					rf_filter_coeff404_b <= wdata[7:0];
				16'h72a:
					rf_filter_coeff405_a <= wdata[7:0];
				16'h72b:
					rf_filter_coeff405_b <= wdata[7:0];
				16'h72c:
					rf_filter_coeff406_a <= wdata[7:0];
				16'h72d:
					rf_filter_coeff406_b <= wdata[7:0];
				16'h72e:
					rf_filter_coeff407_a <= wdata[7:0];
				16'h72f:
					rf_filter_coeff407_b <= wdata[7:0];
				16'h730:
					rf_filter_coeff408_a <= wdata[7:0];
				16'h731:
					rf_filter_coeff408_b <= wdata[7:0];
				16'h732:
					rf_filter_coeff409_a <= wdata[7:0];
				16'h733:
					rf_filter_coeff409_b <= wdata[7:0];
				16'h734:
					rf_filter_coeff410_a <= wdata[7:0];
				16'h735:
					rf_filter_coeff410_b <= wdata[7:0];
				16'h736:
					rf_filter_coeff411_a <= wdata[7:0];
				16'h737:
					rf_filter_coeff411_b <= wdata[7:0];
				16'h738:
					rf_filter_coeff412_a <= wdata[7:0];
				16'h739:
					rf_filter_coeff412_b <= wdata[7:0];
				16'h73a:
					rf_filter_coeff413_a <= wdata[7:0];
				16'h73b:
					rf_filter_coeff413_b <= wdata[7:0];
				16'h73c:
					rf_filter_coeff414_a <= wdata[7:0];
				16'h73d:
					rf_filter_coeff414_b <= wdata[7:0];
				16'h73e:
					rf_filter_coeff415_a <= wdata[7:0];
				16'h73f:
					rf_filter_coeff415_b <= wdata[7:0];
				16'h740:
					rf_filter_coeff416_a <= wdata[7:0];
				16'h741:
					rf_filter_coeff416_b <= wdata[7:0];
				16'h742:
					rf_filter_coeff417_a <= wdata[7:0];
				16'h743:
					rf_filter_coeff417_b <= wdata[7:0];
				16'h744:
					rf_filter_coeff418_a <= wdata[7:0];
				16'h745:
					rf_filter_coeff418_b <= wdata[7:0];
				16'h746:
					rf_filter_coeff419_a <= wdata[7:0];
				16'h747:
					rf_filter_coeff419_b <= wdata[7:0];
				16'h748:
					rf_filter_coeff420_a <= wdata[7:0];
				16'h749:
					rf_filter_coeff420_b <= wdata[7:0];
				16'h74a:
					rf_filter_coeff421_a <= wdata[7:0];
				16'h74b:
					rf_filter_coeff421_b <= wdata[7:0];
				16'h74c:
					rf_filter_coeff422_a <= wdata[7:0];
				16'h74d:
					rf_filter_coeff422_b <= wdata[7:0];
				16'h74e:
					rf_filter_coeff423_a <= wdata[7:0];
				16'h74f:
					rf_filter_coeff423_b <= wdata[7:0];
				16'h750:
					rf_filter_coeff424_a <= wdata[7:0];
				16'h751:
					rf_filter_coeff424_b <= wdata[7:0];
				16'h752:
					rf_filter_coeff425_a <= wdata[7:0];
				16'h753:
					rf_filter_coeff425_b <= wdata[7:0];
				16'h754:
					rf_filter_coeff426_a <= wdata[7:0];
				16'h755:
					rf_filter_coeff426_b <= wdata[7:0];
				16'h756:
					rf_filter_coeff427_a <= wdata[7:0];
				16'h757:
					rf_filter_coeff427_b <= wdata[7:0];
				16'h758:
					rf_filter_coeff428_a <= wdata[7:0];
				16'h759:
					rf_filter_coeff428_b <= wdata[7:0];
				16'h75a:
					rf_filter_coeff429_a <= wdata[7:0];
				16'h75b:
					rf_filter_coeff429_b <= wdata[7:0];
				16'h75c:
					rf_filter_coeff430_a <= wdata[7:0];
				16'h75d:
					rf_filter_coeff430_b <= wdata[7:0];
				16'h75e:
					rf_filter_coeff431_a <= wdata[7:0];
				16'h75f:
					rf_filter_coeff431_b <= wdata[7:0];
				16'h760:
					rf_filter_coeff432_a <= wdata[7:0];
				16'h761:
					rf_filter_coeff432_b <= wdata[7:0];
				16'h762:
					rf_filter_coeff433_a <= wdata[7:0];
				16'h763:
					rf_filter_coeff433_b <= wdata[7:0];
				16'h764:
					rf_filter_coeff434_a <= wdata[7:0];
				16'h765:
					rf_filter_coeff434_b <= wdata[7:0];
				16'h766:
					rf_filter_coeff435_a <= wdata[7:0];
				16'h767:
					rf_filter_coeff435_b <= wdata[7:0];
				16'h768:
					rf_filter_coeff436_a <= wdata[7:0];
				16'h769:
					rf_filter_coeff436_b <= wdata[7:0];
				16'h76a:
					rf_filter_coeff437_a <= wdata[7:0];
				16'h76b:
					rf_filter_coeff437_b <= wdata[7:0];
				16'h76c:
					rf_filter_coeff438_a <= wdata[7:0];
				16'h76d:
					rf_filter_coeff438_b <= wdata[7:0];
				16'h76e:
					rf_filter_coeff439_a <= wdata[7:0];
				16'h76f:
					rf_filter_coeff439_b <= wdata[7:0];
				16'h770:
					rf_filter_coeff440_a <= wdata[7:0];
				16'h771:
					rf_filter_coeff440_b <= wdata[7:0];
				16'h772:
					rf_filter_coeff441_a <= wdata[7:0];
				16'h773:
					rf_filter_coeff441_b <= wdata[7:0];
				16'h774:
					rf_filter_coeff442_a <= wdata[7:0];
				16'h775:
					rf_filter_coeff442_b <= wdata[7:0];
				16'h776:
					rf_filter_coeff443_a <= wdata[7:0];
				16'h777:
					rf_filter_coeff443_b <= wdata[7:0];
				16'h778:
					rf_filter_coeff444_a <= wdata[7:0];
				16'h779:
					rf_filter_coeff444_b <= wdata[7:0];
				16'h77a:
					rf_filter_coeff445_a <= wdata[7:0];
				16'h77b:
					rf_filter_coeff445_b <= wdata[7:0];
				16'h77c:
					rf_filter_coeff446_a <= wdata[7:0];
				16'h77d:
					rf_filter_coeff446_b <= wdata[7:0];
				16'h77e:
					rf_filter_coeff447_a <= wdata[7:0];
				16'h77f:
					rf_filter_coeff447_b <= wdata[7:0];
				16'h780:
					rf_filter_coeff448_a <= wdata[7:0];
				16'h781:
					rf_filter_coeff448_b <= wdata[7:0];
				16'h782:
					rf_filter_coeff449_a <= wdata[7:0];
				16'h783:
					rf_filter_coeff449_b <= wdata[7:0];
				16'h784:
					rf_filter_coeff450_a <= wdata[7:0];
				16'h785:
					rf_filter_coeff450_b <= wdata[7:0];
				16'h786:
					rf_filter_coeff451_a <= wdata[7:0];
				16'h787:
					rf_filter_coeff451_b <= wdata[7:0];
				16'h788:
					rf_filter_coeff452_a <= wdata[7:0];
				16'h789:
					rf_filter_coeff452_b <= wdata[7:0];
				16'h78a:
					rf_filter_coeff453_a <= wdata[7:0];
				16'h78b:
					rf_filter_coeff453_b <= wdata[7:0];
				16'h78c:
					rf_filter_coeff454_a <= wdata[7:0];
				16'h78d:
					rf_filter_coeff454_b <= wdata[7:0];
				16'h78e:
					rf_filter_coeff455_a <= wdata[7:0];
				16'h78f:
					rf_filter_coeff455_b <= wdata[7:0];
				16'h790:
					rf_filter_coeff456_a <= wdata[7:0];
				16'h791:
					rf_filter_coeff456_b <= wdata[7:0];
				16'h792:
					rf_filter_coeff457_a <= wdata[7:0];
				16'h793:
					rf_filter_coeff457_b <= wdata[7:0];
				16'h794:
					rf_filter_coeff458_a <= wdata[7:0];
				16'h795:
					rf_filter_coeff458_b <= wdata[7:0];
				16'h796:
					rf_filter_coeff459_a <= wdata[7:0];
				16'h797:
					rf_filter_coeff459_b <= wdata[7:0];
				16'h798:
					rf_filter_coeff460_a <= wdata[7:0];
				16'h799:
					rf_filter_coeff460_b <= wdata[7:0];
				16'h79a:
					rf_filter_coeff461_a <= wdata[7:0];
				16'h79b:
					rf_filter_coeff461_b <= wdata[7:0];
				16'h79c:
					rf_filter_coeff462_a <= wdata[7:0];
				16'h79d:
					rf_filter_coeff462_b <= wdata[7:0];
				16'h79e:
					rf_filter_coeff463_a <= wdata[7:0];
				16'h79f:
					rf_filter_coeff463_b <= wdata[7:0];
				16'h7a0:
					rf_filter_coeff464_a <= wdata[7:0];
				16'h7a1:
					rf_filter_coeff464_b <= wdata[7:0];
				16'h7a2:
					rf_filter_coeff465_a <= wdata[7:0];
				16'h7a3:
					rf_filter_coeff465_b <= wdata[7:0];
				16'h7a4:
					rf_filter_coeff466_a <= wdata[7:0];
				16'h7a5:
					rf_filter_coeff466_b <= wdata[7:0];
				16'h7a6:
					rf_filter_coeff467_a <= wdata[7:0];
				16'h7a7:
					rf_filter_coeff467_b <= wdata[7:0];
				16'h7a8:
					rf_filter_coeff468_a <= wdata[7:0];
				16'h7a9:
					rf_filter_coeff468_b <= wdata[7:0];
				16'h7aa:
					rf_filter_coeff469_a <= wdata[7:0];
				16'h7ab:
					rf_filter_coeff469_b <= wdata[7:0];
				16'h7ac:
					rf_filter_coeff470_a <= wdata[7:0];
				16'h7ad:
					rf_filter_coeff470_b <= wdata[7:0];
				16'h7ae:
					rf_filter_coeff471_a <= wdata[7:0];
				16'h7af:
					rf_filter_coeff471_b <= wdata[7:0];
				16'h7b0:
					rf_filter_coeff472_a <= wdata[7:0];
				16'h7b1:
					rf_filter_coeff472_b <= wdata[7:0];
				16'h7b2:
					rf_filter_coeff473_a <= wdata[7:0];
				16'h7b3:
					rf_filter_coeff473_b <= wdata[7:0];
				16'h7b4:
					rf_filter_coeff474_a <= wdata[7:0];
				16'h7b5:
					rf_filter_coeff474_b <= wdata[7:0];
				16'h7b6:
					rf_filter_coeff475_a <= wdata[7:0];
				16'h7b7:
					rf_filter_coeff475_b <= wdata[7:0];
				16'h7b8:
					rf_filter_coeff476_a <= wdata[7:0];
				16'h7b9:
					rf_filter_coeff476_b <= wdata[7:0];
				16'h7ba:
					rf_filter_coeff477_a <= wdata[7:0];
				16'h7bb:
					rf_filter_coeff477_b <= wdata[7:0];
				16'h7bc:
					rf_filter_coeff478_a <= wdata[7:0];
				16'h7bd:
					rf_filter_coeff478_b <= wdata[7:0];
				16'h7be:
					rf_filter_coeff479_a <= wdata[7:0];
				16'h7bf:
					rf_filter_coeff479_b <= wdata[7:0];
				16'h7c0:
					rf_filter_coeff480_a <= wdata[7:0];
				16'h7c1:
					rf_filter_coeff480_b <= wdata[7:0];
				16'h7c2:
					rf_filter_coeff481_a <= wdata[7:0];
				16'h7c3:
					rf_filter_coeff481_b <= wdata[7:0];
				16'h7c4:
					rf_filter_coeff482_a <= wdata[7:0];
				16'h7c5:
					rf_filter_coeff482_b <= wdata[7:0];
				16'h7c6:
					rf_filter_coeff483_a <= wdata[7:0];
				16'h7c7:
					rf_filter_coeff483_b <= wdata[7:0];
				16'h7c8:
					rf_filter_coeff484_a <= wdata[7:0];
				16'h7c9:
					rf_filter_coeff484_b <= wdata[7:0];
				16'h7ca:
					rf_filter_coeff485_a <= wdata[7:0];
				16'h7cb:
					rf_filter_coeff485_b <= wdata[7:0];
				16'h7cc:
					rf_filter_coeff486_a <= wdata[7:0];
				16'h7cd:
					rf_filter_coeff486_b <= wdata[7:0];
				16'h7ce:
					rf_filter_coeff487_a <= wdata[7:0];
				16'h7cf:
					rf_filter_coeff487_b <= wdata[7:0];
				16'h7d0:
					rf_filter_coeff488_a <= wdata[7:0];
				16'h7d1:
					rf_filter_coeff488_b <= wdata[7:0];
				16'h7d2:
					rf_filter_coeff489_a <= wdata[7:0];
				16'h7d3:
					rf_filter_coeff489_b <= wdata[7:0];
				16'h7d4:
					rf_filter_coeff490_a <= wdata[7:0];
				16'h7d5:
					rf_filter_coeff490_b <= wdata[7:0];
				16'h7d6:
					rf_filter_coeff491_a <= wdata[7:0];
				16'h7d7:
					rf_filter_coeff491_b <= wdata[7:0];
				16'h7d8:
					rf_filter_coeff492_a <= wdata[7:0];
				16'h7d9:
					rf_filter_coeff492_b <= wdata[7:0];
				16'h7da:
					rf_filter_coeff493_a <= wdata[7:0];
				16'h7db:
					rf_filter_coeff493_b <= wdata[7:0];
				16'h7dc:
					rf_filter_coeff494_a <= wdata[7:0];
				16'h7dd:
					rf_filter_coeff494_b <= wdata[7:0];
				16'h7de:
					rf_filter_coeff495_a <= wdata[7:0];
				16'h7df:
					rf_filter_coeff495_b <= wdata[7:0];
				16'h7e0:
					rf_filter_coeff496_a <= wdata[7:0];
				16'h7e1:
					rf_filter_coeff496_b <= wdata[7:0];
				16'h7e2:
					rf_filter_coeff497_a <= wdata[7:0];
				16'h7e3:
					rf_filter_coeff497_b <= wdata[7:0];
				16'h7e4:
					rf_filter_coeff498_a <= wdata[7:0];
				16'h7e5:
					rf_filter_coeff498_b <= wdata[7:0];
				16'h7e6:
					rf_filter_coeff499_a <= wdata[7:0];
				16'h7e7:
					rf_filter_coeff499_b <= wdata[7:0];
				16'h7e8:
					rf_filter_coeff500_a <= wdata[7:0];
				16'h7e9:
					rf_filter_coeff500_b <= wdata[7:0];
				16'h7ea:
					rf_filter_coeff501_a <= wdata[7:0];
				16'h7eb:
					rf_filter_coeff501_b <= wdata[7:0];
				16'h7ec:
					rf_filter_coeff502_a <= wdata[7:0];
				16'h7ed:
					rf_filter_coeff502_b <= wdata[7:0];
				16'h7ee:
					rf_filter_coeff503_a <= wdata[7:0];
				16'h7ef:
					rf_filter_coeff503_b <= wdata[7:0];
				16'h7f0:
					rf_filter_coeff504_a <= wdata[7:0];
				16'h7f1:
					rf_filter_coeff504_b <= wdata[7:0];
				16'h7f2:
					rf_filter_coeff505_a <= wdata[7:0];
				16'h7f3:
					rf_filter_coeff505_b <= wdata[7:0];
				16'h7f4:
					rf_filter_coeff506_a <= wdata[7:0];
				16'h7f5:
					rf_filter_coeff506_b <= wdata[7:0];
				16'h7f6:
					rf_filter_coeff507_a <= wdata[7:0];
				16'h7f7:
					rf_filter_coeff507_b <= wdata[7:0];
				16'h7f8:
					rf_filter_coeff508_a <= wdata[7:0];
				16'h7f9:
					rf_filter_coeff508_b <= wdata[7:0];
				16'h7fa:
					rf_filter_coeff509_a <= wdata[7:0];
				16'h7fb:
					rf_filter_coeff509_b <= wdata[7:0];
				16'h7fc:
					rf_filter_coeff510_a <= wdata[7:0];
				16'h7fd:
					rf_filter_coeff510_b <= wdata[7:0];
				16'h7fe:
					rf_filter_coeff511_a <= wdata[7:0];
				16'h7ff:
					rf_filter_coeff511_b <= wdata[7:0];
			endcase
		end
	end
endmodule
