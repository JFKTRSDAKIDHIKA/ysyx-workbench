// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBus(c+1042,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1043,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1044,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1045,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1046,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1047,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1048,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1049,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1050,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1051,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1052,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1053,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1054,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1055,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1056,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1057,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1058,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1059,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1060,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1061,"externalPins_uart_tx", false,-1);
    tracep->declBus(c+1062,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+1063,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+1064,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1065,"io_ifu_state_debug", false,-1, 2,0);
    tracep->declBus(c+1066,"io_lsu_state_debug", false,-1, 2,0);
    tracep->declBit(c+1067,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+1068,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1069,"io_dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+1070,"io_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1071,"io_lsu_reg_dmem_addr_debug", false,-1, 31,0);
    tracep->declBit(c+1072,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+1073,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+1074,"io_wbu_reg_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1075,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->declBus(c+1076,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBus(c+1077,"io_lsu_memory_ar_size", false,-1, 2,0);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBus(c+1042,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1043,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1044,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1045,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1046,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1047,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1048,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1049,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1050,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1051,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1052,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1053,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1054,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1055,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1056,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1057,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1058,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1059,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1060,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1061,"externalPins_uart_tx", false,-1);
    tracep->declBus(c+1062,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+1063,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+1064,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1065,"io_ifu_state_debug", false,-1, 2,0);
    tracep->declBus(c+1066,"io_lsu_state_debug", false,-1, 2,0);
    tracep->declBit(c+1067,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+1068,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1069,"io_dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+1070,"io_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1071,"io_lsu_reg_dmem_addr_debug", false,-1, 31,0);
    tracep->declBit(c+1072,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+1073,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+1074,"io_wbu_reg_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1075,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->declBus(c+1076,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBus(c+1077,"io_lsu_memory_ar_size", false,-1, 2,0);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+579,"spi_sck", false,-1);
    tracep->declBus(c+580,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+866,"spi_mosi", false,-1);
    tracep->declBit(c+1078,"spi_miso", false,-1);
    tracep->declBit(c+1060,"uart_rx", false,-1);
    tracep->declBit(c+1061,"uart_tx", false,-1);
    tracep->declBit(c+3,"psram_sck", false,-1);
    tracep->declBit(c+4,"psram_ce_n", false,-1);
    tracep->declBus(c+1079,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1080,"sdram_clk", false,-1);
    tracep->declBit(c+867,"sdram_cke", false,-1);
    tracep->declBit(c+581,"sdram_cs", false,-1);
    tracep->declBit(c+582,"sdram_ras", false,-1);
    tracep->declBit(c+583,"sdram_cas", false,-1);
    tracep->declBit(c+584,"sdram_we", false,-1);
    tracep->declBus(c+868,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+869,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+870,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+1081,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1042,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1043,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1044,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1045,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1046,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1047,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1048,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1049,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1050,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1051,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1052,"ps2_clk", false,-1);
    tracep->declBit(c+1053,"ps2_data", false,-1);
    tracep->declBus(c+1054,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1055,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1056,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1057,"vga_hsync", false,-1);
    tracep->declBit(c+1058,"vga_vsync", false,-1);
    tracep->declBit(c+1059,"vga_valid", false,-1);
    tracep->declBus(c+1062,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+1063,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+1064,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1065,"io_ifu_state_debug", false,-1, 2,0);
    tracep->declBus(c+1066,"io_lsu_state_debug", false,-1, 2,0);
    tracep->declBit(c+1067,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+1068,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1069,"io_dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+1070,"io_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1071,"io_lsu_reg_dmem_addr_debug", false,-1, 31,0);
    tracep->declBit(c+1072,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+1073,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+1074,"io_wbu_reg_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1075,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->declBus(c+1076,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBus(c+1077,"io_lsu_memory_ar_size", false,-1, 2,0);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBus(c+883,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+14,"in_psel", false,-1);
    tracep->declBit(c+15,"in_penable", false,-1);
    tracep->declBus(c+1105,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+16,"in_pwrite", false,-1);
    tracep->declBus(c+860,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+921,"in_pready", false,-1);
    tracep->declBus(c+922,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+884,"in_pslverr", false,-1);
    tracep->declBus(c+883,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+14,"out_psel", false,-1);
    tracep->declBit(c+15,"out_penable", false,-1);
    tracep->declBus(c+1105,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+16,"out_pwrite", false,-1);
    tracep->declBus(c+860,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+921,"out_pready", false,-1);
    tracep->declBus(c+922,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+884,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+14,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+15,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+16,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+883,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1105,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+860,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+921,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+884,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+922,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+514,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+515,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+16,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+883,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1105,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+860,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+585,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1106,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+586,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+516,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+517,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+16,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+885,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1105,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+860,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1107,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1108,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1109,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+518,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+519,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+16,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+886,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1105,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+860,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1110,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1111,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1112,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+520,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+521,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+16,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+886,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1105,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+860,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1113,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1114,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1115,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+887,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+522,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+16,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+883,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1105,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+860,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1082,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1106,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+18,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+888,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+889,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+16,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+886,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1105,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+860,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+890,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1106,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1083,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+891,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+892,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+16,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+885,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1105,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+860,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1084,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1106,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+587,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+893,"sel_0", false,-1);
    tracep->declBit(c+894,"sel_1", false,-1);
    tracep->declBit(c+895,"sel_2", false,-1);
    tracep->declBit(c+896,"sel_3", false,-1);
    tracep->declBit(c+897,"sel_4", false,-1);
    tracep->declBit(c+898,"sel_5", false,-1);
    tracep->declBit(c+899,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+19,"auto_in_awready", false,-1);
    tracep->declBit(c+20,"auto_in_awvalid", false,-1);
    tracep->declBus(c+21,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+22,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+23,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+19,"auto_in_wready", false,-1);
    tracep->declBit(c+24,"auto_in_wvalid", false,-1);
    tracep->declBus(c+25,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+26,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+923,"auto_in_bready", false,-1);
    tracep->declBit(c+924,"auto_in_bvalid", false,-1);
    tracep->declBus(c+27,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+900,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+28,"auto_in_arready", false,-1);
    tracep->declBit(c+29,"auto_in_arvalid", false,-1);
    tracep->declBus(c+30,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+31,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+32,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+925,"auto_in_rready", false,-1);
    tracep->declBit(c+926,"auto_in_rvalid", false,-1);
    tracep->declBus(c+33,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+523,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+900,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+14,"auto_out_psel", false,-1);
    tracep->declBit(c+15,"auto_out_penable", false,-1);
    tracep->declBit(c+16,"auto_out_pwrite", false,-1);
    tracep->declBus(c+883,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+860,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+921,"auto_out_pready", false,-1);
    tracep->declBit(c+884,"auto_out_pslverr", false,-1);
    tracep->declBus(c+922,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+15,"nodeOut_penable", false,-1);
    tracep->declBus(c+34,"state", false,-1, 1,0);
    tracep->declBit(c+28,"accept_read", false,-1);
    tracep->declBit(c+19,"accept_write", false,-1);
    tracep->declBit(c+35,"is_write_r", false,-1);
    tracep->declBit(c+16,"is_write", false,-1);
    tracep->declBus(c+33,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+27,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+36,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+37,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+38,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+39,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+901,"resp", false,-1, 1,0);
    tracep->declBus(c+40,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+900,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+926,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+41,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+924,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+42,"auto_in_awready", false,-1);
    tracep->declBit(c+43,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1116,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+44,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1117,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+45,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1118,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+46,"auto_in_wready", false,-1);
    tracep->declBit(c+43,"auto_in_wvalid", false,-1);
    tracep->declBus(c+47,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+48,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+49,"auto_in_wlast", false,-1);
    tracep->declBit(c+50,"auto_in_bready", false,-1);
    tracep->declBit(c+927,"auto_in_bvalid", false,-1);
    tracep->declBus(c+928,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+929,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+51,"auto_in_arready", false,-1);
    tracep->declBit(c+52,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1116,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+53,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1117,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+54,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1118,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+55,"auto_in_rready", false,-1);
    tracep->declBit(c+930,"auto_in_rvalid", false,-1);
    tracep->declBus(c+931,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+524,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+932,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+525,"auto_in_rlast", false,-1);
    tracep->declBit(c+933,"auto_out_awready", false,-1);
    tracep->declBit(c+56,"auto_out_awvalid", false,-1);
    tracep->declBus(c+21,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+22,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+23,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+57,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+934,"auto_out_wready", false,-1);
    tracep->declBit(c+58,"auto_out_wvalid", false,-1);
    tracep->declBus(c+25,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+26,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+59,"auto_out_wlast", false,-1);
    tracep->declBit(c+935,"auto_out_bready", false,-1);
    tracep->declBit(c+936,"auto_out_bvalid", false,-1);
    tracep->declBus(c+928,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+937,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+938,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+939,"auto_out_arready", false,-1);
    tracep->declBit(c+60,"auto_out_arvalid", false,-1);
    tracep->declBus(c+30,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+31,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+32,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+61,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+55,"auto_out_rready", false,-1);
    tracep->declBit(c+930,"auto_out_rvalid", false,-1);
    tracep->declBus(c+931,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+524,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+932,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+526,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+940,"auto_out_rlast", false,-1);
    tracep->declBit(c+58,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+62,"w_idle", false,-1);
    tracep->declBit(c+941,"in_awready", false,-1);
    tracep->declBit(c+63,"busy", false,-1);
    tracep->declBus(c+64,"r_addr", false,-1, 31,0);
    tracep->declBus(c+65,"r_len", false,-1, 7,0);
    tracep->declBus(c+66,"len", false,-1, 7,0);
    tracep->declBus(c+67,"addr", false,-1, 31,0);
    tracep->declBit(c+68,"busy_1", false,-1);
    tracep->declBus(c+69,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+70,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+71,"len_1", false,-1, 7,0);
    tracep->declBus(c+72,"addr_1", false,-1, 31,0);
    tracep->declBit(c+73,"wbeats_latched", false,-1);
    tracep->declBit(c+56,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+74,"wbeats_valid", false,-1);
    tracep->declBus(c+75,"w_counter", false,-1, 8,0);
    tracep->declBus(c+76,"w_todo", false,-1, 8,0);
    tracep->declBit(c+59,"w_last", false,-1);
    tracep->declBit(c+935,"nodeOut_bready", false,-1);
    tracep->declBus(c+77,"error_0", false,-1, 1,0);
    tracep->declBus(c+78,"error_1", false,-1, 1,0);
    tracep->declBus(c+79,"error_2", false,-1, 1,0);
    tracep->declBus(c+80,"error_3", false,-1, 1,0);
    tracep->declBus(c+81,"error_4", false,-1, 1,0);
    tracep->declBus(c+82,"error_5", false,-1, 1,0);
    tracep->declBus(c+83,"error_6", false,-1, 1,0);
    tracep->declBus(c+84,"error_7", false,-1, 1,0);
    tracep->declBus(c+85,"error_8", false,-1, 1,0);
    tracep->declBus(c+86,"error_9", false,-1, 1,0);
    tracep->declBus(c+87,"error_10", false,-1, 1,0);
    tracep->declBus(c+88,"error_11", false,-1, 1,0);
    tracep->declBus(c+89,"error_12", false,-1, 1,0);
    tracep->declBus(c+90,"error_13", false,-1, 1,0);
    tracep->declBus(c+91,"error_14", false,-1, 1,0);
    tracep->declBus(c+92,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+51,"io_enq_ready", false,-1);
    tracep->declBit(c+52,"io_enq_valid", false,-1);
    tracep->declBus(c+1116,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+53,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1117,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+54,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1118,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+942,"io_deq_ready", false,-1);
    tracep->declBit(c+60,"io_deq_valid", false,-1);
    tracep->declBus(c+30,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+93,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+94,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+32,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+95,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+96,"ram", false,-1, 48,0);
    tracep->declBit(c+98,"full", false,-1);
    tracep->declBit(c+60,"io_deq_valid_0", false,-1);
    tracep->declBit(c+943,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+42,"io_enq_ready", false,-1);
    tracep->declBit(c+43,"io_enq_valid", false,-1);
    tracep->declBus(c+1116,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+44,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1117,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+45,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1118,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+944,"io_deq_ready", false,-1);
    tracep->declBit(c+99,"io_deq_valid", false,-1);
    tracep->declBus(c+21,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+100,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+101,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+23,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+102,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+103,"ram", false,-1, 48,0);
    tracep->declBit(c+105,"full", false,-1);
    tracep->declBit(c+99,"io_deq_valid_0", false,-1);
    tracep->declBit(c+945,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+46,"io_enq_ready", false,-1);
    tracep->declBit(c+43,"io_enq_valid", false,-1);
    tracep->declBus(c+47,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+48,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+49,"io_enq_bits_last", false,-1);
    tracep->declBit(c+946,"io_deq_ready", false,-1);
    tracep->declBit(c+106,"io_deq_valid", false,-1);
    tracep->declBus(c+25,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+26,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+107,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+108,"ram", false,-1, 36,0);
    tracep->declBit(c+110,"full", false,-1);
    tracep->declBit(c+106,"io_deq_valid_0", false,-1);
    tracep->declBit(c+947,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+948,"auto_in_awready", false,-1);
    tracep->declBit(c+111,"auto_in_awvalid", false,-1);
    tracep->declBus(c+21,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+112,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+527,"auto_in_wready", false,-1);
    tracep->declBit(c+113,"auto_in_wvalid", false,-1);
    tracep->declBus(c+25,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+26,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+949,"auto_in_bready", false,-1);
    tracep->declBit(c+114,"auto_in_bvalid", false,-1);
    tracep->declBus(c+115,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+950,"auto_in_arready", false,-1);
    tracep->declBit(c+117,"auto_in_arvalid", false,-1);
    tracep->declBus(c+30,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+118,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+951,"auto_in_rready", false,-1);
    tracep->declBit(c+119,"auto_in_rvalid", false,-1);
    tracep->declBus(c+120,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+121,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+122,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+950,"nodeIn_arready", false,-1);
    tracep->declBit(c+948,"nodeIn_awready", false,-1);
    tracep->declBit(c+123,"w_sel0", false,-1);
    tracep->declBit(c+114,"w_full", false,-1);
    tracep->declBus(c+115,"w_id", false,-1, 3,0);
    tracep->declBit(c+124,"r_sel1", false,-1);
    tracep->declBit(c+125,"w_sel1", false,-1);
    tracep->declBit(c+119,"r_full", false,-1);
    tracep->declBus(c+120,"r_id", false,-1, 3,0);
    tracep->declBit(c+952,"ren", false,-1);
    tracep->declBit(c+126,"rdata_REG", false,-1);
    tracep->declBus(c+127,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+128,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+129,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+130,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+131,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+952,"R0_en", false,-1);
    tracep->declBit(c+1040,"R0_clk", false,-1);
    tracep->declBus(c+132,"R0_data", false,-1, 31,0);
    tracep->declBus(c+133,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+953,"W0_en", false,-1);
    tracep->declBit(c+1040,"W0_clk", false,-1);
    tracep->declBus(c+25,"W0_data", false,-1, 31,0);
    tracep->declBus(c+26,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+42,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+43,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1116,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+44,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1117,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+45,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1118,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+46,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+43,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+47,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+48,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+49,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+50,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+927,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+928,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+929,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+51,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+52,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1116,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+53,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1117,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+54,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1118,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+55,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+930,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+931,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+524,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+932,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+525,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+42,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+43,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1116,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+44,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1117,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+45,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1118,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+46,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+43,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+47,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+48,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+49,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+50,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+927,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+928,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+929,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+51,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+52,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1116,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+53,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1117,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+54,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1118,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+55,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+930,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+931,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+524,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+932,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+525,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+954,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+134,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+21,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+22,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+23,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+934,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+58,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+25,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+26,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+59,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+935,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+936,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+928,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+937,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+955,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+135,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+30,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+31,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+32,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+55,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+930,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+931,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+524,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+932,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+940,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+948,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+111,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+21,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+112,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+527,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+113,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+25,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+26,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+949,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+114,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+115,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+950,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+117,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+30,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+118,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+951,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+119,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+120,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+121,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+122,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+136,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+137,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+138,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+139,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+30,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+140,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+528,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+141,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+142,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+143,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+19,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+20,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+21,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+22,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+23,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+19,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+24,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+25,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+26,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+923,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+924,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+27,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+900,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+28,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+29,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+30,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+31,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+32,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+925,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+926,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+33,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+523,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+900,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+936,"in_0_bvalid", false,-1);
    tracep->declBit(c+930,"in_0_rvalid", false,-1);
    tracep->declBit(c+956,"in_0_wready", false,-1);
    tracep->declBit(c+957,"in_0_awready", false,-1);
    tracep->declBit(c+955,"in_0_arready", false,-1);
    tracep->declBit(c+954,"anonIn_awready", false,-1);
    tracep->declBit(c+144,"requestARIO_0_0", false,-1);
    tracep->declBit(c+145,"requestARIO_0_1", false,-1);
    tracep->declBit(c+146,"requestARIO_0_2", false,-1);
    tracep->declBit(c+147,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+148,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+149,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+150,"arSel", false,-1, 15,0);
    tracep->declBus(c+151,"awSel", false,-1, 15,0);
    tracep->declBus(c+958,"rSel", false,-1, 15,0);
    tracep->declBus(c+959,"bSel", false,-1, 15,0);
    tracep->declBit(c+152,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+153,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+154,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+155,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+156,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+157,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+158,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+159,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+160,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+161,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+162,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+163,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+164,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+165,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+166,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+167,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+168,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+169,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+170,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+171,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+172,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+173,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+174,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+175,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+176,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+177,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+178,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+179,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+180,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+181,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+182,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+183,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+184,"latched", false,-1);
    tracep->declBit(c+185,"in_0_awvalid", false,-1);
    tracep->declBit(c+186,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+187,"in_0_wvalid", false,-1);
    tracep->declBit(c+188,"idle_3", false,-1);
    tracep->declBit(c+960,"anyValid", false,-1);
    tracep->declBus(c+961,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+189,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+962,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+963,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+964,"prefixOR_1", false,-1);
    tracep->declBit(c+965,"winner_3_1", false,-1);
    tracep->declBit(c+966,"winner_3_2", false,-1);
    tracep->declBit(c+190,"state_3_0", false,-1);
    tracep->declBit(c+191,"state_3_1", false,-1);
    tracep->declBit(c+192,"state_3_2", false,-1);
    tracep->declBit(c+967,"muxState_3_0", false,-1);
    tracep->declBit(c+968,"muxState_3_1", false,-1);
    tracep->declBit(c+969,"muxState_3_2", false,-1);
    tracep->declBit(c+193,"idle_4", false,-1);
    tracep->declBit(c+970,"anyValid_1", false,-1);
    tracep->declBus(c+971,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+194,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+972,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+973,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+974,"winner_4_0", false,-1);
    tracep->declBit(c+975,"winner_4_2", false,-1);
    tracep->declBit(c+195,"state_4_0", false,-1);
    tracep->declBit(c+196,"state_4_2", false,-1);
    tracep->declBit(c+976,"muxState_4_0", false,-1);
    tracep->declBit(c+977,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+197,"io_enq_ready", false,-1);
    tracep->declBit(c+186,"io_enq_valid", false,-1);
    tracep->declBus(c+198,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+978,"io_deq_ready", false,-1);
    tracep->declBit(c+199,"io_deq_valid", false,-1);
    tracep->declBus(c+200,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+201,"wrap", false,-1);
    tracep->declBit(c+202,"wrap_1", false,-1);
    tracep->declBit(c+203,"maybe_full", false,-1);
    tracep->declBit(c+204,"ptr_match", false,-1);
    tracep->declBit(c+205,"empty", false,-1);
    tracep->declBit(c+206,"full", false,-1);
    tracep->declBit(c+199,"io_deq_valid_0", false,-1);
    tracep->declBit(c+979,"do_deq", false,-1);
    tracep->declBit(c+980,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+202,"R0_addr", false,-1);
    tracep->declBit(c+1119,"R0_en", false,-1);
    tracep->declBit(c+1040,"R0_clk", false,-1);
    tracep->declBus(c+207,"R0_data", false,-1, 2,0);
    tracep->declBit(c+201,"W0_addr", false,-1);
    tracep->declBit(c+980,"W0_en", false,-1);
    tracep->declBit(c+1040,"W0_clk", false,-1);
    tracep->declBus(c+198,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+208+i*1,"Memory", true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+933,"auto_in_awready", false,-1);
    tracep->declBit(c+56,"auto_in_awvalid", false,-1);
    tracep->declBus(c+21,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+22,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+23,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+57,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+934,"auto_in_wready", false,-1);
    tracep->declBit(c+58,"auto_in_wvalid", false,-1);
    tracep->declBus(c+25,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+26,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+59,"auto_in_wlast", false,-1);
    tracep->declBit(c+935,"auto_in_bready", false,-1);
    tracep->declBit(c+936,"auto_in_bvalid", false,-1);
    tracep->declBus(c+928,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+937,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+938,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+939,"auto_in_arready", false,-1);
    tracep->declBit(c+60,"auto_in_arvalid", false,-1);
    tracep->declBus(c+30,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+31,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+32,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+61,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+55,"auto_in_rready", false,-1);
    tracep->declBit(c+930,"auto_in_rvalid", false,-1);
    tracep->declBus(c+931,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+524,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+932,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+526,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+940,"auto_in_rlast", false,-1);
    tracep->declBit(c+954,"auto_out_awready", false,-1);
    tracep->declBit(c+134,"auto_out_awvalid", false,-1);
    tracep->declBus(c+21,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+22,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+23,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+934,"auto_out_wready", false,-1);
    tracep->declBit(c+58,"auto_out_wvalid", false,-1);
    tracep->declBus(c+25,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+26,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+59,"auto_out_wlast", false,-1);
    tracep->declBit(c+935,"auto_out_bready", false,-1);
    tracep->declBit(c+936,"auto_out_bvalid", false,-1);
    tracep->declBus(c+928,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+937,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+955,"auto_out_arready", false,-1);
    tracep->declBit(c+135,"auto_out_arvalid", false,-1);
    tracep->declBus(c+30,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+31,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+32,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+55,"auto_out_rready", false,-1);
    tracep->declBit(c+930,"auto_out_rvalid", false,-1);
    tracep->declBus(c+931,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+524,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+932,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+940,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+210,"io_enq_ready", false,-1);
    tracep->declBit(c+529,"io_enq_valid", false,-1);
    tracep->declBit(c+61,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+981,"io_deq_ready", false,-1);
    tracep->declBit(c+211,"io_deq_valid", false,-1);
    tracep->declBit(c+212,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+211,"full", false,-1);
    tracep->declBit(c+212,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+213,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+214,"io_enq_ready", false,-1);
    tracep->declBit(c+530,"io_enq_valid", false,-1);
    tracep->declBit(c+61,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+982,"io_deq_ready", false,-1);
    tracep->declBit(c+215,"io_deq_valid", false,-1);
    tracep->declBit(c+216,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+215,"full", false,-1);
    tracep->declBit(c+216,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+217,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+218,"io_enq_ready", false,-1);
    tracep->declBit(c+531,"io_enq_valid", false,-1);
    tracep->declBit(c+61,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+983,"io_deq_ready", false,-1);
    tracep->declBit(c+219,"io_deq_valid", false,-1);
    tracep->declBit(c+220,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+219,"full", false,-1);
    tracep->declBit(c+220,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+221,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+222,"io_enq_ready", false,-1);
    tracep->declBit(c+532,"io_enq_valid", false,-1);
    tracep->declBit(c+61,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+984,"io_deq_ready", false,-1);
    tracep->declBit(c+223,"io_deq_valid", false,-1);
    tracep->declBit(c+224,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+223,"full", false,-1);
    tracep->declBit(c+224,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+225,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+226,"io_enq_ready", false,-1);
    tracep->declBit(c+533,"io_enq_valid", false,-1);
    tracep->declBit(c+61,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+985,"io_deq_ready", false,-1);
    tracep->declBit(c+227,"io_deq_valid", false,-1);
    tracep->declBit(c+228,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+227,"full", false,-1);
    tracep->declBit(c+228,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+229,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+230,"io_enq_ready", false,-1);
    tracep->declBit(c+534,"io_enq_valid", false,-1);
    tracep->declBit(c+61,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+986,"io_deq_ready", false,-1);
    tracep->declBit(c+231,"io_deq_valid", false,-1);
    tracep->declBit(c+232,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+231,"full", false,-1);
    tracep->declBit(c+232,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+233,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+234,"io_enq_ready", false,-1);
    tracep->declBit(c+535,"io_enq_valid", false,-1);
    tracep->declBit(c+61,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+987,"io_deq_ready", false,-1);
    tracep->declBit(c+235,"io_deq_valid", false,-1);
    tracep->declBit(c+236,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+235,"full", false,-1);
    tracep->declBit(c+236,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+237,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+238,"io_enq_ready", false,-1);
    tracep->declBit(c+536,"io_enq_valid", false,-1);
    tracep->declBit(c+61,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+988,"io_deq_ready", false,-1);
    tracep->declBit(c+239,"io_deq_valid", false,-1);
    tracep->declBit(c+240,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+239,"full", false,-1);
    tracep->declBit(c+240,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+241,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+242,"io_enq_ready", false,-1);
    tracep->declBit(c+537,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+989,"io_deq_ready", false,-1);
    tracep->declBit(c+243,"io_deq_valid", false,-1);
    tracep->declBit(c+244,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+243,"full", false,-1);
    tracep->declBit(c+244,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+245,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+246,"io_enq_ready", false,-1);
    tracep->declBit(c+538,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+990,"io_deq_ready", false,-1);
    tracep->declBit(c+247,"io_deq_valid", false,-1);
    tracep->declBit(c+248,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+247,"full", false,-1);
    tracep->declBit(c+248,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+249,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+250,"io_enq_ready", false,-1);
    tracep->declBit(c+539,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+991,"io_deq_ready", false,-1);
    tracep->declBit(c+251,"io_deq_valid", false,-1);
    tracep->declBit(c+252,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+251,"full", false,-1);
    tracep->declBit(c+252,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+253,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+254,"io_enq_ready", false,-1);
    tracep->declBit(c+540,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+992,"io_deq_ready", false,-1);
    tracep->declBit(c+255,"io_deq_valid", false,-1);
    tracep->declBit(c+256,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+255,"full", false,-1);
    tracep->declBit(c+256,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+257,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+258,"io_enq_ready", false,-1);
    tracep->declBit(c+541,"io_enq_valid", false,-1);
    tracep->declBit(c+61,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+993,"io_deq_ready", false,-1);
    tracep->declBit(c+259,"io_deq_valid", false,-1);
    tracep->declBit(c+260,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+259,"full", false,-1);
    tracep->declBit(c+260,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+261,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+262,"io_enq_ready", false,-1);
    tracep->declBit(c+542,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+994,"io_deq_ready", false,-1);
    tracep->declBit(c+263,"io_deq_valid", false,-1);
    tracep->declBit(c+264,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+263,"full", false,-1);
    tracep->declBit(c+264,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+265,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+266,"io_enq_ready", false,-1);
    tracep->declBit(c+543,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+995,"io_deq_ready", false,-1);
    tracep->declBit(c+267,"io_deq_valid", false,-1);
    tracep->declBit(c+268,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+267,"full", false,-1);
    tracep->declBit(c+268,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+269,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+270,"io_enq_ready", false,-1);
    tracep->declBit(c+544,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+996,"io_deq_ready", false,-1);
    tracep->declBit(c+271,"io_deq_valid", false,-1);
    tracep->declBit(c+272,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+271,"full", false,-1);
    tracep->declBit(c+272,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+273,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+274,"io_enq_ready", false,-1);
    tracep->declBit(c+545,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+997,"io_deq_ready", false,-1);
    tracep->declBit(c+275,"io_deq_valid", false,-1);
    tracep->declBit(c+276,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+275,"full", false,-1);
    tracep->declBit(c+276,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+277,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+278,"io_enq_ready", false,-1);
    tracep->declBit(c+546,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+998,"io_deq_ready", false,-1);
    tracep->declBit(c+279,"io_deq_valid", false,-1);
    tracep->declBit(c+280,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+279,"full", false,-1);
    tracep->declBit(c+280,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+281,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+282,"io_enq_ready", false,-1);
    tracep->declBit(c+547,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+999,"io_deq_ready", false,-1);
    tracep->declBit(c+283,"io_deq_valid", false,-1);
    tracep->declBit(c+284,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+283,"full", false,-1);
    tracep->declBit(c+284,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+285,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+286,"io_enq_ready", false,-1);
    tracep->declBit(c+548,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1000,"io_deq_ready", false,-1);
    tracep->declBit(c+287,"io_deq_valid", false,-1);
    tracep->declBit(c+288,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+287,"full", false,-1);
    tracep->declBit(c+288,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+289,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+290,"io_enq_ready", false,-1);
    tracep->declBit(c+549,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1001,"io_deq_ready", false,-1);
    tracep->declBit(c+291,"io_deq_valid", false,-1);
    tracep->declBit(c+292,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+291,"full", false,-1);
    tracep->declBit(c+292,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+293,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+294,"io_enq_ready", false,-1);
    tracep->declBit(c+550,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1002,"io_deq_ready", false,-1);
    tracep->declBit(c+295,"io_deq_valid", false,-1);
    tracep->declBit(c+296,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+295,"full", false,-1);
    tracep->declBit(c+296,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+297,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+298,"io_enq_ready", false,-1);
    tracep->declBit(c+551,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1003,"io_deq_ready", false,-1);
    tracep->declBit(c+299,"io_deq_valid", false,-1);
    tracep->declBit(c+300,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+299,"full", false,-1);
    tracep->declBit(c+300,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+301,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+302,"io_enq_ready", false,-1);
    tracep->declBit(c+552,"io_enq_valid", false,-1);
    tracep->declBit(c+61,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1004,"io_deq_ready", false,-1);
    tracep->declBit(c+303,"io_deq_valid", false,-1);
    tracep->declBit(c+304,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+303,"full", false,-1);
    tracep->declBit(c+304,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+305,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+306,"io_enq_ready", false,-1);
    tracep->declBit(c+553,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1005,"io_deq_ready", false,-1);
    tracep->declBit(c+307,"io_deq_valid", false,-1);
    tracep->declBit(c+308,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+307,"full", false,-1);
    tracep->declBit(c+308,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+309,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+310,"io_enq_ready", false,-1);
    tracep->declBit(c+554,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1006,"io_deq_ready", false,-1);
    tracep->declBit(c+311,"io_deq_valid", false,-1);
    tracep->declBit(c+312,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+311,"full", false,-1);
    tracep->declBit(c+312,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+313,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+314,"io_enq_ready", false,-1);
    tracep->declBit(c+555,"io_enq_valid", false,-1);
    tracep->declBit(c+61,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1007,"io_deq_ready", false,-1);
    tracep->declBit(c+315,"io_deq_valid", false,-1);
    tracep->declBit(c+316,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+315,"full", false,-1);
    tracep->declBit(c+316,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+317,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+318,"io_enq_ready", false,-1);
    tracep->declBit(c+556,"io_enq_valid", false,-1);
    tracep->declBit(c+61,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1008,"io_deq_ready", false,-1);
    tracep->declBit(c+319,"io_deq_valid", false,-1);
    tracep->declBit(c+320,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+319,"full", false,-1);
    tracep->declBit(c+320,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+321,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+322,"io_enq_ready", false,-1);
    tracep->declBit(c+557,"io_enq_valid", false,-1);
    tracep->declBit(c+61,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1009,"io_deq_ready", false,-1);
    tracep->declBit(c+323,"io_deq_valid", false,-1);
    tracep->declBit(c+324,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+323,"full", false,-1);
    tracep->declBit(c+324,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+325,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+326,"io_enq_ready", false,-1);
    tracep->declBit(c+558,"io_enq_valid", false,-1);
    tracep->declBit(c+61,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1010,"io_deq_ready", false,-1);
    tracep->declBit(c+327,"io_deq_valid", false,-1);
    tracep->declBit(c+328,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+327,"full", false,-1);
    tracep->declBit(c+328,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+329,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+330,"io_enq_ready", false,-1);
    tracep->declBit(c+559,"io_enq_valid", false,-1);
    tracep->declBit(c+61,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1011,"io_deq_ready", false,-1);
    tracep->declBit(c+331,"io_deq_valid", false,-1);
    tracep->declBit(c+332,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+331,"full", false,-1);
    tracep->declBit(c+332,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+333,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+334,"io_enq_ready", false,-1);
    tracep->declBit(c+560,"io_enq_valid", false,-1);
    tracep->declBit(c+61,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1012,"io_deq_ready", false,-1);
    tracep->declBit(c+335,"io_deq_valid", false,-1);
    tracep->declBit(c+336,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+335,"full", false,-1);
    tracep->declBit(c+336,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+337,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1085,"reset", false,-1);
    tracep->declBit(c+42,"auto_master_out_awready", false,-1);
    tracep->declBit(c+43,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1116,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+44,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1117,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+45,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1118,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+46,"auto_master_out_wready", false,-1);
    tracep->declBit(c+43,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+47,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+48,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+49,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+50,"auto_master_out_bready", false,-1);
    tracep->declBit(c+927,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+928,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+929,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+51,"auto_master_out_arready", false,-1);
    tracep->declBit(c+52,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1116,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+53,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1117,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+54,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1118,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+55,"auto_master_out_rready", false,-1);
    tracep->declBit(c+930,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+931,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+524,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+932,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+525,"auto_master_out_rlast", false,-1);
    tracep->declBus(c+1062,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+1063,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+1064,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1065,"io_ifu_state_debug", false,-1, 2,0);
    tracep->declBus(c+1066,"io_lsu_state_debug", false,-1, 2,0);
    tracep->declBit(c+1067,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+1068,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1069,"io_dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+1070,"io_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1071,"io_lsu_reg_dmem_addr_debug", false,-1, 31,0);
    tracep->declBit(c+1072,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+1073,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+1074,"io_wbu_reg_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1075,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->declBus(c+1076,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBus(c+1077,"io_lsu_memory_ar_size", false,-1, 2,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1085,"reset", false,-1);
    tracep->declBus(c+44,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1117,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+45,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1118,"io_master_awburst", false,-1, 1,0);
    tracep->declBus(c+1116,"io_master_awid", false,-1, 3,0);
    tracep->declBit(c+43,"io_master_awvalid", false,-1);
    tracep->declBit(c+42,"io_master_awready", false,-1);
    tracep->declBus(c+47,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+48,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+49,"io_master_wlast", false,-1);
    tracep->declBit(c+43,"io_master_wvalid", false,-1);
    tracep->declBit(c+46,"io_master_wready", false,-1);
    tracep->declBus(c+928,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+929,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+927,"io_master_bvalid", false,-1);
    tracep->declBit(c+50,"io_master_bready", false,-1);
    tracep->declBus(c+53,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1117,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+54,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1118,"io_master_arburst", false,-1, 1,0);
    tracep->declBus(c+1116,"io_master_arid", false,-1, 3,0);
    tracep->declBit(c+52,"io_master_arvalid", false,-1);
    tracep->declBit(c+51,"io_master_arready", false,-1);
    tracep->declBus(c+931,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+524,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+932,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+525,"io_master_rlast", false,-1);
    tracep->declBit(c+930,"io_master_rvalid", false,-1);
    tracep->declBit(c+55,"io_master_rready", false,-1);
    tracep->declBus(c+1120,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1117,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1121,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1122,"io_slave_awburst", false,-1, 1,0);
    tracep->declBus(c+1116,"io_slave_awid", false,-1, 3,0);
    tracep->declBit(c+1106,"io_slave_awvalid", false,-1);
    tracep->declBit(c+1106,"io_slave_awready", false,-1);
    tracep->declBus(c+1120,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1116,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1106,"io_slave_wlast", false,-1);
    tracep->declBit(c+1106,"io_slave_wvalid", false,-1);
    tracep->declBit(c+1106,"io_slave_wready", false,-1);
    tracep->declBus(c+1116,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1122,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1106,"io_slave_bvalid", false,-1);
    tracep->declBit(c+1106,"io_slave_bready", false,-1);
    tracep->declBus(c+1120,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1117,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1121,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1122,"io_slave_arburst", false,-1, 1,0);
    tracep->declBus(c+1116,"io_slave_arid", false,-1, 3,0);
    tracep->declBit(c+1106,"io_slave_arvalid", false,-1);
    tracep->declBit(c+1106,"io_slave_arready", false,-1);
    tracep->declBus(c+1116,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1120,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1122,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1106,"io_slave_rlast", false,-1);
    tracep->declBit(c+1106,"io_slave_rvalid", false,-1);
    tracep->declBit(c+1106,"io_slave_rready", false,-1);
    tracep->declBit(c+1106,"io_interrupt", false,-1);
    tracep->declBus(c+1063,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+1064,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1065,"io_ifu_state_debug", false,-1, 2,0);
    tracep->declBus(c+1066,"io_lsu_state_debug", false,-1, 2,0);
    tracep->declBit(c+1067,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+1068,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1069,"io_dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+1070,"io_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1071,"io_lsu_reg_dmem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+1077,"io_lsu_memory_ar_size", false,-1, 2,0);
    tracep->declBus(c+1062,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+1076,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBit(c+1072,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+1073,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+1074,"io_wbu_reg_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1075,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1085,"reset", false,-1);
    tracep->declBus(c+338,"io_ifu_ar_addr", false,-1, 31,0);
    tracep->declBit(c+339,"io_ifu_ar_valid", false,-1);
    tracep->declBit(c+340,"io_ifu_ar_ready", false,-1);
    tracep->declBus(c+561,"io_ifu_r_data", false,-1, 31,0);
    tracep->declBit(c+1013,"io_ifu_r_valid", false,-1);
    tracep->declBit(c+341,"io_ifu_r_ready", false,-1);
    tracep->declBus(c+342,"io_lsu_aw_addr", false,-1, 31,0);
    tracep->declBus(c+343,"io_lsu_aw_size", false,-1, 2,0);
    tracep->declBit(c+344,"io_lsu_aw_valid", false,-1);
    tracep->declBit(c+345,"io_lsu_aw_ready", false,-1);
    tracep->declBus(c+1086,"io_lsu_w_data", false,-1, 31,0);
    tracep->declBus(c+346,"io_lsu_w_strb", false,-1, 3,0);
    tracep->declBit(c+347,"io_lsu_w_last", false,-1);
    tracep->declBit(c+344,"io_lsu_w_valid", false,-1);
    tracep->declBit(c+348,"io_lsu_w_ready", false,-1);
    tracep->declBus(c+562,"io_lsu_b_resp", false,-1, 1,0);
    tracep->declBit(c+563,"io_lsu_b_valid", false,-1);
    tracep->declBit(c+349,"io_lsu_b_ready", false,-1);
    tracep->declBus(c+350,"io_lsu_ar_addr", false,-1, 31,0);
    tracep->declBus(c+1077,"io_lsu_ar_size", false,-1, 2,0);
    tracep->declBit(c+351,"io_lsu_ar_valid", false,-1);
    tracep->declBit(c+352,"io_lsu_ar_ready", false,-1);
    tracep->declBus(c+1070,"io_lsu_r_data", false,-1, 31,0);
    tracep->declBus(c+564,"io_lsu_r_resp", false,-1, 1,0);
    tracep->declBit(c+565,"io_lsu_r_valid", false,-1);
    tracep->declBit(c+353,"io_lsu_r_ready", false,-1);
    tracep->declBus(c+354,"io_axi_aw_addr", false,-1, 31,0);
    tracep->declBus(c+355,"io_axi_aw_size", false,-1, 2,0);
    tracep->declBit(c+356,"io_axi_aw_valid", false,-1);
    tracep->declBit(c+357,"io_axi_aw_ready", false,-1);
    tracep->declBus(c+1087,"io_axi_w_data", false,-1, 31,0);
    tracep->declBus(c+358,"io_axi_w_strb", false,-1, 3,0);
    tracep->declBit(c+359,"io_axi_w_last", false,-1);
    tracep->declBit(c+356,"io_axi_w_valid", false,-1);
    tracep->declBit(c+360,"io_axi_w_ready", false,-1);
    tracep->declBus(c+566,"io_axi_b_resp", false,-1, 1,0);
    tracep->declBit(c+567,"io_axi_b_valid", false,-1);
    tracep->declBit(c+361,"io_axi_b_ready", false,-1);
    tracep->declBus(c+362,"io_axi_ar_addr", false,-1, 31,0);
    tracep->declBus(c+1088,"io_axi_ar_size", false,-1, 2,0);
    tracep->declBit(c+363,"io_axi_ar_valid", false,-1);
    tracep->declBit(c+364,"io_axi_ar_ready", false,-1);
    tracep->declBus(c+1014,"io_axi_r_data", false,-1, 31,0);
    tracep->declBus(c+568,"io_axi_r_resp", false,-1, 1,0);
    tracep->declBit(c+1015,"io_axi_r_valid", false,-1);
    tracep->declBit(c+365,"io_axi_r_ready", false,-1);
    tracep->declBit(c+366,"io_ifu_handshake_valid", false,-1);
    tracep->declBit(c+367,"io_ifu_handshake_ready", false,-1);
    tracep->declBit(c+368,"io_lsu_handshake_valid", false,-1);
    tracep->declBit(c+367,"io_lsu_handshake_ready", false,-1);
    tracep->declBus(c+1075,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->declBit(c+369,"state", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("clint ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1085,"reset", false,-1);
    tracep->declBus(c+370,"io_in_ar_addr", false,-1, 31,0);
    tracep->declBus(c+371,"io_in_r_data", false,-1, 31,0);
    tracep->declQuad(c+372,"mtime", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1085,"reset", false,-1);
    tracep->declBit(c+374,"io_in_ready", false,-1);
    tracep->declBit(c+375,"io_in_valid", false,-1);
    tracep->declBus(c+376,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+377,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+378,"io_in_bits_wb_addr", false,-1, 4,0);
    tracep->declBus(c+379,"io_in_bits_alu_op1", false,-1, 31,0);
    tracep->declBus(c+380,"io_in_bits_alu_op2", false,-1, 31,0);
    tracep->declBus(c+381,"io_in_bits_rs2_data", false,-1, 31,0);
    tracep->declBit(c+382,"io_out_ready", false,-1);
    tracep->declBit(c+383,"io_out_valid", false,-1);
    tracep->declBus(c+384,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+385,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+386,"io_out_bits_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+386,"io_out_bits_result", false,-1, 31,0);
    tracep->declBus(c+387,"io_out_bits_rs2_data", false,-1, 31,0);
    tracep->declBus(c+388,"io_out_bits_wb_addr", false,-1, 4,0);
    tracep->declBus(c+389,"state", false,-1, 1,0);
    tracep->declBit(c+374,"io_in_ready_0", false,-1);
    tracep->declBus(c+384,"exu_reg_inst", false,-1, 31,0);
    tracep->declBus(c+385,"exu_reg_pc", false,-1, 31,0);
    tracep->declBus(c+387,"exu_reg_rs2_data", false,-1, 31,0);
    tracep->declBus(c+388,"exu_reg_wb_addr", false,-1, 4,0);
    tracep->pushNamePrefix("alu_instance ");
    tracep->declBus(c+379,"io_a", false,-1, 31,0);
    tracep->declBus(c+380,"io_b", false,-1, 31,0);
    tracep->declBus(c+390,"io_aluOp", false,-1, 4,0);
    tracep->declBus(c+386,"io_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1085,"reset", false,-1);
    tracep->declBit(c+391,"io_in_ready", false,-1);
    tracep->declBit(c+392,"io_in_valid", false,-1);
    tracep->declBus(c+1064,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+1063,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+374,"io_out_ready", false,-1);
    tracep->declBit(c+375,"io_out_valid", false,-1);
    tracep->declBus(c+376,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+377,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+378,"io_out_bits_wb_addr", false,-1, 4,0);
    tracep->declBus(c+379,"io_out_bits_alu_op1", false,-1, 31,0);
    tracep->declBus(c+380,"io_out_bits_alu_op2", false,-1, 31,0);
    tracep->declBus(c+381,"io_out_bits_rs2_data", false,-1, 31,0);
    tracep->declBus(c+393,"io_jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+394,"io_br_target", false,-1, 31,0);
    tracep->declBus(c+395,"io_jmp_target", false,-1, 31,0);
    tracep->declBus(c+396,"io_pc_sel", false,-1, 2,0);
    tracep->declBus(c+397,"io_rs1_data", false,-1, 31,0);
    tracep->declBus(c+381,"io_rs2_data", false,-1, 31,0);
    tracep->declBus(c+398,"io_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+399,"io_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+376,"idu_reg_inst", false,-1, 31,0);
    tracep->declBus(c+377,"idu_reg_pc", false,-1, 31,0);
    tracep->declBus(c+400,"state", false,-1, 1,0);
    tracep->declBit(c+391,"io_in_ready_0", false,-1);
    tracep->declBit(c+401,"br_eq", false,-1);
    tracep->declBit(c+402,"br_lt", false,-1);
    tracep->declBit(c+403,"br_ltu", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1085,"reset", false,-1);
    tracep->declBit(c+391,"io_out_ready", false,-1);
    tracep->declBit(c+392,"io_out_valid", false,-1);
    tracep->declBus(c+1064,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+1063,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+396,"io_pc_sel", false,-1, 2,0);
    tracep->declBus(c+393,"io_jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+394,"io_br_target", false,-1, 31,0);
    tracep->declBus(c+395,"io_jmp_target", false,-1, 31,0);
    tracep->declBit(c+404,"io_pc_wen", false,-1);
    tracep->declBit(c+569,"io_lsu_axi_resp_err", false,-1);
    tracep->declBus(c+338,"io_memory_ar_addr", false,-1, 31,0);
    tracep->declBit(c+339,"io_memory_ar_valid", false,-1);
    tracep->declBit(c+340,"io_memory_ar_ready", false,-1);
    tracep->declBus(c+561,"io_memory_r_data", false,-1, 31,0);
    tracep->declBit(c+1013,"io_memory_r_valid", false,-1);
    tracep->declBit(c+341,"io_memory_r_ready", false,-1);
    tracep->declBit(c+366,"io_arbiter_valid", false,-1);
    tracep->declBit(c+367,"io_arbiter_ready", false,-1);
    tracep->declBus(c+1063,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+1064,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1065,"io_ifu_state_debug", false,-1, 2,0);
    tracep->declBus(c+405,"pc", false,-1, 31,0);
    tracep->declBus(c+406,"if_inst_buffer", false,-1, 31,0);
    tracep->declBus(c+407,"state", false,-1, 2,0);
    tracep->declBus(c+1064,"io_inst_debug_0", false,-1, 31,0);
    tracep->pushNamePrefix("ebreakHandler ");
    tracep->declBus(c+1064,"inst", false,-1, 31,0);
    tracep->declBit(c+569,"lsu_axi_resp_err", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1085,"reset", false,-1);
    tracep->declBit(c+382,"io_in_ready", false,-1);
    tracep->declBit(c+383,"io_in_valid", false,-1);
    tracep->declBus(c+384,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+385,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+386,"io_in_bits_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+386,"io_in_bits_result", false,-1, 31,0);
    tracep->declBus(c+387,"io_in_bits_rs2_data", false,-1, 31,0);
    tracep->declBus(c+388,"io_in_bits_wb_addr", false,-1, 4,0);
    tracep->declBit(c+408,"io_out_ready", false,-1);
    tracep->declBit(c+409,"io_out_valid", false,-1);
    tracep->declBus(c+1068,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+410,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+411,"io_out_bits_dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+412,"io_out_bits_result", false,-1, 31,0);
    tracep->declBus(c+413,"io_out_bits_wb_addr", false,-1, 4,0);
    tracep->declBit(c+569,"io_lsu_axi_resp_err", false,-1);
    tracep->declBus(c+342,"io_memory_aw_addr", false,-1, 31,0);
    tracep->declBus(c+343,"io_memory_aw_size", false,-1, 2,0);
    tracep->declBit(c+344,"io_memory_aw_valid", false,-1);
    tracep->declBit(c+345,"io_memory_aw_ready", false,-1);
    tracep->declBus(c+1086,"io_memory_w_data", false,-1, 31,0);
    tracep->declBus(c+346,"io_memory_w_strb", false,-1, 3,0);
    tracep->declBit(c+347,"io_memory_w_last", false,-1);
    tracep->declBit(c+344,"io_memory_w_valid", false,-1);
    tracep->declBit(c+348,"io_memory_w_ready", false,-1);
    tracep->declBus(c+562,"io_memory_b_resp", false,-1, 1,0);
    tracep->declBit(c+563,"io_memory_b_valid", false,-1);
    tracep->declBit(c+349,"io_memory_b_ready", false,-1);
    tracep->declBus(c+350,"io_memory_ar_addr", false,-1, 31,0);
    tracep->declBus(c+1077,"io_memory_ar_size", false,-1, 2,0);
    tracep->declBit(c+351,"io_memory_ar_valid", false,-1);
    tracep->declBit(c+352,"io_memory_ar_ready", false,-1);
    tracep->declBus(c+1070,"io_memory_r_data", false,-1, 31,0);
    tracep->declBus(c+564,"io_memory_r_resp", false,-1, 1,0);
    tracep->declBit(c+565,"io_memory_r_valid", false,-1);
    tracep->declBit(c+353,"io_memory_r_ready", false,-1);
    tracep->declBit(c+368,"io_arbiter_valid", false,-1);
    tracep->declBit(c+367,"io_arbiter_ready", false,-1);
    tracep->declBus(c+1066,"io_lsu_state_debug", false,-1, 2,0);
    tracep->declBit(c+1067,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+1068,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1069,"io_dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+1070,"io_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1071,"io_lsu_reg_dmem_addr_debug", false,-1, 31,0);
    tracep->declBit(c+414,"isStore", false,-1);
    tracep->declBit(c+415,"isLoad", false,-1);
    tracep->declBus(c+416,"lsu_reg_inst", false,-1, 31,0);
    tracep->declBus(c+410,"lsu_reg_pc", false,-1, 31,0);
    tracep->declBus(c+412,"lsu_reg_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+412,"lsu_reg_result", false,-1, 31,0);
    tracep->declBus(c+417,"lsu_reg_rs2_data", false,-1, 31,0);
    tracep->declBus(c+413,"lsu_reg_wb_addr", false,-1, 4,0);
    tracep->declBus(c+418,"mem_access_control", false,-1, 2,0);
    tracep->declBus(c+411,"delayedData", false,-1, 31,0);
    tracep->declBus(c+419,"state", false,-1, 2,0);
    tracep->declBit(c+382,"io_in_ready_0", false,-1);
    tracep->declBit(c+344,"io_memory_w_valid_0", false,-1);
    tracep->pushNamePrefix("alignment_network ");
    tracep->declBus(c+1070,"io_data_in", false,-1, 31,0);
    tracep->declBus(c+412,"io_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+418,"io_control", false,-1, 2,0);
    tracep->declBus(c+1089,"io_data_out", false,-1, 31,0);
    tracep->declBus(c+420,"rw_address_type", false,-1, 2,0);
    tracep->declBus(c+1016,"shifted_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memory_ctl ");
    tracep->declBus(c+412,"io_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+417,"io_dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+418,"io_control", false,-1, 2,0);
    tracep->declBus(c+421,"io_wmask", false,-1, 7,0);
    tracep->declBus(c+1069,"io_dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+422,"io_dmem_rw_size", false,-1, 2,0);
    tracep->declBus(c+420,"rw_address_type", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+1123,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1124,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1040,"clk", false,-1);
    tracep->declBus(c+1076,"rd_data", false,-1, 31,0);
    tracep->declBus(c+423,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1072,"wen", false,-1);
    tracep->declBus(c+398,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+399,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+397,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+381,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+424+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1085,"reset", false,-1);
    tracep->declBit(c+408,"io_in_ready", false,-1);
    tracep->declBit(c+409,"io_in_valid", false,-1);
    tracep->declBus(c+1068,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+410,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+411,"io_in_bits_dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+412,"io_in_bits_result", false,-1, 31,0);
    tracep->declBus(c+413,"io_in_bits_wb_addr", false,-1, 4,0);
    tracep->declBus(c+1076,"io_wb_data", false,-1, 31,0);
    tracep->declBus(c+423,"io_wb_addr", false,-1, 4,0);
    tracep->declBit(c+1072,"io_wb_wen", false,-1);
    tracep->declBit(c+404,"io_pc_wen", false,-1);
    tracep->declBus(c+1062,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+1076,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBit(c+1072,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+1073,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+1074,"io_wbu_reg_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+456,"state", false,-1, 1,0);
    tracep->declBit(c+408,"io_in_ready_0", false,-1);
    tracep->declBus(c+457,"wbu_reg_inst", false,-1, 31,0);
    tracep->declBus(c+458,"wbu_reg_pc", false,-1, 31,0);
    tracep->declBus(c+459,"wbu_reg_result", false,-1, 31,0);
    tracep->declBus(c+460,"wbu_reg_dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+423,"wbu_reg_wb_addr", false,-1, 4,0);
    tracep->declBus(c+1073,"wb_sel", false,-1, 1,0);
    tracep->declBit(c+1072,"io_wb_wen_0", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("xbar ");
    tracep->declBus(c+354,"io_in_aw_addr", false,-1, 31,0);
    tracep->declBus(c+355,"io_in_aw_size", false,-1, 2,0);
    tracep->declBit(c+356,"io_in_aw_valid", false,-1);
    tracep->declBit(c+357,"io_in_aw_ready", false,-1);
    tracep->declBus(c+1087,"io_in_w_data", false,-1, 31,0);
    tracep->declBus(c+358,"io_in_w_strb", false,-1, 3,0);
    tracep->declBit(c+359,"io_in_w_last", false,-1);
    tracep->declBit(c+356,"io_in_w_valid", false,-1);
    tracep->declBit(c+360,"io_in_w_ready", false,-1);
    tracep->declBus(c+566,"io_in_b_resp", false,-1, 1,0);
    tracep->declBit(c+567,"io_in_b_valid", false,-1);
    tracep->declBit(c+361,"io_in_b_ready", false,-1);
    tracep->declBus(c+362,"io_in_ar_addr", false,-1, 31,0);
    tracep->declBus(c+1088,"io_in_ar_size", false,-1, 2,0);
    tracep->declBit(c+363,"io_in_ar_valid", false,-1);
    tracep->declBit(c+364,"io_in_ar_ready", false,-1);
    tracep->declBus(c+1014,"io_in_r_data", false,-1, 31,0);
    tracep->declBus(c+568,"io_in_r_resp", false,-1, 1,0);
    tracep->declBit(c+1015,"io_in_r_valid", false,-1);
    tracep->declBit(c+365,"io_in_r_ready", false,-1);
    tracep->declBus(c+44,"io_soc_aw_addr", false,-1, 31,0);
    tracep->declBus(c+45,"io_soc_aw_size", false,-1, 2,0);
    tracep->declBit(c+43,"io_soc_aw_valid", false,-1);
    tracep->declBit(c+42,"io_soc_aw_ready", false,-1);
    tracep->declBus(c+47,"io_soc_w_data", false,-1, 31,0);
    tracep->declBus(c+48,"io_soc_w_strb", false,-1, 3,0);
    tracep->declBit(c+49,"io_soc_w_last", false,-1);
    tracep->declBit(c+43,"io_soc_w_valid", false,-1);
    tracep->declBit(c+46,"io_soc_w_ready", false,-1);
    tracep->declBus(c+929,"io_soc_b_resp", false,-1, 1,0);
    tracep->declBit(c+927,"io_soc_b_valid", false,-1);
    tracep->declBit(c+50,"io_soc_b_ready", false,-1);
    tracep->declBus(c+53,"io_soc_ar_addr", false,-1, 31,0);
    tracep->declBus(c+54,"io_soc_ar_size", false,-1, 2,0);
    tracep->declBit(c+52,"io_soc_ar_valid", false,-1);
    tracep->declBit(c+51,"io_soc_ar_ready", false,-1);
    tracep->declBus(c+524,"io_soc_r_data", false,-1, 31,0);
    tracep->declBus(c+932,"io_soc_r_resp", false,-1, 1,0);
    tracep->declBit(c+930,"io_soc_r_valid", false,-1);
    tracep->declBit(c+55,"io_soc_r_ready", false,-1);
    tracep->declBus(c+370,"io_clint_ar_addr", false,-1, 31,0);
    tracep->declBus(c+371,"io_clint_r_data", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"io_d", false,-1);
    tracep->declBit(c+461,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"io_d", false,-1);
    tracep->declBit(c+461,"io_q", false,-1);
    tracep->declBit(c+461,"sync_0", false,-1);
    tracep->declBit(c+462,"sync_1", false,-1);
    tracep->declBit(c+463,"sync_2", false,-1);
    tracep->declBit(c+464,"sync_3", false,-1);
    tracep->declBit(c+465,"sync_4", false,-1);
    tracep->declBit(c+466,"sync_5", false,-1);
    tracep->declBit(c+467,"sync_6", false,-1);
    tracep->declBit(c+468,"sync_7", false,-1);
    tracep->declBit(c+469,"sync_8", false,-1);
    tracep->declBit(c+470,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+520,"auto_in_psel", false,-1);
    tracep->declBit(c+521,"auto_in_penable", false,-1);
    tracep->declBit(c+16,"auto_in_pwrite", false,-1);
    tracep->declBus(c+886,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1105,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+860,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1113,"auto_in_pready", false,-1);
    tracep->declBit(c+1114,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1115,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1042,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1043,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1044,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1045,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1046,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1047,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1048,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1049,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1050,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1051,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBus(c+902,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+520,"in_psel", false,-1);
    tracep->declBit(c+521,"in_penable", false,-1);
    tracep->declBus(c+1105,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+16,"in_pwrite", false,-1);
    tracep->declBus(c+860,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1113,"in_pready", false,-1);
    tracep->declBus(c+1115,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1114,"in_pslverr", false,-1);
    tracep->declBus(c+1042,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1043,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1044,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1045,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1046,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1047,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1048,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1049,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1050,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1051,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+518,"auto_in_psel", false,-1);
    tracep->declBit(c+519,"auto_in_penable", false,-1);
    tracep->declBit(c+16,"auto_in_pwrite", false,-1);
    tracep->declBus(c+886,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1105,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+860,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1110,"auto_in_pready", false,-1);
    tracep->declBit(c+1111,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1112,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1052,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1053,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBus(c+902,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+518,"in_psel", false,-1);
    tracep->declBit(c+519,"in_penable", false,-1);
    tracep->declBus(c+1105,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+16,"in_pwrite", false,-1);
    tracep->declBus(c+860,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1110,"in_pready", false,-1);
    tracep->declBus(c+1112,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1111,"in_pslverr", false,-1);
    tracep->declBit(c+1052,"ps2_clk", false,-1);
    tracep->declBit(c+1053,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+136,"auto_in_awvalid", false,-1);
    tracep->declBit(c+137,"auto_in_wvalid", false,-1);
    tracep->declBit(c+138,"auto_in_arready", false,-1);
    tracep->declBit(c+139,"auto_in_arvalid", false,-1);
    tracep->declBus(c+30,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+140,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+528,"auto_in_rready", false,-1);
    tracep->declBit(c+141,"auto_in_rvalid", false,-1);
    tracep->declBus(c+142,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+143,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+141,"state", false,-1);
    tracep->declBus(c+143,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+142,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+471,"raddr", false,-1, 31,0);
    tracep->declBit(c+472,"ren", false,-1);
    tracep->declBus(c+473,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+887,"auto_in_psel", false,-1);
    tracep->declBit(c+522,"auto_in_penable", false,-1);
    tracep->declBit(c+16,"auto_in_pwrite", false,-1);
    tracep->declBus(c+883,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1105,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+860,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1082,"auto_in_pready", false,-1);
    tracep->declBit(c+1106,"auto_in_pslverr", false,-1);
    tracep->declBus(c+18,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+3,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+4,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1079,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBus(c+883,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+887,"in_psel", false,-1);
    tracep->declBit(c+522,"in_penable", false,-1);
    tracep->declBus(c+1105,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+16,"in_pwrite", false,-1);
    tracep->declBus(c+860,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1082,"in_pready", false,-1);
    tracep->declBus(c+18,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1106,"in_pslverr", false,-1);
    tracep->declBit(c+3,"qspi_sck", false,-1);
    tracep->declBit(c+4,"qspi_ce_n", false,-1);
    tracep->declBus(c+1079,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1079,"din", false,-1, 3,0);
    tracep->declBus(c+1017,"dout", false,-1, 3,0);
    tracep->declBus(c+1018,"douten", false,-1, 3,0);
    tracep->declBit(c+1090,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1040,"clk_i", false,-1);
    tracep->declBit(c+1041,"rst_i", false,-1);
    tracep->declBus(c+883,"adr_i", false,-1, 31,0);
    tracep->declBus(c+860,"dat_i", false,-1, 31,0);
    tracep->declBus(c+18,"dat_o", false,-1, 31,0);
    tracep->declBus(c+17,"sel_i", false,-1, 3,0);
    tracep->declBit(c+887,"cyc_i", false,-1);
    tracep->declBit(c+887,"stb_i", false,-1);
    tracep->declBit(c+1090,"ack_o", false,-1);
    tracep->declBit(c+16,"we_i", false,-1);
    tracep->declBit(c+3,"sck", false,-1);
    tracep->declBit(c+4,"ce_n", false,-1);
    tracep->declBus(c+1079,"din", false,-1, 3,0);
    tracep->declBus(c+1017,"dout", false,-1, 3,0);
    tracep->declBus(c+1018,"douten", false,-1, 3,0);
    tracep->declBus(c+1122,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1118,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1125,"ST_INIT", false,-1, 1,0);
    tracep->declBit(c+588,"mr_sck", false,-1);
    tracep->declBit(c+589,"mr_ce_n", false,-1);
    tracep->declBus(c+1079,"mr_din", false,-1, 3,0);
    tracep->declBus(c+590,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+591,"mr_doe", false,-1);
    tracep->declBit(c+592,"mw_sck", false,-1);
    tracep->declBit(c+593,"mw_ce_n", false,-1);
    tracep->declBus(c+1079,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1091,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+594,"mw_doe", false,-1);
    tracep->declBit(c+1019,"mr_rd", false,-1);
    tracep->declBit(c+595,"mr_done", false,-1);
    tracep->declBit(c+1020,"mw_wr", false,-1);
    tracep->declBit(c+1092,"mw_done", false,-1);
    tracep->declBit(c+887,"wb_valid", false,-1);
    tracep->declBit(c+903,"wb_we", false,-1);
    tracep->declBit(c+904,"wb_re", false,-1);
    tracep->declBus(c+596,"state", false,-1, 1,0);
    tracep->declBus(c+1021,"nstate", false,-1, 1,0);
    tracep->declBus(c+597,"init_counter", false,-1, 3,0);
    tracep->declBit(c+598,"init_done", false,-1);
    tracep->declBus(c+1126,"CMD_QPI", false,-1, 7,0);
    tracep->declBit(c+1093,"init_sck", false,-1);
    tracep->declBit(c+1094,"init_ce_n", false,-1);
    tracep->declBus(c+599,"init_dout", false,-1, 3,0);
    tracep->declBus(c+600,"init_douten", false,-1, 3,0);
    tracep->declBus(c+474,"size", false,-1, 2,0);
    tracep->declBus(c+861,"byte0", false,-1, 7,0);
    tracep->declBus(c+862,"byte1", false,-1, 7,0);
    tracep->declBus(c+863,"byte2", false,-1, 7,0);
    tracep->declBus(c+864,"byte3", false,-1, 7,0);
    tracep->declBus(c+865,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1040,"clk", false,-1);
    tracep->declBit(c+1095,"rst_n", false,-1);
    tracep->declBus(c+905,"addr", false,-1, 23,0);
    tracep->declBit(c+1019,"rd", false,-1);
    tracep->declBus(c+1127,"size", false,-1, 2,0);
    tracep->declBit(c+595,"done", false,-1);
    tracep->declBus(c+18,"line", false,-1, 31,0);
    tracep->declBit(c+588,"sck", false,-1);
    tracep->declBit(c+589,"ce_n", false,-1);
    tracep->declBus(c+1079,"din", false,-1, 3,0);
    tracep->declBus(c+590,"dout", false,-1, 3,0);
    tracep->declBit(c+591,"douten", false,-1);
    tracep->declBus(c+1128,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1129,"READ", false,-1, 0,0);
    tracep->declBus(c+1130,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+601,"state", false,-1);
    tracep->declBit(c+1022,"nstate", false,-1);
    tracep->declBus(c+602,"counter", false,-1, 7,0);
    tracep->declBus(c+603,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+475+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1131,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+604,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1040,"clk", false,-1);
    tracep->declBit(c+1095,"rst_n", false,-1);
    tracep->declBus(c+906,"addr", false,-1, 23,0);
    tracep->declBus(c+865,"line", false,-1, 31,0);
    tracep->declBus(c+474,"size", false,-1, 2,0);
    tracep->declBit(c+1020,"wr", false,-1);
    tracep->declBit(c+1092,"done", false,-1);
    tracep->declBit(c+592,"sck", false,-1);
    tracep->declBit(c+593,"ce_n", false,-1);
    tracep->declBus(c+1079,"din", false,-1, 3,0);
    tracep->declBus(c+1091,"dout", false,-1, 3,0);
    tracep->declBit(c+594,"douten", false,-1);
    tracep->declBus(c+1128,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1129,"WRITE", false,-1, 0,0);
    tracep->declBus(c+479,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+605,"state", false,-1);
    tracep->declBit(c+1023,"nstate", false,-1);
    tracep->declBus(c+606,"counter", false,-1, 7,0);
    tracep->declBus(c+607,"saddr", false,-1, 23,0);
    tracep->declBus(c+1132,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+514,"auto_in_psel", false,-1);
    tracep->declBit(c+515,"auto_in_penable", false,-1);
    tracep->declBit(c+16,"auto_in_pwrite", false,-1);
    tracep->declBus(c+883,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1105,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+860,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+585,"auto_in_pready", false,-1);
    tracep->declBit(c+1106,"auto_in_pslverr", false,-1);
    tracep->declBus(c+586,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1080,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+867,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+581,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+582,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+583,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+584,"sdram_bundle_we", false,-1);
    tracep->declBus(c+868,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+869,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+870,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+1081,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBus(c+883,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+514,"in_psel", false,-1);
    tracep->declBit(c+515,"in_penable", false,-1);
    tracep->declBus(c+1105,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+16,"in_pwrite", false,-1);
    tracep->declBus(c+860,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+585,"in_pready", false,-1);
    tracep->declBus(c+586,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1106,"in_pslverr", false,-1);
    tracep->declBit(c+1080,"sdram_clk", false,-1);
    tracep->declBit(c+867,"sdram_cke", false,-1);
    tracep->declBit(c+581,"sdram_cs", false,-1);
    tracep->declBit(c+582,"sdram_ras", false,-1);
    tracep->declBit(c+583,"sdram_cas", false,-1);
    tracep->declBit(c+584,"sdram_we", false,-1);
    tracep->declBus(c+868,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+869,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+870,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+1081,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+608,"sdram_dout_en", false,-1);
    tracep->declBus(c+609,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+480,"state", false,-1, 1,0);
    tracep->declBit(c+871,"req_accept", false,-1);
    tracep->declBit(c+907,"is_read", false,-1);
    tracep->declBit(c+908,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1040,"clk_i", false,-1);
    tracep->declBit(c+1041,"rst_i", false,-1);
    tracep->declBus(c+909,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+907,"inport_rd_i", false,-1);
    tracep->declBus(c+1117,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+883,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+860,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1081,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+871,"inport_accept_o", false,-1);
    tracep->declBit(c+585,"inport_ack_o", false,-1);
    tracep->declBit(c+1106,"inport_error_o", false,-1);
    tracep->declBus(c+586,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1080,"sdram_clk_o", false,-1);
    tracep->declBit(c+867,"sdram_cke_o", false,-1);
    tracep->declBit(c+581,"sdram_cs_o", false,-1);
    tracep->declBit(c+582,"sdram_ras_o", false,-1);
    tracep->declBit(c+583,"sdram_cas_o", false,-1);
    tracep->declBit(c+584,"sdram_we_o", false,-1);
    tracep->declBus(c+870,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+868,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+869,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+609,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+608,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1133,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1134,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1135,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1136,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1136,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1136,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1137,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1138,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1139,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1140,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1141,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1137,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1142,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1143,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1144,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1145,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1146,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1147,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1148,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1116,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1149,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1137,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1116,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1148,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1147,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1143,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1145,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1144,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1146,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1142,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1150,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1151,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1152,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1152,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1153,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1152,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1136,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1136,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1154,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+883,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+909,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+907,"ram_rd_w", false,-1);
    tracep->declBit(c+871,"ram_accept_w", false,-1);
    tracep->declBus(c+860,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+586,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+585,"ram_ack_w", false,-1);
    tracep->declBit(c+910,"ram_req_w", false,-1);
    tracep->declBus(c+610,"command_q", false,-1, 3,0);
    tracep->declBus(c+868,"addr_q", false,-1, 12,0);
    tracep->declBus(c+609,"data_q", false,-1, 15,0);
    tracep->declBit(c+611,"data_rd_en_q", false,-1);
    tracep->declBus(c+870,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+867,"cke_q", false,-1);
    tracep->declBus(c+869,"bank_q", false,-1, 1,0);
    tracep->declBus(c+612,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+872,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+1081,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+613,"refresh_q", false,-1);
    tracep->declBus(c+614,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+615+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+873,"state_q", false,-1, 3,0);
    tracep->declBus(c+1024,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1025,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+619,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+620,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+911,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+912,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+913,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1137,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+621,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1026,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1155,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+874,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+622,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+623,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+624,"idx", false,-1, 31,0);
    tracep->declBus(c+625,"rd_q", false,-1, 3,0);
    tracep->declBit(c+585,"ack_q", false,-1);
    tracep->declArray(c+875,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+891,"auto_in_psel", false,-1);
    tracep->declBit(c+892,"auto_in_penable", false,-1);
    tracep->declBit(c+16,"auto_in_pwrite", false,-1);
    tracep->declBus(c+885,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1105,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+860,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1084,"auto_in_pready", false,-1);
    tracep->declBit(c+1106,"auto_in_pslverr", false,-1);
    tracep->declBus(c+587,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+579,"spi_bundle_sck", false,-1);
    tracep->declBus(c+580,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+866,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1078,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1156,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1157,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1158,"spi_master_base", false,-1, 31,0);
    tracep->declBus(c+1159,"spi_master_end", false,-1, 31,0);
    tracep->declBus(c+1160,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBus(c+914,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+891,"in_psel", false,-1);
    tracep->declBit(c+892,"in_penable", false,-1);
    tracep->declBus(c+1105,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+16,"in_pwrite", false,-1);
    tracep->declBus(c+860,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1084,"in_pready", false,-1);
    tracep->declBus(c+587,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1106,"in_pslverr", false,-1);
    tracep->declBit(c+579,"spi_sck", false,-1);
    tracep->declBus(c+580,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+866,"spi_mosi", false,-1);
    tracep->declBit(c+1078,"spi_miso", false,-1);
    tracep->declBit(c+1161,"spi_irq_out", false,-1);
    tracep->declBus(c+1027,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1028,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+587,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1029,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1030,"wb_we_i", false,-1);
    tracep->declBit(c+1031,"wb_stb_i", false,-1);
    tracep->declBit(c+1032,"wb_cyc_i", false,-1);
    tracep->declBit(c+626,"wb_ack_o", false,-1);
    tracep->declBit(c+1106,"wb_err_o", false,-1);
    tracep->declBit(c+627,"wb_int_o", false,-1);
    tracep->declBus(c+628,"flash_wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+629,"flash_wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+630,"flash_wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+631,"flash_wb_we_i", false,-1);
    tracep->declBit(c+632,"flash_wb_stb_i", false,-1);
    tracep->declBit(c+633,"flash_wb_cyc_i", false,-1);
    tracep->declBit(c+634,"flash_wb_ack_o", false,-1);
    tracep->declBus(c+1116,"IDLE", false,-1, 3,0);
    tracep->declBus(c+1148,"SEND_CMD", false,-1, 3,0);
    tracep->declBus(c+1147,"SET_DIVIDER", false,-1, 3,0);
    tracep->declBus(c+1143,"SET_SS", false,-1, 3,0);
    tracep->declBus(c+1145,"GO_BUSY", false,-1, 3,0);
    tracep->declBus(c+1144,"WAIT_COMPLETE", false,-1, 3,0);
    tracep->declBus(c+1162,"CLEAR_SS", false,-1, 3,0);
    tracep->declBus(c+1163,"READ_DATA", false,-1, 3,0);
    tracep->declBus(c+1164,"DONE", false,-1, 3,0);
    tracep->declBus(c+635,"state", false,-1, 3,0);
    tracep->declBus(c+915,"flash_cmd", false,-1, 31,0);
    tracep->declBit(c+916,"is_flash_access", false,-1);
    tracep->declBit(c+917,"is_spi_master_access", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1165,"Tp", false,-1, 31,0);
    tracep->declBit(c+1040,"wb_clk_i", false,-1);
    tracep->declBit(c+1041,"wb_rst_i", false,-1);
    tracep->declBus(c+1027,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1028,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+587,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1029,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1030,"wb_we_i", false,-1);
    tracep->declBit(c+1031,"wb_stb_i", false,-1);
    tracep->declBit(c+1032,"wb_cyc_i", false,-1);
    tracep->declBit(c+626,"wb_ack_o", false,-1);
    tracep->declBit(c+1106,"wb_err_o", false,-1);
    tracep->declBit(c+627,"wb_int_o", false,-1);
    tracep->declBus(c+580,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+579,"sclk_pad_o", false,-1);
    tracep->declBit(c+866,"mosi_pad_o", false,-1);
    tracep->declBit(c+1078,"miso_pad_i", false,-1);
    tracep->declBus(c+636,"divider", false,-1, 15,0);
    tracep->declBus(c+637,"ctrl", false,-1, 13,0);
    tracep->declBus(c+638,"ss", false,-1, 7,0);
    tracep->declBus(c+1033,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+639,"rx", false,-1, 127,0);
    tracep->declBit(c+643,"rx_negedge", false,-1);
    tracep->declBit(c+644,"tx_negedge", false,-1);
    tracep->declBus(c+645,"char_len", false,-1, 6,0);
    tracep->declBit(c+646,"go", false,-1);
    tracep->declBit(c+647,"lsb", false,-1);
    tracep->declBit(c+648,"ie", false,-1);
    tracep->declBit(c+649,"ass", false,-1);
    tracep->declBit(c+1034,"spi_divider_sel", false,-1);
    tracep->declBit(c+1035,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1036,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1037,"spi_ss_sel", false,-1);
    tracep->declBit(c+650,"tip", false,-1);
    tracep->declBit(c+651,"pos_edge", false,-1);
    tracep->declBit(c+652,"neg_edge", false,-1);
    tracep->declBit(c+653,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1165,"Tp", false,-1, 31,0);
    tracep->declBit(c+1040,"clk_in", false,-1);
    tracep->declBit(c+1041,"rst", false,-1);
    tracep->declBit(c+650,"enable", false,-1);
    tracep->declBit(c+646,"go", false,-1);
    tracep->declBit(c+653,"last_clk", false,-1);
    tracep->declBus(c+636,"divider", false,-1, 15,0);
    tracep->declBit(c+579,"clk_out", false,-1);
    tracep->declBit(c+651,"pos_edge", false,-1);
    tracep->declBit(c+652,"neg_edge", false,-1);
    tracep->declBus(c+654,"cnt", false,-1, 15,0);
    tracep->declBit(c+655,"cnt_zero", false,-1);
    tracep->declBit(c+656,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1165,"Tp", false,-1, 31,0);
    tracep->declBit(c+1040,"clk", false,-1);
    tracep->declBit(c+1041,"rst", false,-1);
    tracep->declBus(c+1038,"latch", false,-1, 3,0);
    tracep->declBus(c+1029,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+645,"len", false,-1, 6,0);
    tracep->declBit(c+647,"lsb", false,-1);
    tracep->declBit(c+646,"go", false,-1);
    tracep->declBit(c+651,"pos_edge", false,-1);
    tracep->declBit(c+652,"neg_edge", false,-1);
    tracep->declBit(c+643,"rx_negedge", false,-1);
    tracep->declBit(c+644,"tx_negedge", false,-1);
    tracep->declBit(c+650,"tip", false,-1);
    tracep->declBit(c+653,"last", false,-1);
    tracep->declBus(c+1028,"p_in", false,-1, 31,0);
    tracep->declArray(c+639,"p_out", false,-1, 127,0);
    tracep->declBit(c+579,"s_clk", false,-1);
    tracep->declBit(c+1078,"s_in", false,-1);
    tracep->declBit(c+866,"s_out", false,-1);
    tracep->declBus(c+657,"cnt", false,-1, 7,0);
    tracep->declArray(c+639,"data", false,-1, 127,0);
    tracep->declBus(c+658,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+659,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+660,"rx_clk", false,-1);
    tracep->declBit(c+661,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+888,"auto_in_psel", false,-1);
    tracep->declBit(c+889,"auto_in_penable", false,-1);
    tracep->declBit(c+16,"auto_in_pwrite", false,-1);
    tracep->declBus(c+886,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1105,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+860,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+890,"auto_in_pready", false,-1);
    tracep->declBit(c+1106,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1083,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1060,"uart_rx", false,-1);
    tracep->declBit(c+1061,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+888,"in_psel", false,-1);
    tracep->declBit(c+889,"in_penable", false,-1);
    tracep->declBus(c+1105,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+890,"in_pready", false,-1);
    tracep->declBit(c+1106,"in_pslverr", false,-1);
    tracep->declBus(c+902,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+16,"in_pwrite", false,-1);
    tracep->declBus(c+1083,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+860,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1060,"uart_rx", false,-1);
    tracep->declBit(c+1061,"uart_tx", false,-1);
    tracep->declBit(c+662,"rtsn", false,-1);
    tracep->declBit(c+1106,"ctsn", false,-1);
    tracep->declBit(c+663,"dtr_pad_o", false,-1);
    tracep->declBit(c+1106,"dsr_pad_i", false,-1);
    tracep->declBit(c+1106,"ri_pad_i", false,-1);
    tracep->declBit(c+1106,"dcd_pad_i", false,-1);
    tracep->declBit(c+664,"interrupt", false,-1);
    tracep->declBit(c+1096,"reg_we", false,-1);
    tracep->declBit(c+1097,"reg_re", false,-1);
    tracep->declBus(c+918,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+919,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+481,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1039,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+665,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1040,"clk", false,-1);
    tracep->declBit(c+1041,"wb_rst_i", false,-1);
    tracep->declBus(c+918,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+920,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1039,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1096,"wb_we_i", false,-1);
    tracep->declBit(c+1097,"wb_re_i", false,-1);
    tracep->declBit(c+1061,"stx_pad_o", false,-1);
    tracep->declBit(c+1060,"srx_pad_i", false,-1);
    tracep->declBus(c+1150,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+665,"rts_pad_o", false,-1);
    tracep->declBit(c+663,"dtr_pad_o", false,-1);
    tracep->declBit(c+664,"int_o", false,-1);
    tracep->declBit(c+666,"enable", false,-1);
    tracep->declBit(c+667,"srx_pad", false,-1);
    tracep->declBus(c+668,"ier", false,-1, 3,0);
    tracep->declBus(c+669,"iir", false,-1, 3,0);
    tracep->declBus(c+670,"fcr", false,-1, 1,0);
    tracep->declBus(c+671,"mcr", false,-1, 4,0);
    tracep->declBus(c+672,"lcr", false,-1, 7,0);
    tracep->declBus(c+673,"msr", false,-1, 7,0);
    tracep->declBus(c+674,"dl", false,-1, 15,0);
    tracep->declBus(c+675,"scratch", false,-1, 7,0);
    tracep->declBit(c+676,"start_dlc", false,-1);
    tracep->declBit(c+677,"lsr_mask_d", false,-1);
    tracep->declBit(c+678,"msi_reset", false,-1);
    tracep->declBus(c+679,"dlc", false,-1, 15,0);
    tracep->declBus(c+680,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+681,"rx_reset", false,-1);
    tracep->declBit(c+682,"tx_reset", false,-1);
    tracep->declBit(c+683,"dlab", false,-1);
    tracep->declBit(c+1119,"cts_pad_i", false,-1);
    tracep->declBit(c+1106,"dsr_pad_i", false,-1);
    tracep->declBit(c+1106,"ri_pad_i", false,-1);
    tracep->declBit(c+1106,"dcd_pad_i", false,-1);
    tracep->declBit(c+684,"loopback", false,-1);
    tracep->declBit(c+1106,"cts", false,-1);
    tracep->declBit(c+1119,"dsr", false,-1);
    tracep->declBit(c+1119,"ri", false,-1);
    tracep->declBit(c+1119,"dcd", false,-1);
    tracep->declBit(c+685,"cts_c", false,-1);
    tracep->declBit(c+686,"dsr_c", false,-1);
    tracep->declBit(c+687,"ri_c", false,-1);
    tracep->declBit(c+688,"dcd_c", false,-1);
    tracep->declBus(c+689,"lsr", false,-1, 7,0);
    tracep->declBit(c+690,"lsr0", false,-1);
    tracep->declBit(c+691,"lsr1", false,-1);
    tracep->declBit(c+692,"lsr2", false,-1);
    tracep->declBit(c+693,"lsr3", false,-1);
    tracep->declBit(c+694,"lsr4", false,-1);
    tracep->declBit(c+695,"lsr5", false,-1);
    tracep->declBit(c+696,"lsr6", false,-1);
    tracep->declBit(c+697,"lsr7", false,-1);
    tracep->declBit(c+698,"lsr0r", false,-1);
    tracep->declBit(c+699,"lsr1r", false,-1);
    tracep->declBit(c+700,"lsr2r", false,-1);
    tracep->declBit(c+701,"lsr3r", false,-1);
    tracep->declBit(c+702,"lsr4r", false,-1);
    tracep->declBit(c+703,"lsr5r", false,-1);
    tracep->declBit(c+704,"lsr6r", false,-1);
    tracep->declBit(c+705,"lsr7r", false,-1);
    tracep->declBit(c+5,"lsr_mask", false,-1);
    tracep->declBit(c+706,"rls_int", false,-1);
    tracep->declBit(c+707,"rda_int", false,-1);
    tracep->declBit(c+708,"ti_int", false,-1);
    tracep->declBit(c+709,"thre_int", false,-1);
    tracep->declBit(c+710,"ms_int", false,-1);
    tracep->declBit(c+711,"tf_push", false,-1);
    tracep->declBit(c+712,"rf_pop", false,-1);
    tracep->declBus(c+1098,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+713,"rf_error_bit", false,-1);
    tracep->declBit(c+691,"rf_overrun", false,-1);
    tracep->declBit(c+714,"rf_push_pulse", false,-1);
    tracep->declBus(c+715,"rf_count", false,-1, 4,0);
    tracep->declBus(c+716,"tf_count", false,-1, 4,0);
    tracep->declBus(c+717,"tstate", false,-1, 2,0);
    tracep->declBus(c+718,"rstate", false,-1, 3,0);
    tracep->declBus(c+719,"counter_t", false,-1, 9,0);
    tracep->declBit(c+720,"thre_set_en", false,-1);
    tracep->declBus(c+721,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+722,"block_value", false,-1, 7,0);
    tracep->declBit(c+723,"serial_out", false,-1);
    tracep->declBit(c+724,"serial_in", false,-1);
    tracep->declBit(c+6,"lsr_mask_condition", false,-1);
    tracep->declBit(c+7,"iir_read", false,-1);
    tracep->declBit(c+8,"msr_read", false,-1);
    tracep->declBit(c+9,"fifo_read", false,-1);
    tracep->declBit(c+10,"fifo_write", false,-1);
    tracep->declBus(c+725,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+726,"lsr0_d", false,-1);
    tracep->declBit(c+727,"lsr1_d", false,-1);
    tracep->declBit(c+728,"lsr2_d", false,-1);
    tracep->declBit(c+729,"lsr3_d", false,-1);
    tracep->declBit(c+730,"lsr4_d", false,-1);
    tracep->declBit(c+731,"lsr5_d", false,-1);
    tracep->declBit(c+732,"lsr6_d", false,-1);
    tracep->declBit(c+733,"lsr7_d", false,-1);
    tracep->declBit(c+734,"rls_int_d", false,-1);
    tracep->declBit(c+735,"thre_int_d", false,-1);
    tracep->declBit(c+736,"ms_int_d", false,-1);
    tracep->declBit(c+737,"ti_int_d", false,-1);
    tracep->declBit(c+738,"rda_int_d", false,-1);
    tracep->declBit(c+739,"rls_int_rise", false,-1);
    tracep->declBit(c+740,"thre_int_rise", false,-1);
    tracep->declBit(c+741,"ms_int_rise", false,-1);
    tracep->declBit(c+742,"ti_int_rise", false,-1);
    tracep->declBit(c+743,"rda_int_rise", false,-1);
    tracep->declBit(c+744,"rls_int_pnd", false,-1);
    tracep->declBit(c+745,"rda_int_pnd", false,-1);
    tracep->declBit(c+746,"thre_int_pnd", false,-1);
    tracep->declBit(c+747,"ms_int_pnd", false,-1);
    tracep->declBit(c+748,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1165,"Tp", false,-1, 31,0);
    tracep->declBus(c+1165,"width", false,-1, 31,0);
    tracep->declBus(c+1129,"init_value", false,-1, 0,0);
    tracep->declBit(c+1041,"rst_i", false,-1);
    tracep->declBit(c+1040,"clk_i", false,-1);
    tracep->declBit(c+1106,"stage1_rst_i", false,-1);
    tracep->declBit(c+1119,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1060,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+667,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+749,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1040,"clk", false,-1);
    tracep->declBit(c+1041,"wb_rst_i", false,-1);
    tracep->declBus(c+672,"lcr", false,-1, 7,0);
    tracep->declBit(c+712,"rf_pop", false,-1);
    tracep->declBit(c+724,"srx_pad_i", false,-1);
    tracep->declBit(c+666,"enable", false,-1);
    tracep->declBit(c+681,"rx_reset", false,-1);
    tracep->declBit(c+5,"lsr_mask", false,-1);
    tracep->declBus(c+719,"counter_t", false,-1, 9,0);
    tracep->declBus(c+715,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1098,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+691,"rf_overrun", false,-1);
    tracep->declBit(c+713,"rf_error_bit", false,-1);
    tracep->declBus(c+718,"rstate", false,-1, 3,0);
    tracep->declBit(c+714,"rf_push_pulse", false,-1);
    tracep->declBus(c+750,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+751,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+752,"rshift", false,-1, 7,0);
    tracep->declBit(c+753,"rparity", false,-1);
    tracep->declBit(c+754,"rparity_error", false,-1);
    tracep->declBit(c+755,"rframing_error", false,-1);
    tracep->declBit(c+756,"rbit_in", false,-1);
    tracep->declBit(c+757,"rparity_xor", false,-1);
    tracep->declBus(c+758,"counter_b", false,-1, 7,0);
    tracep->declBit(c+759,"rf_push_q", false,-1);
    tracep->declBus(c+760,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+761,"rf_push", false,-1);
    tracep->declBit(c+762,"break_error", false,-1);
    tracep->declBit(c+763,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+764,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+765,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+766,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1116,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1148,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1147,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1143,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1145,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1144,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1146,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1142,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1150,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1151,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1166,"sr_push", false,-1, 3,0);
    tracep->declBus(c+767,"toc_value", false,-1, 9,0);
    tracep->declBus(c+768,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1167,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1153,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1137,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1123,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1040,"clk", false,-1);
    tracep->declBit(c+1041,"wb_rst_i", false,-1);
    tracep->declBit(c+714,"push", false,-1);
    tracep->declBit(c+712,"pop", false,-1);
    tracep->declBus(c+760,"data_in", false,-1, 10,0);
    tracep->declBit(c+681,"fifo_reset", false,-1);
    tracep->declBit(c+5,"reset_status", false,-1);
    tracep->declBus(c+1098,"data_out", false,-1, 10,0);
    tracep->declBit(c+691,"overrun", false,-1);
    tracep->declBus(c+715,"count", false,-1, 4,0);
    tracep->declBit(c+713,"error_bit", false,-1);
    tracep->declBus(c+1099,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+769+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+785,"top", false,-1, 3,0);
    tracep->declBus(c+786,"bottom", false,-1, 3,0);
    tracep->declBus(c+787,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+788,"word0", false,-1, 2,0);
    tracep->declBus(c+789,"word1", false,-1, 2,0);
    tracep->declBus(c+790,"word2", false,-1, 2,0);
    tracep->declBus(c+791,"word3", false,-1, 2,0);
    tracep->declBus(c+792,"word4", false,-1, 2,0);
    tracep->declBus(c+793,"word5", false,-1, 2,0);
    tracep->declBus(c+794,"word6", false,-1, 2,0);
    tracep->declBus(c+795,"word7", false,-1, 2,0);
    tracep->declBus(c+796,"word8", false,-1, 2,0);
    tracep->declBus(c+797,"word9", false,-1, 2,0);
    tracep->declBus(c+798,"word10", false,-1, 2,0);
    tracep->declBus(c+799,"word11", false,-1, 2,0);
    tracep->declBus(c+800,"word12", false,-1, 2,0);
    tracep->declBus(c+801,"word13", false,-1, 2,0);
    tracep->declBus(c+802,"word14", false,-1, 2,0);
    tracep->declBus(c+803,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1137,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1160,"data_width", false,-1, 31,0);
    tracep->declBus(c+1153,"depth", false,-1, 31,0);
    tracep->declBit(c+1040,"clk", false,-1);
    tracep->declBit(c+714,"we", false,-1);
    tracep->declBus(c+785,"a", false,-1, 3,0);
    tracep->declBus(c+786,"dpra", false,-1, 3,0);
    tracep->declBus(c+804,"di", false,-1, 7,0);
    tracep->declBus(c+1099,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+482+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1040,"clk", false,-1);
    tracep->declBit(c+1041,"wb_rst_i", false,-1);
    tracep->declBus(c+672,"lcr", false,-1, 7,0);
    tracep->declBit(c+711,"tf_push", false,-1);
    tracep->declBus(c+920,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+666,"enable", false,-1);
    tracep->declBit(c+682,"tx_reset", false,-1);
    tracep->declBit(c+5,"lsr_mask", false,-1);
    tracep->declBit(c+723,"stx_pad_o", false,-1);
    tracep->declBus(c+717,"tstate", false,-1, 2,0);
    tracep->declBus(c+716,"tf_count", false,-1, 4,0);
    tracep->declBus(c+805,"counter", false,-1, 4,0);
    tracep->declBus(c+806,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+807,"shift_out", false,-1, 6,0);
    tracep->declBit(c+808,"stx_o_tmp", false,-1);
    tracep->declBit(c+809,"parity_xor", false,-1);
    tracep->declBit(c+810,"tf_pop", false,-1);
    tracep->declBit(c+811,"bit_out", false,-1);
    tracep->declBus(c+920,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1100,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+812,"tf_overrun", false,-1);
    tracep->declBus(c+1121,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1105,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1168,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1169,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1127,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1170,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1160,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1153,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1137,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1123,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1040,"clk", false,-1);
    tracep->declBit(c+1041,"wb_rst_i", false,-1);
    tracep->declBit(c+711,"push", false,-1);
    tracep->declBit(c+810,"pop", false,-1);
    tracep->declBus(c+920,"data_in", false,-1, 7,0);
    tracep->declBit(c+682,"fifo_reset", false,-1);
    tracep->declBit(c+5,"reset_status", false,-1);
    tracep->declBus(c+1100,"data_out", false,-1, 7,0);
    tracep->declBit(c+812,"overrun", false,-1);
    tracep->declBus(c+716,"count", false,-1, 4,0);
    tracep->declBus(c+813,"top", false,-1, 3,0);
    tracep->declBus(c+814,"bottom", false,-1, 3,0);
    tracep->declBus(c+815,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1137,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1160,"data_width", false,-1, 31,0);
    tracep->declBus(c+1153,"depth", false,-1, 31,0);
    tracep->declBit(c+1040,"clk", false,-1);
    tracep->declBit(c+711,"we", false,-1);
    tracep->declBus(c+813,"a", false,-1, 3,0);
    tracep->declBus(c+814,"dpra", false,-1, 3,0);
    tracep->declBus(c+920,"di", false,-1, 7,0);
    tracep->declBus(c+1100,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+498+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+516,"auto_in_psel", false,-1);
    tracep->declBit(c+517,"auto_in_penable", false,-1);
    tracep->declBit(c+16,"auto_in_pwrite", false,-1);
    tracep->declBus(c+885,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1105,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+860,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1107,"auto_in_pready", false,-1);
    tracep->declBit(c+1108,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1109,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1054,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1055,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1056,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1057,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1058,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1059,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1040,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBus(c+914,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+516,"in_psel", false,-1);
    tracep->declBit(c+517,"in_penable", false,-1);
    tracep->declBus(c+1105,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+16,"in_pwrite", false,-1);
    tracep->declBus(c+860,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+17,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1107,"in_pready", false,-1);
    tracep->declBus(c+1109,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1108,"in_pslverr", false,-1);
    tracep->declBus(c+1054,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1055,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1056,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1057,"vga_hsync", false,-1);
    tracep->declBit(c+1058,"vga_vsync", false,-1);
    tracep->declBit(c+1059,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+579,"sck", false,-1);
    tracep->declBit(c+816,"ss", false,-1);
    tracep->declBit(c+866,"mosi", false,-1);
    tracep->declBit(c+1101,"miso", false,-1);
    tracep->declBus(c+1122,"RX", false,-1, 1,0);
    tracep->declBus(c+1118,"TX", false,-1, 1,0);
    tracep->declBus(c+1125,"DONE", false,-1, 1,0);
    tracep->declBus(c+11,"counter", false,-1, 7,0);
    tracep->declBus(c+12,"data_in", false,-1, 7,0);
    tracep->declBus(c+13,"state", false,-1, 1,0);
    tracep->declBit(c+816,"inactive", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+579,"sck", false,-1);
    tracep->declBit(c+817,"ss", false,-1);
    tracep->declBit(c+866,"mosi", false,-1);
    tracep->declBit(c+1102,"miso", false,-1);
    tracep->declBit(c+817,"reset", false,-1);
    tracep->declBus(c+854,"state", false,-1, 2,0);
    tracep->declBus(c+855,"counter", false,-1, 7,0);
    tracep->declBus(c+856,"cmd", false,-1, 7,0);
    tracep->declBus(c+857,"addr", false,-1, 23,0);
    tracep->declBus(c+858,"data", false,-1, 31,0);
    tracep->declBit(c+859,"ren", false,-1);
    tracep->declBus(c+1103,"rdata", false,-1, 31,0);
    tracep->declBus(c+1104,"raddr", false,-1, 31,0);
    tracep->declBus(c+1103,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+579,"clock", false,-1);
    tracep->declBit(c+859,"valid", false,-1);
    tracep->declBus(c+856,"cmd", false,-1, 7,0);
    tracep->declBus(c+1104,"addr", false,-1, 31,0);
    tracep->declBus(c+1103,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+3,"sck", false,-1);
    tracep->declBit(c+4,"ce_n", false,-1);
    tracep->declBus(c+1079,"dio", false,-1, 3,0);
    tracep->declBus(c+1121,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1105,"CMD", false,-1, 2,0);
    tracep->declBus(c+1168,"ADDR", false,-1, 2,0);
    tracep->declBus(c+1169,"DUMMY", false,-1, 2,0);
    tracep->declBus(c+1127,"READ_DATA", false,-1, 2,0);
    tracep->declBus(c+1170,"WRITE_DATA", false,-1, 2,0);
    tracep->declBus(c+570,"state", false,-1, 2,0);
    tracep->declBus(c+571,"cmd", false,-1, 7,0);
    tracep->declBus(c+572,"addr", false,-1, 23,0);
    tracep->declBus(c+573,"cycle_cnt", false,-1, 5,0);
    tracep->declBus(c+574,"dout", false,-1, 3,0);
    tracep->declBit(c+575,"dout_en", false,-1);
    tracep->declBus(c+576,"nibble_idx", false,-1, 1,0);
    tracep->declBus(c+577,"addr_shift", false,-1, 23,0);
    tracep->declBit(c+578,"qpi_mode", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1080,"clk", false,-1);
    tracep->declBit(c+867,"cke", false,-1);
    tracep->declBit(c+581,"cs", false,-1);
    tracep->declBit(c+582,"ras", false,-1);
    tracep->declBit(c+583,"cas", false,-1);
    tracep->declBit(c+584,"we", false,-1);
    tracep->declBus(c+868,"a", false,-1, 12,0);
    tracep->declBus(c+869,"ba", false,-1, 1,0);
    tracep->declBus(c+870,"dqm", false,-1, 1,0);
    tracep->declBus(c+1081,"dq", false,-1, 15,0);
    tracep->declBus(c+1138,"ROW_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1135,"COL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1137,"BANK_COUNT", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+820+i*1,"active", true,(i+0));
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+824+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->declBus(c+828,"burst_length_code", false,-1, 2,0);
    tracep->declBus(c+829,"cas_latency_code", false,-1, 2,0);
    tracep->declBus(c+830,"burst_length", false,-1, 3,0);
    tracep->declBus(c+829,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+581,"is_inhibit", false,-1);
    tracep->declBit(c+818,"is_nop", false,-1);
    tracep->declBit(c+878,"is_active", false,-1);
    tracep->declBit(c+879,"is_read", false,-1);
    tracep->declBit(c+880,"is_write", false,-1);
    tracep->declBit(c+881,"is_precharge", false,-1);
    tracep->declBit(c+819,"is_auto_refresh", false,-1);
    tracep->declBit(c+882,"is_load_mode", false,-1);
    tracep->declBus(c+831,"dq_out", false,-1, 15,0);
    tracep->declBit(c+832,"dq_en", false,-1);
    tracep->declBus(c+1121,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1105,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1168,"READING", false,-1, 2,0);
    tracep->declBus(c+1169,"WRITING", false,-1, 2,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+833+i*1,"state", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+837+i*1,"delay_counter", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+841+i*1,"burst_counter", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+845+i*1,"current_col", true,(i+0), 8,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+849,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+850,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+851,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+852,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+853,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<8>/*255:0*/ __Vtemp_he1569b33__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullCData(oldp+11,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),8);
    bufp->fullCData(oldp+12,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_in),8);
    bufp->fullCData(oldp+13,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state),2);
    bufp->fullBit(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+15,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullCData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+18,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullBit(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+42,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullIData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullBit(oldp+46,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullIData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+50,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hbda8445b__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2))))));
    bufp->fullBit(oldp+51,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullIData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullBit(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+57,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+59,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+61,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+62,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullIData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+107,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullQData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+112,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+113,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+116,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+117,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+118,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+121,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                      ? (vlSelf->__VdfgTmp_hf132a334__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_hf132a334__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? vlSelf->__VdfgTmp_hf132a334__0
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+122,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+123,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullSData(oldp+131,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullIData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullSData(oldp+133,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+136,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1bU)) 
                                       | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU)))))))));
    bufp->fullBit(oldp+137,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+138,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+139,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+140,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+148,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+150,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+151,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+197,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+210,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+214,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+218,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+222,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+226,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+230,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+234,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+238,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+242,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+246,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+250,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+254,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+258,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+262,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+266,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+270,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+274,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+278,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+282,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+286,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+290,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+294,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+298,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+302,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+306,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+310,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+314,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+318,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+322,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+326,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+330,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+334,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+338,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___GEN_6)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc
                                : 0U)),32);
    bufp->fullBit(oldp+339,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT____VdfgTmp_h3a4270d2__0)) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)))));
    bufp->fullBit(oldp+340,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_h41ece7be__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_in_ar_ready))));
    bufp->fullBit(oldp+341,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___GEN_4)) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)))));
    bufp->fullIData(oldp+342,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_8)
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
    bufp->fullCData(oldp+343,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_8)
                                ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___memory_ctl_io_dmem_rw_size))),3);
    bufp->fullBit(oldp+344,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h481cff71__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2))));
    bufp->fullBit(oldp+345,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullCData(oldp+346,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4)
                                ? 0U : (0xfU & ((5U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type))
                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                                    : 1U))))))),4);
    bufp->fullBit(oldp+347,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                             | ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_6)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2)
                                    : (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)))))));
    bufp->fullBit(oldp+348,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullBit(oldp+349,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hbda8445b__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2))));
    bufp->fullIData(oldp+350,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_7)
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
    bufp->fullBit(oldp+351,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h481cff71__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad))));
    bufp->fullBit(oldp+352,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_in_ar_ready))));
    bufp->fullBit(oldp+353,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hbda8445b__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad))));
    bufp->fullIData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_aw_addr),32);
    bufp->fullCData(oldp+355,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_8)
                                         ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___memory_ctl_io_dmem_rw_size)))),3);
    bufp->fullBit(oldp+356,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h481cff71__0) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2)))));
    bufp->fullBit(oldp+357,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullCData(oldp+358,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4)
                                         ? 0U : (0xfU 
                                                 & ((5U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                                        : 1U)))))))),4);
    bufp->fullBit(oldp+359,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                                | ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_6)
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2)
                                       : (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))))))));
    bufp->fullBit(oldp+360,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullBit(oldp+361,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hbda8445b__0) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2)))));
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr),32);
    bufp->fullBit(oldp+363,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_arbiter_valid)
                                 ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT____VdfgTmp_h3a4270d2__0)) 
                                    & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)))
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h481cff71__0) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid))))));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_in_ar_ready));
    bufp->fullBit(oldp+365,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_arbiter_valid)
                                 ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___GEN_4)) 
                                    & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)))
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hbda8445b__0) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad)))))));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_arbiter_valid));
    bufp->fullBit(oldp+367,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)))));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state));
    bufp->fullIData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_addr),32);
    bufp->fullIData(oldp+371,(((0x200bff8U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_addr)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime)
                                : ((0x200bffcU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_addr)
                                    ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
                                               >> 0x20U))
                                    : 0U))),32);
    bufp->fullQData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime),64);
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_out_valid));
    bufp->fullIData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst),32);
    bufp->fullIData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_pc),32);
    bufp->fullCData(oldp+378,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_out_bits_alu_op1),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_out_bits_alu_op2),32);
    bufp->fullIData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___regfile_rs2_data),32);
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_valid));
    bufp->fullIData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst),32);
    bufp->fullIData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_pc),32);
    bufp->fullIData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___alu_instance_io_result),32);
    bufp->fullIData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_rs2_data),32);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_wb_addr),5);
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state),2);
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp),5);
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_out_valid));
    bufp->fullIData(oldp+393,((0xfffffffeU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___regfile_rs1_data 
                                              + (((- (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                    >> 0x14U))))),32);
    bufp->fullIData(oldp+394,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_pc 
                               + (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0x800U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                        >> 7U))))))),32);
    bufp->fullIData(oldp+395,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_pc 
                               + (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                         >> 0x14U))))))),32);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_pc_sel),3);
    bufp->fullIData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___regfile_rs1_data),32);
    bufp->fullCData(oldp+398,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+399,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state),2);
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_eq));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_lt));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_ltu));
    bufp->fullBit(oldp+404,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state))));
    bufp->fullIData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc),32);
    bufp->fullIData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__if_inst_buffer),32);
    bufp->fullCData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state),3);
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_valid));
    bufp->fullIData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_pc),32);
    bufp->fullIData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__delayedData),32);
    bufp->fullIData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr),32);
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_wb_addr),5);
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isStore));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad));
    bufp->fullIData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst),32);
    bufp->fullIData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_rs2_data),32);
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control),3);
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state),3);
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type),3);
    bufp->fullCData(oldp+421,(((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                    : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                        : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                            : 1U))))),8);
    bufp->fullCData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___memory_ctl_io_dmem_rw_size),3);
    bufp->fullCData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_wb_addr),5);
    bufp->fullIData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[31]),32);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state),2);
    bufp->fullIData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst),32);
    bufp->fullIData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_pc),32);
    bufp->fullIData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_result),32);
    bufp->fullIData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_dmem_rdata),32);
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+471,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+479,((0xffU & ((IData)(7U) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+514,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+515,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+516,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+517,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+518,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+519,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+520,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+521,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+522,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullIData(oldp+523,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullIData(oldp+524,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                 : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  (vlSelf->__VdfgTmp_hf132a334__0 
                                                   >> 0x18U)
                                                   : 0U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                << 0x18U) 
                                               | ((0xff0000U 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                         ? 
                                                        (vlSelf->__VdfgTmp_hf132a334__0 
                                                         >> 0x10U)
                                                         : 0U)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           (vlSelf->__VdfgTmp_hf132a334__0 
                                                            >> 8U)
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                             ? vlSelf->__VdfgTmp_hf132a334__0
                                                             : 0U)
                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                            : 0U)))),32);
    bufp->fullBit(oldp+525,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                              >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))));
    bufp->fullBit(oldp+526,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))));
    bufp->fullBit(oldp+527,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+528,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+529,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+530,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+531,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+532,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+533,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+534,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+535,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+536,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+537,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+538,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+539,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+540,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+541,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+542,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+543,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+544,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+545,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+546,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+547,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+548,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+549,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+550,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+551,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+552,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+553,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+554,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+555,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+556,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+557,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+558,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+559,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+560,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullIData(oldp+561,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_h41ece7be__0)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_in_r_data
                                : 0U)),32);
    bufp->fullCData(oldp+562,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                         ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp)))),2);
    bufp->fullBit(oldp+563,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))));
    bufp->fullCData(oldp+564,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                         ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp)))),2);
    bufp->fullBit(oldp+565,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_in_r_valid))));
    bufp->fullCData(oldp+566,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp))),2);
    bufp->fullBit(oldp+567,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))));
    bufp->fullCData(oldp+568,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp))),2);
    bufp->fullBit(oldp+569,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hbda8445b__0) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_in_r_valid)) 
                                    & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)) 
                                        & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp)))) 
                                       | (2U == ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                                   ? 0U
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp))))))
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isStore) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                                        & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))) 
                                    & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)) 
                                        & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp)))) 
                                       | (2U == ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                                   ? 0U
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp))))))))));
    bufp->fullCData(oldp+570,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+571,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+572,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cycle_cnt),6);
    bufp->fullCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dout),4);
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dout_en));
    bufp->fullCData(oldp+576,(vlSelf->ysyxSoCFull__DOT__psram__DOT__nibble_idx),2);
    bufp->fullIData(oldp+577,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_shift),24);
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_mode));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+581,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+582,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+583,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+584,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+586,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullIData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+590,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                ? 0xeU : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                           ? 0xbU : 
                                          (0xfU & (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x14U)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 0x10U)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 0xcU)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                       >> 8U)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                        ? 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                        >> 4U)
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                         : 0U)))))))))),4);
    bufp->fullBit(oldp+591,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+594,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+595,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_counter),4);
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_done));
    bufp->fullCData(oldp+599,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                ? (1U & (0x35U >> (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_counter)))))
                                : 0U)),4);
    bufp->fullCData(oldp+600,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                ? 0xfU : 0U)),4);
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+604,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+608,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullSData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_adr_i),5);
    bufp->fullIData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_dat_i),32);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_sel_i),4);
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_we_i));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_stb_i));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_cyc_i));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_ack_o));
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),4);
    bufp->fullSData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+643,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+644,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+645,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+646,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+647,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+648,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+649,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+653,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+655,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+656,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+658,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+662,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+663,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+665,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+683,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+684,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+685,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+686,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+687,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+688,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+689,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+692,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+693,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+694,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+713,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [3U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [4U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [7U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [8U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [9U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [0xaU] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xbU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xcU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xdU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xeU] 
                                                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+720,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+739,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+740,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+741,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+742,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+743,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+762,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+763,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+764,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+765,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+766,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+768,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+787,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+804,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+815,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+818,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_hada35e22__0) 
                             & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                 >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))));
    bufp->fullBit(oldp+819,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_h50b78ab2__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__active[0]));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__active[1]));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__active[2]));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__active[3]));
    bufp->fullSData(oldp+824,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__active_row[0]),13);
    bufp->fullSData(oldp+825,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__active_row[1]),13);
    bufp->fullSData(oldp+826,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__active_row[2]),13);
    bufp->fullSData(oldp+827,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__active_row[3]),13);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__burst_length_code),3);
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__cas_latency_code),3);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__burst_length),4);
    bufp->fullSData(oldp+831,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq_out),16);
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq_en));
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state[0]),3);
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state[1]),3);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state[2]),3);
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state[3]),3);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__delay_counter[0]),4);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__delay_counter[1]),4);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__delay_counter[2]),4);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__delay_counter[3]),4);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__burst_counter[0]),4);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__burst_counter[1]),4);
    bufp->fullCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__burst_counter[2]),4);
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__burst_counter[3]),4);
    bufp->fullSData(oldp+845,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__current_col[0]),9);
    bufp->fullSData(oldp+846,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__current_col[1]),9);
    bufp->fullSData(oldp+847,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__current_col[2]),9);
    bufp->fullSData(oldp+848,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__current_col[3]),9);
    bufp->fullIData(oldp+849,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+850,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+851,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+852,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+853,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__unnamedblk6__DOT__i),32);
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+857,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+858,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+859,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+863,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+864,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+865,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullSData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullBit(oldp+871,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__is_active));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__is_read));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__is_write));
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__is_precharge));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__is_load_mode));
    bufp->fullIData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+885,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullIData(oldp+886,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+890,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+901,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+902,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+905,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+906,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+911,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                         >> 1U))),13);
    bufp->fullSData(oldp+912,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+913,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+914,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+915,((0x3000000U | (0xffffffU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))),32);
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullBit(oldp+917,(((0x10001000U <= (0x3fffffffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                             & (0x10001fffU >= (0x3fffffffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullCData(oldp+918,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+927,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp),2);
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp),2);
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+958,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+959,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+981,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+982,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+983,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+984,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+985,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+986,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+987,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+988,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+989,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+990,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+991,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+992,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+993,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+994,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+995,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+996,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+997,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+998,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+999,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+1000,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1001,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1002,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1003,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1004,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1005,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1006,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1007,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1008,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1009,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1010,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1011,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1012,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_ifu_r_valid));
    bufp->fullIData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_in_r_data),32);
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_in_r_valid));
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data),32);
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1034,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1035,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1037,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1040,(vlSelf->clock));
    bufp->fullBit(oldp+1041,(vlSelf->reset));
    bufp->fullSData(oldp+1042,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1043,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1044,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1045,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1046,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1047,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1048,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1049,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1050,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1051,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1052,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1053,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1054,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1055,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1056,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1057,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1058,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1059,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1060,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1061,(vlSelf->externalPins_uart_tx));
    bufp->fullCData(oldp+1062,(vlSelf->io_wbu_state_debug),2);
    bufp->fullIData(oldp+1063,(vlSelf->io_pc_debug),32);
    bufp->fullIData(oldp+1064,(vlSelf->io_inst_debug),32);
    bufp->fullCData(oldp+1065,(vlSelf->io_ifu_state_debug),3);
    bufp->fullCData(oldp+1066,(vlSelf->io_lsu_state_debug),3);
    bufp->fullBit(oldp+1067,(vlSelf->io_lsu_is_ld_or_st_debug));
    bufp->fullIData(oldp+1068,(vlSelf->io_lsu_reg_inst_debug),32);
    bufp->fullIData(oldp+1069,(vlSelf->io_dmem_wdata_debug),32);
    bufp->fullIData(oldp+1070,(vlSelf->io_dmem_rdata_debug),32);
    bufp->fullIData(oldp+1071,(vlSelf->io_lsu_reg_dmem_addr_debug),32);
    bufp->fullBit(oldp+1072,(vlSelf->io_wb_wen_debug));
    bufp->fullCData(oldp+1073,(vlSelf->io_wb_sel_debug),2);
    bufp->fullIData(oldp+1074,(vlSelf->io_wbu_reg_dmem_rdata_debug),32);
    bufp->fullCData(oldp+1075,(vlSelf->io_Arbiter_state_debug),2);
    bufp->fullIData(oldp+1076,(vlSelf->io_wb_data_debug),32);
    bufp->fullCData(oldp+1077,(vlSelf->io_lsu_memory_ar_size),3);
    bufp->fullBit(oldp+1078,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1080,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1081,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullBit(oldp+1082,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1083,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1084,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_ack_o)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o))));
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1086,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4)
                                 ? 0U : vlSelf->io_dmem_wdata_debug)),32);
    bufp->fullIData(oldp+1087,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4)
                                          ? 0U : vlSelf->io_dmem_wdata_debug))),32);
    bufp->fullCData(oldp+1088,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                 ? 2U : (IData)(vlSelf->io_lsu_memory_ar_size))),3);
    __Vtemp_he1569b33__0[0U] = (((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data));
    __Vtemp_he1569b33__0[1U] = (((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
                                                   >> 0xfU)))) 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data));
    __Vtemp_he1569b33__0[2U] = (IData)((QData)((IData)(vlSelf->io_dmem_rdata_debug)));
    __Vtemp_he1569b33__0[3U] = (IData)(((QData)((IData)(vlSelf->io_dmem_rdata_debug)) 
                                        >> 0x20U));
    __Vtemp_he1569b33__0[4U] = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data);
    __Vtemp_he1569b33__0[5U] = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data);
    __Vtemp_he1569b33__0[6U] = 0U;
    __Vtemp_he1569b33__0[7U] = 0U;
    bufp->fullIData(oldp+1089,((((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type)) 
                                 | ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type)) 
                                    | ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type)) 
                                       | (IData)(vlSelf->__VdfgTmp_h7e0c6375__0))))
                                 ? (((0U == (0x1fU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control) 
                                                << 5U)))
                                      ? 0U : (__Vtemp_he1569b33__0[
                                              (((IData)(0x1fU) 
                                                + (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control) 
                                                      << 5U))))) 
                                    | (__Vtemp_he1569b33__0[
                                       (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control) 
                                            << 5U))))
                                 : vlSelf->io_dmem_rdata_debug)),32);
    bufp->fullBit(oldp+1090,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1093,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                              & (IData)(vlSelf->clock))));
    bufp->fullBit(oldp+1094,(((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                              | (IData)(vlSelf->reset))));
    bufp->fullBit(oldp+1095,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1098,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1102,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1104,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1105,(1U),3);
    bufp->fullBit(oldp+1106,(0U));
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1116,(0U),4);
    bufp->fullCData(oldp+1117,(0U),8);
    bufp->fullCData(oldp+1118,(1U),2);
    bufp->fullBit(oldp+1119,(1U));
    bufp->fullIData(oldp+1120,(0U),32);
    bufp->fullCData(oldp+1121,(0U),3);
    bufp->fullCData(oldp+1122,(0U),2);
    bufp->fullIData(oldp+1123,(5U),32);
    bufp->fullIData(oldp+1124,(0x20U),32);
    bufp->fullCData(oldp+1125,(2U),2);
    bufp->fullCData(oldp+1126,(0x35U),8);
    bufp->fullCData(oldp+1127,(4U),3);
    bufp->fullBit(oldp+1128,(0U));
    bufp->fullBit(oldp+1129,(1U));
    bufp->fullCData(oldp+1130,(0x15U),8);
    bufp->fullCData(oldp+1131,(0xebU),8);
    bufp->fullCData(oldp+1132,(0x38U),8);
    bufp->fullIData(oldp+1133,(0x64U),32);
    bufp->fullIData(oldp+1134,(0x18U),32);
    bufp->fullIData(oldp+1135,(9U),32);
    bufp->fullIData(oldp+1136,(2U),32);
    bufp->fullIData(oldp+1137,(4U),32);
    bufp->fullIData(oldp+1138,(0xdU),32);
    bufp->fullIData(oldp+1139,(0x2000U),32);
    bufp->fullIData(oldp+1140,(0x2710U),32);
    bufp->fullIData(oldp+1141,(0x30cU),32);
    bufp->fullCData(oldp+1142,(7U),4);
    bufp->fullCData(oldp+1143,(3U),4);
    bufp->fullCData(oldp+1144,(5U),4);
    bufp->fullCData(oldp+1145,(4U),4);
    bufp->fullCData(oldp+1146,(6U),4);
    bufp->fullCData(oldp+1147,(2U),4);
    bufp->fullCData(oldp+1148,(1U),4);
    bufp->fullSData(oldp+1149,(0x21U),13);
    bufp->fullCData(oldp+1150,(8U),4);
    bufp->fullCData(oldp+1151,(9U),4);
    bufp->fullIData(oldp+1152,(0xaU),32);
    bufp->fullIData(oldp+1153,(0x10U),32);
    bufp->fullIData(oldp+1154,(6U),32);
    bufp->fullIData(oldp+1155,(0x11U),32);
    bufp->fullIData(oldp+1156,(0x30000000U),32);
    bufp->fullIData(oldp+1157,(0x3fffffffU),32);
    bufp->fullIData(oldp+1158,(0x10001000U),32);
    bufp->fullIData(oldp+1159,(0x10001fffU),32);
    bufp->fullIData(oldp+1160,(8U),32);
    bufp->fullBit(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+1162,(0xdU),4);
    bufp->fullCData(oldp+1163,(0xeU),4);
    bufp->fullCData(oldp+1164,(0xfU),4);
    bufp->fullIData(oldp+1165,(1U),32);
    bufp->fullCData(oldp+1166,(0xaU),4);
    bufp->fullIData(oldp+1167,(0xbU),32);
    bufp->fullCData(oldp+1168,(2U),3);
    bufp->fullCData(oldp+1169,(3U),3);
    bufp->fullCData(oldp+1170,(5U),3);
}
