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
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBus(c+1095,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1096,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1097,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1098,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1099,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1100,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1101,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1102,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1103,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1104,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1105,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1106,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1107,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1108,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1109,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1110,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1111,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1112,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1113,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1114,"externalPins_uart_tx", false,-1);
    tracep->declBus(c+1115,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+1116,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+1117,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1118,"io_ifu_state_debug", false,-1, 2,0);
    tracep->declBus(c+1119,"io_lsu_state_debug", false,-1, 2,0);
    tracep->declBit(c+1120,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+1121,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1122,"io_dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+1123,"io_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1124,"io_lsu_reg_dmem_addr_debug", false,-1, 31,0);
    tracep->declBit(c+1125,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+1126,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+1127,"io_wbu_reg_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1128,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->declBus(c+1129,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBus(c+1130,"io_lsu_memory_ar_size", false,-1, 2,0);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBus(c+1095,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1096,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1097,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1098,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1099,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1100,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1101,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1102,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1103,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1104,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1105,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1106,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1107,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1108,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1109,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1110,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1111,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1112,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1113,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1114,"externalPins_uart_tx", false,-1);
    tracep->declBus(c+1115,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+1116,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+1117,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1118,"io_ifu_state_debug", false,-1, 2,0);
    tracep->declBus(c+1119,"io_lsu_state_debug", false,-1, 2,0);
    tracep->declBit(c+1120,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+1121,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1122,"io_dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+1123,"io_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1124,"io_lsu_reg_dmem_addr_debug", false,-1, 31,0);
    tracep->declBit(c+1125,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+1126,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+1127,"io_wbu_reg_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1128,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->declBus(c+1129,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBus(c+1130,"io_lsu_memory_ar_size", false,-1, 2,0);
    tracep->declBit(c+1154,"sdram_select", false,-1);
    tracep->declBit(c+1155,"asic_sdram_cas_1", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+627,"spi_sck", false,-1);
    tracep->declBus(c+628,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+914,"spi_mosi", false,-1);
    tracep->declBit(c+1131,"spi_miso", false,-1);
    tracep->declBit(c+1113,"uart_rx", false,-1);
    tracep->declBit(c+1114,"uart_tx", false,-1);
    tracep->declBit(c+18,"psram_sck", false,-1);
    tracep->declBit(c+19,"psram_ce_n", false,-1);
    tracep->declBus(c+1132,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1133,"sdram_clk_0", false,-1);
    tracep->declBit(c+915,"sdram_cke_0", false,-1);
    tracep->declBit(c+629,"sdram_cs_0", false,-1);
    tracep->declBit(c+630,"sdram_ras_0", false,-1);
    tracep->declBit(c+631,"sdram_cas_0", false,-1);
    tracep->declBit(c+632,"sdram_we_0", false,-1);
    tracep->declBus(c+916,"sdram_a_0", false,-1, 12,0);
    tracep->declBus(c+917,"sdram_ba_0", false,-1, 1,0);
    tracep->declBus(c+633,"sdram_dqm_0", false,-1, 3,0);
    tracep->declBus(c+930,"sdram_dq_0", false,-1, 31,0);
    tracep->declBit(c+1156,"sdram_clk_1", false,-1);
    tracep->declBit(c+1157,"sdram_cke_1", false,-1);
    tracep->declBit(c+1158,"sdram_cs_1", false,-1);
    tracep->declBit(c+1159,"sdram_ras_1", false,-1);
    tracep->declBit(c+1160,"sdram_cas_1", false,-1);
    tracep->declBit(c+1161,"sdram_we_1", false,-1);
    tracep->declBus(c+1162,"sdram_a_1", false,-1, 12,0);
    tracep->declBus(c+1163,"sdram_ba_1", false,-1, 1,0);
    tracep->declBus(c+1164,"sdram_dqm_1", false,-1, 3,0);
    tracep->declBus(c+585,"sdram_dq_1", false,-1, 31,0);
    tracep->declBus(c+1095,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1096,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1097,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1098,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1099,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1100,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1101,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1102,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1103,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1104,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1105,"ps2_clk", false,-1);
    tracep->declBit(c+1106,"ps2_data", false,-1);
    tracep->declBus(c+1107,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1108,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1109,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1110,"vga_hsync", false,-1);
    tracep->declBit(c+1111,"vga_vsync", false,-1);
    tracep->declBit(c+1112,"vga_valid", false,-1);
    tracep->declBus(c+1115,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+1116,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+1117,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1118,"io_ifu_state_debug", false,-1, 2,0);
    tracep->declBus(c+1119,"io_lsu_state_debug", false,-1, 2,0);
    tracep->declBit(c+1120,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+1121,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1122,"io_dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+1123,"io_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1124,"io_lsu_reg_dmem_addr_debug", false,-1, 31,0);
    tracep->declBit(c+1125,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+1126,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+1127,"io_wbu_reg_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1128,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->declBus(c+1129,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBus(c+1130,"io_lsu_memory_ar_size", false,-1, 2,0);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBus(c+935,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+29,"in_psel", false,-1);
    tracep->declBit(c+30,"in_penable", false,-1);
    tracep->declBus(c+1165,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+31,"in_pwrite", false,-1);
    tracep->declBus(c+905,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+974,"in_pready", false,-1);
    tracep->declBus(c+975,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+936,"in_pslverr", false,-1);
    tracep->declBus(c+935,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+29,"out_psel", false,-1);
    tracep->declBit(c+30,"out_penable", false,-1);
    tracep->declBus(c+1165,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+31,"out_pwrite", false,-1);
    tracep->declBus(c+905,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+974,"out_pready", false,-1);
    tracep->declBus(c+975,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+936,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+29,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+30,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+31,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+935,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1165,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+905,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+974,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+936,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+975,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+529,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+530,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+31,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+935,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1165,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+905,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+634,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1166,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+635,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+531,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+532,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+31,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+937,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1165,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+905,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1167,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1168,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1169,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+533,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+534,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+31,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+938,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1165,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+905,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1170,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1171,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1172,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+535,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+536,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+31,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+938,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1165,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+905,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1173,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1174,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1175,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+939,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+537,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+31,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+935,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1165,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+905,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1134,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1166,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+33,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+940,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+941,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+31,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+938,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1165,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+905,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+942,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1166,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1135,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+943,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+944,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+31,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+937,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1165,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+905,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1136,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1166,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+636,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+945,"sel_0", false,-1);
    tracep->declBit(c+946,"sel_1", false,-1);
    tracep->declBit(c+947,"sel_2", false,-1);
    tracep->declBit(c+948,"sel_3", false,-1);
    tracep->declBit(c+949,"sel_4", false,-1);
    tracep->declBit(c+950,"sel_5", false,-1);
    tracep->declBit(c+951,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+34,"auto_in_awready", false,-1);
    tracep->declBit(c+35,"auto_in_awvalid", false,-1);
    tracep->declBus(c+36,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+37,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+38,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+34,"auto_in_wready", false,-1);
    tracep->declBit(c+39,"auto_in_wvalid", false,-1);
    tracep->declBus(c+40,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+41,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+976,"auto_in_bready", false,-1);
    tracep->declBit(c+977,"auto_in_bvalid", false,-1);
    tracep->declBus(c+42,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+952,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+43,"auto_in_arready", false,-1);
    tracep->declBit(c+44,"auto_in_arvalid", false,-1);
    tracep->declBus(c+45,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+978,"auto_in_rready", false,-1);
    tracep->declBit(c+979,"auto_in_rvalid", false,-1);
    tracep->declBus(c+48,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+538,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+952,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+29,"auto_out_psel", false,-1);
    tracep->declBit(c+30,"auto_out_penable", false,-1);
    tracep->declBit(c+31,"auto_out_pwrite", false,-1);
    tracep->declBus(c+935,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+905,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+974,"auto_out_pready", false,-1);
    tracep->declBit(c+936,"auto_out_pslverr", false,-1);
    tracep->declBus(c+975,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+30,"nodeOut_penable", false,-1);
    tracep->declBus(c+49,"state", false,-1, 1,0);
    tracep->declBit(c+43,"accept_read", false,-1);
    tracep->declBit(c+34,"accept_write", false,-1);
    tracep->declBit(c+50,"is_write_r", false,-1);
    tracep->declBit(c+31,"is_write", false,-1);
    tracep->declBus(c+48,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+42,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+51,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+52,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+53,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+54,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+953,"resp", false,-1, 1,0);
    tracep->declBus(c+55,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+952,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+979,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+56,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+977,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+57,"auto_in_awready", false,-1);
    tracep->declBit(c+58,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1176,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+59,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1177,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+60,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1178,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+61,"auto_in_wready", false,-1);
    tracep->declBit(c+58,"auto_in_wvalid", false,-1);
    tracep->declBus(c+62,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+63,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+64,"auto_in_wlast", false,-1);
    tracep->declBit(c+65,"auto_in_bready", false,-1);
    tracep->declBit(c+980,"auto_in_bvalid", false,-1);
    tracep->declBus(c+981,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+982,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+66,"auto_in_arready", false,-1);
    tracep->declBit(c+67,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1176,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1177,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+69,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1178,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+70,"auto_in_rready", false,-1);
    tracep->declBit(c+983,"auto_in_rvalid", false,-1);
    tracep->declBus(c+984,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+539,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+985,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+540,"auto_in_rlast", false,-1);
    tracep->declBit(c+986,"auto_out_awready", false,-1);
    tracep->declBit(c+71,"auto_out_awvalid", false,-1);
    tracep->declBus(c+36,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+37,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+38,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+72,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+987,"auto_out_wready", false,-1);
    tracep->declBit(c+73,"auto_out_wvalid", false,-1);
    tracep->declBus(c+40,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+41,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+74,"auto_out_wlast", false,-1);
    tracep->declBit(c+988,"auto_out_bready", false,-1);
    tracep->declBit(c+989,"auto_out_bvalid", false,-1);
    tracep->declBus(c+981,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+990,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+991,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+992,"auto_out_arready", false,-1);
    tracep->declBit(c+75,"auto_out_arvalid", false,-1);
    tracep->declBus(c+45,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+76,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+70,"auto_out_rready", false,-1);
    tracep->declBit(c+983,"auto_out_rvalid", false,-1);
    tracep->declBus(c+984,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+539,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+985,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+541,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+993,"auto_out_rlast", false,-1);
    tracep->declBit(c+73,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+77,"w_idle", false,-1);
    tracep->declBit(c+994,"in_awready", false,-1);
    tracep->declBit(c+78,"busy", false,-1);
    tracep->declBus(c+79,"r_addr", false,-1, 31,0);
    tracep->declBus(c+80,"r_len", false,-1, 7,0);
    tracep->declBus(c+81,"len", false,-1, 7,0);
    tracep->declBus(c+82,"addr", false,-1, 31,0);
    tracep->declBit(c+83,"busy_1", false,-1);
    tracep->declBus(c+84,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+85,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+86,"len_1", false,-1, 7,0);
    tracep->declBus(c+87,"addr_1", false,-1, 31,0);
    tracep->declBit(c+88,"wbeats_latched", false,-1);
    tracep->declBit(c+71,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+89,"wbeats_valid", false,-1);
    tracep->declBus(c+90,"w_counter", false,-1, 8,0);
    tracep->declBus(c+91,"w_todo", false,-1, 8,0);
    tracep->declBit(c+74,"w_last", false,-1);
    tracep->declBit(c+988,"nodeOut_bready", false,-1);
    tracep->declBus(c+92,"error_0", false,-1, 1,0);
    tracep->declBus(c+93,"error_1", false,-1, 1,0);
    tracep->declBus(c+94,"error_2", false,-1, 1,0);
    tracep->declBus(c+95,"error_3", false,-1, 1,0);
    tracep->declBus(c+96,"error_4", false,-1, 1,0);
    tracep->declBus(c+97,"error_5", false,-1, 1,0);
    tracep->declBus(c+98,"error_6", false,-1, 1,0);
    tracep->declBus(c+99,"error_7", false,-1, 1,0);
    tracep->declBus(c+100,"error_8", false,-1, 1,0);
    tracep->declBus(c+101,"error_9", false,-1, 1,0);
    tracep->declBus(c+102,"error_10", false,-1, 1,0);
    tracep->declBus(c+103,"error_11", false,-1, 1,0);
    tracep->declBus(c+104,"error_12", false,-1, 1,0);
    tracep->declBus(c+105,"error_13", false,-1, 1,0);
    tracep->declBus(c+106,"error_14", false,-1, 1,0);
    tracep->declBus(c+107,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+66,"io_enq_ready", false,-1);
    tracep->declBit(c+67,"io_enq_valid", false,-1);
    tracep->declBus(c+1176,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+68,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1177,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+69,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1178,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+995,"io_deq_ready", false,-1);
    tracep->declBit(c+75,"io_deq_valid", false,-1);
    tracep->declBus(c+45,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+108,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+109,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+47,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+110,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+111,"ram", false,-1, 48,0);
    tracep->declBit(c+113,"full", false,-1);
    tracep->declBit(c+75,"io_deq_valid_0", false,-1);
    tracep->declBit(c+996,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+57,"io_enq_ready", false,-1);
    tracep->declBit(c+58,"io_enq_valid", false,-1);
    tracep->declBus(c+1176,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+59,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1177,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+60,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1178,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+997,"io_deq_ready", false,-1);
    tracep->declBit(c+114,"io_deq_valid", false,-1);
    tracep->declBus(c+36,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+115,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+116,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+38,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+117,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+118,"ram", false,-1, 48,0);
    tracep->declBit(c+120,"full", false,-1);
    tracep->declBit(c+114,"io_deq_valid_0", false,-1);
    tracep->declBit(c+998,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+61,"io_enq_ready", false,-1);
    tracep->declBit(c+58,"io_enq_valid", false,-1);
    tracep->declBus(c+62,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+63,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+64,"io_enq_bits_last", false,-1);
    tracep->declBit(c+999,"io_deq_ready", false,-1);
    tracep->declBit(c+121,"io_deq_valid", false,-1);
    tracep->declBus(c+40,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+41,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+122,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+123,"ram", false,-1, 36,0);
    tracep->declBit(c+125,"full", false,-1);
    tracep->declBit(c+121,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1000,"do_enq", false,-1);
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
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+1001,"auto_in_awready", false,-1);
    tracep->declBit(c+126,"auto_in_awvalid", false,-1);
    tracep->declBus(c+36,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+542,"auto_in_wready", false,-1);
    tracep->declBit(c+128,"auto_in_wvalid", false,-1);
    tracep->declBus(c+40,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+41,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1002,"auto_in_bready", false,-1);
    tracep->declBit(c+129,"auto_in_bvalid", false,-1);
    tracep->declBus(c+130,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1003,"auto_in_arready", false,-1);
    tracep->declBit(c+132,"auto_in_arvalid", false,-1);
    tracep->declBus(c+45,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+133,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1004,"auto_in_rready", false,-1);
    tracep->declBit(c+134,"auto_in_rvalid", false,-1);
    tracep->declBus(c+135,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+136,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+137,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1003,"nodeIn_arready", false,-1);
    tracep->declBit(c+1001,"nodeIn_awready", false,-1);
    tracep->declBit(c+138,"w_sel0", false,-1);
    tracep->declBit(c+129,"w_full", false,-1);
    tracep->declBus(c+130,"w_id", false,-1, 3,0);
    tracep->declBit(c+139,"r_sel1", false,-1);
    tracep->declBit(c+140,"w_sel1", false,-1);
    tracep->declBit(c+134,"r_full", false,-1);
    tracep->declBus(c+135,"r_id", false,-1, 3,0);
    tracep->declBit(c+1005,"ren", false,-1);
    tracep->declBit(c+141,"rdata_REG", false,-1);
    tracep->declBus(c+142,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+143,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+144,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+145,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+146,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1005,"R0_en", false,-1);
    tracep->declBit(c+1093,"R0_clk", false,-1);
    tracep->declBus(c+147,"R0_data", false,-1, 31,0);
    tracep->declBus(c+148,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1006,"W0_en", false,-1);
    tracep->declBit(c+1093,"W0_clk", false,-1);
    tracep->declBus(c+40,"W0_data", false,-1, 31,0);
    tracep->declBus(c+41,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+57,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+58,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1176,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+59,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1177,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+60,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1178,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+61,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+58,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+62,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+63,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+64,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+65,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+980,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+981,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+982,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+66,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+67,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1176,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1177,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+69,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1178,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+70,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+983,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+984,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+539,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+985,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+540,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+57,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+58,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1176,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+59,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1177,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+60,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1178,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+61,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+58,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+62,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+63,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+64,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+65,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+980,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+981,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+982,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+66,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+67,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1176,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1177,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+69,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1178,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+70,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+983,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+984,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+539,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+985,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+540,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+1007,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+149,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+36,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+37,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+38,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+987,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+73,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+40,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+41,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+74,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+988,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+989,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+981,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+990,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1008,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+150,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+70,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+983,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+984,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+539,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+985,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+993,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1001,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+126,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+36,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+542,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+128,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+40,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+41,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1002,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+129,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+130,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1003,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+132,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+133,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1004,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+134,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+135,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+136,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+137,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+151,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+152,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+153,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+154,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+543,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+156,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+157,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+158,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+34,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+35,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+36,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+37,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+38,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+34,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+39,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+40,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+41,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+976,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+977,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+42,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+952,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+43,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+44,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+978,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+979,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+48,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+538,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+952,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+989,"in_0_bvalid", false,-1);
    tracep->declBit(c+983,"in_0_rvalid", false,-1);
    tracep->declBit(c+1009,"in_0_wready", false,-1);
    tracep->declBit(c+1010,"in_0_awready", false,-1);
    tracep->declBit(c+1008,"in_0_arready", false,-1);
    tracep->declBit(c+1007,"anonIn_awready", false,-1);
    tracep->declBit(c+159,"requestARIO_0_0", false,-1);
    tracep->declBit(c+160,"requestARIO_0_1", false,-1);
    tracep->declBit(c+161,"requestARIO_0_2", false,-1);
    tracep->declBit(c+162,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+163,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+164,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+165,"arSel", false,-1, 15,0);
    tracep->declBus(c+166,"awSel", false,-1, 15,0);
    tracep->declBus(c+1011,"rSel", false,-1, 15,0);
    tracep->declBus(c+1012,"bSel", false,-1, 15,0);
    tracep->declBit(c+167,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+168,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+169,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+170,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+171,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+172,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+173,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+174,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+175,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+176,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+177,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+178,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+179,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+180,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+181,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+182,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+183,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+184,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+185,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+186,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+187,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+188,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+189,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+190,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+191,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+192,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+193,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+194,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+195,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+196,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+197,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+198,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+199,"latched", false,-1);
    tracep->declBit(c+200,"in_0_awvalid", false,-1);
    tracep->declBit(c+201,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+202,"in_0_wvalid", false,-1);
    tracep->declBit(c+203,"idle_3", false,-1);
    tracep->declBit(c+1013,"anyValid", false,-1);
    tracep->declBus(c+1014,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+204,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1015,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1016,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1017,"prefixOR_1", false,-1);
    tracep->declBit(c+1018,"winner_3_1", false,-1);
    tracep->declBit(c+1019,"winner_3_2", false,-1);
    tracep->declBit(c+205,"state_3_0", false,-1);
    tracep->declBit(c+206,"state_3_1", false,-1);
    tracep->declBit(c+207,"state_3_2", false,-1);
    tracep->declBit(c+1020,"muxState_3_0", false,-1);
    tracep->declBit(c+1021,"muxState_3_1", false,-1);
    tracep->declBit(c+1022,"muxState_3_2", false,-1);
    tracep->declBit(c+208,"idle_4", false,-1);
    tracep->declBit(c+1023,"anyValid_1", false,-1);
    tracep->declBus(c+1024,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+209,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1025,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1026,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1027,"winner_4_0", false,-1);
    tracep->declBit(c+1028,"winner_4_2", false,-1);
    tracep->declBit(c+210,"state_4_0", false,-1);
    tracep->declBit(c+211,"state_4_2", false,-1);
    tracep->declBit(c+1029,"muxState_4_0", false,-1);
    tracep->declBit(c+1030,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+212,"io_enq_ready", false,-1);
    tracep->declBit(c+201,"io_enq_valid", false,-1);
    tracep->declBus(c+213,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1031,"io_deq_ready", false,-1);
    tracep->declBit(c+214,"io_deq_valid", false,-1);
    tracep->declBus(c+215,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+216,"wrap", false,-1);
    tracep->declBit(c+217,"wrap_1", false,-1);
    tracep->declBit(c+218,"maybe_full", false,-1);
    tracep->declBit(c+219,"ptr_match", false,-1);
    tracep->declBit(c+220,"empty", false,-1);
    tracep->declBit(c+221,"full", false,-1);
    tracep->declBit(c+214,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1032,"do_deq", false,-1);
    tracep->declBit(c+1033,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+217,"R0_addr", false,-1);
    tracep->declBit(c+1179,"R0_en", false,-1);
    tracep->declBit(c+1093,"R0_clk", false,-1);
    tracep->declBus(c+222,"R0_data", false,-1, 2,0);
    tracep->declBit(c+216,"W0_addr", false,-1);
    tracep->declBit(c+1033,"W0_en", false,-1);
    tracep->declBit(c+1093,"W0_clk", false,-1);
    tracep->declBus(c+213,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+223+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+986,"auto_in_awready", false,-1);
    tracep->declBit(c+71,"auto_in_awvalid", false,-1);
    tracep->declBus(c+36,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+37,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+38,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+72,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+987,"auto_in_wready", false,-1);
    tracep->declBit(c+73,"auto_in_wvalid", false,-1);
    tracep->declBus(c+40,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+41,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+74,"auto_in_wlast", false,-1);
    tracep->declBit(c+988,"auto_in_bready", false,-1);
    tracep->declBit(c+989,"auto_in_bvalid", false,-1);
    tracep->declBus(c+981,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+990,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+991,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+992,"auto_in_arready", false,-1);
    tracep->declBit(c+75,"auto_in_arvalid", false,-1);
    tracep->declBus(c+45,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+76,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+70,"auto_in_rready", false,-1);
    tracep->declBit(c+983,"auto_in_rvalid", false,-1);
    tracep->declBus(c+984,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+539,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+985,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+541,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+993,"auto_in_rlast", false,-1);
    tracep->declBit(c+1007,"auto_out_awready", false,-1);
    tracep->declBit(c+149,"auto_out_awvalid", false,-1);
    tracep->declBus(c+36,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+37,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+38,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+987,"auto_out_wready", false,-1);
    tracep->declBit(c+73,"auto_out_wvalid", false,-1);
    tracep->declBus(c+40,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+41,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+74,"auto_out_wlast", false,-1);
    tracep->declBit(c+988,"auto_out_bready", false,-1);
    tracep->declBit(c+989,"auto_out_bvalid", false,-1);
    tracep->declBus(c+981,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+990,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1008,"auto_out_arready", false,-1);
    tracep->declBit(c+150,"auto_out_arvalid", false,-1);
    tracep->declBus(c+45,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+70,"auto_out_rready", false,-1);
    tracep->declBit(c+983,"auto_out_rvalid", false,-1);
    tracep->declBus(c+984,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+539,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+985,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+993,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+225,"io_enq_ready", false,-1);
    tracep->declBit(c+544,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1034,"io_deq_ready", false,-1);
    tracep->declBit(c+226,"io_deq_valid", false,-1);
    tracep->declBit(c+227,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+226,"full", false,-1);
    tracep->declBit(c+227,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+228,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+229,"io_enq_ready", false,-1);
    tracep->declBit(c+545,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1035,"io_deq_ready", false,-1);
    tracep->declBit(c+230,"io_deq_valid", false,-1);
    tracep->declBit(c+231,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+230,"full", false,-1);
    tracep->declBit(c+231,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+232,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+233,"io_enq_ready", false,-1);
    tracep->declBit(c+546,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1036,"io_deq_ready", false,-1);
    tracep->declBit(c+234,"io_deq_valid", false,-1);
    tracep->declBit(c+235,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+234,"full", false,-1);
    tracep->declBit(c+235,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+236,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+237,"io_enq_ready", false,-1);
    tracep->declBit(c+547,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1037,"io_deq_ready", false,-1);
    tracep->declBit(c+238,"io_deq_valid", false,-1);
    tracep->declBit(c+239,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+238,"full", false,-1);
    tracep->declBit(c+239,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+240,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+241,"io_enq_ready", false,-1);
    tracep->declBit(c+548,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1038,"io_deq_ready", false,-1);
    tracep->declBit(c+242,"io_deq_valid", false,-1);
    tracep->declBit(c+243,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+242,"full", false,-1);
    tracep->declBit(c+243,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+244,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+245,"io_enq_ready", false,-1);
    tracep->declBit(c+549,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1039,"io_deq_ready", false,-1);
    tracep->declBit(c+246,"io_deq_valid", false,-1);
    tracep->declBit(c+247,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+246,"full", false,-1);
    tracep->declBit(c+247,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+248,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+249,"io_enq_ready", false,-1);
    tracep->declBit(c+550,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1040,"io_deq_ready", false,-1);
    tracep->declBit(c+250,"io_deq_valid", false,-1);
    tracep->declBit(c+251,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+250,"full", false,-1);
    tracep->declBit(c+251,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+252,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+253,"io_enq_ready", false,-1);
    tracep->declBit(c+551,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1041,"io_deq_ready", false,-1);
    tracep->declBit(c+254,"io_deq_valid", false,-1);
    tracep->declBit(c+255,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+254,"full", false,-1);
    tracep->declBit(c+255,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+256,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+257,"io_enq_ready", false,-1);
    tracep->declBit(c+552,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1042,"io_deq_ready", false,-1);
    tracep->declBit(c+258,"io_deq_valid", false,-1);
    tracep->declBit(c+259,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+258,"full", false,-1);
    tracep->declBit(c+259,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+260,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+261,"io_enq_ready", false,-1);
    tracep->declBit(c+553,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1043,"io_deq_ready", false,-1);
    tracep->declBit(c+262,"io_deq_valid", false,-1);
    tracep->declBit(c+263,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+262,"full", false,-1);
    tracep->declBit(c+263,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+264,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+265,"io_enq_ready", false,-1);
    tracep->declBit(c+554,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1044,"io_deq_ready", false,-1);
    tracep->declBit(c+266,"io_deq_valid", false,-1);
    tracep->declBit(c+267,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+266,"full", false,-1);
    tracep->declBit(c+267,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+268,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+269,"io_enq_ready", false,-1);
    tracep->declBit(c+555,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1045,"io_deq_ready", false,-1);
    tracep->declBit(c+270,"io_deq_valid", false,-1);
    tracep->declBit(c+271,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+270,"full", false,-1);
    tracep->declBit(c+271,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+272,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+273,"io_enq_ready", false,-1);
    tracep->declBit(c+556,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1046,"io_deq_ready", false,-1);
    tracep->declBit(c+274,"io_deq_valid", false,-1);
    tracep->declBit(c+275,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+274,"full", false,-1);
    tracep->declBit(c+275,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+276,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+277,"io_enq_ready", false,-1);
    tracep->declBit(c+557,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1047,"io_deq_ready", false,-1);
    tracep->declBit(c+278,"io_deq_valid", false,-1);
    tracep->declBit(c+279,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+278,"full", false,-1);
    tracep->declBit(c+279,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+280,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+281,"io_enq_ready", false,-1);
    tracep->declBit(c+558,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1048,"io_deq_ready", false,-1);
    tracep->declBit(c+282,"io_deq_valid", false,-1);
    tracep->declBit(c+283,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+282,"full", false,-1);
    tracep->declBit(c+283,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+284,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+285,"io_enq_ready", false,-1);
    tracep->declBit(c+559,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1049,"io_deq_ready", false,-1);
    tracep->declBit(c+286,"io_deq_valid", false,-1);
    tracep->declBit(c+287,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+286,"full", false,-1);
    tracep->declBit(c+287,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+288,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+289,"io_enq_ready", false,-1);
    tracep->declBit(c+560,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1050,"io_deq_ready", false,-1);
    tracep->declBit(c+290,"io_deq_valid", false,-1);
    tracep->declBit(c+291,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+290,"full", false,-1);
    tracep->declBit(c+291,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+292,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+293,"io_enq_ready", false,-1);
    tracep->declBit(c+561,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1051,"io_deq_ready", false,-1);
    tracep->declBit(c+294,"io_deq_valid", false,-1);
    tracep->declBit(c+295,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+294,"full", false,-1);
    tracep->declBit(c+295,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+296,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+297,"io_enq_ready", false,-1);
    tracep->declBit(c+562,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1052,"io_deq_ready", false,-1);
    tracep->declBit(c+298,"io_deq_valid", false,-1);
    tracep->declBit(c+299,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+298,"full", false,-1);
    tracep->declBit(c+299,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+300,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+301,"io_enq_ready", false,-1);
    tracep->declBit(c+563,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1053,"io_deq_ready", false,-1);
    tracep->declBit(c+302,"io_deq_valid", false,-1);
    tracep->declBit(c+303,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+302,"full", false,-1);
    tracep->declBit(c+303,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+304,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+305,"io_enq_ready", false,-1);
    tracep->declBit(c+564,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1054,"io_deq_ready", false,-1);
    tracep->declBit(c+306,"io_deq_valid", false,-1);
    tracep->declBit(c+307,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+306,"full", false,-1);
    tracep->declBit(c+307,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+308,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+309,"io_enq_ready", false,-1);
    tracep->declBit(c+565,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1055,"io_deq_ready", false,-1);
    tracep->declBit(c+310,"io_deq_valid", false,-1);
    tracep->declBit(c+311,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+310,"full", false,-1);
    tracep->declBit(c+311,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+312,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+313,"io_enq_ready", false,-1);
    tracep->declBit(c+566,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1056,"io_deq_ready", false,-1);
    tracep->declBit(c+314,"io_deq_valid", false,-1);
    tracep->declBit(c+315,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+314,"full", false,-1);
    tracep->declBit(c+315,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+316,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+317,"io_enq_ready", false,-1);
    tracep->declBit(c+567,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1057,"io_deq_ready", false,-1);
    tracep->declBit(c+318,"io_deq_valid", false,-1);
    tracep->declBit(c+319,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+318,"full", false,-1);
    tracep->declBit(c+319,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+320,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+321,"io_enq_ready", false,-1);
    tracep->declBit(c+568,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1058,"io_deq_ready", false,-1);
    tracep->declBit(c+322,"io_deq_valid", false,-1);
    tracep->declBit(c+323,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+322,"full", false,-1);
    tracep->declBit(c+323,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+324,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+325,"io_enq_ready", false,-1);
    tracep->declBit(c+569,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1059,"io_deq_ready", false,-1);
    tracep->declBit(c+326,"io_deq_valid", false,-1);
    tracep->declBit(c+327,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+326,"full", false,-1);
    tracep->declBit(c+327,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+328,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+329,"io_enq_ready", false,-1);
    tracep->declBit(c+570,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1060,"io_deq_ready", false,-1);
    tracep->declBit(c+330,"io_deq_valid", false,-1);
    tracep->declBit(c+331,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+330,"full", false,-1);
    tracep->declBit(c+331,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+332,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+333,"io_enq_ready", false,-1);
    tracep->declBit(c+571,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1061,"io_deq_ready", false,-1);
    tracep->declBit(c+334,"io_deq_valid", false,-1);
    tracep->declBit(c+335,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+334,"full", false,-1);
    tracep->declBit(c+335,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+336,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+337,"io_enq_ready", false,-1);
    tracep->declBit(c+572,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1062,"io_deq_ready", false,-1);
    tracep->declBit(c+338,"io_deq_valid", false,-1);
    tracep->declBit(c+339,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+338,"full", false,-1);
    tracep->declBit(c+339,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+340,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+341,"io_enq_ready", false,-1);
    tracep->declBit(c+573,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1063,"io_deq_ready", false,-1);
    tracep->declBit(c+342,"io_deq_valid", false,-1);
    tracep->declBit(c+343,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+342,"full", false,-1);
    tracep->declBit(c+343,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+344,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+345,"io_enq_ready", false,-1);
    tracep->declBit(c+574,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1064,"io_deq_ready", false,-1);
    tracep->declBit(c+346,"io_deq_valid", false,-1);
    tracep->declBit(c+347,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+346,"full", false,-1);
    tracep->declBit(c+347,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+348,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+349,"io_enq_ready", false,-1);
    tracep->declBit(c+575,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1065,"io_deq_ready", false,-1);
    tracep->declBit(c+350,"io_deq_valid", false,-1);
    tracep->declBit(c+351,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+350,"full", false,-1);
    tracep->declBit(c+351,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+352,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1137,"reset", false,-1);
    tracep->declBit(c+57,"auto_master_out_awready", false,-1);
    tracep->declBit(c+58,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1176,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+59,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1177,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+60,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1178,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+61,"auto_master_out_wready", false,-1);
    tracep->declBit(c+58,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+62,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+63,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+64,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+65,"auto_master_out_bready", false,-1);
    tracep->declBit(c+980,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+981,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+982,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+66,"auto_master_out_arready", false,-1);
    tracep->declBit(c+67,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1176,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1177,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+69,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1178,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+70,"auto_master_out_rready", false,-1);
    tracep->declBit(c+983,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+984,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+539,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+985,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+540,"auto_master_out_rlast", false,-1);
    tracep->declBus(c+1115,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+1116,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+1117,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1118,"io_ifu_state_debug", false,-1, 2,0);
    tracep->declBus(c+1119,"io_lsu_state_debug", false,-1, 2,0);
    tracep->declBit(c+1120,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+1121,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1122,"io_dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+1123,"io_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1124,"io_lsu_reg_dmem_addr_debug", false,-1, 31,0);
    tracep->declBit(c+1125,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+1126,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+1127,"io_wbu_reg_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1128,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->declBus(c+1129,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBus(c+1130,"io_lsu_memory_ar_size", false,-1, 2,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1137,"reset", false,-1);
    tracep->declBus(c+59,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1177,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+60,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1178,"io_master_awburst", false,-1, 1,0);
    tracep->declBus(c+1176,"io_master_awid", false,-1, 3,0);
    tracep->declBit(c+58,"io_master_awvalid", false,-1);
    tracep->declBit(c+57,"io_master_awready", false,-1);
    tracep->declBus(c+62,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+63,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+64,"io_master_wlast", false,-1);
    tracep->declBit(c+58,"io_master_wvalid", false,-1);
    tracep->declBit(c+61,"io_master_wready", false,-1);
    tracep->declBus(c+981,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+982,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+980,"io_master_bvalid", false,-1);
    tracep->declBit(c+65,"io_master_bready", false,-1);
    tracep->declBus(c+68,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1177,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+69,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1178,"io_master_arburst", false,-1, 1,0);
    tracep->declBus(c+1176,"io_master_arid", false,-1, 3,0);
    tracep->declBit(c+67,"io_master_arvalid", false,-1);
    tracep->declBit(c+66,"io_master_arready", false,-1);
    tracep->declBus(c+984,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+539,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+985,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+540,"io_master_rlast", false,-1);
    tracep->declBit(c+983,"io_master_rvalid", false,-1);
    tracep->declBit(c+70,"io_master_rready", false,-1);
    tracep->declBus(c+1180,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1177,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1181,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1182,"io_slave_awburst", false,-1, 1,0);
    tracep->declBus(c+1176,"io_slave_awid", false,-1, 3,0);
    tracep->declBit(c+1166,"io_slave_awvalid", false,-1);
    tracep->declBit(c+1166,"io_slave_awready", false,-1);
    tracep->declBus(c+1180,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1176,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1166,"io_slave_wlast", false,-1);
    tracep->declBit(c+1166,"io_slave_wvalid", false,-1);
    tracep->declBit(c+1166,"io_slave_wready", false,-1);
    tracep->declBus(c+1176,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1182,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1166,"io_slave_bvalid", false,-1);
    tracep->declBit(c+1166,"io_slave_bready", false,-1);
    tracep->declBus(c+1180,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1177,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1181,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1182,"io_slave_arburst", false,-1, 1,0);
    tracep->declBus(c+1176,"io_slave_arid", false,-1, 3,0);
    tracep->declBit(c+1166,"io_slave_arvalid", false,-1);
    tracep->declBit(c+1166,"io_slave_arready", false,-1);
    tracep->declBus(c+1176,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1180,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1182,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1166,"io_slave_rlast", false,-1);
    tracep->declBit(c+1166,"io_slave_rvalid", false,-1);
    tracep->declBit(c+1166,"io_slave_rready", false,-1);
    tracep->declBit(c+1166,"io_interrupt", false,-1);
    tracep->declBus(c+1116,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+1117,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1118,"io_ifu_state_debug", false,-1, 2,0);
    tracep->declBus(c+1119,"io_lsu_state_debug", false,-1, 2,0);
    tracep->declBit(c+1120,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+1121,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1122,"io_dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+1123,"io_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1124,"io_lsu_reg_dmem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+1130,"io_lsu_memory_ar_size", false,-1, 2,0);
    tracep->declBus(c+1115,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+1129,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBit(c+1125,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+1126,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+1127,"io_wbu_reg_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1128,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1137,"reset", false,-1);
    tracep->declBus(c+353,"io_ifu_ar_addr", false,-1, 31,0);
    tracep->declBit(c+354,"io_ifu_ar_valid", false,-1);
    tracep->declBit(c+355,"io_ifu_ar_ready", false,-1);
    tracep->declBus(c+576,"io_ifu_r_data", false,-1, 31,0);
    tracep->declBit(c+1066,"io_ifu_r_valid", false,-1);
    tracep->declBit(c+356,"io_ifu_r_ready", false,-1);
    tracep->declBus(c+357,"io_lsu_aw_addr", false,-1, 31,0);
    tracep->declBus(c+358,"io_lsu_aw_size", false,-1, 2,0);
    tracep->declBit(c+359,"io_lsu_aw_valid", false,-1);
    tracep->declBit(c+360,"io_lsu_aw_ready", false,-1);
    tracep->declBus(c+1138,"io_lsu_w_data", false,-1, 31,0);
    tracep->declBus(c+361,"io_lsu_w_strb", false,-1, 3,0);
    tracep->declBit(c+362,"io_lsu_w_last", false,-1);
    tracep->declBit(c+359,"io_lsu_w_valid", false,-1);
    tracep->declBit(c+363,"io_lsu_w_ready", false,-1);
    tracep->declBus(c+577,"io_lsu_b_resp", false,-1, 1,0);
    tracep->declBit(c+578,"io_lsu_b_valid", false,-1);
    tracep->declBit(c+364,"io_lsu_b_ready", false,-1);
    tracep->declBus(c+365,"io_lsu_ar_addr", false,-1, 31,0);
    tracep->declBus(c+1130,"io_lsu_ar_size", false,-1, 2,0);
    tracep->declBit(c+366,"io_lsu_ar_valid", false,-1);
    tracep->declBit(c+367,"io_lsu_ar_ready", false,-1);
    tracep->declBus(c+1123,"io_lsu_r_data", false,-1, 31,0);
    tracep->declBus(c+579,"io_lsu_r_resp", false,-1, 1,0);
    tracep->declBit(c+580,"io_lsu_r_valid", false,-1);
    tracep->declBit(c+368,"io_lsu_r_ready", false,-1);
    tracep->declBus(c+369,"io_axi_aw_addr", false,-1, 31,0);
    tracep->declBus(c+370,"io_axi_aw_size", false,-1, 2,0);
    tracep->declBit(c+371,"io_axi_aw_valid", false,-1);
    tracep->declBit(c+372,"io_axi_aw_ready", false,-1);
    tracep->declBus(c+1139,"io_axi_w_data", false,-1, 31,0);
    tracep->declBus(c+373,"io_axi_w_strb", false,-1, 3,0);
    tracep->declBit(c+374,"io_axi_w_last", false,-1);
    tracep->declBit(c+371,"io_axi_w_valid", false,-1);
    tracep->declBit(c+375,"io_axi_w_ready", false,-1);
    tracep->declBus(c+581,"io_axi_b_resp", false,-1, 1,0);
    tracep->declBit(c+582,"io_axi_b_valid", false,-1);
    tracep->declBit(c+376,"io_axi_b_ready", false,-1);
    tracep->declBus(c+377,"io_axi_ar_addr", false,-1, 31,0);
    tracep->declBus(c+1140,"io_axi_ar_size", false,-1, 2,0);
    tracep->declBit(c+378,"io_axi_ar_valid", false,-1);
    tracep->declBit(c+379,"io_axi_ar_ready", false,-1);
    tracep->declBus(c+1067,"io_axi_r_data", false,-1, 31,0);
    tracep->declBus(c+583,"io_axi_r_resp", false,-1, 1,0);
    tracep->declBit(c+1068,"io_axi_r_valid", false,-1);
    tracep->declBit(c+380,"io_axi_r_ready", false,-1);
    tracep->declBit(c+381,"io_ifu_handshake_valid", false,-1);
    tracep->declBit(c+382,"io_ifu_handshake_ready", false,-1);
    tracep->declBit(c+383,"io_lsu_handshake_valid", false,-1);
    tracep->declBit(c+382,"io_lsu_handshake_ready", false,-1);
    tracep->declBus(c+1128,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->declBit(c+384,"state", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("clint ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1137,"reset", false,-1);
    tracep->declBus(c+385,"io_in_ar_addr", false,-1, 31,0);
    tracep->declBus(c+386,"io_in_r_data", false,-1, 31,0);
    tracep->declQuad(c+387,"mtime", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1137,"reset", false,-1);
    tracep->declBit(c+389,"io_in_ready", false,-1);
    tracep->declBit(c+390,"io_in_valid", false,-1);
    tracep->declBus(c+391,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+392,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+393,"io_in_bits_wb_addr", false,-1, 4,0);
    tracep->declBus(c+394,"io_in_bits_alu_op1", false,-1, 31,0);
    tracep->declBus(c+395,"io_in_bits_alu_op2", false,-1, 31,0);
    tracep->declBus(c+396,"io_in_bits_rs2_data", false,-1, 31,0);
    tracep->declBit(c+397,"io_out_ready", false,-1);
    tracep->declBit(c+398,"io_out_valid", false,-1);
    tracep->declBus(c+399,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+400,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+401,"io_out_bits_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+401,"io_out_bits_result", false,-1, 31,0);
    tracep->declBus(c+402,"io_out_bits_rs2_data", false,-1, 31,0);
    tracep->declBus(c+403,"io_out_bits_wb_addr", false,-1, 4,0);
    tracep->declBus(c+404,"state", false,-1, 1,0);
    tracep->declBit(c+389,"io_in_ready_0", false,-1);
    tracep->declBus(c+399,"exu_reg_inst", false,-1, 31,0);
    tracep->declBus(c+400,"exu_reg_pc", false,-1, 31,0);
    tracep->declBus(c+402,"exu_reg_rs2_data", false,-1, 31,0);
    tracep->declBus(c+403,"exu_reg_wb_addr", false,-1, 4,0);
    tracep->pushNamePrefix("alu_instance ");
    tracep->declBus(c+394,"io_a", false,-1, 31,0);
    tracep->declBus(c+395,"io_b", false,-1, 31,0);
    tracep->declBus(c+405,"io_aluOp", false,-1, 4,0);
    tracep->declBus(c+401,"io_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1137,"reset", false,-1);
    tracep->declBit(c+406,"io_in_ready", false,-1);
    tracep->declBit(c+407,"io_in_valid", false,-1);
    tracep->declBus(c+1117,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+1116,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+389,"io_out_ready", false,-1);
    tracep->declBit(c+390,"io_out_valid", false,-1);
    tracep->declBus(c+391,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+392,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+393,"io_out_bits_wb_addr", false,-1, 4,0);
    tracep->declBus(c+394,"io_out_bits_alu_op1", false,-1, 31,0);
    tracep->declBus(c+395,"io_out_bits_alu_op2", false,-1, 31,0);
    tracep->declBus(c+396,"io_out_bits_rs2_data", false,-1, 31,0);
    tracep->declBus(c+408,"io_jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+409,"io_br_target", false,-1, 31,0);
    tracep->declBus(c+410,"io_jmp_target", false,-1, 31,0);
    tracep->declBus(c+411,"io_pc_sel", false,-1, 2,0);
    tracep->declBus(c+412,"io_rs1_data", false,-1, 31,0);
    tracep->declBus(c+396,"io_rs2_data", false,-1, 31,0);
    tracep->declBus(c+413,"io_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+414,"io_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+391,"idu_reg_inst", false,-1, 31,0);
    tracep->declBus(c+392,"idu_reg_pc", false,-1, 31,0);
    tracep->declBus(c+415,"state", false,-1, 1,0);
    tracep->declBit(c+406,"io_in_ready_0", false,-1);
    tracep->declBit(c+416,"br_eq", false,-1);
    tracep->declBit(c+417,"br_lt", false,-1);
    tracep->declBit(c+418,"br_ltu", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1137,"reset", false,-1);
    tracep->declBit(c+406,"io_out_ready", false,-1);
    tracep->declBit(c+407,"io_out_valid", false,-1);
    tracep->declBus(c+1117,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+1116,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+411,"io_pc_sel", false,-1, 2,0);
    tracep->declBus(c+408,"io_jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+409,"io_br_target", false,-1, 31,0);
    tracep->declBus(c+410,"io_jmp_target", false,-1, 31,0);
    tracep->declBit(c+419,"io_pc_wen", false,-1);
    tracep->declBit(c+584,"io_lsu_axi_resp_err", false,-1);
    tracep->declBus(c+353,"io_memory_ar_addr", false,-1, 31,0);
    tracep->declBit(c+354,"io_memory_ar_valid", false,-1);
    tracep->declBit(c+355,"io_memory_ar_ready", false,-1);
    tracep->declBus(c+576,"io_memory_r_data", false,-1, 31,0);
    tracep->declBit(c+1066,"io_memory_r_valid", false,-1);
    tracep->declBit(c+356,"io_memory_r_ready", false,-1);
    tracep->declBit(c+381,"io_arbiter_valid", false,-1);
    tracep->declBit(c+382,"io_arbiter_ready", false,-1);
    tracep->declBus(c+1116,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+1117,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1118,"io_ifu_state_debug", false,-1, 2,0);
    tracep->declBus(c+420,"pc", false,-1, 31,0);
    tracep->declBus(c+421,"if_inst_buffer", false,-1, 31,0);
    tracep->declBus(c+422,"state", false,-1, 2,0);
    tracep->declBus(c+1117,"io_inst_debug_0", false,-1, 31,0);
    tracep->pushNamePrefix("ebreakHandler ");
    tracep->declBus(c+1117,"inst", false,-1, 31,0);
    tracep->declBit(c+584,"lsu_axi_resp_err", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1137,"reset", false,-1);
    tracep->declBit(c+397,"io_in_ready", false,-1);
    tracep->declBit(c+398,"io_in_valid", false,-1);
    tracep->declBus(c+399,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+400,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+401,"io_in_bits_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+401,"io_in_bits_result", false,-1, 31,0);
    tracep->declBus(c+402,"io_in_bits_rs2_data", false,-1, 31,0);
    tracep->declBus(c+403,"io_in_bits_wb_addr", false,-1, 4,0);
    tracep->declBit(c+423,"io_out_ready", false,-1);
    tracep->declBit(c+424,"io_out_valid", false,-1);
    tracep->declBus(c+1121,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+425,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+426,"io_out_bits_dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+427,"io_out_bits_result", false,-1, 31,0);
    tracep->declBus(c+428,"io_out_bits_wb_addr", false,-1, 4,0);
    tracep->declBit(c+584,"io_lsu_axi_resp_err", false,-1);
    tracep->declBus(c+357,"io_memory_aw_addr", false,-1, 31,0);
    tracep->declBus(c+358,"io_memory_aw_size", false,-1, 2,0);
    tracep->declBit(c+359,"io_memory_aw_valid", false,-1);
    tracep->declBit(c+360,"io_memory_aw_ready", false,-1);
    tracep->declBus(c+1138,"io_memory_w_data", false,-1, 31,0);
    tracep->declBus(c+361,"io_memory_w_strb", false,-1, 3,0);
    tracep->declBit(c+362,"io_memory_w_last", false,-1);
    tracep->declBit(c+359,"io_memory_w_valid", false,-1);
    tracep->declBit(c+363,"io_memory_w_ready", false,-1);
    tracep->declBus(c+577,"io_memory_b_resp", false,-1, 1,0);
    tracep->declBit(c+578,"io_memory_b_valid", false,-1);
    tracep->declBit(c+364,"io_memory_b_ready", false,-1);
    tracep->declBus(c+365,"io_memory_ar_addr", false,-1, 31,0);
    tracep->declBus(c+1130,"io_memory_ar_size", false,-1, 2,0);
    tracep->declBit(c+366,"io_memory_ar_valid", false,-1);
    tracep->declBit(c+367,"io_memory_ar_ready", false,-1);
    tracep->declBus(c+1123,"io_memory_r_data", false,-1, 31,0);
    tracep->declBus(c+579,"io_memory_r_resp", false,-1, 1,0);
    tracep->declBit(c+580,"io_memory_r_valid", false,-1);
    tracep->declBit(c+368,"io_memory_r_ready", false,-1);
    tracep->declBit(c+383,"io_arbiter_valid", false,-1);
    tracep->declBit(c+382,"io_arbiter_ready", false,-1);
    tracep->declBus(c+1119,"io_lsu_state_debug", false,-1, 2,0);
    tracep->declBit(c+1120,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+1121,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1122,"io_dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+1123,"io_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1124,"io_lsu_reg_dmem_addr_debug", false,-1, 31,0);
    tracep->declBit(c+429,"isStore", false,-1);
    tracep->declBit(c+430,"isLoad", false,-1);
    tracep->declBus(c+431,"lsu_reg_inst", false,-1, 31,0);
    tracep->declBus(c+425,"lsu_reg_pc", false,-1, 31,0);
    tracep->declBus(c+427,"lsu_reg_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+427,"lsu_reg_result", false,-1, 31,0);
    tracep->declBus(c+432,"lsu_reg_rs2_data", false,-1, 31,0);
    tracep->declBus(c+428,"lsu_reg_wb_addr", false,-1, 4,0);
    tracep->declBus(c+433,"mem_access_control", false,-1, 2,0);
    tracep->declBus(c+426,"delayedData", false,-1, 31,0);
    tracep->declBus(c+434,"state", false,-1, 2,0);
    tracep->declBit(c+397,"io_in_ready_0", false,-1);
    tracep->declBit(c+359,"io_memory_w_valid_0", false,-1);
    tracep->pushNamePrefix("alignment_network ");
    tracep->declBus(c+1123,"io_data_in", false,-1, 31,0);
    tracep->declBus(c+427,"io_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+433,"io_control", false,-1, 2,0);
    tracep->declBus(c+1141,"io_data_out", false,-1, 31,0);
    tracep->declBus(c+435,"rw_address_type", false,-1, 2,0);
    tracep->declBus(c+1069,"shifted_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memory_ctl ");
    tracep->declBus(c+427,"io_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+432,"io_dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+433,"io_control", false,-1, 2,0);
    tracep->declBus(c+436,"io_wmask", false,-1, 7,0);
    tracep->declBus(c+1122,"io_dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+437,"io_dmem_rw_size", false,-1, 2,0);
    tracep->declBus(c+435,"rw_address_type", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+1183,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1093,"clk", false,-1);
    tracep->declBus(c+1129,"rd_data", false,-1, 31,0);
    tracep->declBus(c+438,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1125,"wen", false,-1);
    tracep->declBus(c+413,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+414,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+412,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+396,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+439+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1137,"reset", false,-1);
    tracep->declBit(c+423,"io_in_ready", false,-1);
    tracep->declBit(c+424,"io_in_valid", false,-1);
    tracep->declBus(c+1121,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+425,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+426,"io_in_bits_dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+427,"io_in_bits_result", false,-1, 31,0);
    tracep->declBus(c+428,"io_in_bits_wb_addr", false,-1, 4,0);
    tracep->declBus(c+1129,"io_wb_data", false,-1, 31,0);
    tracep->declBus(c+438,"io_wb_addr", false,-1, 4,0);
    tracep->declBit(c+1125,"io_wb_wen", false,-1);
    tracep->declBit(c+419,"io_pc_wen", false,-1);
    tracep->declBus(c+1115,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+1129,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBit(c+1125,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+1126,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+1127,"io_wbu_reg_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+471,"state", false,-1, 1,0);
    tracep->declBit(c+423,"io_in_ready_0", false,-1);
    tracep->declBus(c+472,"wbu_reg_inst", false,-1, 31,0);
    tracep->declBus(c+473,"wbu_reg_pc", false,-1, 31,0);
    tracep->declBus(c+474,"wbu_reg_result", false,-1, 31,0);
    tracep->declBus(c+475,"wbu_reg_dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+438,"wbu_reg_wb_addr", false,-1, 4,0);
    tracep->declBus(c+1126,"wb_sel", false,-1, 1,0);
    tracep->declBit(c+1125,"io_wb_wen_0", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("xbar ");
    tracep->declBus(c+369,"io_in_aw_addr", false,-1, 31,0);
    tracep->declBus(c+370,"io_in_aw_size", false,-1, 2,0);
    tracep->declBit(c+371,"io_in_aw_valid", false,-1);
    tracep->declBit(c+372,"io_in_aw_ready", false,-1);
    tracep->declBus(c+1139,"io_in_w_data", false,-1, 31,0);
    tracep->declBus(c+373,"io_in_w_strb", false,-1, 3,0);
    tracep->declBit(c+374,"io_in_w_last", false,-1);
    tracep->declBit(c+371,"io_in_w_valid", false,-1);
    tracep->declBit(c+375,"io_in_w_ready", false,-1);
    tracep->declBus(c+581,"io_in_b_resp", false,-1, 1,0);
    tracep->declBit(c+582,"io_in_b_valid", false,-1);
    tracep->declBit(c+376,"io_in_b_ready", false,-1);
    tracep->declBus(c+377,"io_in_ar_addr", false,-1, 31,0);
    tracep->declBus(c+1140,"io_in_ar_size", false,-1, 2,0);
    tracep->declBit(c+378,"io_in_ar_valid", false,-1);
    tracep->declBit(c+379,"io_in_ar_ready", false,-1);
    tracep->declBus(c+1067,"io_in_r_data", false,-1, 31,0);
    tracep->declBus(c+583,"io_in_r_resp", false,-1, 1,0);
    tracep->declBit(c+1068,"io_in_r_valid", false,-1);
    tracep->declBit(c+380,"io_in_r_ready", false,-1);
    tracep->declBus(c+59,"io_soc_aw_addr", false,-1, 31,0);
    tracep->declBus(c+60,"io_soc_aw_size", false,-1, 2,0);
    tracep->declBit(c+58,"io_soc_aw_valid", false,-1);
    tracep->declBit(c+57,"io_soc_aw_ready", false,-1);
    tracep->declBus(c+62,"io_soc_w_data", false,-1, 31,0);
    tracep->declBus(c+63,"io_soc_w_strb", false,-1, 3,0);
    tracep->declBit(c+64,"io_soc_w_last", false,-1);
    tracep->declBit(c+58,"io_soc_w_valid", false,-1);
    tracep->declBit(c+61,"io_soc_w_ready", false,-1);
    tracep->declBus(c+982,"io_soc_b_resp", false,-1, 1,0);
    tracep->declBit(c+980,"io_soc_b_valid", false,-1);
    tracep->declBit(c+65,"io_soc_b_ready", false,-1);
    tracep->declBus(c+68,"io_soc_ar_addr", false,-1, 31,0);
    tracep->declBus(c+69,"io_soc_ar_size", false,-1, 2,0);
    tracep->declBit(c+67,"io_soc_ar_valid", false,-1);
    tracep->declBit(c+66,"io_soc_ar_ready", false,-1);
    tracep->declBus(c+539,"io_soc_r_data", false,-1, 31,0);
    tracep->declBus(c+985,"io_soc_r_resp", false,-1, 1,0);
    tracep->declBit(c+983,"io_soc_r_valid", false,-1);
    tracep->declBit(c+70,"io_soc_r_ready", false,-1);
    tracep->declBus(c+385,"io_clint_ar_addr", false,-1, 31,0);
    tracep->declBus(c+386,"io_clint_r_data", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"io_d", false,-1);
    tracep->declBit(c+476,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"io_d", false,-1);
    tracep->declBit(c+476,"io_q", false,-1);
    tracep->declBit(c+476,"sync_0", false,-1);
    tracep->declBit(c+477,"sync_1", false,-1);
    tracep->declBit(c+478,"sync_2", false,-1);
    tracep->declBit(c+479,"sync_3", false,-1);
    tracep->declBit(c+480,"sync_4", false,-1);
    tracep->declBit(c+481,"sync_5", false,-1);
    tracep->declBit(c+482,"sync_6", false,-1);
    tracep->declBit(c+483,"sync_7", false,-1);
    tracep->declBit(c+484,"sync_8", false,-1);
    tracep->declBit(c+485,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+535,"auto_in_psel", false,-1);
    tracep->declBit(c+536,"auto_in_penable", false,-1);
    tracep->declBit(c+31,"auto_in_pwrite", false,-1);
    tracep->declBus(c+938,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1165,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+905,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1173,"auto_in_pready", false,-1);
    tracep->declBit(c+1174,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1175,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1095,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1096,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1097,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1098,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1099,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1100,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1101,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1102,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1103,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1104,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBus(c+954,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+535,"in_psel", false,-1);
    tracep->declBit(c+536,"in_penable", false,-1);
    tracep->declBus(c+1165,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+31,"in_pwrite", false,-1);
    tracep->declBus(c+905,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1173,"in_pready", false,-1);
    tracep->declBus(c+1175,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1174,"in_pslverr", false,-1);
    tracep->declBus(c+1095,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1096,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1097,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1098,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1099,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1100,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1101,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1102,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1103,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1104,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+533,"auto_in_psel", false,-1);
    tracep->declBit(c+534,"auto_in_penable", false,-1);
    tracep->declBit(c+31,"auto_in_pwrite", false,-1);
    tracep->declBus(c+938,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1165,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+905,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1170,"auto_in_pready", false,-1);
    tracep->declBit(c+1171,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1172,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1105,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1106,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBus(c+954,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+533,"in_psel", false,-1);
    tracep->declBit(c+534,"in_penable", false,-1);
    tracep->declBus(c+1165,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+31,"in_pwrite", false,-1);
    tracep->declBus(c+905,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1170,"in_pready", false,-1);
    tracep->declBus(c+1172,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1171,"in_pslverr", false,-1);
    tracep->declBit(c+1105,"ps2_clk", false,-1);
    tracep->declBit(c+1106,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+151,"auto_in_awvalid", false,-1);
    tracep->declBit(c+152,"auto_in_wvalid", false,-1);
    tracep->declBit(c+153,"auto_in_arready", false,-1);
    tracep->declBit(c+154,"auto_in_arvalid", false,-1);
    tracep->declBus(c+45,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+543,"auto_in_rready", false,-1);
    tracep->declBit(c+156,"auto_in_rvalid", false,-1);
    tracep->declBus(c+157,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+158,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+156,"state", false,-1);
    tracep->declBus(c+158,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+157,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+486,"raddr", false,-1, 31,0);
    tracep->declBit(c+487,"ren", false,-1);
    tracep->declBus(c+488,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+939,"auto_in_psel", false,-1);
    tracep->declBit(c+537,"auto_in_penable", false,-1);
    tracep->declBit(c+31,"auto_in_pwrite", false,-1);
    tracep->declBus(c+935,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1165,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+905,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1134,"auto_in_pready", false,-1);
    tracep->declBit(c+1166,"auto_in_pslverr", false,-1);
    tracep->declBus(c+33,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+18,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+19,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1132,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBus(c+935,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+939,"in_psel", false,-1);
    tracep->declBit(c+537,"in_penable", false,-1);
    tracep->declBus(c+1165,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+31,"in_pwrite", false,-1);
    tracep->declBus(c+905,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1134,"in_pready", false,-1);
    tracep->declBus(c+33,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1166,"in_pslverr", false,-1);
    tracep->declBit(c+18,"qspi_sck", false,-1);
    tracep->declBit(c+19,"qspi_ce_n", false,-1);
    tracep->declBus(c+1132,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1132,"din", false,-1, 3,0);
    tracep->declBus(c+1070,"dout", false,-1, 3,0);
    tracep->declBus(c+1071,"douten", false,-1, 3,0);
    tracep->declBit(c+1142,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1093,"clk_i", false,-1);
    tracep->declBit(c+1094,"rst_i", false,-1);
    tracep->declBus(c+935,"adr_i", false,-1, 31,0);
    tracep->declBus(c+905,"dat_i", false,-1, 31,0);
    tracep->declBus(c+33,"dat_o", false,-1, 31,0);
    tracep->declBus(c+32,"sel_i", false,-1, 3,0);
    tracep->declBit(c+939,"cyc_i", false,-1);
    tracep->declBit(c+939,"stb_i", false,-1);
    tracep->declBit(c+1142,"ack_o", false,-1);
    tracep->declBit(c+31,"we_i", false,-1);
    tracep->declBit(c+18,"sck", false,-1);
    tracep->declBit(c+19,"ce_n", false,-1);
    tracep->declBus(c+1132,"din", false,-1, 3,0);
    tracep->declBus(c+1070,"dout", false,-1, 3,0);
    tracep->declBus(c+1071,"douten", false,-1, 3,0);
    tracep->declBus(c+1182,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1178,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1185,"ST_INIT", false,-1, 1,0);
    tracep->declBit(c+637,"mr_sck", false,-1);
    tracep->declBit(c+638,"mr_ce_n", false,-1);
    tracep->declBus(c+1132,"mr_din", false,-1, 3,0);
    tracep->declBus(c+639,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+640,"mr_doe", false,-1);
    tracep->declBit(c+641,"mw_sck", false,-1);
    tracep->declBit(c+642,"mw_ce_n", false,-1);
    tracep->declBus(c+1132,"mw_din", false,-1, 3,0);
    tracep->declBus(c+911,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+643,"mw_doe", false,-1);
    tracep->declBit(c+1072,"mr_rd", false,-1);
    tracep->declBit(c+644,"mr_done", false,-1);
    tracep->declBit(c+1073,"mw_wr", false,-1);
    tracep->declBit(c+912,"mw_done", false,-1);
    tracep->declBit(c+939,"wb_valid", false,-1);
    tracep->declBit(c+955,"wb_we", false,-1);
    tracep->declBit(c+956,"wb_re", false,-1);
    tracep->declBus(c+645,"state", false,-1, 1,0);
    tracep->declBus(c+1074,"nstate", false,-1, 1,0);
    tracep->declBus(c+646,"init_counter", false,-1, 3,0);
    tracep->declBit(c+647,"init_done", false,-1);
    tracep->declBus(c+1186,"CMD_QPI", false,-1, 7,0);
    tracep->declBit(c+1143,"init_sck", false,-1);
    tracep->declBit(c+1144,"init_ce_n", false,-1);
    tracep->declBus(c+648,"init_dout", false,-1, 3,0);
    tracep->declBus(c+649,"init_douten", false,-1, 3,0);
    tracep->declBus(c+489,"size", false,-1, 2,0);
    tracep->declBus(c+906,"byte0", false,-1, 7,0);
    tracep->declBus(c+907,"byte1", false,-1, 7,0);
    tracep->declBus(c+908,"byte2", false,-1, 7,0);
    tracep->declBus(c+909,"byte3", false,-1, 7,0);
    tracep->declBus(c+910,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1093,"clk", false,-1);
    tracep->declBit(c+1145,"rst_n", false,-1);
    tracep->declBus(c+957,"addr", false,-1, 23,0);
    tracep->declBit(c+1072,"rd", false,-1);
    tracep->declBus(c+1187,"size", false,-1, 2,0);
    tracep->declBit(c+644,"done", false,-1);
    tracep->declBus(c+33,"line", false,-1, 31,0);
    tracep->declBit(c+637,"sck", false,-1);
    tracep->declBit(c+638,"ce_n", false,-1);
    tracep->declBus(c+1132,"din", false,-1, 3,0);
    tracep->declBus(c+639,"dout", false,-1, 3,0);
    tracep->declBit(c+640,"douten", false,-1);
    tracep->declBus(c+1188,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1189,"READ", false,-1, 0,0);
    tracep->declBus(c+1190,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+650,"state", false,-1);
    tracep->declBit(c+1075,"nstate", false,-1);
    tracep->declBus(c+651,"counter", false,-1, 7,0);
    tracep->declBus(c+652,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+490+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1191,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+653,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1093,"clk", false,-1);
    tracep->declBit(c+1145,"rst_n", false,-1);
    tracep->declBus(c+958,"addr", false,-1, 23,0);
    tracep->declBus(c+910,"line", false,-1, 31,0);
    tracep->declBus(c+489,"size", false,-1, 2,0);
    tracep->declBit(c+1073,"wr", false,-1);
    tracep->declBit(c+912,"done", false,-1);
    tracep->declBit(c+641,"sck", false,-1);
    tracep->declBit(c+642,"ce_n", false,-1);
    tracep->declBus(c+1132,"din", false,-1, 3,0);
    tracep->declBus(c+911,"dout", false,-1, 3,0);
    tracep->declBit(c+643,"douten", false,-1);
    tracep->declBus(c+1188,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1189,"WRITE", false,-1, 0,0);
    tracep->declBus(c+494,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+654,"state", false,-1);
    tracep->declBit(c+1076,"nstate", false,-1);
    tracep->declBus(c+655,"counter", false,-1, 7,0);
    tracep->declBus(c+656,"saddr", false,-1, 23,0);
    tracep->declBus(c+1192,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+529,"auto_in_psel", false,-1);
    tracep->declBit(c+530,"auto_in_penable", false,-1);
    tracep->declBit(c+31,"auto_in_pwrite", false,-1);
    tracep->declBus(c+935,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1165,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+905,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+634,"auto_in_pready", false,-1);
    tracep->declBit(c+1166,"auto_in_pslverr", false,-1);
    tracep->declBus(c+635,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1133,"sdram_bundle_clk_0", false,-1);
    tracep->declBit(c+915,"sdram_bundle_cke_0", false,-1);
    tracep->declBit(c+629,"sdram_bundle_cs_0", false,-1);
    tracep->declBit(c+630,"sdram_bundle_ras_0", false,-1);
    tracep->declBit(c+631,"sdram_bundle_cas_0", false,-1);
    tracep->declBit(c+632,"sdram_bundle_we_0", false,-1);
    tracep->declBus(c+916,"sdram_bundle_a_0", false,-1, 12,0);
    tracep->declBus(c+917,"sdram_bundle_ba_0", false,-1, 1,0);
    tracep->declBus(c+633,"sdram_bundle_dqm_0", false,-1, 3,0);
    tracep->declBus(c+930,"sdram_bundle_dq_0", false,-1, 31,0);
    tracep->declBit(c+1156,"sdram_bundle_clk_1", false,-1);
    tracep->declBit(c+1157,"sdram_bundle_cke_1", false,-1);
    tracep->declBit(c+1158,"sdram_bundle_cs_1", false,-1);
    tracep->declBit(c+1159,"sdram_bundle_ras_1", false,-1);
    tracep->declBit(c+1160,"sdram_bundle_cas_1", false,-1);
    tracep->declBit(c+1161,"sdram_bundle_we_1", false,-1);
    tracep->declBus(c+1162,"sdram_bundle_a_1", false,-1, 12,0);
    tracep->declBus(c+1163,"sdram_bundle_ba_1", false,-1, 1,0);
    tracep->declBus(c+1164,"sdram_bundle_dqm_1", false,-1, 3,0);
    tracep->declBus(c+585,"sdram_bundle_dq_1", false,-1, 31,0);
    tracep->declBit(c+959,"sdram_select_0", false,-1);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBus(c+935,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+529,"in_psel", false,-1);
    tracep->declBit(c+530,"in_penable", false,-1);
    tracep->declBus(c+1165,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+31,"in_pwrite", false,-1);
    tracep->declBus(c+905,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+634,"in_pready", false,-1);
    tracep->declBus(c+635,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1166,"in_pslverr", false,-1);
    tracep->declBit(c+1133,"sdram_clk", false,-1);
    tracep->declBit(c+915,"sdram_cke", false,-1);
    tracep->declBit(c+629,"sdram_cs", false,-1);
    tracep->declBit(c+630,"sdram_ras", false,-1);
    tracep->declBit(c+631,"sdram_cas", false,-1);
    tracep->declBit(c+632,"sdram_we", false,-1);
    tracep->declBus(c+916,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+917,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+633,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+930,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+959,"sdram_select", false,-1);
    tracep->declBit(c+657,"sdram_dout_en", false,-1);
    tracep->declBus(c+658,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+495,"state", false,-1, 1,0);
    tracep->declBit(c+918,"req_accept", false,-1);
    tracep->declBit(c+960,"is_read", false,-1);
    tracep->declBit(c+961,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1093,"clk_i", false,-1);
    tracep->declBit(c+1094,"rst_i", false,-1);
    tracep->declBus(c+962,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+960,"inport_rd_i", false,-1);
    tracep->declBus(c+1177,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+935,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+905,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+930,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+918,"inport_accept_o", false,-1);
    tracep->declBit(c+634,"inport_ack_o", false,-1);
    tracep->declBit(c+1166,"inport_error_o", false,-1);
    tracep->declBus(c+635,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1133,"sdram_clk_o", false,-1);
    tracep->declBit(c+915,"sdram_cke_o", false,-1);
    tracep->declBit(c+629,"sdram_cs_o", false,-1);
    tracep->declBit(c+630,"sdram_ras_o", false,-1);
    tracep->declBit(c+631,"sdram_cas_o", false,-1);
    tracep->declBit(c+632,"sdram_we_o", false,-1);
    tracep->declBus(c+633,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+916,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+917,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+658,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+657,"sdram_data_out_en_o", false,-1);
    tracep->declBit(c+959,"sdram_select", false,-1);
    tracep->declBus(c+1193,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1194,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1195,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1196,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1196,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1197,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1197,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1198,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1199,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1200,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1201,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1197,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1202,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1203,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1204,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1205,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1206,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1207,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1208,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1176,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1209,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1197,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1176,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1208,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1207,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1203,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1205,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1204,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1206,"STATE_WRITE", false,-1, 3,0);
    tracep->declBus(c+1202,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1210,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1211,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1211,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1184,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1211,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1196,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1196,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1212,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+935,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+962,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+960,"ram_rd_w", false,-1);
    tracep->declBit(c+918,"ram_accept_w", false,-1);
    tracep->declBus(c+905,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+635,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+634,"ram_ack_w", false,-1);
    tracep->declBit(c+963,"ram_req_w", false,-1);
    tracep->declBus(c+659,"command_q", false,-1, 3,0);
    tracep->declBus(c+916,"addr_q", false,-1, 12,0);
    tracep->declBus(c+658,"data_q", false,-1, 31,0);
    tracep->declBit(c+660,"data_rd_en_q", false,-1);
    tracep->declBus(c+633,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+915,"cke_q", false,-1);
    tracep->declBus(c+917,"bank_q", false,-1, 1,0);
    tracep->declBus(c+1213,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+661,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+930,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+662,"refresh_q", false,-1);
    tracep->declBus(c+663,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+664+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+919,"state_q", false,-1, 3,0);
    tracep->declBus(c+1077,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1078,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+668,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+669,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+964,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+965,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+966,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1197,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+670,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1079,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1214,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+920,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+671,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+635,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+672,"idx", false,-1, 31,0);
    tracep->declBus(c+673,"rd_q", false,-1, 2,0);
    tracep->declBit(c+634,"ack_q", false,-1);
    tracep->declArray(c+921,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+943,"auto_in_psel", false,-1);
    tracep->declBit(c+944,"auto_in_penable", false,-1);
    tracep->declBit(c+31,"auto_in_pwrite", false,-1);
    tracep->declBus(c+937,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1165,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+905,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1136,"auto_in_pready", false,-1);
    tracep->declBit(c+1166,"auto_in_pslverr", false,-1);
    tracep->declBus(c+636,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+627,"spi_bundle_sck", false,-1);
    tracep->declBus(c+628,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+914,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1131,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1215,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1216,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1217,"spi_master_base", false,-1, 31,0);
    tracep->declBus(c+1218,"spi_master_end", false,-1, 31,0);
    tracep->declBus(c+1219,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBus(c+967,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+943,"in_psel", false,-1);
    tracep->declBit(c+944,"in_penable", false,-1);
    tracep->declBus(c+1165,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+31,"in_pwrite", false,-1);
    tracep->declBus(c+905,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1136,"in_pready", false,-1);
    tracep->declBus(c+636,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1166,"in_pslverr", false,-1);
    tracep->declBit(c+627,"spi_sck", false,-1);
    tracep->declBus(c+628,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+914,"spi_mosi", false,-1);
    tracep->declBit(c+1131,"spi_miso", false,-1);
    tracep->declBit(c+1220,"spi_irq_out", false,-1);
    tracep->declBus(c+1080,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1081,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+636,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1082,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1083,"wb_we_i", false,-1);
    tracep->declBit(c+1084,"wb_stb_i", false,-1);
    tracep->declBit(c+1085,"wb_cyc_i", false,-1);
    tracep->declBit(c+674,"wb_ack_o", false,-1);
    tracep->declBit(c+1166,"wb_err_o", false,-1);
    tracep->declBit(c+675,"wb_int_o", false,-1);
    tracep->declBus(c+676,"flash_wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+677,"flash_wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+678,"flash_wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+679,"flash_wb_we_i", false,-1);
    tracep->declBit(c+680,"flash_wb_stb_i", false,-1);
    tracep->declBit(c+681,"flash_wb_cyc_i", false,-1);
    tracep->declBit(c+682,"flash_wb_ack_o", false,-1);
    tracep->declBus(c+1176,"IDLE", false,-1, 3,0);
    tracep->declBus(c+1208,"SEND_CMD", false,-1, 3,0);
    tracep->declBus(c+1207,"SET_DIVIDER", false,-1, 3,0);
    tracep->declBus(c+1203,"SET_SS", false,-1, 3,0);
    tracep->declBus(c+1205,"GO_BUSY", false,-1, 3,0);
    tracep->declBus(c+1204,"WAIT_COMPLETE", false,-1, 3,0);
    tracep->declBus(c+1221,"CLEAR_SS", false,-1, 3,0);
    tracep->declBus(c+1222,"READ_DATA", false,-1, 3,0);
    tracep->declBus(c+1223,"DONE", false,-1, 3,0);
    tracep->declBus(c+683,"state", false,-1, 3,0);
    tracep->declBus(c+968,"flash_cmd", false,-1, 31,0);
    tracep->declBit(c+969,"is_flash_access", false,-1);
    tracep->declBit(c+970,"is_spi_master_access", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1224,"Tp", false,-1, 31,0);
    tracep->declBit(c+1093,"wb_clk_i", false,-1);
    tracep->declBit(c+1094,"wb_rst_i", false,-1);
    tracep->declBus(c+1080,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1081,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+636,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1082,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1083,"wb_we_i", false,-1);
    tracep->declBit(c+1084,"wb_stb_i", false,-1);
    tracep->declBit(c+1085,"wb_cyc_i", false,-1);
    tracep->declBit(c+674,"wb_ack_o", false,-1);
    tracep->declBit(c+1166,"wb_err_o", false,-1);
    tracep->declBit(c+675,"wb_int_o", false,-1);
    tracep->declBus(c+628,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+627,"sclk_pad_o", false,-1);
    tracep->declBit(c+914,"mosi_pad_o", false,-1);
    tracep->declBit(c+1131,"miso_pad_i", false,-1);
    tracep->declBus(c+684,"divider", false,-1, 15,0);
    tracep->declBus(c+685,"ctrl", false,-1, 13,0);
    tracep->declBus(c+686,"ss", false,-1, 7,0);
    tracep->declBus(c+1086,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+687,"rx", false,-1, 127,0);
    tracep->declBit(c+691,"rx_negedge", false,-1);
    tracep->declBit(c+692,"tx_negedge", false,-1);
    tracep->declBus(c+693,"char_len", false,-1, 6,0);
    tracep->declBit(c+694,"go", false,-1);
    tracep->declBit(c+695,"lsb", false,-1);
    tracep->declBit(c+696,"ie", false,-1);
    tracep->declBit(c+697,"ass", false,-1);
    tracep->declBit(c+1087,"spi_divider_sel", false,-1);
    tracep->declBit(c+1088,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1089,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1090,"spi_ss_sel", false,-1);
    tracep->declBit(c+698,"tip", false,-1);
    tracep->declBit(c+699,"pos_edge", false,-1);
    tracep->declBit(c+700,"neg_edge", false,-1);
    tracep->declBit(c+701,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1224,"Tp", false,-1, 31,0);
    tracep->declBit(c+1093,"clk_in", false,-1);
    tracep->declBit(c+1094,"rst", false,-1);
    tracep->declBit(c+698,"enable", false,-1);
    tracep->declBit(c+694,"go", false,-1);
    tracep->declBit(c+701,"last_clk", false,-1);
    tracep->declBus(c+684,"divider", false,-1, 15,0);
    tracep->declBit(c+627,"clk_out", false,-1);
    tracep->declBit(c+699,"pos_edge", false,-1);
    tracep->declBit(c+700,"neg_edge", false,-1);
    tracep->declBus(c+702,"cnt", false,-1, 15,0);
    tracep->declBit(c+703,"cnt_zero", false,-1);
    tracep->declBit(c+704,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1224,"Tp", false,-1, 31,0);
    tracep->declBit(c+1093,"clk", false,-1);
    tracep->declBit(c+1094,"rst", false,-1);
    tracep->declBus(c+1091,"latch", false,-1, 3,0);
    tracep->declBus(c+1082,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+693,"len", false,-1, 6,0);
    tracep->declBit(c+695,"lsb", false,-1);
    tracep->declBit(c+694,"go", false,-1);
    tracep->declBit(c+699,"pos_edge", false,-1);
    tracep->declBit(c+700,"neg_edge", false,-1);
    tracep->declBit(c+691,"rx_negedge", false,-1);
    tracep->declBit(c+692,"tx_negedge", false,-1);
    tracep->declBit(c+698,"tip", false,-1);
    tracep->declBit(c+701,"last", false,-1);
    tracep->declBus(c+1081,"p_in", false,-1, 31,0);
    tracep->declArray(c+687,"p_out", false,-1, 127,0);
    tracep->declBit(c+627,"s_clk", false,-1);
    tracep->declBit(c+1131,"s_in", false,-1);
    tracep->declBit(c+914,"s_out", false,-1);
    tracep->declBus(c+705,"cnt", false,-1, 7,0);
    tracep->declArray(c+687,"data", false,-1, 127,0);
    tracep->declBus(c+706,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+707,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+708,"rx_clk", false,-1);
    tracep->declBit(c+709,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+940,"auto_in_psel", false,-1);
    tracep->declBit(c+941,"auto_in_penable", false,-1);
    tracep->declBit(c+31,"auto_in_pwrite", false,-1);
    tracep->declBus(c+938,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1165,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+905,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+942,"auto_in_pready", false,-1);
    tracep->declBit(c+1166,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1135,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1113,"uart_rx", false,-1);
    tracep->declBit(c+1114,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+940,"in_psel", false,-1);
    tracep->declBit(c+941,"in_penable", false,-1);
    tracep->declBus(c+1165,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+942,"in_pready", false,-1);
    tracep->declBit(c+1166,"in_pslverr", false,-1);
    tracep->declBus(c+954,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+31,"in_pwrite", false,-1);
    tracep->declBus(c+1135,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+905,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1113,"uart_rx", false,-1);
    tracep->declBit(c+1114,"uart_tx", false,-1);
    tracep->declBit(c+710,"rtsn", false,-1);
    tracep->declBit(c+1166,"ctsn", false,-1);
    tracep->declBit(c+711,"dtr_pad_o", false,-1);
    tracep->declBit(c+1166,"dsr_pad_i", false,-1);
    tracep->declBit(c+1166,"ri_pad_i", false,-1);
    tracep->declBit(c+1166,"dcd_pad_i", false,-1);
    tracep->declBit(c+712,"interrupt", false,-1);
    tracep->declBit(c+1146,"reg_we", false,-1);
    tracep->declBit(c+1147,"reg_re", false,-1);
    tracep->declBus(c+971,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+972,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+496,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1092,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+713,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1093,"clk", false,-1);
    tracep->declBit(c+1094,"wb_rst_i", false,-1);
    tracep->declBus(c+971,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+973,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1092,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1146,"wb_we_i", false,-1);
    tracep->declBit(c+1147,"wb_re_i", false,-1);
    tracep->declBit(c+1114,"stx_pad_o", false,-1);
    tracep->declBit(c+1113,"srx_pad_i", false,-1);
    tracep->declBus(c+1210,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+713,"rts_pad_o", false,-1);
    tracep->declBit(c+711,"dtr_pad_o", false,-1);
    tracep->declBit(c+712,"int_o", false,-1);
    tracep->declBit(c+714,"enable", false,-1);
    tracep->declBit(c+715,"srx_pad", false,-1);
    tracep->declBus(c+716,"ier", false,-1, 3,0);
    tracep->declBus(c+717,"iir", false,-1, 3,0);
    tracep->declBus(c+718,"fcr", false,-1, 1,0);
    tracep->declBus(c+719,"mcr", false,-1, 4,0);
    tracep->declBus(c+720,"lcr", false,-1, 7,0);
    tracep->declBus(c+721,"msr", false,-1, 7,0);
    tracep->declBus(c+722,"dl", false,-1, 15,0);
    tracep->declBus(c+723,"scratch", false,-1, 7,0);
    tracep->declBit(c+724,"start_dlc", false,-1);
    tracep->declBit(c+725,"lsr_mask_d", false,-1);
    tracep->declBit(c+726,"msi_reset", false,-1);
    tracep->declBus(c+727,"dlc", false,-1, 15,0);
    tracep->declBus(c+728,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+729,"rx_reset", false,-1);
    tracep->declBit(c+730,"tx_reset", false,-1);
    tracep->declBit(c+731,"dlab", false,-1);
    tracep->declBit(c+1179,"cts_pad_i", false,-1);
    tracep->declBit(c+1166,"dsr_pad_i", false,-1);
    tracep->declBit(c+1166,"ri_pad_i", false,-1);
    tracep->declBit(c+1166,"dcd_pad_i", false,-1);
    tracep->declBit(c+732,"loopback", false,-1);
    tracep->declBit(c+1166,"cts", false,-1);
    tracep->declBit(c+1179,"dsr", false,-1);
    tracep->declBit(c+1179,"ri", false,-1);
    tracep->declBit(c+1179,"dcd", false,-1);
    tracep->declBit(c+733,"cts_c", false,-1);
    tracep->declBit(c+734,"dsr_c", false,-1);
    tracep->declBit(c+735,"ri_c", false,-1);
    tracep->declBit(c+736,"dcd_c", false,-1);
    tracep->declBus(c+737,"lsr", false,-1, 7,0);
    tracep->declBit(c+738,"lsr0", false,-1);
    tracep->declBit(c+739,"lsr1", false,-1);
    tracep->declBit(c+740,"lsr2", false,-1);
    tracep->declBit(c+741,"lsr3", false,-1);
    tracep->declBit(c+742,"lsr4", false,-1);
    tracep->declBit(c+743,"lsr5", false,-1);
    tracep->declBit(c+744,"lsr6", false,-1);
    tracep->declBit(c+745,"lsr7", false,-1);
    tracep->declBit(c+746,"lsr0r", false,-1);
    tracep->declBit(c+747,"lsr1r", false,-1);
    tracep->declBit(c+748,"lsr2r", false,-1);
    tracep->declBit(c+749,"lsr3r", false,-1);
    tracep->declBit(c+750,"lsr4r", false,-1);
    tracep->declBit(c+751,"lsr5r", false,-1);
    tracep->declBit(c+752,"lsr6r", false,-1);
    tracep->declBit(c+753,"lsr7r", false,-1);
    tracep->declBit(c+20,"lsr_mask", false,-1);
    tracep->declBit(c+754,"rls_int", false,-1);
    tracep->declBit(c+755,"rda_int", false,-1);
    tracep->declBit(c+756,"ti_int", false,-1);
    tracep->declBit(c+757,"thre_int", false,-1);
    tracep->declBit(c+758,"ms_int", false,-1);
    tracep->declBit(c+759,"tf_push", false,-1);
    tracep->declBit(c+760,"rf_pop", false,-1);
    tracep->declBus(c+1148,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+761,"rf_error_bit", false,-1);
    tracep->declBit(c+739,"rf_overrun", false,-1);
    tracep->declBit(c+762,"rf_push_pulse", false,-1);
    tracep->declBus(c+763,"rf_count", false,-1, 4,0);
    tracep->declBus(c+764,"tf_count", false,-1, 4,0);
    tracep->declBus(c+765,"tstate", false,-1, 2,0);
    tracep->declBus(c+766,"rstate", false,-1, 3,0);
    tracep->declBus(c+767,"counter_t", false,-1, 9,0);
    tracep->declBit(c+768,"thre_set_en", false,-1);
    tracep->declBus(c+769,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+770,"block_value", false,-1, 7,0);
    tracep->declBit(c+771,"serial_out", false,-1);
    tracep->declBit(c+772,"serial_in", false,-1);
    tracep->declBit(c+21,"lsr_mask_condition", false,-1);
    tracep->declBit(c+22,"iir_read", false,-1);
    tracep->declBit(c+23,"msr_read", false,-1);
    tracep->declBit(c+24,"fifo_read", false,-1);
    tracep->declBit(c+25,"fifo_write", false,-1);
    tracep->declBus(c+773,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+774,"lsr0_d", false,-1);
    tracep->declBit(c+775,"lsr1_d", false,-1);
    tracep->declBit(c+776,"lsr2_d", false,-1);
    tracep->declBit(c+777,"lsr3_d", false,-1);
    tracep->declBit(c+778,"lsr4_d", false,-1);
    tracep->declBit(c+779,"lsr5_d", false,-1);
    tracep->declBit(c+780,"lsr6_d", false,-1);
    tracep->declBit(c+781,"lsr7_d", false,-1);
    tracep->declBit(c+782,"rls_int_d", false,-1);
    tracep->declBit(c+783,"thre_int_d", false,-1);
    tracep->declBit(c+784,"ms_int_d", false,-1);
    tracep->declBit(c+785,"ti_int_d", false,-1);
    tracep->declBit(c+786,"rda_int_d", false,-1);
    tracep->declBit(c+787,"rls_int_rise", false,-1);
    tracep->declBit(c+788,"thre_int_rise", false,-1);
    tracep->declBit(c+789,"ms_int_rise", false,-1);
    tracep->declBit(c+790,"ti_int_rise", false,-1);
    tracep->declBit(c+791,"rda_int_rise", false,-1);
    tracep->declBit(c+792,"rls_int_pnd", false,-1);
    tracep->declBit(c+793,"rda_int_pnd", false,-1);
    tracep->declBit(c+794,"thre_int_pnd", false,-1);
    tracep->declBit(c+795,"ms_int_pnd", false,-1);
    tracep->declBit(c+796,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1224,"Tp", false,-1, 31,0);
    tracep->declBus(c+1224,"width", false,-1, 31,0);
    tracep->declBus(c+1189,"init_value", false,-1, 0,0);
    tracep->declBit(c+1094,"rst_i", false,-1);
    tracep->declBit(c+1093,"clk_i", false,-1);
    tracep->declBit(c+1166,"stage1_rst_i", false,-1);
    tracep->declBit(c+1179,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1113,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+715,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+797,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1093,"clk", false,-1);
    tracep->declBit(c+1094,"wb_rst_i", false,-1);
    tracep->declBus(c+720,"lcr", false,-1, 7,0);
    tracep->declBit(c+760,"rf_pop", false,-1);
    tracep->declBit(c+772,"srx_pad_i", false,-1);
    tracep->declBit(c+714,"enable", false,-1);
    tracep->declBit(c+729,"rx_reset", false,-1);
    tracep->declBit(c+20,"lsr_mask", false,-1);
    tracep->declBus(c+767,"counter_t", false,-1, 9,0);
    tracep->declBus(c+763,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1148,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+739,"rf_overrun", false,-1);
    tracep->declBit(c+761,"rf_error_bit", false,-1);
    tracep->declBus(c+766,"rstate", false,-1, 3,0);
    tracep->declBit(c+762,"rf_push_pulse", false,-1);
    tracep->declBus(c+798,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+799,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+800,"rshift", false,-1, 7,0);
    tracep->declBit(c+801,"rparity", false,-1);
    tracep->declBit(c+802,"rparity_error", false,-1);
    tracep->declBit(c+803,"rframing_error", false,-1);
    tracep->declBit(c+804,"rbit_in", false,-1);
    tracep->declBit(c+805,"rparity_xor", false,-1);
    tracep->declBus(c+806,"counter_b", false,-1, 7,0);
    tracep->declBit(c+807,"rf_push_q", false,-1);
    tracep->declBus(c+808,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+809,"rf_push", false,-1);
    tracep->declBit(c+810,"break_error", false,-1);
    tracep->declBit(c+811,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+812,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+813,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+814,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1176,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1208,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1207,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1203,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1205,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1204,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1206,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1202,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1210,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1225,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1226,"sr_push", false,-1, 3,0);
    tracep->declBus(c+815,"toc_value", false,-1, 9,0);
    tracep->declBus(c+816,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1227,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1228,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1197,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1183,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1093,"clk", false,-1);
    tracep->declBit(c+1094,"wb_rst_i", false,-1);
    tracep->declBit(c+762,"push", false,-1);
    tracep->declBit(c+760,"pop", false,-1);
    tracep->declBus(c+808,"data_in", false,-1, 10,0);
    tracep->declBit(c+729,"fifo_reset", false,-1);
    tracep->declBit(c+20,"reset_status", false,-1);
    tracep->declBus(c+1148,"data_out", false,-1, 10,0);
    tracep->declBit(c+739,"overrun", false,-1);
    tracep->declBus(c+763,"count", false,-1, 4,0);
    tracep->declBit(c+761,"error_bit", false,-1);
    tracep->declBus(c+1149,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+817+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+833,"top", false,-1, 3,0);
    tracep->declBus(c+834,"bottom", false,-1, 3,0);
    tracep->declBus(c+835,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+836,"word0", false,-1, 2,0);
    tracep->declBus(c+837,"word1", false,-1, 2,0);
    tracep->declBus(c+838,"word2", false,-1, 2,0);
    tracep->declBus(c+839,"word3", false,-1, 2,0);
    tracep->declBus(c+840,"word4", false,-1, 2,0);
    tracep->declBus(c+841,"word5", false,-1, 2,0);
    tracep->declBus(c+842,"word6", false,-1, 2,0);
    tracep->declBus(c+843,"word7", false,-1, 2,0);
    tracep->declBus(c+844,"word8", false,-1, 2,0);
    tracep->declBus(c+845,"word9", false,-1, 2,0);
    tracep->declBus(c+846,"word10", false,-1, 2,0);
    tracep->declBus(c+847,"word11", false,-1, 2,0);
    tracep->declBus(c+848,"word12", false,-1, 2,0);
    tracep->declBus(c+849,"word13", false,-1, 2,0);
    tracep->declBus(c+850,"word14", false,-1, 2,0);
    tracep->declBus(c+851,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1197,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1219,"data_width", false,-1, 31,0);
    tracep->declBus(c+1228,"depth", false,-1, 31,0);
    tracep->declBit(c+1093,"clk", false,-1);
    tracep->declBit(c+762,"we", false,-1);
    tracep->declBus(c+833,"a", false,-1, 3,0);
    tracep->declBus(c+834,"dpra", false,-1, 3,0);
    tracep->declBus(c+852,"di", false,-1, 7,0);
    tracep->declBus(c+1149,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+497+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1093,"clk", false,-1);
    tracep->declBit(c+1094,"wb_rst_i", false,-1);
    tracep->declBus(c+720,"lcr", false,-1, 7,0);
    tracep->declBit(c+759,"tf_push", false,-1);
    tracep->declBus(c+973,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+714,"enable", false,-1);
    tracep->declBit(c+730,"tx_reset", false,-1);
    tracep->declBit(c+20,"lsr_mask", false,-1);
    tracep->declBit(c+771,"stx_pad_o", false,-1);
    tracep->declBus(c+765,"tstate", false,-1, 2,0);
    tracep->declBus(c+764,"tf_count", false,-1, 4,0);
    tracep->declBus(c+853,"counter", false,-1, 4,0);
    tracep->declBus(c+854,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+855,"shift_out", false,-1, 6,0);
    tracep->declBit(c+856,"stx_o_tmp", false,-1);
    tracep->declBit(c+857,"parity_xor", false,-1);
    tracep->declBit(c+858,"tf_pop", false,-1);
    tracep->declBit(c+859,"bit_out", false,-1);
    tracep->declBus(c+973,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+913,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+860,"tf_overrun", false,-1);
    tracep->declBus(c+1181,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1165,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1229,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1230,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1187,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1231,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1219,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1228,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1197,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1183,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1093,"clk", false,-1);
    tracep->declBit(c+1094,"wb_rst_i", false,-1);
    tracep->declBit(c+759,"push", false,-1);
    tracep->declBit(c+858,"pop", false,-1);
    tracep->declBus(c+973,"data_in", false,-1, 7,0);
    tracep->declBit(c+730,"fifo_reset", false,-1);
    tracep->declBit(c+20,"reset_status", false,-1);
    tracep->declBus(c+913,"data_out", false,-1, 7,0);
    tracep->declBit(c+860,"overrun", false,-1);
    tracep->declBus(c+764,"count", false,-1, 4,0);
    tracep->declBus(c+861,"top", false,-1, 3,0);
    tracep->declBus(c+862,"bottom", false,-1, 3,0);
    tracep->declBus(c+863,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1197,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1219,"data_width", false,-1, 31,0);
    tracep->declBus(c+1228,"depth", false,-1, 31,0);
    tracep->declBit(c+1093,"clk", false,-1);
    tracep->declBit(c+759,"we", false,-1);
    tracep->declBus(c+861,"a", false,-1, 3,0);
    tracep->declBus(c+862,"dpra", false,-1, 3,0);
    tracep->declBus(c+973,"di", false,-1, 7,0);
    tracep->declBus(c+913,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+513+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBit(c+531,"auto_in_psel", false,-1);
    tracep->declBit(c+532,"auto_in_penable", false,-1);
    tracep->declBit(c+31,"auto_in_pwrite", false,-1);
    tracep->declBus(c+937,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1165,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+905,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1167,"auto_in_pready", false,-1);
    tracep->declBit(c+1168,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1169,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1107,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1108,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1109,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1110,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1111,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1112,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1093,"clock", false,-1);
    tracep->declBit(c+1094,"reset", false,-1);
    tracep->declBus(c+967,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+531,"in_psel", false,-1);
    tracep->declBit(c+532,"in_penable", false,-1);
    tracep->declBus(c+1165,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+31,"in_pwrite", false,-1);
    tracep->declBus(c+905,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+32,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1167,"in_pready", false,-1);
    tracep->declBus(c+1169,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1168,"in_pslverr", false,-1);
    tracep->declBus(c+1107,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1108,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1109,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1110,"vga_hsync", false,-1);
    tracep->declBit(c+1111,"vga_vsync", false,-1);
    tracep->declBit(c+1112,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+627,"sck", false,-1);
    tracep->declBit(c+864,"ss", false,-1);
    tracep->declBit(c+914,"mosi", false,-1);
    tracep->declBit(c+1150,"miso", false,-1);
    tracep->declBus(c+1182,"RX", false,-1, 1,0);
    tracep->declBus(c+1178,"TX", false,-1, 1,0);
    tracep->declBus(c+1185,"DONE", false,-1, 1,0);
    tracep->declBus(c+26,"counter", false,-1, 7,0);
    tracep->declBus(c+27,"data_in", false,-1, 7,0);
    tracep->declBus(c+28,"state", false,-1, 1,0);
    tracep->declBit(c+864,"inactive", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+627,"sck", false,-1);
    tracep->declBit(c+865,"ss", false,-1);
    tracep->declBit(c+914,"mosi", false,-1);
    tracep->declBit(c+1151,"miso", false,-1);
    tracep->declBit(c+865,"reset", false,-1);
    tracep->declBus(c+899,"state", false,-1, 2,0);
    tracep->declBus(c+900,"counter", false,-1, 7,0);
    tracep->declBus(c+901,"cmd", false,-1, 7,0);
    tracep->declBus(c+902,"addr", false,-1, 23,0);
    tracep->declBus(c+903,"data", false,-1, 31,0);
    tracep->declBit(c+904,"ren", false,-1);
    tracep->declBus(c+1152,"rdata", false,-1, 31,0);
    tracep->declBus(c+1153,"raddr", false,-1, 31,0);
    tracep->declBus(c+1152,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+627,"clock", false,-1);
    tracep->declBit(c+904,"valid", false,-1);
    tracep->declBus(c+901,"cmd", false,-1, 7,0);
    tracep->declBus(c+1153,"addr", false,-1, 31,0);
    tracep->declBus(c+1152,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+18,"sck", false,-1);
    tracep->declBit(c+19,"ce_n", false,-1);
    tracep->declBus(c+1132,"dio", false,-1, 3,0);
    tracep->declBus(c+1181,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1165,"CMD", false,-1, 2,0);
    tracep->declBus(c+1229,"ADDR", false,-1, 2,0);
    tracep->declBus(c+1230,"DUMMY", false,-1, 2,0);
    tracep->declBus(c+1187,"READ_DATA", false,-1, 2,0);
    tracep->declBus(c+1231,"WRITE_DATA", false,-1, 2,0);
    tracep->declBus(c+618,"state", false,-1, 2,0);
    tracep->declBus(c+619,"cmd", false,-1, 7,0);
    tracep->declBus(c+620,"addr", false,-1, 23,0);
    tracep->declBus(c+621,"cycle_cnt", false,-1, 5,0);
    tracep->declBus(c+622,"dout", false,-1, 3,0);
    tracep->declBit(c+623,"dout_en", false,-1);
    tracep->declBus(c+624,"nibble_idx", false,-1, 1,0);
    tracep->declBus(c+625,"addr_shift", false,-1, 23,0);
    tracep->declBit(c+626,"qpi_mode", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_chip_0 ");
    tracep->declBus(c+1232,"INSTANCE_ID", false,-1, 31,0);
    tracep->declBit(c+1133,"clk", false,-1);
    tracep->declBit(c+915,"cke", false,-1);
    tracep->declBit(c+629,"cs", false,-1);
    tracep->declBit(c+630,"ras", false,-1);
    tracep->declBit(c+631,"cas", false,-1);
    tracep->declBit(c+632,"we", false,-1);
    tracep->declBus(c+916,"a", false,-1, 12,0);
    tracep->declBus(c+917,"ba", false,-1, 1,0);
    tracep->declBus(c+866,"dqm", false,-1, 1,0);
    tracep->declBus(c+931,"dq", false,-1, 15,0);
    tracep->declBus(c+1198,"ROW_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"COL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1197,"BANK_COUNT", false,-1, 31,0);
    tracep->declBus(c+871,"active_bank", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+872+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->declBus(c+876,"burst_length_code", false,-1, 2,0);
    tracep->declBus(c+877,"cas_latency_code", false,-1, 2,0);
    tracep->declBus(c+878,"burst_length", false,-1, 3,0);
    tracep->declBus(c+877,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+629,"is_inhibit", false,-1);
    tracep->declBit(c+867,"is_nop", false,-1);
    tracep->declBit(c+924,"is_active", false,-1);
    tracep->declBit(c+925,"is_read", false,-1);
    tracep->declBit(c+926,"is_write", false,-1);
    tracep->declBit(c+868,"is_precharge", false,-1);
    tracep->declBit(c+869,"is_auto_refresh", false,-1);
    tracep->declBit(c+927,"is_load_mode", false,-1);
    tracep->declBus(c+932,"masked_dq", false,-1, 15,0);
    tracep->declBus(c+928,"write_mask", false,-1, 15,0);
    tracep->declBus(c+879,"dq_out", false,-1, 15,0);
    tracep->declBit(c+880,"dq_en", false,-1);
    tracep->declBus(c+1181,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1165,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1229,"READING", false,-1, 2,0);
    tracep->declBus(c+1230,"WRITING", false,-1, 2,0);
    tracep->declBus(c+881,"state", false,-1, 2,0);
    tracep->declBus(c+882,"delay_counter", false,-1, 3,0);
    tracep->declBus(c+883,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+884,"current_col", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_chip_1 ");
    tracep->declBus(c+1233,"INSTANCE_ID", false,-1, 31,0);
    tracep->declBit(c+1133,"clk", false,-1);
    tracep->declBit(c+915,"cke", false,-1);
    tracep->declBit(c+629,"cs", false,-1);
    tracep->declBit(c+630,"ras", false,-1);
    tracep->declBit(c+631,"cas", false,-1);
    tracep->declBit(c+632,"we", false,-1);
    tracep->declBus(c+916,"a", false,-1, 12,0);
    tracep->declBus(c+917,"ba", false,-1, 1,0);
    tracep->declBus(c+870,"dqm", false,-1, 1,0);
    tracep->declBus(c+933,"dq", false,-1, 15,0);
    tracep->declBus(c+1198,"ROW_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"COL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1197,"BANK_COUNT", false,-1, 31,0);
    tracep->declBus(c+885,"active_bank", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+886+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->declBus(c+890,"burst_length_code", false,-1, 2,0);
    tracep->declBus(c+891,"cas_latency_code", false,-1, 2,0);
    tracep->declBus(c+892,"burst_length", false,-1, 3,0);
    tracep->declBus(c+891,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+629,"is_inhibit", false,-1);
    tracep->declBit(c+867,"is_nop", false,-1);
    tracep->declBit(c+924,"is_active", false,-1);
    tracep->declBit(c+925,"is_read", false,-1);
    tracep->declBit(c+926,"is_write", false,-1);
    tracep->declBit(c+868,"is_precharge", false,-1);
    tracep->declBit(c+869,"is_auto_refresh", false,-1);
    tracep->declBit(c+927,"is_load_mode", false,-1);
    tracep->declBus(c+934,"masked_dq", false,-1, 15,0);
    tracep->declBus(c+929,"write_mask", false,-1, 15,0);
    tracep->declBus(c+893,"dq_out", false,-1, 15,0);
    tracep->declBit(c+894,"dq_en", false,-1);
    tracep->declBus(c+1181,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1165,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1229,"READING", false,-1, 2,0);
    tracep->declBus(c+1230,"WRITING", false,-1, 2,0);
    tracep->declBus(c+895,"state", false,-1, 2,0);
    tracep->declBus(c+896,"delay_counter", false,-1, 3,0);
    tracep->declBus(c+897,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+898,"current_col", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_chip_2 ");
    tracep->declBus(c+1234,"INSTANCE_ID", false,-1, 31,0);
    tracep->declBit(c+1156,"clk", false,-1);
    tracep->declBit(c+1157,"cke", false,-1);
    tracep->declBit(c+1158,"cs", false,-1);
    tracep->declBit(c+1159,"ras", false,-1);
    tracep->declBit(c+1155,"cas", false,-1);
    tracep->declBit(c+1161,"we", false,-1);
    tracep->declBus(c+1162,"a", false,-1, 12,0);
    tracep->declBus(c+1163,"ba", false,-1, 1,0);
    tracep->declBus(c+1235,"dqm", false,-1, 1,0);
    tracep->declBus(c+586,"dq", false,-1, 15,0);
    tracep->declBus(c+1198,"ROW_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"COL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1197,"BANK_COUNT", false,-1, 31,0);
    tracep->declBus(c+587,"active_bank", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+588+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->declBus(c+592,"burst_length_code", false,-1, 2,0);
    tracep->declBus(c+593,"cas_latency_code", false,-1, 2,0);
    tracep->declBus(c+594,"burst_length", false,-1, 3,0);
    tracep->declBus(c+593,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+1158,"is_inhibit", false,-1);
    tracep->declBit(c+2,"is_nop", false,-1);
    tracep->declBit(c+3,"is_active", false,-1);
    tracep->declBit(c+4,"is_read", false,-1);
    tracep->declBit(c+5,"is_write", false,-1);
    tracep->declBit(c+6,"is_precharge", false,-1);
    tracep->declBit(c+7,"is_auto_refresh", false,-1);
    tracep->declBit(c+8,"is_load_mode", false,-1);
    tracep->declBus(c+595,"masked_dq", false,-1, 15,0);
    tracep->declBus(c+9,"write_mask", false,-1, 15,0);
    tracep->declBus(c+596,"dq_out", false,-1, 15,0);
    tracep->declBit(c+597,"dq_en", false,-1);
    tracep->declBus(c+1181,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1165,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1229,"READING", false,-1, 2,0);
    tracep->declBus(c+1230,"WRITING", false,-1, 2,0);
    tracep->declBus(c+598,"state", false,-1, 2,0);
    tracep->declBus(c+599,"delay_counter", false,-1, 3,0);
    tracep->declBus(c+600,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+601,"current_col", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_chip_3 ");
    tracep->declBus(c+1236,"INSTANCE_ID", false,-1, 31,0);
    tracep->declBit(c+1156,"clk", false,-1);
    tracep->declBit(c+1157,"cke", false,-1);
    tracep->declBit(c+1158,"cs", false,-1);
    tracep->declBit(c+1159,"ras", false,-1);
    tracep->declBit(c+1160,"cas", false,-1);
    tracep->declBit(c+1161,"we", false,-1);
    tracep->declBus(c+1162,"a", false,-1, 12,0);
    tracep->declBus(c+1163,"ba", false,-1, 1,0);
    tracep->declBus(c+1237,"dqm", false,-1, 1,0);
    tracep->declBus(c+602,"dq", false,-1, 15,0);
    tracep->declBus(c+1198,"ROW_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"COL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1197,"BANK_COUNT", false,-1, 31,0);
    tracep->declBus(c+603,"active_bank", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+604+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->declBus(c+608,"burst_length_code", false,-1, 2,0);
    tracep->declBus(c+609,"cas_latency_code", false,-1, 2,0);
    tracep->declBus(c+610,"burst_length", false,-1, 3,0);
    tracep->declBus(c+609,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+1158,"is_inhibit", false,-1);
    tracep->declBit(c+10,"is_nop", false,-1);
    tracep->declBit(c+11,"is_active", false,-1);
    tracep->declBit(c+12,"is_read", false,-1);
    tracep->declBit(c+13,"is_write", false,-1);
    tracep->declBit(c+14,"is_precharge", false,-1);
    tracep->declBit(c+15,"is_auto_refresh", false,-1);
    tracep->declBit(c+16,"is_load_mode", false,-1);
    tracep->declBus(c+611,"masked_dq", false,-1, 15,0);
    tracep->declBus(c+17,"write_mask", false,-1, 15,0);
    tracep->declBus(c+612,"dq_out", false,-1, 15,0);
    tracep->declBit(c+613,"dq_en", false,-1);
    tracep->declBus(c+1181,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1165,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1229,"READING", false,-1, 2,0);
    tracep->declBus(c+1230,"WRITING", false,-1, 2,0);
    tracep->declBus(c+614,"state", false,-1, 2,0);
    tracep->declBus(c+615,"delay_counter", false,-1, 3,0);
    tracep->declBus(c+616,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+617,"current_col", false,-1, 8,0);
    tracep->popNamePrefix(2);
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
    bufp->fullBit(oldp+2,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT____VdfgTmp_hada35e22__0) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_we_1) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic_sdram_cas_1)))));
    bufp->fullBit(oldp+3,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT____VdfgTmp_h47486cab__0) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_we_1))));
    bufp->fullBit(oldp+4,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT____VdfgTmp_hb327f5d5__0) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_we_1))));
    bufp->fullBit(oldp+5,(((~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_we_1)) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT____VdfgTmp_hb327f5d5__0))));
    bufp->fullBit(oldp+6,(((~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_we_1)) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT____VdfgTmp_h47486cab__0))));
    bufp->fullBit(oldp+7,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT____VdfgTmp_h50b78ab2__0) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_we_1))));
    bufp->fullBit(oldp+8,(((~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_we_1)) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT____VdfgTmp_h50b78ab2__0))));
    bufp->fullSData(oldp+9,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__write_mask),16);
    bufp->fullBit(oldp+10,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT____VdfgTmp_hada35e22__0) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_cas_1) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_we_1)))));
    bufp->fullBit(oldp+11,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT____VdfgTmp_h47486cab__0) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_we_1))));
    bufp->fullBit(oldp+12,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT____VdfgTmp_hb327f5d5__0) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_we_1))));
    bufp->fullBit(oldp+13,(((~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_we_1)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT____VdfgTmp_hb327f5d5__0))));
    bufp->fullBit(oldp+14,(((~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_we_1)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT____VdfgTmp_h47486cab__0))));
    bufp->fullBit(oldp+15,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT____VdfgTmp_h50b78ab2__0) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_we_1))));
    bufp->fullBit(oldp+16,(((~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_we_1)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT____VdfgTmp_h50b78ab2__0))));
    bufp->fullSData(oldp+17,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__write_mask),16);
    bufp->fullBit(oldp+18,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+19,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullCData(oldp+26,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),8);
    bufp->fullCData(oldp+27,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_in),8);
    bufp->fullCData(oldp+28,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state),2);
    bufp->fullBit(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+30,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+33,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullBit(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+57,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullIData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullBit(oldp+61,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullIData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+65,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hbda8445b__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2))))));
    bufp->fullBit(oldp+66,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullIData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullBit(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+72,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+74,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+76,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+77,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullIData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+122,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullQData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+127,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+128,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+131,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+132,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+133,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+136,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+137,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+138,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullSData(oldp+146,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullIData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullSData(oldp+148,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+151,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+152,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+153,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+154,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+155,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+163,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+165,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+166,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+212,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+225,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+229,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+233,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+237,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+241,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+245,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+249,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+253,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+257,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+261,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+265,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+269,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+273,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+277,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+281,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+285,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+289,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+293,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+297,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+301,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+305,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+309,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+313,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+317,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+321,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+325,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+329,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+333,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+337,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+341,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+345,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+349,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+353,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___GEN_6)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc
                                : 0U)),32);
    bufp->fullBit(oldp+354,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT____VdfgTmp_h3a4270d2__0)) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)))));
    bufp->fullBit(oldp+355,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_h41ece7be__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_in_ar_ready))));
    bufp->fullBit(oldp+356,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___GEN_4)) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)))));
    bufp->fullIData(oldp+357,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_8)
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
    bufp->fullCData(oldp+358,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_8)
                                ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___memory_ctl_io_dmem_rw_size))),3);
    bufp->fullBit(oldp+359,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h481cff71__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2))));
    bufp->fullBit(oldp+360,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullCData(oldp+361,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4)
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
    bufp->fullBit(oldp+362,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                             | ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_6)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2)
                                    : (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)))))));
    bufp->fullBit(oldp+363,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullBit(oldp+364,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hbda8445b__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2))));
    bufp->fullIData(oldp+365,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_7)
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
    bufp->fullBit(oldp+366,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h481cff71__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad))));
    bufp->fullBit(oldp+367,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_in_ar_ready))));
    bufp->fullBit(oldp+368,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hbda8445b__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad))));
    bufp->fullIData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_aw_addr),32);
    bufp->fullCData(oldp+370,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_8)
                                         ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___memory_ctl_io_dmem_rw_size)))),3);
    bufp->fullBit(oldp+371,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h481cff71__0) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2)))));
    bufp->fullBit(oldp+372,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullCData(oldp+373,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
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
    bufp->fullBit(oldp+374,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                                | ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_6)
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2)
                                       : (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))))))));
    bufp->fullBit(oldp+375,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullBit(oldp+376,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hbda8445b__0) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2)))));
    bufp->fullIData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr),32);
    bufp->fullBit(oldp+378,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_arbiter_valid)
                                 ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT____VdfgTmp_h3a4270d2__0)) 
                                    & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)))
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h481cff71__0) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid))))));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_in_ar_ready));
    bufp->fullBit(oldp+380,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_arbiter_valid)
                                 ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___GEN_4)) 
                                    & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)))
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hbda8445b__0) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad)))))));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_arbiter_valid));
    bufp->fullBit(oldp+382,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)))));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state));
    bufp->fullIData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_addr),32);
    bufp->fullIData(oldp+386,(((0x200bff8U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_addr)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime)
                                : ((0x200bffcU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_addr)
                                    ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
                                               >> 0x20U))
                                    : 0U))),32);
    bufp->fullQData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime),64);
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_out_valid));
    bufp->fullIData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst),32);
    bufp->fullIData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_pc),32);
    bufp->fullCData(oldp+393,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_out_bits_alu_op1),32);
    bufp->fullIData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_out_bits_alu_op2),32);
    bufp->fullIData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___regfile_rs2_data),32);
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_valid));
    bufp->fullIData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst),32);
    bufp->fullIData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_pc),32);
    bufp->fullIData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___alu_instance_io_result),32);
    bufp->fullIData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_rs2_data),32);
    bufp->fullCData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_wb_addr),5);
    bufp->fullCData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state),2);
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp),5);
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_out_valid));
    bufp->fullIData(oldp+408,((0xfffffffeU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___regfile_rs1_data 
                                              + (((- (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                    >> 0x14U))))),32);
    bufp->fullIData(oldp+409,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_pc 
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
    bufp->fullIData(oldp+410,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_pc 
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
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_pc_sel),3);
    bufp->fullIData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___regfile_rs1_data),32);
    bufp->fullCData(oldp+413,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+414,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state),2);
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_eq));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_lt));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_ltu));
    bufp->fullBit(oldp+419,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state))));
    bufp->fullIData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc),32);
    bufp->fullIData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__if_inst_buffer),32);
    bufp->fullCData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state),3);
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_valid));
    bufp->fullIData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_pc),32);
    bufp->fullIData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__delayedData),32);
    bufp->fullIData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr),32);
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_wb_addr),5);
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isStore));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad));
    bufp->fullIData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst),32);
    bufp->fullIData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_rs2_data),32);
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control),3);
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state),3);
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type),3);
    bufp->fullCData(oldp+436,(((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                    : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                        : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                            : 1U))))),8);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___memory_ctl_io_dmem_rw_size),3);
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_wb_addr),5);
    bufp->fullIData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[31]),32);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state),2);
    bufp->fullIData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst),32);
    bufp->fullIData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_pc),32);
    bufp->fullIData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_result),32);
    bufp->fullIData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_dmem_rdata),32);
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+486,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+494,((0xffU & ((IData)(7U) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullCData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+529,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+530,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+531,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+532,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+533,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+534,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+535,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+536,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+537,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullIData(oldp+538,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullIData(oldp+539,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullBit(oldp+540,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+541,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+542,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+543,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+544,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+545,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+546,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+547,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+548,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+549,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+550,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+551,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+552,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+553,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+554,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+555,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+556,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+557,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+558,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+559,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+560,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+561,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+562,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+563,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+564,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+565,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+566,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+567,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+568,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+569,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+570,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+571,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+572,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+573,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+574,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+575,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullIData(oldp+576,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_h41ece7be__0)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_in_r_data
                                : 0U)),32);
    bufp->fullCData(oldp+577,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                         ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp)))),2);
    bufp->fullBit(oldp+578,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))));
    bufp->fullCData(oldp+579,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                         ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp)))),2);
    bufp->fullBit(oldp+580,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_in_r_valid))));
    bufp->fullCData(oldp+581,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp))),2);
    bufp->fullBit(oldp+582,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))));
    bufp->fullCData(oldp+583,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp))),2);
    bufp->fullBit(oldp+584,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hbda8445b__0) 
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
    bufp->fullIData(oldp+585,(vlSelf->ysyxSoCFull__DOT___dq_wire_1),32);
    bufp->fullSData(oldp+586,((0xffffU & vlSelf->ysyxSoCFull__DOT___dq_wire_1)),16);
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__active_bank),4);
    bufp->fullSData(oldp+588,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__active_row[0]),13);
    bufp->fullSData(oldp+589,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__active_row[1]),13);
    bufp->fullSData(oldp+590,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__active_row[2]),13);
    bufp->fullSData(oldp+591,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__active_row[3]),13);
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__burst_length_code),3);
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__cas_latency_code),3);
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__burst_length),4);
    bufp->fullSData(oldp+595,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__masked_dq),16);
    bufp->fullSData(oldp+596,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__dq_out),16);
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__dq_en));
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__state),3);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__delay_counter),4);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__burst_counter),4);
    bufp->fullSData(oldp+601,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__current_col),9);
    bufp->fullSData(oldp+602,((vlSelf->ysyxSoCFull__DOT___dq_wire_1 
                               >> 0x10U)),16);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__active_bank),4);
    bufp->fullSData(oldp+604,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__active_row[0]),13);
    bufp->fullSData(oldp+605,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__active_row[1]),13);
    bufp->fullSData(oldp+606,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__active_row[2]),13);
    bufp->fullSData(oldp+607,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__active_row[3]),13);
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__burst_length_code),3);
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__cas_latency_code),3);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__burst_length),4);
    bufp->fullSData(oldp+611,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__masked_dq),16);
    bufp->fullSData(oldp+612,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__dq_out),16);
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__dq_en));
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__state),3);
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__delay_counter),4);
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__burst_counter),4);
    bufp->fullSData(oldp+617,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__current_col),9);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+620,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cycle_cnt),6);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dout),4);
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dout_en));
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__psram__DOT__nibble_idx),2);
    bufp->fullIData(oldp+625,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_shift),24);
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_mode));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+629,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+630,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+631,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+632,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullIData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+639,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+640,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+643,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+644,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_counter),4);
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_done));
    bufp->fullCData(oldp+648,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                ? (1U & (0x35U >> (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_counter)))))
                                : 0U)),4);
    bufp->fullCData(oldp+649,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                ? 0xfU : 0U)),4);
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+653,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+657,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),3);
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_adr_i),5);
    bufp->fullIData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_dat_i),32);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_sel_i),4);
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_we_i));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_stb_i));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_cyc_i));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_ack_o));
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),4);
    bufp->fullSData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+691,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+692,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+693,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+694,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+695,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+696,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+697,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+701,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+703,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+704,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+706,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+710,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+711,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+713,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+731,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+732,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+733,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+734,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+735,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+736,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+737,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+740,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+741,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+742,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+761,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+768,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+787,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+788,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+789,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+790,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+791,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+810,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+811,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+812,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+813,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+814,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+816,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+835,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+852,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+863,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+866,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullBit(oldp+867,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT____VdfgTmp_hada35e22__0) 
                             & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                 >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))));
    bufp->fullBit(oldp+868,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT____VdfgTmp_h47486cab__0))));
    bufp->fullBit(oldp+869,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT____VdfgTmp_h50b78ab2__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullCData(oldp+870,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__active_bank),4);
    bufp->fullSData(oldp+872,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__active_row[0]),13);
    bufp->fullSData(oldp+873,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__active_row[1]),13);
    bufp->fullSData(oldp+874,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__active_row[2]),13);
    bufp->fullSData(oldp+875,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__active_row[3]),13);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__burst_length_code),3);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__cas_latency_code),3);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__burst_length),4);
    bufp->fullSData(oldp+879,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__dq_out),16);
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__dq_en));
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__state),3);
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__delay_counter),4);
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__burst_counter),4);
    bufp->fullSData(oldp+884,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__current_col),9);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__active_bank),4);
    bufp->fullSData(oldp+886,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__active_row[0]),13);
    bufp->fullSData(oldp+887,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__active_row[1]),13);
    bufp->fullSData(oldp+888,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__active_row[2]),13);
    bufp->fullSData(oldp+889,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__active_row[3]),13);
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__burst_length_code),3);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__cas_latency_code),3);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__burst_length),4);
    bufp->fullSData(oldp+893,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__dq_out),16);
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__dq_en));
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__state),3);
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__delay_counter),4);
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__burst_counter),4);
    bufp->fullSData(oldp+898,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__current_col),9);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+902,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+903,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+904,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+908,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+909,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+910,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullSData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullBit(oldp+918,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__is_active));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__is_read));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__is_write));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__is_load_mode));
    bufp->fullSData(oldp+928,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__write_mask),16);
    bufp->fullSData(oldp+929,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__write_mask),16);
    bufp->fullIData(oldp+930,(vlSelf->ysyxSoCFull__DOT___dq_wire_0),32);
    bufp->fullSData(oldp+931,((0xffffU & vlSelf->ysyxSoCFull__DOT___dq_wire_0)),16);
    bufp->fullSData(oldp+932,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__masked_dq),16);
    bufp->fullSData(oldp+933,((vlSelf->ysyxSoCFull__DOT___dq_wire_0 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+934,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__masked_dq),16);
    bufp->fullIData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+937,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullIData(oldp+938,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+942,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+953,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+954,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+957,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+958,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullBit(oldp+959,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+964,((0x1ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                         >> 2U))),13);
    bufp->fullCData(oldp+965,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                     >> 0xbU))),2);
    bufp->fullSData(oldp+966,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 0xdU))),13);
    bufp->fullIData(oldp+967,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+968,((0x3000000U | (0xffffffU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))),32);
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullBit(oldp+970,(((0x10001000U <= (0x3fffffffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                             & (0x10001fffU >= (0x3fffffffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullCData(oldp+971,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+980,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp),2);
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp),2);
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1011,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1012,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1034,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1035,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1036,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1037,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1038,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1039,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1040,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1041,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1042,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1043,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1044,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1045,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1046,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1047,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1048,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1049,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1050,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1051,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1052,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1053,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1054,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1055,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1056,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1057,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1058,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1059,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1060,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1061,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1062,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1063,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1064,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1065,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_ifu_r_valid));
    bufp->fullIData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_in_r_data),32);
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_in_r_valid));
    bufp->fullIData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data),32);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullCData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1087,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1088,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1090,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1093,(vlSelf->clock));
    bufp->fullBit(oldp+1094,(vlSelf->reset));
    bufp->fullSData(oldp+1095,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1096,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1097,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1098,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1099,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1100,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1101,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1102,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1103,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1104,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1105,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1106,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1107,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1108,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1109,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1110,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1111,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1112,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1113,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1114,(vlSelf->externalPins_uart_tx));
    bufp->fullCData(oldp+1115,(vlSelf->io_wbu_state_debug),2);
    bufp->fullIData(oldp+1116,(vlSelf->io_pc_debug),32);
    bufp->fullIData(oldp+1117,(vlSelf->io_inst_debug),32);
    bufp->fullCData(oldp+1118,(vlSelf->io_ifu_state_debug),3);
    bufp->fullCData(oldp+1119,(vlSelf->io_lsu_state_debug),3);
    bufp->fullBit(oldp+1120,(vlSelf->io_lsu_is_ld_or_st_debug));
    bufp->fullIData(oldp+1121,(vlSelf->io_lsu_reg_inst_debug),32);
    bufp->fullIData(oldp+1122,(vlSelf->io_dmem_wdata_debug),32);
    bufp->fullIData(oldp+1123,(vlSelf->io_dmem_rdata_debug),32);
    bufp->fullIData(oldp+1124,(vlSelf->io_lsu_reg_dmem_addr_debug),32);
    bufp->fullBit(oldp+1125,(vlSelf->io_wb_wen_debug));
    bufp->fullCData(oldp+1126,(vlSelf->io_wb_sel_debug),2);
    bufp->fullIData(oldp+1127,(vlSelf->io_wbu_reg_dmem_rdata_debug),32);
    bufp->fullCData(oldp+1128,(vlSelf->io_Arbiter_state_debug),2);
    bufp->fullIData(oldp+1129,(vlSelf->io_wb_data_debug),32);
    bufp->fullCData(oldp+1130,(vlSelf->io_lsu_memory_ar_size),3);
    bufp->fullBit(oldp+1131,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1132,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1133,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1134,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1135,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1136,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_ack_o)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o))));
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1138,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4)
                                 ? 0U : vlSelf->io_dmem_wdata_debug)),32);
    bufp->fullIData(oldp+1139,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4)
                                          ? 0U : vlSelf->io_dmem_wdata_debug))),32);
    bufp->fullCData(oldp+1140,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
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
    bufp->fullIData(oldp+1141,((((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__rw_address_type)) 
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
    bufp->fullBit(oldp+1142,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1143,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                              & (IData)(vlSelf->clock))));
    bufp->fullBit(oldp+1144,(((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                              | (IData)(vlSelf->reset))));
    bufp->fullBit(oldp+1145,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1148,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1150,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1151,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1153,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullBit(oldp+1154,(vlSelf->ysyxSoCFull__DOT__sdram_select));
    bufp->fullBit(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic_sdram_cas_1));
    bufp->fullBit(oldp+1156,(vlSelf->ysyxSoCFull__DOT___asic_sdram_clk_1));
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT___asic_sdram_cke_1));
    bufp->fullBit(oldp+1158,(vlSelf->ysyxSoCFull__DOT___asic_sdram_cs_1));
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT___asic_sdram_ras_1));
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT___asic_sdram_cas_1));
    bufp->fullBit(oldp+1161,(vlSelf->ysyxSoCFull__DOT___asic_sdram_we_1));
    bufp->fullSData(oldp+1162,(vlSelf->ysyxSoCFull__DOT___asic_sdram_a_1),13);
    bufp->fullCData(oldp+1163,(vlSelf->ysyxSoCFull__DOT___asic_sdram_ba_1),2);
    bufp->fullCData(oldp+1164,(vlSelf->ysyxSoCFull__DOT___asic_sdram_dqm_1),4);
    bufp->fullCData(oldp+1165,(1U),3);
    bufp->fullBit(oldp+1166,(0U));
    bufp->fullBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1176,(0U),4);
    bufp->fullCData(oldp+1177,(0U),8);
    bufp->fullCData(oldp+1178,(1U),2);
    bufp->fullBit(oldp+1179,(1U));
    bufp->fullIData(oldp+1180,(0U),32);
    bufp->fullCData(oldp+1181,(0U),3);
    bufp->fullCData(oldp+1182,(0U),2);
    bufp->fullIData(oldp+1183,(5U),32);
    bufp->fullIData(oldp+1184,(0x20U),32);
    bufp->fullCData(oldp+1185,(2U),2);
    bufp->fullCData(oldp+1186,(0x35U),8);
    bufp->fullCData(oldp+1187,(4U),3);
    bufp->fullBit(oldp+1188,(0U));
    bufp->fullBit(oldp+1189,(1U));
    bufp->fullCData(oldp+1190,(0x15U),8);
    bufp->fullCData(oldp+1191,(0xebU),8);
    bufp->fullCData(oldp+1192,(0x38U),8);
    bufp->fullIData(oldp+1193,(0x64U),32);
    bufp->fullIData(oldp+1194,(0x18U),32);
    bufp->fullIData(oldp+1195,(9U),32);
    bufp->fullIData(oldp+1196,(2U),32);
    bufp->fullIData(oldp+1197,(4U),32);
    bufp->fullIData(oldp+1198,(0xdU),32);
    bufp->fullIData(oldp+1199,(0x2000U),32);
    bufp->fullIData(oldp+1200,(0x2710U),32);
    bufp->fullIData(oldp+1201,(0x30cU),32);
    bufp->fullCData(oldp+1202,(7U),4);
    bufp->fullCData(oldp+1203,(3U),4);
    bufp->fullCData(oldp+1204,(5U),4);
    bufp->fullCData(oldp+1205,(4U),4);
    bufp->fullCData(oldp+1206,(6U),4);
    bufp->fullCData(oldp+1207,(2U),4);
    bufp->fullCData(oldp+1208,(1U),4);
    bufp->fullSData(oldp+1209,(0x20U),13);
    bufp->fullCData(oldp+1210,(8U),4);
    bufp->fullIData(oldp+1211,(0xaU),32);
    bufp->fullIData(oldp+1212,(6U),32);
    bufp->fullIData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1214,(0x11U),32);
    bufp->fullIData(oldp+1215,(0x30000000U),32);
    bufp->fullIData(oldp+1216,(0x3fffffffU),32);
    bufp->fullIData(oldp+1217,(0x10001000U),32);
    bufp->fullIData(oldp+1218,(0x10001fffU),32);
    bufp->fullIData(oldp+1219,(8U),32);
    bufp->fullBit(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+1221,(0xdU),4);
    bufp->fullCData(oldp+1222,(0xeU),4);
    bufp->fullCData(oldp+1223,(0xfU),4);
    bufp->fullIData(oldp+1224,(1U),32);
    bufp->fullCData(oldp+1225,(9U),4);
    bufp->fullCData(oldp+1226,(0xaU),4);
    bufp->fullIData(oldp+1227,(0xbU),32);
    bufp->fullIData(oldp+1228,(0x10U),32);
    bufp->fullCData(oldp+1229,(2U),3);
    bufp->fullCData(oldp+1230,(3U),3);
    bufp->fullCData(oldp+1231,(5U),3);
    bufp->fullIData(oldp+1232,(0U),32);
    bufp->fullIData(oldp+1233,(1U),32);
    bufp->fullIData(oldp+1234,(2U),32);
    bufp->fullCData(oldp+1235,((3U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_dqm_1))),2);
    bufp->fullIData(oldp+1236,(3U),32);
    bufp->fullCData(oldp+1237,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_dqm_1) 
                                      >> 2U))),2);
}
