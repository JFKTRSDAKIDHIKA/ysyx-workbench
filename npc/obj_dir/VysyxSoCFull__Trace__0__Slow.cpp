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
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBus(c+1083,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1084,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1085,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1086,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1087,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1088,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1089,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1090,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1091,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1092,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1093,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1094,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1095,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1096,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1097,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1098,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1099,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1100,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1101,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1102,"externalPins_uart_tx", false,-1);
    tracep->declBus(c+1103,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+1104,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+1105,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1106,"io_ifu_state_debug", false,-1, 2,0);
    tracep->declBus(c+1107,"io_lsu_state_debug", false,-1, 2,0);
    tracep->declBit(c+1108,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+1109,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1110,"io_dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+1111,"io_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1112,"io_lsu_reg_dmem_addr_debug", false,-1, 31,0);
    tracep->declBit(c+1113,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+1114,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+1115,"io_wbu_reg_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1116,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->declBus(c+1117,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBus(c+1118,"io_lsu_memory_ar_size", false,-1, 2,0);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBus(c+1083,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1084,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1085,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1086,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1087,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1088,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1089,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1090,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1091,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1092,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1093,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1094,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1095,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1096,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1097,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1098,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1099,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1100,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1101,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1102,"externalPins_uart_tx", false,-1);
    tracep->declBus(c+1103,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+1104,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+1105,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1106,"io_ifu_state_debug", false,-1, 2,0);
    tracep->declBus(c+1107,"io_lsu_state_debug", false,-1, 2,0);
    tracep->declBit(c+1108,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+1109,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1110,"io_dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+1111,"io_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1112,"io_lsu_reg_dmem_addr_debug", false,-1, 31,0);
    tracep->declBit(c+1113,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+1114,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+1115,"io_wbu_reg_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1116,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->declBus(c+1117,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBus(c+1118,"io_lsu_memory_ar_size", false,-1, 2,0);
    tracep->declBit(c+921,"sdram_select", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+585,"spi_sck", false,-1);
    tracep->declBus(c+586,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+900,"spi_mosi", false,-1);
    tracep->declBit(c+1119,"spi_miso", false,-1);
    tracep->declBit(c+1101,"uart_rx", false,-1);
    tracep->declBit(c+1102,"uart_tx", false,-1);
    tracep->declBit(c+1,"psram_sck", false,-1);
    tracep->declBit(c+2,"psram_ce_n", false,-1);
    tracep->declBus(c+1120,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1121,"sdram_clk", false,-1);
    tracep->declBit(c+901,"sdram_cke", false,-1);
    tracep->declBit(c+587,"sdram_cs", false,-1);
    tracep->declBit(c+588,"sdram_ras", false,-1);
    tracep->declBit(c+589,"sdram_cas", false,-1);
    tracep->declBit(c+590,"sdram_we", false,-1);
    tracep->declBus(c+902,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+903,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+591,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+916,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+921,"sdram_select", false,-1);
    tracep->declBus(c+1083,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1084,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1085,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1086,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1087,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1088,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1089,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1090,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1091,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1092,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1093,"ps2_clk", false,-1);
    tracep->declBit(c+1094,"ps2_data", false,-1);
    tracep->declBus(c+1095,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1096,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1097,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1098,"vga_hsync", false,-1);
    tracep->declBit(c+1099,"vga_vsync", false,-1);
    tracep->declBit(c+1100,"vga_valid", false,-1);
    tracep->declBus(c+1103,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+1104,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+1105,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1106,"io_ifu_state_debug", false,-1, 2,0);
    tracep->declBus(c+1107,"io_lsu_state_debug", false,-1, 2,0);
    tracep->declBit(c+1108,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+1109,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1110,"io_dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+1111,"io_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1112,"io_lsu_reg_dmem_addr_debug", false,-1, 31,0);
    tracep->declBit(c+1113,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+1114,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+1115,"io_wbu_reg_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1116,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->declBus(c+1117,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBus(c+1118,"io_lsu_memory_ar_size", false,-1, 2,0);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBus(c+922,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+12,"in_psel", false,-1);
    tracep->declBit(c+13,"in_penable", false,-1);
    tracep->declBus(c+1144,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+14,"in_pwrite", false,-1);
    tracep->declBus(c+891,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+961,"in_pready", false,-1);
    tracep->declBus(c+962,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+923,"in_pslverr", false,-1);
    tracep->declBus(c+922,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+12,"out_psel", false,-1);
    tracep->declBit(c+13,"out_penable", false,-1);
    tracep->declBus(c+1144,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+14,"out_pwrite", false,-1);
    tracep->declBus(c+891,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+961,"out_pready", false,-1);
    tracep->declBus(c+962,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+923,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+12,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+13,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+14,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+922,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1144,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+891,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+961,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+923,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+962,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+521,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+522,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+14,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+922,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1144,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+891,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+592,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1145,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+593,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+523,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+524,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+14,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+924,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1144,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+891,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1146,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1147,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1148,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+525,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+526,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+14,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+925,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1144,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+891,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1150,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1151,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+527,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+528,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+14,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+925,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1144,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+891,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1152,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1153,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1154,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+926,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+529,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+14,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+922,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1144,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+891,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1122,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1145,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+16,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+927,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+928,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+14,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+925,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1144,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+891,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+929,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1145,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1123,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+930,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+931,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+14,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+924,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1144,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+891,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1124,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1145,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+594,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+932,"sel_0", false,-1);
    tracep->declBit(c+933,"sel_1", false,-1);
    tracep->declBit(c+934,"sel_2", false,-1);
    tracep->declBit(c+935,"sel_3", false,-1);
    tracep->declBit(c+936,"sel_4", false,-1);
    tracep->declBit(c+937,"sel_5", false,-1);
    tracep->declBit(c+938,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+17,"auto_in_awready", false,-1);
    tracep->declBit(c+18,"auto_in_awvalid", false,-1);
    tracep->declBus(c+19,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+20,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+21,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+17,"auto_in_wready", false,-1);
    tracep->declBit(c+22,"auto_in_wvalid", false,-1);
    tracep->declBus(c+23,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+24,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+963,"auto_in_bready", false,-1);
    tracep->declBit(c+964,"auto_in_bvalid", false,-1);
    tracep->declBus(c+25,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+939,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+26,"auto_in_arready", false,-1);
    tracep->declBit(c+27,"auto_in_arvalid", false,-1);
    tracep->declBus(c+28,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+29,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+30,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+965,"auto_in_rready", false,-1);
    tracep->declBit(c+966,"auto_in_rvalid", false,-1);
    tracep->declBus(c+31,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+530,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+939,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+12,"auto_out_psel", false,-1);
    tracep->declBit(c+13,"auto_out_penable", false,-1);
    tracep->declBit(c+14,"auto_out_pwrite", false,-1);
    tracep->declBus(c+922,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+891,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+961,"auto_out_pready", false,-1);
    tracep->declBit(c+923,"auto_out_pslverr", false,-1);
    tracep->declBus(c+962,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+13,"nodeOut_penable", false,-1);
    tracep->declBus(c+32,"state", false,-1, 1,0);
    tracep->declBit(c+26,"accept_read", false,-1);
    tracep->declBit(c+17,"accept_write", false,-1);
    tracep->declBit(c+33,"is_write_r", false,-1);
    tracep->declBit(c+14,"is_write", false,-1);
    tracep->declBus(c+31,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+25,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+34,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+35,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+36,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+37,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+940,"resp", false,-1, 1,0);
    tracep->declBus(c+38,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+939,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+966,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+39,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+964,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+40,"auto_in_awready", false,-1);
    tracep->declBit(c+41,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1155,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+42,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1156,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+43,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1157,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+44,"auto_in_wready", false,-1);
    tracep->declBit(c+41,"auto_in_wvalid", false,-1);
    tracep->declBus(c+45,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+46,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+47,"auto_in_wlast", false,-1);
    tracep->declBit(c+48,"auto_in_bready", false,-1);
    tracep->declBit(c+967,"auto_in_bvalid", false,-1);
    tracep->declBus(c+968,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+969,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+49,"auto_in_arready", false,-1);
    tracep->declBit(c+50,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1155,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1156,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+52,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1157,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+53,"auto_in_rready", false,-1);
    tracep->declBit(c+970,"auto_in_rvalid", false,-1);
    tracep->declBus(c+971,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+531,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+972,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+532,"auto_in_rlast", false,-1);
    tracep->declBit(c+973,"auto_out_awready", false,-1);
    tracep->declBit(c+54,"auto_out_awvalid", false,-1);
    tracep->declBus(c+19,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+20,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+21,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+55,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+974,"auto_out_wready", false,-1);
    tracep->declBit(c+56,"auto_out_wvalid", false,-1);
    tracep->declBus(c+23,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+24,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+57,"auto_out_wlast", false,-1);
    tracep->declBit(c+975,"auto_out_bready", false,-1);
    tracep->declBit(c+976,"auto_out_bvalid", false,-1);
    tracep->declBus(c+968,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+977,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+978,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+979,"auto_out_arready", false,-1);
    tracep->declBit(c+58,"auto_out_arvalid", false,-1);
    tracep->declBus(c+28,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+29,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+30,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+59,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+53,"auto_out_rready", false,-1);
    tracep->declBit(c+970,"auto_out_rvalid", false,-1);
    tracep->declBus(c+971,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+531,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+972,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+533,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+980,"auto_out_rlast", false,-1);
    tracep->declBit(c+56,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+60,"w_idle", false,-1);
    tracep->declBit(c+981,"in_awready", false,-1);
    tracep->declBit(c+61,"busy", false,-1);
    tracep->declBus(c+62,"r_addr", false,-1, 31,0);
    tracep->declBus(c+63,"r_len", false,-1, 7,0);
    tracep->declBus(c+64,"len", false,-1, 7,0);
    tracep->declBus(c+65,"addr", false,-1, 31,0);
    tracep->declBit(c+66,"busy_1", false,-1);
    tracep->declBus(c+67,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+68,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+69,"len_1", false,-1, 7,0);
    tracep->declBus(c+70,"addr_1", false,-1, 31,0);
    tracep->declBit(c+71,"wbeats_latched", false,-1);
    tracep->declBit(c+54,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+72,"wbeats_valid", false,-1);
    tracep->declBus(c+73,"w_counter", false,-1, 8,0);
    tracep->declBus(c+74,"w_todo", false,-1, 8,0);
    tracep->declBit(c+57,"w_last", false,-1);
    tracep->declBit(c+975,"nodeOut_bready", false,-1);
    tracep->declBus(c+75,"error_0", false,-1, 1,0);
    tracep->declBus(c+76,"error_1", false,-1, 1,0);
    tracep->declBus(c+77,"error_2", false,-1, 1,0);
    tracep->declBus(c+78,"error_3", false,-1, 1,0);
    tracep->declBus(c+79,"error_4", false,-1, 1,0);
    tracep->declBus(c+80,"error_5", false,-1, 1,0);
    tracep->declBus(c+81,"error_6", false,-1, 1,0);
    tracep->declBus(c+82,"error_7", false,-1, 1,0);
    tracep->declBus(c+83,"error_8", false,-1, 1,0);
    tracep->declBus(c+84,"error_9", false,-1, 1,0);
    tracep->declBus(c+85,"error_10", false,-1, 1,0);
    tracep->declBus(c+86,"error_11", false,-1, 1,0);
    tracep->declBus(c+87,"error_12", false,-1, 1,0);
    tracep->declBus(c+88,"error_13", false,-1, 1,0);
    tracep->declBus(c+89,"error_14", false,-1, 1,0);
    tracep->declBus(c+90,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+49,"io_enq_ready", false,-1);
    tracep->declBit(c+50,"io_enq_valid", false,-1);
    tracep->declBus(c+1155,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+51,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1156,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+52,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1157,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+982,"io_deq_ready", false,-1);
    tracep->declBit(c+58,"io_deq_valid", false,-1);
    tracep->declBus(c+28,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+91,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+92,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+30,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+93,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+94,"ram", false,-1, 48,0);
    tracep->declBit(c+96,"full", false,-1);
    tracep->declBit(c+58,"io_deq_valid_0", false,-1);
    tracep->declBit(c+983,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+40,"io_enq_ready", false,-1);
    tracep->declBit(c+41,"io_enq_valid", false,-1);
    tracep->declBus(c+1155,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+42,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1156,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+43,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1157,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+984,"io_deq_ready", false,-1);
    tracep->declBit(c+97,"io_deq_valid", false,-1);
    tracep->declBus(c+19,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+98,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+99,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+21,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+100,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+101,"ram", false,-1, 48,0);
    tracep->declBit(c+103,"full", false,-1);
    tracep->declBit(c+97,"io_deq_valid_0", false,-1);
    tracep->declBit(c+985,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+44,"io_enq_ready", false,-1);
    tracep->declBit(c+41,"io_enq_valid", false,-1);
    tracep->declBus(c+45,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+46,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+47,"io_enq_bits_last", false,-1);
    tracep->declBit(c+986,"io_deq_ready", false,-1);
    tracep->declBit(c+104,"io_deq_valid", false,-1);
    tracep->declBus(c+23,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+24,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+105,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+106,"ram", false,-1, 36,0);
    tracep->declBit(c+108,"full", false,-1);
    tracep->declBit(c+104,"io_deq_valid_0", false,-1);
    tracep->declBit(c+987,"do_enq", false,-1);
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
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+988,"auto_in_awready", false,-1);
    tracep->declBit(c+109,"auto_in_awvalid", false,-1);
    tracep->declBus(c+19,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+110,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+534,"auto_in_wready", false,-1);
    tracep->declBit(c+111,"auto_in_wvalid", false,-1);
    tracep->declBus(c+23,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+24,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+989,"auto_in_bready", false,-1);
    tracep->declBit(c+112,"auto_in_bvalid", false,-1);
    tracep->declBus(c+113,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+114,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+990,"auto_in_arready", false,-1);
    tracep->declBit(c+115,"auto_in_arvalid", false,-1);
    tracep->declBus(c+28,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+991,"auto_in_rready", false,-1);
    tracep->declBit(c+117,"auto_in_rvalid", false,-1);
    tracep->declBus(c+118,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+119,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+120,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+990,"nodeIn_arready", false,-1);
    tracep->declBit(c+988,"nodeIn_awready", false,-1);
    tracep->declBit(c+121,"w_sel0", false,-1);
    tracep->declBit(c+112,"w_full", false,-1);
    tracep->declBus(c+113,"w_id", false,-1, 3,0);
    tracep->declBit(c+122,"r_sel1", false,-1);
    tracep->declBit(c+123,"w_sel1", false,-1);
    tracep->declBit(c+117,"r_full", false,-1);
    tracep->declBus(c+118,"r_id", false,-1, 3,0);
    tracep->declBit(c+992,"ren", false,-1);
    tracep->declBit(c+124,"rdata_REG", false,-1);
    tracep->declBus(c+125,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+126,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+127,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+128,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+129,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+992,"R0_en", false,-1);
    tracep->declBit(c+1081,"R0_clk", false,-1);
    tracep->declBus(c+130,"R0_data", false,-1, 31,0);
    tracep->declBus(c+131,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+993,"W0_en", false,-1);
    tracep->declBit(c+1081,"W0_clk", false,-1);
    tracep->declBus(c+23,"W0_data", false,-1, 31,0);
    tracep->declBus(c+24,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+40,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+41,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1155,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+42,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1156,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+43,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1157,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+44,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+41,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+46,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+47,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+48,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+967,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+968,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+969,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+49,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+50,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1155,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1156,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+52,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1157,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+53,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+970,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+971,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+531,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+972,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+532,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+40,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+41,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1155,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+42,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1156,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+43,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1157,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+44,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+41,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+46,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+47,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+48,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+967,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+968,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+969,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+49,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+50,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1155,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1156,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+52,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1157,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+53,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+970,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+971,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+531,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+972,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+532,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+994,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+132,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+19,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+20,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+21,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+974,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+56,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+24,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+57,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+975,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+976,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+968,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+977,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+995,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+133,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+28,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+29,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+30,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+53,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+970,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+971,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+531,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+972,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+980,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+988,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+109,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+19,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+110,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+534,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+111,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+24,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+989,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+112,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+113,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+114,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+990,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+115,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+28,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+991,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+117,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+118,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+119,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+120,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+134,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+135,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+136,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+137,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+28,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+138,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+535,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+139,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+140,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+141,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+17,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+18,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+19,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+20,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+21,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+17,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+22,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+24,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+963,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+964,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+25,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+939,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+26,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+27,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+28,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+29,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+30,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+965,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+966,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+530,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+939,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+976,"in_0_bvalid", false,-1);
    tracep->declBit(c+970,"in_0_rvalid", false,-1);
    tracep->declBit(c+996,"in_0_wready", false,-1);
    tracep->declBit(c+997,"in_0_awready", false,-1);
    tracep->declBit(c+995,"in_0_arready", false,-1);
    tracep->declBit(c+994,"anonIn_awready", false,-1);
    tracep->declBit(c+142,"requestARIO_0_0", false,-1);
    tracep->declBit(c+143,"requestARIO_0_1", false,-1);
    tracep->declBit(c+144,"requestARIO_0_2", false,-1);
    tracep->declBit(c+145,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+146,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+147,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+148,"arSel", false,-1, 15,0);
    tracep->declBus(c+149,"awSel", false,-1, 15,0);
    tracep->declBus(c+998,"rSel", false,-1, 15,0);
    tracep->declBus(c+999,"bSel", false,-1, 15,0);
    tracep->declBit(c+150,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+151,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+152,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+153,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+154,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+155,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+156,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+157,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+158,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+159,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+160,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+161,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+162,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+163,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+164,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+165,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+166,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+167,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+168,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+169,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+170,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+171,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+172,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+173,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+174,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+175,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+176,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+177,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+178,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+179,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+180,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+181,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+182,"latched", false,-1);
    tracep->declBit(c+183,"in_0_awvalid", false,-1);
    tracep->declBit(c+184,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+185,"in_0_wvalid", false,-1);
    tracep->declBit(c+186,"idle_3", false,-1);
    tracep->declBit(c+1000,"anyValid", false,-1);
    tracep->declBus(c+1001,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+187,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1002,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1003,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1004,"prefixOR_1", false,-1);
    tracep->declBit(c+1005,"winner_3_1", false,-1);
    tracep->declBit(c+1006,"winner_3_2", false,-1);
    tracep->declBit(c+188,"state_3_0", false,-1);
    tracep->declBit(c+189,"state_3_1", false,-1);
    tracep->declBit(c+190,"state_3_2", false,-1);
    tracep->declBit(c+1007,"muxState_3_0", false,-1);
    tracep->declBit(c+1008,"muxState_3_1", false,-1);
    tracep->declBit(c+1009,"muxState_3_2", false,-1);
    tracep->declBit(c+191,"idle_4", false,-1);
    tracep->declBit(c+1010,"anyValid_1", false,-1);
    tracep->declBus(c+1011,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+192,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1012,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1013,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1014,"winner_4_0", false,-1);
    tracep->declBit(c+1015,"winner_4_2", false,-1);
    tracep->declBit(c+193,"state_4_0", false,-1);
    tracep->declBit(c+194,"state_4_2", false,-1);
    tracep->declBit(c+1016,"muxState_4_0", false,-1);
    tracep->declBit(c+1017,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+195,"io_enq_ready", false,-1);
    tracep->declBit(c+184,"io_enq_valid", false,-1);
    tracep->declBus(c+196,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1018,"io_deq_ready", false,-1);
    tracep->declBit(c+197,"io_deq_valid", false,-1);
    tracep->declBus(c+198,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+199,"wrap", false,-1);
    tracep->declBit(c+200,"wrap_1", false,-1);
    tracep->declBit(c+201,"maybe_full", false,-1);
    tracep->declBit(c+202,"ptr_match", false,-1);
    tracep->declBit(c+203,"empty", false,-1);
    tracep->declBit(c+204,"full", false,-1);
    tracep->declBit(c+197,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1019,"do_deq", false,-1);
    tracep->declBit(c+1020,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+200,"R0_addr", false,-1);
    tracep->declBit(c+1158,"R0_en", false,-1);
    tracep->declBit(c+1081,"R0_clk", false,-1);
    tracep->declBus(c+205,"R0_data", false,-1, 2,0);
    tracep->declBit(c+199,"W0_addr", false,-1);
    tracep->declBit(c+1020,"W0_en", false,-1);
    tracep->declBit(c+1081,"W0_clk", false,-1);
    tracep->declBus(c+196,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+206+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+973,"auto_in_awready", false,-1);
    tracep->declBit(c+54,"auto_in_awvalid", false,-1);
    tracep->declBus(c+19,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+20,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+21,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+55,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+974,"auto_in_wready", false,-1);
    tracep->declBit(c+56,"auto_in_wvalid", false,-1);
    tracep->declBus(c+23,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+24,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+57,"auto_in_wlast", false,-1);
    tracep->declBit(c+975,"auto_in_bready", false,-1);
    tracep->declBit(c+976,"auto_in_bvalid", false,-1);
    tracep->declBus(c+968,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+977,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+978,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+979,"auto_in_arready", false,-1);
    tracep->declBit(c+58,"auto_in_arvalid", false,-1);
    tracep->declBus(c+28,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+29,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+30,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+59,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+53,"auto_in_rready", false,-1);
    tracep->declBit(c+970,"auto_in_rvalid", false,-1);
    tracep->declBus(c+971,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+531,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+972,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+533,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+980,"auto_in_rlast", false,-1);
    tracep->declBit(c+994,"auto_out_awready", false,-1);
    tracep->declBit(c+132,"auto_out_awvalid", false,-1);
    tracep->declBus(c+19,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+20,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+21,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+974,"auto_out_wready", false,-1);
    tracep->declBit(c+56,"auto_out_wvalid", false,-1);
    tracep->declBus(c+23,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+24,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+57,"auto_out_wlast", false,-1);
    tracep->declBit(c+975,"auto_out_bready", false,-1);
    tracep->declBit(c+976,"auto_out_bvalid", false,-1);
    tracep->declBus(c+968,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+977,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+995,"auto_out_arready", false,-1);
    tracep->declBit(c+133,"auto_out_arvalid", false,-1);
    tracep->declBus(c+28,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+29,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+30,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+53,"auto_out_rready", false,-1);
    tracep->declBit(c+970,"auto_out_rvalid", false,-1);
    tracep->declBus(c+971,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+531,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+972,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+980,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+208,"io_enq_ready", false,-1);
    tracep->declBit(c+536,"io_enq_valid", false,-1);
    tracep->declBit(c+59,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1021,"io_deq_ready", false,-1);
    tracep->declBit(c+209,"io_deq_valid", false,-1);
    tracep->declBit(c+210,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->declBit(c+210,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+211,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+212,"io_enq_ready", false,-1);
    tracep->declBit(c+537,"io_enq_valid", false,-1);
    tracep->declBit(c+59,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1022,"io_deq_ready", false,-1);
    tracep->declBit(c+213,"io_deq_valid", false,-1);
    tracep->declBit(c+214,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+213,"full", false,-1);
    tracep->declBit(c+214,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+215,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+216,"io_enq_ready", false,-1);
    tracep->declBit(c+538,"io_enq_valid", false,-1);
    tracep->declBit(c+59,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1023,"io_deq_ready", false,-1);
    tracep->declBit(c+217,"io_deq_valid", false,-1);
    tracep->declBit(c+218,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+217,"full", false,-1);
    tracep->declBit(c+218,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+219,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+220,"io_enq_ready", false,-1);
    tracep->declBit(c+539,"io_enq_valid", false,-1);
    tracep->declBit(c+59,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1024,"io_deq_ready", false,-1);
    tracep->declBit(c+221,"io_deq_valid", false,-1);
    tracep->declBit(c+222,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+221,"full", false,-1);
    tracep->declBit(c+222,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+223,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+224,"io_enq_ready", false,-1);
    tracep->declBit(c+540,"io_enq_valid", false,-1);
    tracep->declBit(c+59,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1025,"io_deq_ready", false,-1);
    tracep->declBit(c+225,"io_deq_valid", false,-1);
    tracep->declBit(c+226,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+225,"full", false,-1);
    tracep->declBit(c+226,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+227,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+228,"io_enq_ready", false,-1);
    tracep->declBit(c+541,"io_enq_valid", false,-1);
    tracep->declBit(c+59,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1026,"io_deq_ready", false,-1);
    tracep->declBit(c+229,"io_deq_valid", false,-1);
    tracep->declBit(c+230,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+229,"full", false,-1);
    tracep->declBit(c+230,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+231,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+232,"io_enq_ready", false,-1);
    tracep->declBit(c+542,"io_enq_valid", false,-1);
    tracep->declBit(c+59,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1027,"io_deq_ready", false,-1);
    tracep->declBit(c+233,"io_deq_valid", false,-1);
    tracep->declBit(c+234,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+233,"full", false,-1);
    tracep->declBit(c+234,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+235,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+236,"io_enq_ready", false,-1);
    tracep->declBit(c+543,"io_enq_valid", false,-1);
    tracep->declBit(c+59,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1028,"io_deq_ready", false,-1);
    tracep->declBit(c+237,"io_deq_valid", false,-1);
    tracep->declBit(c+238,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+237,"full", false,-1);
    tracep->declBit(c+238,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+239,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+240,"io_enq_ready", false,-1);
    tracep->declBit(c+544,"io_enq_valid", false,-1);
    tracep->declBit(c+55,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1029,"io_deq_ready", false,-1);
    tracep->declBit(c+241,"io_deq_valid", false,-1);
    tracep->declBit(c+242,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+241,"full", false,-1);
    tracep->declBit(c+242,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+243,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+244,"io_enq_ready", false,-1);
    tracep->declBit(c+545,"io_enq_valid", false,-1);
    tracep->declBit(c+55,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1030,"io_deq_ready", false,-1);
    tracep->declBit(c+245,"io_deq_valid", false,-1);
    tracep->declBit(c+246,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+245,"full", false,-1);
    tracep->declBit(c+246,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+247,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+248,"io_enq_ready", false,-1);
    tracep->declBit(c+546,"io_enq_valid", false,-1);
    tracep->declBit(c+55,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1031,"io_deq_ready", false,-1);
    tracep->declBit(c+249,"io_deq_valid", false,-1);
    tracep->declBit(c+250,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+249,"full", false,-1);
    tracep->declBit(c+250,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+251,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+252,"io_enq_ready", false,-1);
    tracep->declBit(c+547,"io_enq_valid", false,-1);
    tracep->declBit(c+55,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1032,"io_deq_ready", false,-1);
    tracep->declBit(c+253,"io_deq_valid", false,-1);
    tracep->declBit(c+254,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+253,"full", false,-1);
    tracep->declBit(c+254,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+255,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+256,"io_enq_ready", false,-1);
    tracep->declBit(c+548,"io_enq_valid", false,-1);
    tracep->declBit(c+59,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1033,"io_deq_ready", false,-1);
    tracep->declBit(c+257,"io_deq_valid", false,-1);
    tracep->declBit(c+258,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+257,"full", false,-1);
    tracep->declBit(c+258,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+259,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+260,"io_enq_ready", false,-1);
    tracep->declBit(c+549,"io_enq_valid", false,-1);
    tracep->declBit(c+55,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1034,"io_deq_ready", false,-1);
    tracep->declBit(c+261,"io_deq_valid", false,-1);
    tracep->declBit(c+262,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+261,"full", false,-1);
    tracep->declBit(c+262,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+263,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+264,"io_enq_ready", false,-1);
    tracep->declBit(c+550,"io_enq_valid", false,-1);
    tracep->declBit(c+55,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1035,"io_deq_ready", false,-1);
    tracep->declBit(c+265,"io_deq_valid", false,-1);
    tracep->declBit(c+266,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+265,"full", false,-1);
    tracep->declBit(c+266,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+267,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+268,"io_enq_ready", false,-1);
    tracep->declBit(c+551,"io_enq_valid", false,-1);
    tracep->declBit(c+55,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1036,"io_deq_ready", false,-1);
    tracep->declBit(c+269,"io_deq_valid", false,-1);
    tracep->declBit(c+270,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+269,"full", false,-1);
    tracep->declBit(c+270,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+271,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+272,"io_enq_ready", false,-1);
    tracep->declBit(c+552,"io_enq_valid", false,-1);
    tracep->declBit(c+55,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1037,"io_deq_ready", false,-1);
    tracep->declBit(c+273,"io_deq_valid", false,-1);
    tracep->declBit(c+274,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+273,"full", false,-1);
    tracep->declBit(c+274,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+275,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+276,"io_enq_ready", false,-1);
    tracep->declBit(c+553,"io_enq_valid", false,-1);
    tracep->declBit(c+55,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1038,"io_deq_ready", false,-1);
    tracep->declBit(c+277,"io_deq_valid", false,-1);
    tracep->declBit(c+278,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+277,"full", false,-1);
    tracep->declBit(c+278,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+279,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+280,"io_enq_ready", false,-1);
    tracep->declBit(c+554,"io_enq_valid", false,-1);
    tracep->declBit(c+55,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1039,"io_deq_ready", false,-1);
    tracep->declBit(c+281,"io_deq_valid", false,-1);
    tracep->declBit(c+282,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+281,"full", false,-1);
    tracep->declBit(c+282,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+283,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+284,"io_enq_ready", false,-1);
    tracep->declBit(c+555,"io_enq_valid", false,-1);
    tracep->declBit(c+55,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1040,"io_deq_ready", false,-1);
    tracep->declBit(c+285,"io_deq_valid", false,-1);
    tracep->declBit(c+286,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+285,"full", false,-1);
    tracep->declBit(c+286,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+287,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+288,"io_enq_ready", false,-1);
    tracep->declBit(c+556,"io_enq_valid", false,-1);
    tracep->declBit(c+55,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1041,"io_deq_ready", false,-1);
    tracep->declBit(c+289,"io_deq_valid", false,-1);
    tracep->declBit(c+290,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+289,"full", false,-1);
    tracep->declBit(c+290,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+291,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+292,"io_enq_ready", false,-1);
    tracep->declBit(c+557,"io_enq_valid", false,-1);
    tracep->declBit(c+55,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1042,"io_deq_ready", false,-1);
    tracep->declBit(c+293,"io_deq_valid", false,-1);
    tracep->declBit(c+294,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+293,"full", false,-1);
    tracep->declBit(c+294,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+295,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+296,"io_enq_ready", false,-1);
    tracep->declBit(c+558,"io_enq_valid", false,-1);
    tracep->declBit(c+55,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1043,"io_deq_ready", false,-1);
    tracep->declBit(c+297,"io_deq_valid", false,-1);
    tracep->declBit(c+298,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+297,"full", false,-1);
    tracep->declBit(c+298,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+299,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+300,"io_enq_ready", false,-1);
    tracep->declBit(c+559,"io_enq_valid", false,-1);
    tracep->declBit(c+59,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1044,"io_deq_ready", false,-1);
    tracep->declBit(c+301,"io_deq_valid", false,-1);
    tracep->declBit(c+302,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+301,"full", false,-1);
    tracep->declBit(c+302,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+303,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+304,"io_enq_ready", false,-1);
    tracep->declBit(c+560,"io_enq_valid", false,-1);
    tracep->declBit(c+55,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1045,"io_deq_ready", false,-1);
    tracep->declBit(c+305,"io_deq_valid", false,-1);
    tracep->declBit(c+306,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+305,"full", false,-1);
    tracep->declBit(c+306,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+307,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+308,"io_enq_ready", false,-1);
    tracep->declBit(c+561,"io_enq_valid", false,-1);
    tracep->declBit(c+55,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1046,"io_deq_ready", false,-1);
    tracep->declBit(c+309,"io_deq_valid", false,-1);
    tracep->declBit(c+310,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+309,"full", false,-1);
    tracep->declBit(c+310,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+311,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+312,"io_enq_ready", false,-1);
    tracep->declBit(c+562,"io_enq_valid", false,-1);
    tracep->declBit(c+59,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1047,"io_deq_ready", false,-1);
    tracep->declBit(c+313,"io_deq_valid", false,-1);
    tracep->declBit(c+314,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+313,"full", false,-1);
    tracep->declBit(c+314,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+315,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+316,"io_enq_ready", false,-1);
    tracep->declBit(c+563,"io_enq_valid", false,-1);
    tracep->declBit(c+59,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1048,"io_deq_ready", false,-1);
    tracep->declBit(c+317,"io_deq_valid", false,-1);
    tracep->declBit(c+318,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+317,"full", false,-1);
    tracep->declBit(c+318,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+319,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+320,"io_enq_ready", false,-1);
    tracep->declBit(c+564,"io_enq_valid", false,-1);
    tracep->declBit(c+59,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1049,"io_deq_ready", false,-1);
    tracep->declBit(c+321,"io_deq_valid", false,-1);
    tracep->declBit(c+322,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+321,"full", false,-1);
    tracep->declBit(c+322,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+323,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+324,"io_enq_ready", false,-1);
    tracep->declBit(c+565,"io_enq_valid", false,-1);
    tracep->declBit(c+59,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1050,"io_deq_ready", false,-1);
    tracep->declBit(c+325,"io_deq_valid", false,-1);
    tracep->declBit(c+326,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+325,"full", false,-1);
    tracep->declBit(c+326,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+327,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+328,"io_enq_ready", false,-1);
    tracep->declBit(c+566,"io_enq_valid", false,-1);
    tracep->declBit(c+59,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1051,"io_deq_ready", false,-1);
    tracep->declBit(c+329,"io_deq_valid", false,-1);
    tracep->declBit(c+330,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+329,"full", false,-1);
    tracep->declBit(c+330,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+331,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+332,"io_enq_ready", false,-1);
    tracep->declBit(c+567,"io_enq_valid", false,-1);
    tracep->declBit(c+59,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1052,"io_deq_ready", false,-1);
    tracep->declBit(c+333,"io_deq_valid", false,-1);
    tracep->declBit(c+334,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+333,"full", false,-1);
    tracep->declBit(c+334,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+335,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1125,"reset", false,-1);
    tracep->declBit(c+40,"auto_master_out_awready", false,-1);
    tracep->declBit(c+41,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1155,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+42,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1156,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+43,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1157,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+44,"auto_master_out_wready", false,-1);
    tracep->declBit(c+41,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+45,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+46,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+47,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+48,"auto_master_out_bready", false,-1);
    tracep->declBit(c+967,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+968,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+969,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+49,"auto_master_out_arready", false,-1);
    tracep->declBit(c+50,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1155,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1156,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+52,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1157,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+53,"auto_master_out_rready", false,-1);
    tracep->declBit(c+970,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+971,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+531,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+972,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+532,"auto_master_out_rlast", false,-1);
    tracep->declBus(c+1103,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+1104,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+1105,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1106,"io_ifu_state_debug", false,-1, 2,0);
    tracep->declBus(c+1107,"io_lsu_state_debug", false,-1, 2,0);
    tracep->declBit(c+1108,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+1109,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1110,"io_dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+1111,"io_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1112,"io_lsu_reg_dmem_addr_debug", false,-1, 31,0);
    tracep->declBit(c+1113,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+1114,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+1115,"io_wbu_reg_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1116,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->declBus(c+1117,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBus(c+1118,"io_lsu_memory_ar_size", false,-1, 2,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1125,"reset", false,-1);
    tracep->declBus(c+42,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1156,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+43,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1157,"io_master_awburst", false,-1, 1,0);
    tracep->declBus(c+1155,"io_master_awid", false,-1, 3,0);
    tracep->declBit(c+41,"io_master_awvalid", false,-1);
    tracep->declBit(c+40,"io_master_awready", false,-1);
    tracep->declBus(c+45,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+46,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+47,"io_master_wlast", false,-1);
    tracep->declBit(c+41,"io_master_wvalid", false,-1);
    tracep->declBit(c+44,"io_master_wready", false,-1);
    tracep->declBus(c+968,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+969,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+967,"io_master_bvalid", false,-1);
    tracep->declBit(c+48,"io_master_bready", false,-1);
    tracep->declBus(c+51,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1156,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+52,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1157,"io_master_arburst", false,-1, 1,0);
    tracep->declBus(c+1155,"io_master_arid", false,-1, 3,0);
    tracep->declBit(c+50,"io_master_arvalid", false,-1);
    tracep->declBit(c+49,"io_master_arready", false,-1);
    tracep->declBus(c+971,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+531,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+972,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+532,"io_master_rlast", false,-1);
    tracep->declBit(c+970,"io_master_rvalid", false,-1);
    tracep->declBit(c+53,"io_master_rready", false,-1);
    tracep->declBus(c+1159,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1156,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1160,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1161,"io_slave_awburst", false,-1, 1,0);
    tracep->declBus(c+1155,"io_slave_awid", false,-1, 3,0);
    tracep->declBit(c+1145,"io_slave_awvalid", false,-1);
    tracep->declBit(c+1145,"io_slave_awready", false,-1);
    tracep->declBus(c+1159,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1155,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1145,"io_slave_wlast", false,-1);
    tracep->declBit(c+1145,"io_slave_wvalid", false,-1);
    tracep->declBit(c+1145,"io_slave_wready", false,-1);
    tracep->declBus(c+1155,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1161,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1145,"io_slave_bvalid", false,-1);
    tracep->declBit(c+1145,"io_slave_bready", false,-1);
    tracep->declBus(c+1159,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1156,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1160,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1161,"io_slave_arburst", false,-1, 1,0);
    tracep->declBus(c+1155,"io_slave_arid", false,-1, 3,0);
    tracep->declBit(c+1145,"io_slave_arvalid", false,-1);
    tracep->declBit(c+1145,"io_slave_arready", false,-1);
    tracep->declBus(c+1155,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1159,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1161,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1145,"io_slave_rlast", false,-1);
    tracep->declBit(c+1145,"io_slave_rvalid", false,-1);
    tracep->declBit(c+1145,"io_slave_rready", false,-1);
    tracep->declBit(c+1145,"io_interrupt", false,-1);
    tracep->declBus(c+1104,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+1105,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1106,"io_ifu_state_debug", false,-1, 2,0);
    tracep->declBus(c+1107,"io_lsu_state_debug", false,-1, 2,0);
    tracep->declBit(c+1108,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+1109,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1110,"io_dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+1111,"io_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1112,"io_lsu_reg_dmem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+1118,"io_lsu_memory_ar_size", false,-1, 2,0);
    tracep->declBus(c+1103,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+1117,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBit(c+1113,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+1114,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+1115,"io_wbu_reg_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1116,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1125,"reset", false,-1);
    tracep->declBus(c+336,"io_ifu_ar_addr", false,-1, 31,0);
    tracep->declBit(c+337,"io_ifu_ar_valid", false,-1);
    tracep->declBit(c+338,"io_ifu_ar_ready", false,-1);
    tracep->declBus(c+568,"io_ifu_r_data", false,-1, 31,0);
    tracep->declBit(c+1053,"io_ifu_r_valid", false,-1);
    tracep->declBit(c+339,"io_ifu_r_ready", false,-1);
    tracep->declBus(c+340,"io_lsu_aw_addr", false,-1, 31,0);
    tracep->declBus(c+341,"io_lsu_aw_size", false,-1, 2,0);
    tracep->declBit(c+342,"io_lsu_aw_valid", false,-1);
    tracep->declBit(c+343,"io_lsu_aw_ready", false,-1);
    tracep->declBus(c+1126,"io_lsu_w_data", false,-1, 31,0);
    tracep->declBus(c+344,"io_lsu_w_strb", false,-1, 3,0);
    tracep->declBit(c+345,"io_lsu_w_last", false,-1);
    tracep->declBit(c+342,"io_lsu_w_valid", false,-1);
    tracep->declBit(c+346,"io_lsu_w_ready", false,-1);
    tracep->declBus(c+569,"io_lsu_b_resp", false,-1, 1,0);
    tracep->declBit(c+570,"io_lsu_b_valid", false,-1);
    tracep->declBit(c+347,"io_lsu_b_ready", false,-1);
    tracep->declBus(c+348,"io_lsu_ar_addr", false,-1, 31,0);
    tracep->declBus(c+1118,"io_lsu_ar_size", false,-1, 2,0);
    tracep->declBit(c+349,"io_lsu_ar_valid", false,-1);
    tracep->declBit(c+350,"io_lsu_ar_ready", false,-1);
    tracep->declBus(c+1111,"io_lsu_r_data", false,-1, 31,0);
    tracep->declBus(c+571,"io_lsu_r_resp", false,-1, 1,0);
    tracep->declBit(c+1054,"io_lsu_r_valid", false,-1);
    tracep->declBit(c+351,"io_lsu_r_ready", false,-1);
    tracep->declBus(c+352,"io_axi_aw_addr", false,-1, 31,0);
    tracep->declBus(c+353,"io_axi_aw_size", false,-1, 2,0);
    tracep->declBit(c+354,"io_axi_aw_valid", false,-1);
    tracep->declBit(c+355,"io_axi_aw_ready", false,-1);
    tracep->declBus(c+1127,"io_axi_w_data", false,-1, 31,0);
    tracep->declBus(c+356,"io_axi_w_strb", false,-1, 3,0);
    tracep->declBit(c+357,"io_axi_w_last", false,-1);
    tracep->declBit(c+354,"io_axi_w_valid", false,-1);
    tracep->declBit(c+358,"io_axi_w_ready", false,-1);
    tracep->declBus(c+572,"io_axi_b_resp", false,-1, 1,0);
    tracep->declBit(c+573,"io_axi_b_valid", false,-1);
    tracep->declBit(c+359,"io_axi_b_ready", false,-1);
    tracep->declBus(c+360,"io_axi_ar_addr", false,-1, 31,0);
    tracep->declBus(c+1128,"io_axi_ar_size", false,-1, 2,0);
    tracep->declBit(c+361,"io_axi_ar_valid", false,-1);
    tracep->declBit(c+362,"io_axi_ar_ready", false,-1);
    tracep->declBus(c+1055,"io_axi_r_data", false,-1, 31,0);
    tracep->declBus(c+574,"io_axi_r_resp", false,-1, 1,0);
    tracep->declBit(c+1056,"io_axi_r_valid", false,-1);
    tracep->declBit(c+363,"io_axi_r_ready", false,-1);
    tracep->declBit(c+364,"io_ifu_handshake_valid", false,-1);
    tracep->declBit(c+365,"io_ifu_handshake_ready", false,-1);
    tracep->declBit(c+366,"io_lsu_handshake_valid", false,-1);
    tracep->declBit(c+365,"io_lsu_handshake_ready", false,-1);
    tracep->declBus(c+1116,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->declBit(c+367,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1125,"reset", false,-1);
    tracep->declBus(c+368,"io_in_ar_addr", false,-1, 31,0);
    tracep->declBus(c+369,"io_in_r_data", false,-1, 31,0);
    tracep->declQuad(c+370,"mtime", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1125,"reset", false,-1);
    tracep->declBit(c+372,"io_in_ready", false,-1);
    tracep->declBit(c+373,"io_in_valid", false,-1);
    tracep->declBus(c+374,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+375,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+376,"io_in_bits_wb_addr", false,-1, 4,0);
    tracep->declBus(c+377,"io_in_bits_alu_op1", false,-1, 31,0);
    tracep->declBus(c+378,"io_in_bits_alu_op2", false,-1, 31,0);
    tracep->declBus(c+379,"io_in_bits_rs2_data", false,-1, 31,0);
    tracep->declBit(c+380,"io_out_ready", false,-1);
    tracep->declBit(c+381,"io_out_valid", false,-1);
    tracep->declBus(c+382,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+383,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+384,"io_out_bits_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+384,"io_out_bits_result", false,-1, 31,0);
    tracep->declBus(c+385,"io_out_bits_rs2_data", false,-1, 31,0);
    tracep->declBus(c+386,"io_out_bits_wb_addr", false,-1, 4,0);
    tracep->declBus(c+387,"state", false,-1, 1,0);
    tracep->declBit(c+372,"io_in_ready_0", false,-1);
    tracep->declBus(c+382,"exu_reg_inst", false,-1, 31,0);
    tracep->declBus(c+383,"exu_reg_pc", false,-1, 31,0);
    tracep->declBus(c+385,"exu_reg_rs2_data", false,-1, 31,0);
    tracep->declBus(c+386,"exu_reg_wb_addr", false,-1, 4,0);
    tracep->declBus(c+388,"casez_tmp", false,-1, 4,0);
    tracep->declBus(c+389,"casez_tmp_0", false,-1, 4,0);
    tracep->declBus(c+390,"alu_op", false,-1, 4,0);
    tracep->pushNamePrefix("alu_instance ");
    tracep->declBus(c+377,"io_a", false,-1, 31,0);
    tracep->declBus(c+378,"io_b", false,-1, 31,0);
    tracep->declBus(c+390,"io_aluOp", false,-1, 4,0);
    tracep->declBus(c+384,"io_result", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1125,"reset", false,-1);
    tracep->declBit(c+391,"io_in_ready", false,-1);
    tracep->declBit(c+392,"io_in_valid", false,-1);
    tracep->declBus(c+1105,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+1104,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+372,"io_out_ready", false,-1);
    tracep->declBit(c+373,"io_out_valid", false,-1);
    tracep->declBus(c+374,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+375,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+376,"io_out_bits_wb_addr", false,-1, 4,0);
    tracep->declBus(c+377,"io_out_bits_alu_op1", false,-1, 31,0);
    tracep->declBus(c+378,"io_out_bits_alu_op2", false,-1, 31,0);
    tracep->declBus(c+379,"io_out_bits_rs2_data", false,-1, 31,0);
    tracep->declBus(c+393,"io_jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+394,"io_br_target", false,-1, 31,0);
    tracep->declBus(c+395,"io_jmp_target", false,-1, 31,0);
    tracep->declBus(c+396,"io_pc_sel", false,-1, 2,0);
    tracep->declBus(c+397,"io_rs1_data", false,-1, 31,0);
    tracep->declBus(c+379,"io_rs2_data", false,-1, 31,0);
    tracep->declBus(c+398,"io_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+399,"io_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+374,"idu_reg_inst", false,-1, 31,0);
    tracep->declBus(c+375,"idu_reg_pc", false,-1, 31,0);
    tracep->declBus(c+400,"state", false,-1, 1,0);
    tracep->declBit(c+391,"io_in_ready_0", false,-1);
    tracep->declBit(c+401,"casez_tmp", false,-1);
    tracep->declBit(c+402,"br_eq", false,-1);
    tracep->declBit(c+403,"br_lt", false,-1);
    tracep->declBit(c+404,"br_ltu", false,-1);
    tracep->declBus(c+378,"casez_tmp_0", false,-1, 31,0);
    tracep->declBus(c+405,"alu_op2Sel", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1125,"reset", false,-1);
    tracep->declBit(c+391,"io_out_ready", false,-1);
    tracep->declBit(c+392,"io_out_valid", false,-1);
    tracep->declBus(c+1105,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+1104,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+396,"io_pc_sel", false,-1, 2,0);
    tracep->declBus(c+393,"io_jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+394,"io_br_target", false,-1, 31,0);
    tracep->declBus(c+395,"io_jmp_target", false,-1, 31,0);
    tracep->declBit(c+406,"io_pc_wen", false,-1);
    tracep->declBit(c+575,"io_lsu_axi_resp_err", false,-1);
    tracep->declBus(c+336,"io_memory_ar_addr", false,-1, 31,0);
    tracep->declBit(c+337,"io_memory_ar_valid", false,-1);
    tracep->declBit(c+338,"io_memory_ar_ready", false,-1);
    tracep->declBus(c+568,"io_memory_r_data", false,-1, 31,0);
    tracep->declBit(c+1053,"io_memory_r_valid", false,-1);
    tracep->declBit(c+339,"io_memory_r_ready", false,-1);
    tracep->declBit(c+364,"io_arbiter_valid", false,-1);
    tracep->declBit(c+365,"io_arbiter_ready", false,-1);
    tracep->declBus(c+1104,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+1105,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1106,"io_ifu_state_debug", false,-1, 2,0);
    tracep->declBus(c+407,"pc", false,-1, 31,0);
    tracep->declBus(c+408,"if_inst_buffer", false,-1, 31,0);
    tracep->declBus(c+409,"state", false,-1, 2,0);
    tracep->declBus(c+1105,"io_inst_debug_0", false,-1, 31,0);
    tracep->pushNamePrefix("ebreakHandler ");
    tracep->declBus(c+1105,"inst", false,-1, 31,0);
    tracep->declBit(c+575,"lsu_axi_resp_err", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1125,"reset", false,-1);
    tracep->declBit(c+380,"io_in_ready", false,-1);
    tracep->declBit(c+381,"io_in_valid", false,-1);
    tracep->declBus(c+382,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+383,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+384,"io_in_bits_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+384,"io_in_bits_result", false,-1, 31,0);
    tracep->declBus(c+385,"io_in_bits_rs2_data", false,-1, 31,0);
    tracep->declBus(c+386,"io_in_bits_wb_addr", false,-1, 4,0);
    tracep->declBit(c+410,"io_out_ready", false,-1);
    tracep->declBit(c+411,"io_out_valid", false,-1);
    tracep->declBus(c+1109,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+412,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+413,"io_out_bits_dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+414,"io_out_bits_result", false,-1, 31,0);
    tracep->declBus(c+415,"io_out_bits_wb_addr", false,-1, 4,0);
    tracep->declBit(c+575,"io_lsu_axi_resp_err", false,-1);
    tracep->declBus(c+340,"io_memory_aw_addr", false,-1, 31,0);
    tracep->declBus(c+341,"io_memory_aw_size", false,-1, 2,0);
    tracep->declBit(c+342,"io_memory_aw_valid", false,-1);
    tracep->declBit(c+343,"io_memory_aw_ready", false,-1);
    tracep->declBus(c+1126,"io_memory_w_data", false,-1, 31,0);
    tracep->declBus(c+344,"io_memory_w_strb", false,-1, 3,0);
    tracep->declBit(c+345,"io_memory_w_last", false,-1);
    tracep->declBit(c+342,"io_memory_w_valid", false,-1);
    tracep->declBit(c+346,"io_memory_w_ready", false,-1);
    tracep->declBus(c+569,"io_memory_b_resp", false,-1, 1,0);
    tracep->declBit(c+570,"io_memory_b_valid", false,-1);
    tracep->declBit(c+347,"io_memory_b_ready", false,-1);
    tracep->declBus(c+348,"io_memory_ar_addr", false,-1, 31,0);
    tracep->declBus(c+1118,"io_memory_ar_size", false,-1, 2,0);
    tracep->declBit(c+349,"io_memory_ar_valid", false,-1);
    tracep->declBit(c+350,"io_memory_ar_ready", false,-1);
    tracep->declBus(c+1111,"io_memory_r_data", false,-1, 31,0);
    tracep->declBus(c+571,"io_memory_r_resp", false,-1, 1,0);
    tracep->declBit(c+1054,"io_memory_r_valid", false,-1);
    tracep->declBit(c+351,"io_memory_r_ready", false,-1);
    tracep->declBit(c+366,"io_arbiter_valid", false,-1);
    tracep->declBit(c+365,"io_arbiter_ready", false,-1);
    tracep->declBus(c+1107,"io_lsu_state_debug", false,-1, 2,0);
    tracep->declBit(c+1108,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+1109,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+1110,"io_dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+1111,"io_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+1112,"io_lsu_reg_dmem_addr_debug", false,-1, 31,0);
    tracep->declBit(c+416,"isStore", false,-1);
    tracep->declBit(c+417,"isLoad", false,-1);
    tracep->declBus(c+418,"lsu_reg_inst", false,-1, 31,0);
    tracep->declBus(c+412,"lsu_reg_pc", false,-1, 31,0);
    tracep->declBus(c+414,"lsu_reg_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+414,"lsu_reg_result", false,-1, 31,0);
    tracep->declBus(c+419,"lsu_reg_rs2_data", false,-1, 31,0);
    tracep->declBus(c+415,"lsu_reg_wb_addr", false,-1, 4,0);
    tracep->declBus(c+420,"mem_access_control", false,-1, 2,0);
    tracep->declBus(c+413,"delayedData", false,-1, 31,0);
    tracep->declBus(c+421,"state", false,-1, 2,0);
    tracep->declBit(c+380,"io_in_ready_0", false,-1);
    tracep->declBit(c+342,"io_memory_w_valid_0", false,-1);
    tracep->pushNamePrefix("alignment_network ");
    tracep->declBus(c+1111,"io_data_in", false,-1, 31,0);
    tracep->declBus(c+414,"io_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+420,"io_control", false,-1, 2,0);
    tracep->declBus(c+1129,"io_data_out", false,-1, 31,0);
    tracep->declBus(c+422,"rw_address_type", false,-1, 2,0);
    tracep->declBus(c+1130,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+1057,"shifted_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memory_ctl ");
    tracep->declBus(c+414,"io_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+419,"io_dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+420,"io_control", false,-1, 2,0);
    tracep->declBus(c+423,"io_wmask", false,-1, 7,0);
    tracep->declBus(c+1110,"io_dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+424,"io_dmem_rw_size", false,-1, 2,0);
    tracep->declBus(c+425,"base_mask", false,-1, 7,0);
    tracep->declBus(c+422,"rw_address_type", false,-1, 2,0);
    tracep->declArray(c+426,"casez_tmp", false,-1, 94,0);
    tracep->declBus(c+424,"casez_tmp_0", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+1162,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1163,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1081,"clk", false,-1);
    tracep->declBus(c+1117,"rd_data", false,-1, 31,0);
    tracep->declBus(c+429,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1113,"wen", false,-1);
    tracep->declBus(c+398,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+399,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+397,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+379,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+430+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1125,"reset", false,-1);
    tracep->declBit(c+410,"io_in_ready", false,-1);
    tracep->declBit(c+411,"io_in_valid", false,-1);
    tracep->declBus(c+1109,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+412,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+413,"io_in_bits_dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+414,"io_in_bits_result", false,-1, 31,0);
    tracep->declBus(c+415,"io_in_bits_wb_addr", false,-1, 4,0);
    tracep->declBus(c+1117,"io_wb_data", false,-1, 31,0);
    tracep->declBus(c+429,"io_wb_addr", false,-1, 4,0);
    tracep->declBit(c+1113,"io_wb_wen", false,-1);
    tracep->declBit(c+406,"io_pc_wen", false,-1);
    tracep->declBus(c+1103,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+1117,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBit(c+1113,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+1114,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+1115,"io_wbu_reg_dmem_rdata_debug", false,-1, 31,0);
    tracep->declBus(c+462,"state", false,-1, 1,0);
    tracep->declBit(c+410,"io_in_ready_0", false,-1);
    tracep->declBus(c+463,"casez_tmp", false,-1, 1,0);
    tracep->declBus(c+464,"wbu_reg_inst", false,-1, 31,0);
    tracep->declBus(c+465,"wbu_reg_pc", false,-1, 31,0);
    tracep->declBus(c+466,"wbu_reg_result", false,-1, 31,0);
    tracep->declBus(c+467,"wbu_reg_dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+429,"wbu_reg_wb_addr", false,-1, 4,0);
    tracep->declBus(c+1114,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+1131,"casez_tmp_0", false,-1, 31,0);
    tracep->declBit(c+1113,"io_wb_wen_0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("xbar ");
    tracep->declBus(c+352,"io_in_aw_addr", false,-1, 31,0);
    tracep->declBus(c+353,"io_in_aw_size", false,-1, 2,0);
    tracep->declBit(c+354,"io_in_aw_valid", false,-1);
    tracep->declBit(c+355,"io_in_aw_ready", false,-1);
    tracep->declBus(c+1127,"io_in_w_data", false,-1, 31,0);
    tracep->declBus(c+356,"io_in_w_strb", false,-1, 3,0);
    tracep->declBit(c+357,"io_in_w_last", false,-1);
    tracep->declBit(c+354,"io_in_w_valid", false,-1);
    tracep->declBit(c+358,"io_in_w_ready", false,-1);
    tracep->declBus(c+572,"io_in_b_resp", false,-1, 1,0);
    tracep->declBit(c+573,"io_in_b_valid", false,-1);
    tracep->declBit(c+359,"io_in_b_ready", false,-1);
    tracep->declBus(c+360,"io_in_ar_addr", false,-1, 31,0);
    tracep->declBus(c+1128,"io_in_ar_size", false,-1, 2,0);
    tracep->declBit(c+361,"io_in_ar_valid", false,-1);
    tracep->declBit(c+362,"io_in_ar_ready", false,-1);
    tracep->declBus(c+1055,"io_in_r_data", false,-1, 31,0);
    tracep->declBus(c+574,"io_in_r_resp", false,-1, 1,0);
    tracep->declBit(c+1056,"io_in_r_valid", false,-1);
    tracep->declBit(c+363,"io_in_r_ready", false,-1);
    tracep->declBus(c+42,"io_soc_aw_addr", false,-1, 31,0);
    tracep->declBus(c+43,"io_soc_aw_size", false,-1, 2,0);
    tracep->declBit(c+41,"io_soc_aw_valid", false,-1);
    tracep->declBit(c+40,"io_soc_aw_ready", false,-1);
    tracep->declBus(c+45,"io_soc_w_data", false,-1, 31,0);
    tracep->declBus(c+46,"io_soc_w_strb", false,-1, 3,0);
    tracep->declBit(c+47,"io_soc_w_last", false,-1);
    tracep->declBit(c+41,"io_soc_w_valid", false,-1);
    tracep->declBit(c+44,"io_soc_w_ready", false,-1);
    tracep->declBus(c+969,"io_soc_b_resp", false,-1, 1,0);
    tracep->declBit(c+967,"io_soc_b_valid", false,-1);
    tracep->declBit(c+48,"io_soc_b_ready", false,-1);
    tracep->declBus(c+51,"io_soc_ar_addr", false,-1, 31,0);
    tracep->declBus(c+52,"io_soc_ar_size", false,-1, 2,0);
    tracep->declBit(c+50,"io_soc_ar_valid", false,-1);
    tracep->declBit(c+49,"io_soc_ar_ready", false,-1);
    tracep->declBus(c+531,"io_soc_r_data", false,-1, 31,0);
    tracep->declBus(c+972,"io_soc_r_resp", false,-1, 1,0);
    tracep->declBit(c+970,"io_soc_r_valid", false,-1);
    tracep->declBit(c+53,"io_soc_r_ready", false,-1);
    tracep->declBus(c+368,"io_clint_ar_addr", false,-1, 31,0);
    tracep->declBus(c+369,"io_clint_r_data", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"io_d", false,-1);
    tracep->declBit(c+468,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"io_d", false,-1);
    tracep->declBit(c+468,"io_q", false,-1);
    tracep->declBit(c+468,"sync_0", false,-1);
    tracep->declBit(c+469,"sync_1", false,-1);
    tracep->declBit(c+470,"sync_2", false,-1);
    tracep->declBit(c+471,"sync_3", false,-1);
    tracep->declBit(c+472,"sync_4", false,-1);
    tracep->declBit(c+473,"sync_5", false,-1);
    tracep->declBit(c+474,"sync_6", false,-1);
    tracep->declBit(c+475,"sync_7", false,-1);
    tracep->declBit(c+476,"sync_8", false,-1);
    tracep->declBit(c+477,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+527,"auto_in_psel", false,-1);
    tracep->declBit(c+528,"auto_in_penable", false,-1);
    tracep->declBit(c+14,"auto_in_pwrite", false,-1);
    tracep->declBus(c+925,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1144,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+891,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1152,"auto_in_pready", false,-1);
    tracep->declBit(c+1153,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1154,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1083,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1084,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1085,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1086,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1087,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1088,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1089,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1090,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1091,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1092,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBus(c+941,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+527,"in_psel", false,-1);
    tracep->declBit(c+528,"in_penable", false,-1);
    tracep->declBus(c+1144,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+14,"in_pwrite", false,-1);
    tracep->declBus(c+891,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1152,"in_pready", false,-1);
    tracep->declBus(c+1154,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1153,"in_pslverr", false,-1);
    tracep->declBus(c+1083,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1084,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1085,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1086,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1087,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1088,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1089,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1090,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1091,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1092,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+525,"auto_in_psel", false,-1);
    tracep->declBit(c+526,"auto_in_penable", false,-1);
    tracep->declBit(c+14,"auto_in_pwrite", false,-1);
    tracep->declBus(c+925,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1144,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+891,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"auto_in_pready", false,-1);
    tracep->declBit(c+1150,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1151,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1093,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1094,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBus(c+941,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+525,"in_psel", false,-1);
    tracep->declBit(c+526,"in_penable", false,-1);
    tracep->declBus(c+1144,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+14,"in_pwrite", false,-1);
    tracep->declBus(c+891,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"in_pready", false,-1);
    tracep->declBus(c+1151,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1150,"in_pslverr", false,-1);
    tracep->declBit(c+1093,"ps2_clk", false,-1);
    tracep->declBit(c+1094,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+134,"auto_in_awvalid", false,-1);
    tracep->declBit(c+135,"auto_in_wvalid", false,-1);
    tracep->declBit(c+136,"auto_in_arready", false,-1);
    tracep->declBit(c+137,"auto_in_arvalid", false,-1);
    tracep->declBus(c+28,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+138,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+535,"auto_in_rready", false,-1);
    tracep->declBit(c+139,"auto_in_rvalid", false,-1);
    tracep->declBus(c+140,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+141,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+139,"state", false,-1);
    tracep->declBus(c+141,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+140,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+478,"raddr", false,-1, 31,0);
    tracep->declBit(c+479,"ren", false,-1);
    tracep->declBus(c+480,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+926,"auto_in_psel", false,-1);
    tracep->declBit(c+529,"auto_in_penable", false,-1);
    tracep->declBit(c+14,"auto_in_pwrite", false,-1);
    tracep->declBus(c+922,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1144,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+891,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1122,"auto_in_pready", false,-1);
    tracep->declBit(c+1145,"auto_in_pslverr", false,-1);
    tracep->declBus(c+16,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+2,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1120,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBus(c+922,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+926,"in_psel", false,-1);
    tracep->declBit(c+529,"in_penable", false,-1);
    tracep->declBus(c+1144,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+14,"in_pwrite", false,-1);
    tracep->declBus(c+891,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1122,"in_pready", false,-1);
    tracep->declBus(c+16,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1145,"in_pslverr", false,-1);
    tracep->declBit(c+1,"qspi_sck", false,-1);
    tracep->declBit(c+2,"qspi_ce_n", false,-1);
    tracep->declBus(c+1120,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1120,"din", false,-1, 3,0);
    tracep->declBus(c+1058,"dout", false,-1, 3,0);
    tracep->declBus(c+1059,"douten", false,-1, 3,0);
    tracep->declBit(c+1132,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1081,"clk_i", false,-1);
    tracep->declBit(c+1082,"rst_i", false,-1);
    tracep->declBus(c+922,"adr_i", false,-1, 31,0);
    tracep->declBus(c+891,"dat_i", false,-1, 31,0);
    tracep->declBus(c+16,"dat_o", false,-1, 31,0);
    tracep->declBus(c+15,"sel_i", false,-1, 3,0);
    tracep->declBit(c+926,"cyc_i", false,-1);
    tracep->declBit(c+926,"stb_i", false,-1);
    tracep->declBit(c+1132,"ack_o", false,-1);
    tracep->declBit(c+14,"we_i", false,-1);
    tracep->declBit(c+1,"sck", false,-1);
    tracep->declBit(c+2,"ce_n", false,-1);
    tracep->declBus(c+1120,"din", false,-1, 3,0);
    tracep->declBus(c+1058,"dout", false,-1, 3,0);
    tracep->declBus(c+1059,"douten", false,-1, 3,0);
    tracep->declBus(c+1161,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1157,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1164,"ST_INIT", false,-1, 1,0);
    tracep->declBit(c+595,"mr_sck", false,-1);
    tracep->declBit(c+596,"mr_ce_n", false,-1);
    tracep->declBus(c+1120,"mr_din", false,-1, 3,0);
    tracep->declBus(c+597,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+598,"mr_doe", false,-1);
    tracep->declBit(c+599,"mw_sck", false,-1);
    tracep->declBit(c+600,"mw_ce_n", false,-1);
    tracep->declBus(c+1120,"mw_din", false,-1, 3,0);
    tracep->declBus(c+897,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+601,"mw_doe", false,-1);
    tracep->declBit(c+1060,"mr_rd", false,-1);
    tracep->declBit(c+602,"mr_done", false,-1);
    tracep->declBit(c+1061,"mw_wr", false,-1);
    tracep->declBit(c+898,"mw_done", false,-1);
    tracep->declBit(c+926,"wb_valid", false,-1);
    tracep->declBit(c+942,"wb_we", false,-1);
    tracep->declBit(c+943,"wb_re", false,-1);
    tracep->declBus(c+603,"state", false,-1, 1,0);
    tracep->declBus(c+1062,"nstate", false,-1, 1,0);
    tracep->declBus(c+604,"init_counter", false,-1, 3,0);
    tracep->declBit(c+605,"init_done", false,-1);
    tracep->declBus(c+1165,"CMD_QPI", false,-1, 7,0);
    tracep->declBit(c+1133,"init_sck", false,-1);
    tracep->declBit(c+1134,"init_ce_n", false,-1);
    tracep->declBus(c+606,"init_dout", false,-1, 3,0);
    tracep->declBus(c+607,"init_douten", false,-1, 3,0);
    tracep->declBus(c+481,"size", false,-1, 2,0);
    tracep->declBus(c+892,"byte0", false,-1, 7,0);
    tracep->declBus(c+893,"byte1", false,-1, 7,0);
    tracep->declBus(c+894,"byte2", false,-1, 7,0);
    tracep->declBus(c+895,"byte3", false,-1, 7,0);
    tracep->declBus(c+896,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1081,"clk", false,-1);
    tracep->declBit(c+1135,"rst_n", false,-1);
    tracep->declBus(c+944,"addr", false,-1, 23,0);
    tracep->declBit(c+1060,"rd", false,-1);
    tracep->declBus(c+1166,"size", false,-1, 2,0);
    tracep->declBit(c+602,"done", false,-1);
    tracep->declBus(c+16,"line", false,-1, 31,0);
    tracep->declBit(c+595,"sck", false,-1);
    tracep->declBit(c+596,"ce_n", false,-1);
    tracep->declBus(c+1120,"din", false,-1, 3,0);
    tracep->declBus(c+597,"dout", false,-1, 3,0);
    tracep->declBit(c+598,"douten", false,-1);
    tracep->declBus(c+1167,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1168,"READ", false,-1, 0,0);
    tracep->declBus(c+1169,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+608,"state", false,-1);
    tracep->declBit(c+1063,"nstate", false,-1);
    tracep->declBus(c+609,"counter", false,-1, 7,0);
    tracep->declBus(c+610,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+482+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1170,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+611,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1081,"clk", false,-1);
    tracep->declBit(c+1135,"rst_n", false,-1);
    tracep->declBus(c+945,"addr", false,-1, 23,0);
    tracep->declBus(c+896,"line", false,-1, 31,0);
    tracep->declBus(c+481,"size", false,-1, 2,0);
    tracep->declBit(c+1061,"wr", false,-1);
    tracep->declBit(c+898,"done", false,-1);
    tracep->declBit(c+599,"sck", false,-1);
    tracep->declBit(c+600,"ce_n", false,-1);
    tracep->declBus(c+1120,"din", false,-1, 3,0);
    tracep->declBus(c+897,"dout", false,-1, 3,0);
    tracep->declBit(c+601,"douten", false,-1);
    tracep->declBus(c+1167,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1168,"WRITE", false,-1, 0,0);
    tracep->declBus(c+486,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+612,"state", false,-1);
    tracep->declBit(c+1064,"nstate", false,-1);
    tracep->declBus(c+613,"counter", false,-1, 7,0);
    tracep->declBus(c+614,"saddr", false,-1, 23,0);
    tracep->declBus(c+1171,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+521,"auto_in_psel", false,-1);
    tracep->declBit(c+522,"auto_in_penable", false,-1);
    tracep->declBit(c+14,"auto_in_pwrite", false,-1);
    tracep->declBus(c+922,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1144,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+891,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+592,"auto_in_pready", false,-1);
    tracep->declBit(c+1145,"auto_in_pslverr", false,-1);
    tracep->declBus(c+593,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1121,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+901,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+587,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+588,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+589,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+590,"sdram_bundle_we", false,-1);
    tracep->declBus(c+902,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+903,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+591,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+916,"sdram_bundle_dq", false,-1, 31,0);
    tracep->declBit(c+921,"sdram_select", false,-1);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBus(c+922,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+521,"in_psel", false,-1);
    tracep->declBit(c+522,"in_penable", false,-1);
    tracep->declBus(c+1144,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+14,"in_pwrite", false,-1);
    tracep->declBus(c+891,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+592,"in_pready", false,-1);
    tracep->declBus(c+593,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1145,"in_pslverr", false,-1);
    tracep->declBit(c+1121,"sdram_clk", false,-1);
    tracep->declBit(c+901,"sdram_cke", false,-1);
    tracep->declBit(c+587,"sdram_cs", false,-1);
    tracep->declBit(c+588,"sdram_ras", false,-1);
    tracep->declBit(c+589,"sdram_cas", false,-1);
    tracep->declBit(c+590,"sdram_we", false,-1);
    tracep->declBus(c+902,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+903,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+591,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+916,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+921,"slave_sdram_select", false,-1);
    tracep->declBit(c+615,"sdram_dout_en", false,-1);
    tracep->declBus(c+616,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+487,"state", false,-1, 1,0);
    tracep->declBit(c+904,"req_accept", false,-1);
    tracep->declBit(c+946,"is_read", false,-1);
    tracep->declBit(c+947,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1081,"clk_i", false,-1);
    tracep->declBit(c+1082,"rst_i", false,-1);
    tracep->declBus(c+948,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+946,"inport_rd_i", false,-1);
    tracep->declBus(c+1156,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+922,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+891,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+916,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+904,"inport_accept_o", false,-1);
    tracep->declBit(c+592,"inport_ack_o", false,-1);
    tracep->declBit(c+1145,"inport_error_o", false,-1);
    tracep->declBus(c+593,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1121,"sdram_clk_o", false,-1);
    tracep->declBit(c+901,"sdram_cke_o", false,-1);
    tracep->declBit(c+587,"sdram_cs_o", false,-1);
    tracep->declBit(c+588,"sdram_ras_o", false,-1);
    tracep->declBit(c+589,"sdram_cas_o", false,-1);
    tracep->declBit(c+590,"sdram_we_o", false,-1);
    tracep->declBus(c+591,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+902,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+903,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+616,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+615,"sdram_data_out_en_o", false,-1);
    tracep->declBit(c+921,"slave_sdram_select_o", false,-1);
    tracep->declBus(c+1172,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1173,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1174,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1175,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1175,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1176,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1176,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1177,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1178,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1179,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1180,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1176,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1181,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1182,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1183,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1184,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1185,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1186,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1187,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1155,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1188,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1176,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1155,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1187,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1186,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1182,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1184,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1183,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1185,"STATE_WRITE", false,-1, 3,0);
    tracep->declBus(c+1181,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1189,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1190,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1190,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1163,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1190,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1175,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1175,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1191,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+922,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+948,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+946,"ram_rd_w", false,-1);
    tracep->declBit(c+904,"ram_accept_w", false,-1);
    tracep->declBus(c+891,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+593,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+592,"ram_ack_w", false,-1);
    tracep->declBit(c+949,"ram_req_w", false,-1);
    tracep->declBus(c+617,"command_q", false,-1, 3,0);
    tracep->declBus(c+902,"addr_q", false,-1, 12,0);
    tracep->declBus(c+616,"data_q", false,-1, 31,0);
    tracep->declBit(c+618,"data_rd_en_q", false,-1);
    tracep->declBus(c+591,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+901,"cke_q", false,-1);
    tracep->declBus(c+903,"bank_q", false,-1, 1,0);
    tracep->declBus(c+1192,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+619,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+916,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+620,"refresh_q", false,-1);
    tracep->declBus(c+621,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+622+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+905,"state_q", false,-1, 3,0);
    tracep->declBus(c+1065,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1066,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+626,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+627,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+950,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+951,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+952,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1176,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+628,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1067,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1193,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+906,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+629,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+593,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+630,"idx", false,-1, 31,0);
    tracep->declBus(c+631,"rd_q", false,-1, 2,0);
    tracep->declBit(c+592,"ack_q", false,-1);
    tracep->declArray(c+907,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+930,"auto_in_psel", false,-1);
    tracep->declBit(c+931,"auto_in_penable", false,-1);
    tracep->declBit(c+14,"auto_in_pwrite", false,-1);
    tracep->declBus(c+924,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1144,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+891,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1124,"auto_in_pready", false,-1);
    tracep->declBit(c+1145,"auto_in_pslverr", false,-1);
    tracep->declBus(c+594,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+585,"spi_bundle_sck", false,-1);
    tracep->declBus(c+586,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+900,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1119,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1194,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1195,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1196,"spi_master_base", false,-1, 31,0);
    tracep->declBus(c+1197,"spi_master_end", false,-1, 31,0);
    tracep->declBus(c+1198,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBus(c+953,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+930,"in_psel", false,-1);
    tracep->declBit(c+931,"in_penable", false,-1);
    tracep->declBus(c+1144,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+14,"in_pwrite", false,-1);
    tracep->declBus(c+891,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1124,"in_pready", false,-1);
    tracep->declBus(c+594,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1145,"in_pslverr", false,-1);
    tracep->declBit(c+585,"spi_sck", false,-1);
    tracep->declBus(c+586,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+900,"spi_mosi", false,-1);
    tracep->declBit(c+1119,"spi_miso", false,-1);
    tracep->declBit(c+1199,"spi_irq_out", false,-1);
    tracep->declBus(c+1068,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1069,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+594,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1070,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1071,"wb_we_i", false,-1);
    tracep->declBit(c+1072,"wb_stb_i", false,-1);
    tracep->declBit(c+1073,"wb_cyc_i", false,-1);
    tracep->declBit(c+632,"wb_ack_o", false,-1);
    tracep->declBit(c+1145,"wb_err_o", false,-1);
    tracep->declBit(c+633,"wb_int_o", false,-1);
    tracep->declBus(c+634,"flash_wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+635,"flash_wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+636,"flash_wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+637,"flash_wb_we_i", false,-1);
    tracep->declBit(c+638,"flash_wb_stb_i", false,-1);
    tracep->declBit(c+639,"flash_wb_cyc_i", false,-1);
    tracep->declBit(c+640,"flash_wb_ack_o", false,-1);
    tracep->declBus(c+1155,"IDLE", false,-1, 3,0);
    tracep->declBus(c+1187,"SEND_CMD", false,-1, 3,0);
    tracep->declBus(c+1186,"SET_DIVIDER", false,-1, 3,0);
    tracep->declBus(c+1182,"SET_SS", false,-1, 3,0);
    tracep->declBus(c+1184,"GO_BUSY", false,-1, 3,0);
    tracep->declBus(c+1183,"WAIT_COMPLETE", false,-1, 3,0);
    tracep->declBus(c+1200,"CLEAR_SS", false,-1, 3,0);
    tracep->declBus(c+1201,"READ_DATA", false,-1, 3,0);
    tracep->declBus(c+1202,"DONE", false,-1, 3,0);
    tracep->declBus(c+641,"state", false,-1, 3,0);
    tracep->declBus(c+954,"flash_cmd", false,-1, 31,0);
    tracep->declBit(c+955,"is_flash_access", false,-1);
    tracep->declBit(c+956,"is_spi_master_access", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1203,"Tp", false,-1, 31,0);
    tracep->declBit(c+1081,"wb_clk_i", false,-1);
    tracep->declBit(c+1082,"wb_rst_i", false,-1);
    tracep->declBus(c+1068,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1069,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+594,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1070,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1071,"wb_we_i", false,-1);
    tracep->declBit(c+1072,"wb_stb_i", false,-1);
    tracep->declBit(c+1073,"wb_cyc_i", false,-1);
    tracep->declBit(c+632,"wb_ack_o", false,-1);
    tracep->declBit(c+1145,"wb_err_o", false,-1);
    tracep->declBit(c+633,"wb_int_o", false,-1);
    tracep->declBus(c+586,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+585,"sclk_pad_o", false,-1);
    tracep->declBit(c+900,"mosi_pad_o", false,-1);
    tracep->declBit(c+1119,"miso_pad_i", false,-1);
    tracep->declBus(c+642,"divider", false,-1, 15,0);
    tracep->declBus(c+643,"ctrl", false,-1, 13,0);
    tracep->declBus(c+644,"ss", false,-1, 7,0);
    tracep->declBus(c+1074,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+645,"rx", false,-1, 127,0);
    tracep->declBit(c+649,"rx_negedge", false,-1);
    tracep->declBit(c+650,"tx_negedge", false,-1);
    tracep->declBus(c+651,"char_len", false,-1, 6,0);
    tracep->declBit(c+652,"go", false,-1);
    tracep->declBit(c+653,"lsb", false,-1);
    tracep->declBit(c+654,"ie", false,-1);
    tracep->declBit(c+655,"ass", false,-1);
    tracep->declBit(c+1075,"spi_divider_sel", false,-1);
    tracep->declBit(c+1076,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1077,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1078,"spi_ss_sel", false,-1);
    tracep->declBit(c+656,"tip", false,-1);
    tracep->declBit(c+657,"pos_edge", false,-1);
    tracep->declBit(c+658,"neg_edge", false,-1);
    tracep->declBit(c+659,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1203,"Tp", false,-1, 31,0);
    tracep->declBit(c+1081,"clk_in", false,-1);
    tracep->declBit(c+1082,"rst", false,-1);
    tracep->declBit(c+656,"enable", false,-1);
    tracep->declBit(c+652,"go", false,-1);
    tracep->declBit(c+659,"last_clk", false,-1);
    tracep->declBus(c+642,"divider", false,-1, 15,0);
    tracep->declBit(c+585,"clk_out", false,-1);
    tracep->declBit(c+657,"pos_edge", false,-1);
    tracep->declBit(c+658,"neg_edge", false,-1);
    tracep->declBus(c+660,"cnt", false,-1, 15,0);
    tracep->declBit(c+661,"cnt_zero", false,-1);
    tracep->declBit(c+662,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1203,"Tp", false,-1, 31,0);
    tracep->declBit(c+1081,"clk", false,-1);
    tracep->declBit(c+1082,"rst", false,-1);
    tracep->declBus(c+1079,"latch", false,-1, 3,0);
    tracep->declBus(c+1070,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+651,"len", false,-1, 6,0);
    tracep->declBit(c+653,"lsb", false,-1);
    tracep->declBit(c+652,"go", false,-1);
    tracep->declBit(c+657,"pos_edge", false,-1);
    tracep->declBit(c+658,"neg_edge", false,-1);
    tracep->declBit(c+649,"rx_negedge", false,-1);
    tracep->declBit(c+650,"tx_negedge", false,-1);
    tracep->declBit(c+656,"tip", false,-1);
    tracep->declBit(c+659,"last", false,-1);
    tracep->declBus(c+1069,"p_in", false,-1, 31,0);
    tracep->declArray(c+645,"p_out", false,-1, 127,0);
    tracep->declBit(c+585,"s_clk", false,-1);
    tracep->declBit(c+1119,"s_in", false,-1);
    tracep->declBit(c+900,"s_out", false,-1);
    tracep->declBus(c+663,"cnt", false,-1, 7,0);
    tracep->declArray(c+645,"data", false,-1, 127,0);
    tracep->declBus(c+664,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+665,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+666,"rx_clk", false,-1);
    tracep->declBit(c+667,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+927,"auto_in_psel", false,-1);
    tracep->declBit(c+928,"auto_in_penable", false,-1);
    tracep->declBit(c+14,"auto_in_pwrite", false,-1);
    tracep->declBus(c+925,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1144,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+891,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+929,"auto_in_pready", false,-1);
    tracep->declBit(c+1145,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1123,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1101,"uart_rx", false,-1);
    tracep->declBit(c+1102,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+927,"in_psel", false,-1);
    tracep->declBit(c+928,"in_penable", false,-1);
    tracep->declBus(c+1144,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+929,"in_pready", false,-1);
    tracep->declBit(c+1145,"in_pslverr", false,-1);
    tracep->declBus(c+941,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+14,"in_pwrite", false,-1);
    tracep->declBus(c+1123,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+891,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1101,"uart_rx", false,-1);
    tracep->declBit(c+1102,"uart_tx", false,-1);
    tracep->declBit(c+668,"rtsn", false,-1);
    tracep->declBit(c+1145,"ctsn", false,-1);
    tracep->declBit(c+669,"dtr_pad_o", false,-1);
    tracep->declBit(c+1145,"dsr_pad_i", false,-1);
    tracep->declBit(c+1145,"ri_pad_i", false,-1);
    tracep->declBit(c+1145,"dcd_pad_i", false,-1);
    tracep->declBit(c+670,"interrupt", false,-1);
    tracep->declBit(c+1136,"reg_we", false,-1);
    tracep->declBit(c+1137,"reg_re", false,-1);
    tracep->declBus(c+957,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+958,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+488,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1080,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+671,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1081,"clk", false,-1);
    tracep->declBit(c+1082,"wb_rst_i", false,-1);
    tracep->declBus(c+957,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+959,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1080,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1136,"wb_we_i", false,-1);
    tracep->declBit(c+1137,"wb_re_i", false,-1);
    tracep->declBit(c+1102,"stx_pad_o", false,-1);
    tracep->declBit(c+1101,"srx_pad_i", false,-1);
    tracep->declBus(c+1189,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+671,"rts_pad_o", false,-1);
    tracep->declBit(c+669,"dtr_pad_o", false,-1);
    tracep->declBit(c+670,"int_o", false,-1);
    tracep->declBit(c+672,"enable", false,-1);
    tracep->declBit(c+673,"srx_pad", false,-1);
    tracep->declBus(c+674,"ier", false,-1, 3,0);
    tracep->declBus(c+675,"iir", false,-1, 3,0);
    tracep->declBus(c+676,"fcr", false,-1, 1,0);
    tracep->declBus(c+677,"mcr", false,-1, 4,0);
    tracep->declBus(c+678,"lcr", false,-1, 7,0);
    tracep->declBus(c+679,"msr", false,-1, 7,0);
    tracep->declBus(c+680,"dl", false,-1, 15,0);
    tracep->declBus(c+681,"scratch", false,-1, 7,0);
    tracep->declBit(c+682,"start_dlc", false,-1);
    tracep->declBit(c+683,"lsr_mask_d", false,-1);
    tracep->declBit(c+684,"msi_reset", false,-1);
    tracep->declBus(c+685,"dlc", false,-1, 15,0);
    tracep->declBus(c+686,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+687,"rx_reset", false,-1);
    tracep->declBit(c+688,"tx_reset", false,-1);
    tracep->declBit(c+689,"dlab", false,-1);
    tracep->declBit(c+1158,"cts_pad_i", false,-1);
    tracep->declBit(c+1145,"dsr_pad_i", false,-1);
    tracep->declBit(c+1145,"ri_pad_i", false,-1);
    tracep->declBit(c+1145,"dcd_pad_i", false,-1);
    tracep->declBit(c+690,"loopback", false,-1);
    tracep->declBit(c+1145,"cts", false,-1);
    tracep->declBit(c+1158,"dsr", false,-1);
    tracep->declBit(c+1158,"ri", false,-1);
    tracep->declBit(c+1158,"dcd", false,-1);
    tracep->declBit(c+691,"cts_c", false,-1);
    tracep->declBit(c+692,"dsr_c", false,-1);
    tracep->declBit(c+693,"ri_c", false,-1);
    tracep->declBit(c+694,"dcd_c", false,-1);
    tracep->declBus(c+695,"lsr", false,-1, 7,0);
    tracep->declBit(c+696,"lsr0", false,-1);
    tracep->declBit(c+697,"lsr1", false,-1);
    tracep->declBit(c+698,"lsr2", false,-1);
    tracep->declBit(c+699,"lsr3", false,-1);
    tracep->declBit(c+700,"lsr4", false,-1);
    tracep->declBit(c+701,"lsr5", false,-1);
    tracep->declBit(c+702,"lsr6", false,-1);
    tracep->declBit(c+703,"lsr7", false,-1);
    tracep->declBit(c+704,"lsr0r", false,-1);
    tracep->declBit(c+705,"lsr1r", false,-1);
    tracep->declBit(c+706,"lsr2r", false,-1);
    tracep->declBit(c+707,"lsr3r", false,-1);
    tracep->declBit(c+708,"lsr4r", false,-1);
    tracep->declBit(c+709,"lsr5r", false,-1);
    tracep->declBit(c+710,"lsr6r", false,-1);
    tracep->declBit(c+711,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+712,"rls_int", false,-1);
    tracep->declBit(c+713,"rda_int", false,-1);
    tracep->declBit(c+714,"ti_int", false,-1);
    tracep->declBit(c+715,"thre_int", false,-1);
    tracep->declBit(c+716,"ms_int", false,-1);
    tracep->declBit(c+717,"tf_push", false,-1);
    tracep->declBit(c+718,"rf_pop", false,-1);
    tracep->declBus(c+1138,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+719,"rf_error_bit", false,-1);
    tracep->declBit(c+697,"rf_overrun", false,-1);
    tracep->declBit(c+720,"rf_push_pulse", false,-1);
    tracep->declBus(c+721,"rf_count", false,-1, 4,0);
    tracep->declBus(c+722,"tf_count", false,-1, 4,0);
    tracep->declBus(c+723,"tstate", false,-1, 2,0);
    tracep->declBus(c+724,"rstate", false,-1, 3,0);
    tracep->declBus(c+725,"counter_t", false,-1, 9,0);
    tracep->declBit(c+726,"thre_set_en", false,-1);
    tracep->declBus(c+727,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+728,"block_value", false,-1, 7,0);
    tracep->declBit(c+729,"serial_out", false,-1);
    tracep->declBit(c+730,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+731,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+732,"lsr0_d", false,-1);
    tracep->declBit(c+733,"lsr1_d", false,-1);
    tracep->declBit(c+734,"lsr2_d", false,-1);
    tracep->declBit(c+735,"lsr3_d", false,-1);
    tracep->declBit(c+736,"lsr4_d", false,-1);
    tracep->declBit(c+737,"lsr5_d", false,-1);
    tracep->declBit(c+738,"lsr6_d", false,-1);
    tracep->declBit(c+739,"lsr7_d", false,-1);
    tracep->declBit(c+740,"rls_int_d", false,-1);
    tracep->declBit(c+741,"thre_int_d", false,-1);
    tracep->declBit(c+742,"ms_int_d", false,-1);
    tracep->declBit(c+743,"ti_int_d", false,-1);
    tracep->declBit(c+744,"rda_int_d", false,-1);
    tracep->declBit(c+745,"rls_int_rise", false,-1);
    tracep->declBit(c+746,"thre_int_rise", false,-1);
    tracep->declBit(c+747,"ms_int_rise", false,-1);
    tracep->declBit(c+748,"ti_int_rise", false,-1);
    tracep->declBit(c+749,"rda_int_rise", false,-1);
    tracep->declBit(c+750,"rls_int_pnd", false,-1);
    tracep->declBit(c+751,"rda_int_pnd", false,-1);
    tracep->declBit(c+752,"thre_int_pnd", false,-1);
    tracep->declBit(c+753,"ms_int_pnd", false,-1);
    tracep->declBit(c+754,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1203,"Tp", false,-1, 31,0);
    tracep->declBus(c+1203,"width", false,-1, 31,0);
    tracep->declBus(c+1168,"init_value", false,-1, 0,0);
    tracep->declBit(c+1082,"rst_i", false,-1);
    tracep->declBit(c+1081,"clk_i", false,-1);
    tracep->declBit(c+1145,"stage1_rst_i", false,-1);
    tracep->declBit(c+1158,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1101,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+673,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+755,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1081,"clk", false,-1);
    tracep->declBit(c+1082,"wb_rst_i", false,-1);
    tracep->declBus(c+678,"lcr", false,-1, 7,0);
    tracep->declBit(c+718,"rf_pop", false,-1);
    tracep->declBit(c+730,"srx_pad_i", false,-1);
    tracep->declBit(c+672,"enable", false,-1);
    tracep->declBit(c+687,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+725,"counter_t", false,-1, 9,0);
    tracep->declBus(c+721,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1138,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+697,"rf_overrun", false,-1);
    tracep->declBit(c+719,"rf_error_bit", false,-1);
    tracep->declBus(c+724,"rstate", false,-1, 3,0);
    tracep->declBit(c+720,"rf_push_pulse", false,-1);
    tracep->declBus(c+756,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+757,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+758,"rshift", false,-1, 7,0);
    tracep->declBit(c+759,"rparity", false,-1);
    tracep->declBit(c+760,"rparity_error", false,-1);
    tracep->declBit(c+761,"rframing_error", false,-1);
    tracep->declBit(c+762,"rbit_in", false,-1);
    tracep->declBit(c+763,"rparity_xor", false,-1);
    tracep->declBus(c+764,"counter_b", false,-1, 7,0);
    tracep->declBit(c+765,"rf_push_q", false,-1);
    tracep->declBus(c+766,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+767,"rf_push", false,-1);
    tracep->declBit(c+768,"break_error", false,-1);
    tracep->declBit(c+769,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+770,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+771,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+772,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1155,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1187,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1186,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1182,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1184,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1183,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1185,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1181,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1189,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1204,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1205,"sr_push", false,-1, 3,0);
    tracep->declBus(c+773,"toc_value", false,-1, 9,0);
    tracep->declBus(c+774,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1206,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1207,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1176,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1162,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1081,"clk", false,-1);
    tracep->declBit(c+1082,"wb_rst_i", false,-1);
    tracep->declBit(c+720,"push", false,-1);
    tracep->declBit(c+718,"pop", false,-1);
    tracep->declBus(c+766,"data_in", false,-1, 10,0);
    tracep->declBit(c+687,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1138,"data_out", false,-1, 10,0);
    tracep->declBit(c+697,"overrun", false,-1);
    tracep->declBus(c+721,"count", false,-1, 4,0);
    tracep->declBit(c+719,"error_bit", false,-1);
    tracep->declBus(c+1139,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+775+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+791,"top", false,-1, 3,0);
    tracep->declBus(c+792,"bottom", false,-1, 3,0);
    tracep->declBus(c+793,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+794,"word0", false,-1, 2,0);
    tracep->declBus(c+795,"word1", false,-1, 2,0);
    tracep->declBus(c+796,"word2", false,-1, 2,0);
    tracep->declBus(c+797,"word3", false,-1, 2,0);
    tracep->declBus(c+798,"word4", false,-1, 2,0);
    tracep->declBus(c+799,"word5", false,-1, 2,0);
    tracep->declBus(c+800,"word6", false,-1, 2,0);
    tracep->declBus(c+801,"word7", false,-1, 2,0);
    tracep->declBus(c+802,"word8", false,-1, 2,0);
    tracep->declBus(c+803,"word9", false,-1, 2,0);
    tracep->declBus(c+804,"word10", false,-1, 2,0);
    tracep->declBus(c+805,"word11", false,-1, 2,0);
    tracep->declBus(c+806,"word12", false,-1, 2,0);
    tracep->declBus(c+807,"word13", false,-1, 2,0);
    tracep->declBus(c+808,"word14", false,-1, 2,0);
    tracep->declBus(c+809,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1176,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1198,"data_width", false,-1, 31,0);
    tracep->declBus(c+1207,"depth", false,-1, 31,0);
    tracep->declBit(c+1081,"clk", false,-1);
    tracep->declBit(c+720,"we", false,-1);
    tracep->declBus(c+791,"a", false,-1, 3,0);
    tracep->declBus(c+792,"dpra", false,-1, 3,0);
    tracep->declBus(c+810,"di", false,-1, 7,0);
    tracep->declBus(c+1139,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+489+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1081,"clk", false,-1);
    tracep->declBit(c+1082,"wb_rst_i", false,-1);
    tracep->declBus(c+678,"lcr", false,-1, 7,0);
    tracep->declBit(c+717,"tf_push", false,-1);
    tracep->declBus(c+959,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+672,"enable", false,-1);
    tracep->declBit(c+688,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+729,"stx_pad_o", false,-1);
    tracep->declBus(c+723,"tstate", false,-1, 2,0);
    tracep->declBus(c+722,"tf_count", false,-1, 4,0);
    tracep->declBus(c+811,"counter", false,-1, 4,0);
    tracep->declBus(c+812,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+813,"shift_out", false,-1, 6,0);
    tracep->declBit(c+814,"stx_o_tmp", false,-1);
    tracep->declBit(c+815,"parity_xor", false,-1);
    tracep->declBit(c+816,"tf_pop", false,-1);
    tracep->declBit(c+817,"bit_out", false,-1);
    tracep->declBus(c+959,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+899,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+818,"tf_overrun", false,-1);
    tracep->declBus(c+1160,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1144,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1208,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1209,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1166,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1210,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1198,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1207,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1176,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1162,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1081,"clk", false,-1);
    tracep->declBit(c+1082,"wb_rst_i", false,-1);
    tracep->declBit(c+717,"push", false,-1);
    tracep->declBit(c+816,"pop", false,-1);
    tracep->declBus(c+959,"data_in", false,-1, 7,0);
    tracep->declBit(c+688,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+899,"data_out", false,-1, 7,0);
    tracep->declBit(c+818,"overrun", false,-1);
    tracep->declBus(c+722,"count", false,-1, 4,0);
    tracep->declBus(c+819,"top", false,-1, 3,0);
    tracep->declBus(c+820,"bottom", false,-1, 3,0);
    tracep->declBus(c+821,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1176,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1198,"data_width", false,-1, 31,0);
    tracep->declBus(c+1207,"depth", false,-1, 31,0);
    tracep->declBit(c+1081,"clk", false,-1);
    tracep->declBit(c+717,"we", false,-1);
    tracep->declBus(c+819,"a", false,-1, 3,0);
    tracep->declBus(c+820,"dpra", false,-1, 3,0);
    tracep->declBus(c+959,"di", false,-1, 7,0);
    tracep->declBus(c+899,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+505+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBit(c+523,"auto_in_psel", false,-1);
    tracep->declBit(c+524,"auto_in_penable", false,-1);
    tracep->declBit(c+14,"auto_in_pwrite", false,-1);
    tracep->declBus(c+924,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1144,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+891,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1146,"auto_in_pready", false,-1);
    tracep->declBit(c+1147,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1148,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1095,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1096,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1097,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1098,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1099,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1100,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1081,"clock", false,-1);
    tracep->declBit(c+1082,"reset", false,-1);
    tracep->declBus(c+953,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+523,"in_psel", false,-1);
    tracep->declBit(c+524,"in_penable", false,-1);
    tracep->declBus(c+1144,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+14,"in_pwrite", false,-1);
    tracep->declBus(c+891,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+15,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1146,"in_pready", false,-1);
    tracep->declBus(c+1148,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1147,"in_pslverr", false,-1);
    tracep->declBus(c+1095,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1096,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1097,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1098,"vga_hsync", false,-1);
    tracep->declBit(c+1099,"vga_vsync", false,-1);
    tracep->declBit(c+1100,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+585,"sck", false,-1);
    tracep->declBit(c+822,"ss", false,-1);
    tracep->declBit(c+900,"mosi", false,-1);
    tracep->declBit(c+1140,"miso", false,-1);
    tracep->declBus(c+1161,"RX", false,-1, 1,0);
    tracep->declBus(c+1157,"TX", false,-1, 1,0);
    tracep->declBus(c+1164,"DONE", false,-1, 1,0);
    tracep->declBus(c+9,"counter", false,-1, 7,0);
    tracep->declBus(c+10,"data_in", false,-1, 7,0);
    tracep->declBus(c+11,"state", false,-1, 1,0);
    tracep->declBit(c+822,"inactive", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+585,"sck", false,-1);
    tracep->declBit(c+823,"ss", false,-1);
    tracep->declBit(c+900,"mosi", false,-1);
    tracep->declBit(c+1141,"miso", false,-1);
    tracep->declBit(c+823,"reset", false,-1);
    tracep->declBus(c+885,"state", false,-1, 2,0);
    tracep->declBus(c+886,"counter", false,-1, 7,0);
    tracep->declBus(c+887,"cmd", false,-1, 7,0);
    tracep->declBus(c+888,"addr", false,-1, 23,0);
    tracep->declBus(c+889,"data", false,-1, 31,0);
    tracep->declBit(c+890,"ren", false,-1);
    tracep->declBus(c+1142,"rdata", false,-1, 31,0);
    tracep->declBus(c+1143,"raddr", false,-1, 31,0);
    tracep->declBus(c+1142,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+585,"clock", false,-1);
    tracep->declBit(c+890,"valid", false,-1);
    tracep->declBus(c+887,"cmd", false,-1, 7,0);
    tracep->declBus(c+1143,"addr", false,-1, 31,0);
    tracep->declBus(c+1142,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1,"sck", false,-1);
    tracep->declBit(c+2,"ce_n", false,-1);
    tracep->declBus(c+1120,"dio", false,-1, 3,0);
    tracep->declBus(c+1160,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1144,"CMD", false,-1, 2,0);
    tracep->declBus(c+1208,"ADDR", false,-1, 2,0);
    tracep->declBus(c+1209,"DUMMY", false,-1, 2,0);
    tracep->declBus(c+1166,"READ_DATA", false,-1, 2,0);
    tracep->declBus(c+1210,"WRITE_DATA", false,-1, 2,0);
    tracep->declBus(c+576,"state", false,-1, 2,0);
    tracep->declBus(c+577,"cmd", false,-1, 7,0);
    tracep->declBus(c+578,"addr", false,-1, 23,0);
    tracep->declBus(c+579,"cycle_cnt", false,-1, 5,0);
    tracep->declBus(c+580,"dout", false,-1, 3,0);
    tracep->declBit(c+581,"dout_en", false,-1);
    tracep->declBus(c+582,"nibble_idx", false,-1, 1,0);
    tracep->declBus(c+583,"addr_shift", false,-1, 23,0);
    tracep->declBit(c+584,"qpi_mode", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_chip_0 ");
    tracep->declBus(c+1211,"INSTANCE_ID", false,-1, 31,0);
    tracep->declBit(c+1121,"clk", false,-1);
    tracep->declBit(c+901,"cke", false,-1);
    tracep->declBit(c+587,"cs", false,-1);
    tracep->declBit(c+588,"ras", false,-1);
    tracep->declBit(c+589,"cas", false,-1);
    tracep->declBit(c+590,"we", false,-1);
    tracep->declBus(c+902,"a", false,-1, 12,0);
    tracep->declBus(c+903,"ba", false,-1, 1,0);
    tracep->declBus(c+824,"dqm", false,-1, 1,0);
    tracep->declBus(c+917,"dq", false,-1, 15,0);
    tracep->declBit(c+960,"sdram_select", false,-1);
    tracep->declBus(c+1177,"ROW_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1174,"COL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1176,"BANK_COUNT", false,-1, 31,0);
    tracep->declBus(c+829,"active_bank", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+830+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->declBus(c+834,"burst_length_code", false,-1, 2,0);
    tracep->declBus(c+835,"cas_latency_code", false,-1, 2,0);
    tracep->declBus(c+836,"burst_length", false,-1, 3,0);
    tracep->declBus(c+835,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+587,"is_inhibit", false,-1);
    tracep->declBit(c+825,"is_nop", false,-1);
    tracep->declBit(c+910,"is_active", false,-1);
    tracep->declBit(c+911,"is_read", false,-1);
    tracep->declBit(c+912,"is_write", false,-1);
    tracep->declBit(c+826,"is_precharge", false,-1);
    tracep->declBit(c+827,"is_auto_refresh", false,-1);
    tracep->declBit(c+913,"is_load_mode", false,-1);
    tracep->declBus(c+918,"masked_dq", false,-1, 15,0);
    tracep->declBus(c+914,"write_mask", false,-1, 15,0);
    tracep->declBus(c+837,"dq_out", false,-1, 15,0);
    tracep->declBit(c+838,"dq_en", false,-1);
    tracep->declBus(c+1160,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1144,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1208,"READING", false,-1, 2,0);
    tracep->declBus(c+1209,"WRITING", false,-1, 2,0);
    tracep->declBus(c+839,"state", false,-1, 2,0);
    tracep->declBus(c+840,"delay_counter", false,-1, 3,0);
    tracep->declBus(c+841,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+842,"current_col", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_chip_1 ");
    tracep->declBus(c+1212,"INSTANCE_ID", false,-1, 31,0);
    tracep->declBit(c+1121,"clk", false,-1);
    tracep->declBit(c+901,"cke", false,-1);
    tracep->declBit(c+587,"cs", false,-1);
    tracep->declBit(c+588,"ras", false,-1);
    tracep->declBit(c+589,"cas", false,-1);
    tracep->declBit(c+590,"we", false,-1);
    tracep->declBus(c+902,"a", false,-1, 12,0);
    tracep->declBus(c+903,"ba", false,-1, 1,0);
    tracep->declBus(c+828,"dqm", false,-1, 1,0);
    tracep->declBus(c+919,"dq", false,-1, 15,0);
    tracep->declBit(c+960,"sdram_select", false,-1);
    tracep->declBus(c+1177,"ROW_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1174,"COL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1176,"BANK_COUNT", false,-1, 31,0);
    tracep->declBus(c+843,"active_bank", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+844+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->declBus(c+848,"burst_length_code", false,-1, 2,0);
    tracep->declBus(c+849,"cas_latency_code", false,-1, 2,0);
    tracep->declBus(c+850,"burst_length", false,-1, 3,0);
    tracep->declBus(c+849,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+587,"is_inhibit", false,-1);
    tracep->declBit(c+825,"is_nop", false,-1);
    tracep->declBit(c+910,"is_active", false,-1);
    tracep->declBit(c+911,"is_read", false,-1);
    tracep->declBit(c+912,"is_write", false,-1);
    tracep->declBit(c+826,"is_precharge", false,-1);
    tracep->declBit(c+827,"is_auto_refresh", false,-1);
    tracep->declBit(c+913,"is_load_mode", false,-1);
    tracep->declBus(c+920,"masked_dq", false,-1, 15,0);
    tracep->declBus(c+915,"write_mask", false,-1, 15,0);
    tracep->declBus(c+851,"dq_out", false,-1, 15,0);
    tracep->declBit(c+852,"dq_en", false,-1);
    tracep->declBus(c+1160,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1144,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1208,"READING", false,-1, 2,0);
    tracep->declBus(c+1209,"WRITING", false,-1, 2,0);
    tracep->declBus(c+853,"state", false,-1, 2,0);
    tracep->declBus(c+854,"delay_counter", false,-1, 3,0);
    tracep->declBus(c+855,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+856,"current_col", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_chip_2 ");
    tracep->declBus(c+1213,"INSTANCE_ID", false,-1, 31,0);
    tracep->declBit(c+1121,"clk", false,-1);
    tracep->declBit(c+901,"cke", false,-1);
    tracep->declBit(c+587,"cs", false,-1);
    tracep->declBit(c+588,"ras", false,-1);
    tracep->declBit(c+589,"cas", false,-1);
    tracep->declBit(c+590,"we", false,-1);
    tracep->declBus(c+902,"a", false,-1, 12,0);
    tracep->declBus(c+903,"ba", false,-1, 1,0);
    tracep->declBus(c+824,"dqm", false,-1, 1,0);
    tracep->declBus(c+917,"dq", false,-1, 15,0);
    tracep->declBit(c+921,"sdram_select", false,-1);
    tracep->declBus(c+1177,"ROW_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1174,"COL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1176,"BANK_COUNT", false,-1, 31,0);
    tracep->declBus(c+857,"active_bank", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+858+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->declBus(c+862,"burst_length_code", false,-1, 2,0);
    tracep->declBus(c+863,"cas_latency_code", false,-1, 2,0);
    tracep->declBus(c+864,"burst_length", false,-1, 3,0);
    tracep->declBus(c+863,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+587,"is_inhibit", false,-1);
    tracep->declBit(c+825,"is_nop", false,-1);
    tracep->declBit(c+910,"is_active", false,-1);
    tracep->declBit(c+911,"is_read", false,-1);
    tracep->declBit(c+912,"is_write", false,-1);
    tracep->declBit(c+826,"is_precharge", false,-1);
    tracep->declBit(c+827,"is_auto_refresh", false,-1);
    tracep->declBit(c+913,"is_load_mode", false,-1);
    tracep->declBus(c+918,"masked_dq", false,-1, 15,0);
    tracep->declBus(c+914,"write_mask", false,-1, 15,0);
    tracep->declBus(c+865,"dq_out", false,-1, 15,0);
    tracep->declBit(c+866,"dq_en", false,-1);
    tracep->declBus(c+1160,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1144,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1208,"READING", false,-1, 2,0);
    tracep->declBus(c+1209,"WRITING", false,-1, 2,0);
    tracep->declBus(c+867,"state", false,-1, 2,0);
    tracep->declBus(c+868,"delay_counter", false,-1, 3,0);
    tracep->declBus(c+869,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+870,"current_col", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_chip_3 ");
    tracep->declBus(c+1214,"INSTANCE_ID", false,-1, 31,0);
    tracep->declBit(c+1121,"clk", false,-1);
    tracep->declBit(c+901,"cke", false,-1);
    tracep->declBit(c+587,"cs", false,-1);
    tracep->declBit(c+588,"ras", false,-1);
    tracep->declBit(c+589,"cas", false,-1);
    tracep->declBit(c+590,"we", false,-1);
    tracep->declBus(c+902,"a", false,-1, 12,0);
    tracep->declBus(c+903,"ba", false,-1, 1,0);
    tracep->declBus(c+828,"dqm", false,-1, 1,0);
    tracep->declBus(c+919,"dq", false,-1, 15,0);
    tracep->declBit(c+921,"sdram_select", false,-1);
    tracep->declBus(c+1177,"ROW_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1174,"COL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1176,"BANK_COUNT", false,-1, 31,0);
    tracep->declBus(c+871,"active_bank", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+872+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->declBus(c+876,"burst_length_code", false,-1, 2,0);
    tracep->declBus(c+877,"cas_latency_code", false,-1, 2,0);
    tracep->declBus(c+878,"burst_length", false,-1, 3,0);
    tracep->declBus(c+877,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+587,"is_inhibit", false,-1);
    tracep->declBit(c+825,"is_nop", false,-1);
    tracep->declBit(c+910,"is_active", false,-1);
    tracep->declBit(c+911,"is_read", false,-1);
    tracep->declBit(c+912,"is_write", false,-1);
    tracep->declBit(c+826,"is_precharge", false,-1);
    tracep->declBit(c+827,"is_auto_refresh", false,-1);
    tracep->declBit(c+913,"is_load_mode", false,-1);
    tracep->declBus(c+920,"masked_dq", false,-1, 15,0);
    tracep->declBus(c+915,"write_mask", false,-1, 15,0);
    tracep->declBus(c+879,"dq_out", false,-1, 15,0);
    tracep->declBit(c+880,"dq_en", false,-1);
    tracep->declBus(c+1160,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1144,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1208,"READING", false,-1, 2,0);
    tracep->declBus(c+1209,"WRITING", false,-1, 2,0);
    tracep->declBus(c+881,"state", false,-1, 2,0);
    tracep->declBus(c+882,"delay_counter", false,-1, 3,0);
    tracep->declBus(c+883,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+884,"current_col", false,-1, 8,0);
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
    VlWide<3>/*95:0*/ __Vtemp_hf3bf6749__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullCData(oldp+9,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),8);
    bufp->fullCData(oldp+10,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_in),8);
    bufp->fullCData(oldp+11,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state),2);
    bufp->fullBit(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+13,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullCData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+16,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullBit(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+40,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullIData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullBit(oldp+44,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullIData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+48,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hbda8445b__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2))))));
    bufp->fullBit(oldp+49,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullIData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+55,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+57,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+59,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+60,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullIData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+105,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullQData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+110,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+111,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+114,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+115,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+116,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+119,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+120,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+121,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullSData(oldp+129,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullIData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullSData(oldp+131,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+134,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+135,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+136,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+137,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+138,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+146,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+148,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+149,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+195,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+208,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+212,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+216,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+220,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+224,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+228,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+232,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+236,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+240,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+244,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+248,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+252,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+256,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+260,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+264,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+268,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+272,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+276,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+280,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+284,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+288,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+292,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+296,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+300,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+304,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+308,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+312,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+316,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+320,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+324,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+328,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+332,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+336,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___GEN_6)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc
                                : 0U)),32);
    bufp->fullBit(oldp+337,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT____VdfgTmp_h3a4270d2__0)) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)))));
    bufp->fullBit(oldp+338,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_h41ece7be__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_ready))));
    bufp->fullBit(oldp+339,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___GEN_4)) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)))));
    bufp->fullIData(oldp+340,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_8)
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_result)),32);
    bufp->fullCData(oldp+341,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_8)
                                ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__casez_tmp_0))),3);
    bufp->fullBit(oldp+342,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h481cff71__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2))));
    bufp->fullBit(oldp+343,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullCData(oldp+344,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4)
                                ? 0U : (0xfU & ((5U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__rw_address_type))
                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__rw_address_type))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__rw_address_type))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__rw_address_type))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                                    : 1U))))))),4);
    bufp->fullBit(oldp+345,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                             | ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_6)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2)
                                    : (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)))))));
    bufp->fullBit(oldp+346,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullBit(oldp+347,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hbda8445b__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2))));
    bufp->fullIData(oldp+348,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_7)
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_result)),32);
    bufp->fullBit(oldp+349,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h481cff71__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad))));
    bufp->fullBit(oldp+350,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_ready))));
    bufp->fullBit(oldp+351,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hbda8445b__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad))));
    bufp->fullIData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_aw_addr),32);
    bufp->fullCData(oldp+353,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_8)
                                         ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__casez_tmp_0)))),3);
    bufp->fullBit(oldp+354,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h481cff71__0) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2)))));
    bufp->fullBit(oldp+355,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullCData(oldp+356,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4)
                                         ? 0U : (0xfU 
                                                 & ((5U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__rw_address_type))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__rw_address_type))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__rw_address_type))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__rw_address_type))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                                        : 1U)))))))),4);
    bufp->fullBit(oldp+357,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                                | ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_6)
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2)
                                       : (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))))))));
    bufp->fullBit(oldp+358,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullBit(oldp+359,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hbda8445b__0) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2)))));
    bufp->fullIData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr),32);
    bufp->fullBit(oldp+361,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_arbiter_valid)
                                 ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT____VdfgTmp_h3a4270d2__0)) 
                                    & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)))
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h481cff71__0) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid))))));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_ready));
    bufp->fullBit(oldp+363,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_arbiter_valid)
                                 ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT___GEN_4)) 
                                    & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)))
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hbda8445b__0) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad)))))));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_arbiter_valid));
    bufp->fullBit(oldp+365,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)))));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state));
    bufp->fullIData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_addr),32);
    bufp->fullIData(oldp+369,(((0x200bff8U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_addr)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime)
                                : ((0x200bffcU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_addr)
                                    ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
                                               >> 0x20U))
                                    : 0U))),32);
    bufp->fullQData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime),64);
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_out_valid));
    bufp->fullIData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst),32);
    bufp->fullIData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_pc),32);
    bufp->fullCData(oldp+376,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_out_bits_alu_op1),32);
    bufp->fullIData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__casez_tmp_0),32);
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_rs2_data),32);
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_ready));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_valid));
    bufp->fullIData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst),32);
    bufp->fullIData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_pc),32);
    bufp->fullIData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___alu_instance_io_result),32);
    bufp->fullIData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_rs2_data),32);
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_wb_addr),5);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state),2);
    bufp->fullCData(oldp+388,(((0x4000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)
                                ? ((0x2000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)
                                    ? ((0x1000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)
                                        ? 2U : 3U) : 
                                   ((0x1000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)
                                     ? (8U | (0x20U 
                                              != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                                                  >> 0x19U)))
                                     : 4U)) : ((0x2000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)
                                                    ? 6U
                                                    : 5U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)
                                                    ? 7U
                                                    : 0U)))),5);
    bufp->fullCData(oldp+389,(((0x4000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)
                                ? ((0x2000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)
                                    ? ((0x1000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)
                                        ? 2U : 3U) : 
                                   ((0x1000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)
                                     ? (8U | (0x20U 
                                              != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                                                  >> 0x19U)))
                                     : 4U)) : ((0x2000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)
                                                    ? 6U
                                                    : 5U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)
                                                    ? 7U
                                                    : 
                                                   (0x20U 
                                                    == 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                                                     >> 0x19U)))))),5);
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op),5);
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_out_valid));
    bufp->fullIData(oldp+393,((0xfffffffeU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_rs1_data 
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
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_pc_sel),3);
    bufp->fullIData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_rs1_data),32);
    bufp->fullCData(oldp+398,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+399,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state),2);
    bufp->fullBit(oldp+401,((1U & ((0x4000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)
                                    ? ((0x2000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)
                                        ? ((0x1000U 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)
                                            ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_ltu))
                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_ltu))
                                        : ((0x1000U 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)
                                            ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_lt))
                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_lt)))
                                    : ((0x2000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___branch_taken_T_4)
                                        : ((0x1000U 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)
                                            ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_eq))
                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___branch_taken_T_4)))))));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_eq));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_lt));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_ltu));
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__alu_op2Sel),2);
    bufp->fullBit(oldp+406,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state))));
    bufp->fullIData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc),32);
    bufp->fullIData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__if_inst_buffer),32);
    bufp->fullCData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state),3);
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_valid));
    bufp->fullIData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_pc),32);
    bufp->fullIData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__delayedData),32);
    bufp->fullIData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_result),32);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_wb_addr),5);
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isStore));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad));
    bufp->fullIData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst),32);
    bufp->fullIData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_rs2_data),32);
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control),3);
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state),3);
    bufp->fullCData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__rw_address_type),3);
    bufp->fullCData(oldp+423,(((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__rw_address_type))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__rw_address_type))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                    : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__rw_address_type))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                        : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__rw_address_type))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT____VdfgTmp_h9682e838__0)
                                            : 1U))))),8);
    bufp->fullCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__casez_tmp_0),3);
    bufp->fullCData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__base_mask),8);
    if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__rw_address_type))) {
        __Vtemp_hf3bf6749__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT___io_dmem_wdata_T_1[0U];
        __Vtemp_hf3bf6749__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT___io_dmem_wdata_T_1[1U];
        __Vtemp_hf3bf6749__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT___io_dmem_wdata_T_1[2U];
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__rw_address_type))) {
        __Vtemp_hf3bf6749__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT___io_dmem_wdata_T_1[0U];
        __Vtemp_hf3bf6749__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT___io_dmem_wdata_T_1[1U];
        __Vtemp_hf3bf6749__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT___io_dmem_wdata_T_1[2U];
    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__rw_address_type))) {
        __Vtemp_hf3bf6749__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT___io_dmem_wdata_T_1[0U];
        __Vtemp_hf3bf6749__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT___io_dmem_wdata_T_1[1U];
        __Vtemp_hf3bf6749__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT___io_dmem_wdata_T_1[2U];
    } else {
        __Vtemp_hf3bf6749__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_rs2_data;
        __Vtemp_hf3bf6749__0[1U] = 0U;
        __Vtemp_hf3bf6749__0[2U] = 0U;
    }
    bufp->fullWData(oldp+426,(__Vtemp_hf3bf6749__0),95);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_wb_addr),5);
    bufp->fullIData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[31]),32);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state),2);
    bufp->fullCData(oldp+463,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_valid)
                                    ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state))
                                : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state))
                                    ? 2U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state))
                                             ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state))))),2);
    bufp->fullIData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst),32);
    bufp->fullIData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_pc),32);
    bufp->fullIData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_result),32);
    bufp->fullIData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_dmem_rdata),32);
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+478,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+486,((0xffU & ((IData)(7U) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+521,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+522,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+523,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+524,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+525,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+526,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+527,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+528,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+529,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullIData(oldp+530,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullIData(oldp+531,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullBit(oldp+532,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+533,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+534,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+535,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+536,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+537,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+538,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+539,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+540,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+541,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+542,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+543,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+544,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+545,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+546,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+547,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+548,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+549,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+550,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+551,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+552,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+553,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+554,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+555,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+556,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+557,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+558,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+559,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+560,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+561,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+562,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+563,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+564,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+565,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+566,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+567,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullIData(oldp+568,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_h41ece7be__0)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_r_data
                                : 0U)),32);
    bufp->fullCData(oldp+569,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                         ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp)))),2);
    bufp->fullBit(oldp+570,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgTmp_hd4be34f7__0) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))));
    bufp->fullCData(oldp+571,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                         ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp)))),2);
    bufp->fullCData(oldp+572,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp))),2);
    bufp->fullBit(oldp+573,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))));
    bufp->fullCData(oldp+574,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp))),2);
    bufp->fullBit(oldp+575,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hbda8445b__0) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_memory_r_valid) 
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
    bufp->fullCData(oldp+576,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+578,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cycle_cnt),6);
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dout),4);
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dout_en));
    bufp->fullCData(oldp+582,(vlSelf->ysyxSoCFull__DOT__psram__DOT__nibble_idx),2);
    bufp->fullIData(oldp+583,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_shift),24);
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_mode));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+586,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+587,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+588,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+589,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+590,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullIData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+597,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+598,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+601,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+602,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_counter),4);
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_done));
    bufp->fullCData(oldp+606,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                ? (1U & (0x35U >> (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_counter)))))
                                : 0U)),4);
    bufp->fullCData(oldp+607,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                ? 0xfU : 0U)),4);
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+611,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+615,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),3);
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_adr_i),5);
    bufp->fullIData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_dat_i),32);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_sel_i),4);
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_we_i));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_stb_i));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_cyc_i));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_ack_o));
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),4);
    bufp->fullSData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+649,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+650,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+651,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+652,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+653,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+654,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+655,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+659,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+661,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+662,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+664,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+668,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+669,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+671,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+689,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+690,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+691,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+692,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+693,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+694,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+695,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+698,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+699,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+700,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+719,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+726,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+745,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+746,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+747,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+748,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+749,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+768,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+769,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+770,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+771,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+772,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+774,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+793,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+810,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+821,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+824,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullBit(oldp+825,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT____VdfgTmp_hada35e22__0) 
                             & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                 >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))));
    bufp->fullBit(oldp+826,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT____VdfgTmp_h47486cab__0))));
    bufp->fullBit(oldp+827,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT____VdfgTmp_h50b78ab2__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullCData(oldp+828,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__active_bank),4);
    bufp->fullSData(oldp+830,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__active_row[0]),13);
    bufp->fullSData(oldp+831,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__active_row[1]),13);
    bufp->fullSData(oldp+832,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__active_row[2]),13);
    bufp->fullSData(oldp+833,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__active_row[3]),13);
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__burst_length_code),3);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__cas_latency_code),3);
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__burst_length),4);
    bufp->fullSData(oldp+837,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__dq_out),16);
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__dq_en));
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__state),3);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__delay_counter),4);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__burst_counter),4);
    bufp->fullSData(oldp+842,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__current_col),9);
    bufp->fullCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__active_bank),4);
    bufp->fullSData(oldp+844,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__active_row[0]),13);
    bufp->fullSData(oldp+845,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__active_row[1]),13);
    bufp->fullSData(oldp+846,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__active_row[2]),13);
    bufp->fullSData(oldp+847,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__active_row[3]),13);
    bufp->fullCData(oldp+848,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__burst_length_code),3);
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__cas_latency_code),3);
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__burst_length),4);
    bufp->fullSData(oldp+851,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__dq_out),16);
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__dq_en));
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__state),3);
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__delay_counter),4);
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__burst_counter),4);
    bufp->fullSData(oldp+856,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__current_col),9);
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__active_bank),4);
    bufp->fullSData(oldp+858,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__active_row[0]),13);
    bufp->fullSData(oldp+859,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__active_row[1]),13);
    bufp->fullSData(oldp+860,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__active_row[2]),13);
    bufp->fullSData(oldp+861,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__active_row[3]),13);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__burst_length_code),3);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__cas_latency_code),3);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__burst_length),4);
    bufp->fullSData(oldp+865,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__dq_out),16);
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__dq_en));
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__state),3);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__delay_counter),4);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__burst_counter),4);
    bufp->fullSData(oldp+870,(vlSelf->ysyxSoCFull__DOT__sdram_chip_2__DOT__current_col),9);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__active_bank),4);
    bufp->fullSData(oldp+872,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__active_row[0]),13);
    bufp->fullSData(oldp+873,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__active_row[1]),13);
    bufp->fullSData(oldp+874,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__active_row[2]),13);
    bufp->fullSData(oldp+875,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__active_row[3]),13);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__burst_length_code),3);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__cas_latency_code),3);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__burst_length),4);
    bufp->fullSData(oldp+879,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__dq_out),16);
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__dq_en));
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__state),3);
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__delay_counter),4);
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__burst_counter),4);
    bufp->fullSData(oldp+884,(vlSelf->ysyxSoCFull__DOT__sdram_chip_3__DOT__current_col),9);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+888,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+889,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+890,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+894,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+895,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+896,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullSData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullBit(oldp+904,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__is_active));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__is_read));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__is_write));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__is_load_mode));
    bufp->fullSData(oldp+914,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__write_mask),16);
    bufp->fullSData(oldp+915,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__write_mask),16);
    bufp->fullIData(oldp+916,(vlSelf->ysyxSoCFull__DOT___dq_wire),32);
    bufp->fullSData(oldp+917,((0xffffU & vlSelf->ysyxSoCFull__DOT___dq_wire)),16);
    bufp->fullSData(oldp+918,(vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__masked_dq),16);
    bufp->fullSData(oldp+919,((vlSelf->ysyxSoCFull__DOT___dq_wire 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+920,(vlSelf->ysyxSoCFull__DOT__sdram_chip_1__DOT__masked_dq),16);
    bufp->fullBit(oldp+921,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                   >> 0x1aU))));
    bufp->fullIData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+924,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullIData(oldp+925,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+929,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+940,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+941,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+944,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+945,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+950,((0x1ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                         >> 2U))),13);
    bufp->fullCData(oldp+951,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                     >> 0xbU))),2);
    bufp->fullSData(oldp+952,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 0xdU))),13);
    bufp->fullIData(oldp+953,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+954,((0x3000000U | (0xffffffU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))),32);
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullBit(oldp+956,(((0x10001000U <= (0x3fffffffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                             & (0x10001fffU >= (0x3fffffffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullCData(oldp+957,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+960,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+967,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp),2);
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp),2);
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+998,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+999,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1021,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1022,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1023,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1024,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1025,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1026,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1027,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1028,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1029,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1030,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1031,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1032,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1033,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1034,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1035,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1036,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1037,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1038,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1039,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1040,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1041,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1042,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1043,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1044,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1045,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1046,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1047,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1048,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1049,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1050,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1051,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1052,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_memory_r_valid));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_memory_r_valid));
    bufp->fullIData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_r_data),32);
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_r_valid));
    bufp->fullIData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data),32);
    bufp->fullCData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullCData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1075,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1076,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1078,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1081,(vlSelf->clock));
    bufp->fullBit(oldp+1082,(vlSelf->reset));
    bufp->fullSData(oldp+1083,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1084,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1085,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1086,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1087,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1088,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1089,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1090,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1091,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1092,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1093,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1094,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1095,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1096,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1097,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1098,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1099,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1100,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1101,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1102,(vlSelf->externalPins_uart_tx));
    bufp->fullCData(oldp+1103,(vlSelf->io_wbu_state_debug),2);
    bufp->fullIData(oldp+1104,(vlSelf->io_pc_debug),32);
    bufp->fullIData(oldp+1105,(vlSelf->io_inst_debug),32);
    bufp->fullCData(oldp+1106,(vlSelf->io_ifu_state_debug),3);
    bufp->fullCData(oldp+1107,(vlSelf->io_lsu_state_debug),3);
    bufp->fullBit(oldp+1108,(vlSelf->io_lsu_is_ld_or_st_debug));
    bufp->fullIData(oldp+1109,(vlSelf->io_lsu_reg_inst_debug),32);
    bufp->fullIData(oldp+1110,(vlSelf->io_dmem_wdata_debug),32);
    bufp->fullIData(oldp+1111,(vlSelf->io_dmem_rdata_debug),32);
    bufp->fullIData(oldp+1112,(vlSelf->io_lsu_reg_dmem_addr_debug),32);
    bufp->fullBit(oldp+1113,(vlSelf->io_wb_wen_debug));
    bufp->fullCData(oldp+1114,(vlSelf->io_wb_sel_debug),2);
    bufp->fullIData(oldp+1115,(vlSelf->io_wbu_reg_dmem_rdata_debug),32);
    bufp->fullCData(oldp+1116,(vlSelf->io_Arbiter_state_debug),2);
    bufp->fullIData(oldp+1117,(vlSelf->io_wb_data_debug),32);
    bufp->fullCData(oldp+1118,(vlSelf->io_lsu_memory_ar_size),3);
    bufp->fullBit(oldp+1119,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1121,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1122,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1123,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1124,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_ack_o)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o))));
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1126,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4)
                                 ? 0U : vlSelf->io_dmem_wdata_debug)),32);
    bufp->fullIData(oldp+1127,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4)
                                          ? 0U : vlSelf->io_dmem_wdata_debug))),32);
    bufp->fullCData(oldp+1128,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                 ? 2U : (IData)(vlSelf->io_lsu_memory_ar_size))),3);
    bufp->fullIData(oldp+1129,((((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__rw_address_type)) 
                                 | ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__rw_address_type)) 
                                    | ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__memory_ctl__DOT__rw_address_type)) 
                                       | (IData)(vlSelf->__VdfgTmp_h7e0c6375__0))))
                                 ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control))
                                     ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control))
                                         ? 0U : ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control))
                                                  ? 
                                                 (0xffffU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data)
                                                  : 
                                                 (0xffU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data)))
                                     : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control))
                                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control))
                                             ? 0U : vlSelf->io_dmem_rdata_debug)
                                         : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
                                                                >> 0xfU)))) 
                                                 << 0x10U) 
                                                | (0xffffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data))
                                             : (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
                                                                >> 7U)))) 
                                                 << 8U) 
                                                | (0xffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data)))))
                                 : vlSelf->io_dmem_rdata_debug)),32);
    bufp->fullIData(oldp+1130,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control))
                                 ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control))
                                     ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control))
                                              ? (0xffffU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data)
                                              : (0xffU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data)))
                                 : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control))
                                     ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control))
                                         ? 0U : vlSelf->io_dmem_rdata_debug)
                                     : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
                                                            >> 0xfU)))) 
                                             << 0x10U) 
                                            | (0xffffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data))
                                         : (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (0xffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__alignment_network__DOT__shifted_data)))))),32);
    bufp->fullIData(oldp+1131,(((0U == (IData)(vlSelf->io_wb_sel_debug))
                                 ? 0U : ((1U == (IData)(vlSelf->io_wb_sel_debug))
                                          ? ((IData)(4U) 
                                             + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_pc)
                                          : ((2U == (IData)(vlSelf->io_wb_sel_debug))
                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_result
                                              : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_dmem_rdata)))),32);
    bufp->fullBit(oldp+1132,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1133,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                              & (IData)(vlSelf->clock))));
    bufp->fullBit(oldp+1134,(((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                              | (IData)(vlSelf->reset))));
    bufp->fullBit(oldp+1135,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1138,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1140,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1141,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1143,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1144,(1U),3);
    bufp->fullBit(oldp+1145,(0U));
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1155,(0U),4);
    bufp->fullCData(oldp+1156,(0U),8);
    bufp->fullCData(oldp+1157,(1U),2);
    bufp->fullBit(oldp+1158,(1U));
    bufp->fullIData(oldp+1159,(0U),32);
    bufp->fullCData(oldp+1160,(0U),3);
    bufp->fullCData(oldp+1161,(0U),2);
    bufp->fullIData(oldp+1162,(5U),32);
    bufp->fullIData(oldp+1163,(0x20U),32);
    bufp->fullCData(oldp+1164,(2U),2);
    bufp->fullCData(oldp+1165,(0x35U),8);
    bufp->fullCData(oldp+1166,(4U),3);
    bufp->fullBit(oldp+1167,(0U));
    bufp->fullBit(oldp+1168,(1U));
    bufp->fullCData(oldp+1169,(0x15U),8);
    bufp->fullCData(oldp+1170,(0xebU),8);
    bufp->fullCData(oldp+1171,(0x38U),8);
    bufp->fullIData(oldp+1172,(0x64U),32);
    bufp->fullIData(oldp+1173,(0x18U),32);
    bufp->fullIData(oldp+1174,(9U),32);
    bufp->fullIData(oldp+1175,(2U),32);
    bufp->fullIData(oldp+1176,(4U),32);
    bufp->fullIData(oldp+1177,(0xdU),32);
    bufp->fullIData(oldp+1178,(0x2000U),32);
    bufp->fullIData(oldp+1179,(0x2710U),32);
    bufp->fullIData(oldp+1180,(0x30cU),32);
    bufp->fullCData(oldp+1181,(7U),4);
    bufp->fullCData(oldp+1182,(3U),4);
    bufp->fullCData(oldp+1183,(5U),4);
    bufp->fullCData(oldp+1184,(4U),4);
    bufp->fullCData(oldp+1185,(6U),4);
    bufp->fullCData(oldp+1186,(2U),4);
    bufp->fullCData(oldp+1187,(1U),4);
    bufp->fullSData(oldp+1188,(0x20U),13);
    bufp->fullCData(oldp+1189,(8U),4);
    bufp->fullIData(oldp+1190,(0xaU),32);
    bufp->fullIData(oldp+1191,(6U),32);
    bufp->fullIData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1193,(0x11U),32);
    bufp->fullIData(oldp+1194,(0x30000000U),32);
    bufp->fullIData(oldp+1195,(0x3fffffffU),32);
    bufp->fullIData(oldp+1196,(0x10001000U),32);
    bufp->fullIData(oldp+1197,(0x10001fffU),32);
    bufp->fullIData(oldp+1198,(8U),32);
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+1200,(0xdU),4);
    bufp->fullCData(oldp+1201,(0xeU),4);
    bufp->fullCData(oldp+1202,(0xfU),4);
    bufp->fullIData(oldp+1203,(1U),32);
    bufp->fullCData(oldp+1204,(9U),4);
    bufp->fullCData(oldp+1205,(0xaU),4);
    bufp->fullIData(oldp+1206,(0xbU),32);
    bufp->fullIData(oldp+1207,(0x10U),32);
    bufp->fullCData(oldp+1208,(2U),3);
    bufp->fullCData(oldp+1209,(3U),3);
    bufp->fullCData(oldp+1210,(5U),3);
    bufp->fullIData(oldp+1211,(0U),32);
    bufp->fullIData(oldp+1212,(1U),32);
    bufp->fullIData(oldp+1213,(2U),32);
    bufp->fullIData(oldp+1214,(3U),32);
}
