// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24120009_core__Syms.h"


VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_init_sub__TOP__0(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+115,"clock", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->pushNamePrefix("ysyx_24120009_core ");
    tracep->declBit(c+115,"clock", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+115,"clock", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBit(c+67,"io_ifu_ar_valid", false,-1);
    tracep->declBit(c+34,"io_ifu_ar_ready", false,-1);
    tracep->declBus(c+68,"io_ifu_ar_addr", false,-1, 31,0);
    tracep->declBit(c+117,"io_ifu_r_valid", false,-1);
    tracep->declBit(c+69,"io_ifu_r_ready", false,-1);
    tracep->declBus(c+118,"io_ifu_r_data", false,-1, 31,0);
    tracep->declBit(c+35,"io_lsu_aw_valid", false,-1);
    tracep->declBit(c+36,"io_lsu_aw_ready", false,-1);
    tracep->declBus(c+70,"io_lsu_aw_addr", false,-1, 31,0);
    tracep->declBit(c+35,"io_lsu_w_valid", false,-1);
    tracep->declBit(c+36,"io_lsu_w_ready", false,-1);
    tracep->declBus(c+71,"io_lsu_w_data", false,-1, 31,0);
    tracep->declBus(c+72,"io_lsu_w_strb", false,-1, 3,0);
    tracep->declBit(c+119,"io_lsu_b_valid", false,-1);
    tracep->declBit(c+37,"io_lsu_b_ready", false,-1);
    tracep->declBit(c+73,"io_lsu_ar_valid", false,-1);
    tracep->declBit(c+36,"io_lsu_ar_ready", false,-1);
    tracep->declBus(c+74,"io_lsu_ar_addr", false,-1, 31,0);
    tracep->declBit(c+120,"io_lsu_r_valid", false,-1);
    tracep->declBit(c+38,"io_lsu_r_ready", false,-1);
    tracep->declBit(c+39,"io_axi_aw_valid", false,-1);
    tracep->declBit(c+40,"io_axi_aw_ready", false,-1);
    tracep->declBus(c+75,"io_axi_aw_addr", false,-1, 31,0);
    tracep->declBit(c+39,"io_axi_w_valid", false,-1);
    tracep->declBit(c+40,"io_axi_w_ready", false,-1);
    tracep->declBus(c+76,"io_axi_w_data", false,-1, 31,0);
    tracep->declBus(c+77,"io_axi_w_strb", false,-1, 3,0);
    tracep->declBit(c+121,"io_axi_b_valid", false,-1);
    tracep->declBit(c+41,"io_axi_b_ready", false,-1);
    tracep->declBit(c+78,"io_axi_ar_valid", false,-1);
    tracep->declBit(c+40,"io_axi_ar_ready", false,-1);
    tracep->declBus(c+79,"io_axi_ar_addr", false,-1, 31,0);
    tracep->declBit(c+122,"io_axi_r_valid", false,-1);
    tracep->declBit(c+42,"io_axi_r_ready", false,-1);
    tracep->declBus(c+123,"io_axi_r_data", false,-1, 31,0);
    tracep->declBus(c+80,"state", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+43,"isLSUActive", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+115,"clock", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBit(c+81,"io_in_ready", false,-1);
    tracep->declBit(c+82,"io_in_valid", false,-1);
    tracep->declBus(c+44,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+83,"io_in_bits_alu_op1", false,-1, 31,0);
    tracep->declBus(c+84,"io_in_bits_alu_op2", false,-1, 31,0);
    tracep->declBus(c+85,"io_in_bits_rs2_data", false,-1, 31,0);
    tracep->declBit(c+86,"io_out_ready", false,-1);
    tracep->declBit(c+87,"io_out_valid", false,-1);
    tracep->declBus(c+45,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+88,"io_out_bits_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+89,"io_out_bits_rs2_data", false,-1, 31,0);
    tracep->declBus(c+46,"state", false,-1, 1,0);
    tracep->declBit(c+81,"io_in_ready_0", false,-1);
    tracep->declBus(c+45,"exu_reg_inst", false,-1, 31,0);
    tracep->declBus(c+89,"exu_reg_rs2_data", false,-1, 31,0);
    tracep->pushNamePrefix("alu_instance ");
    tracep->declBus(c+83,"io_a", false,-1, 31,0);
    tracep->declBus(c+84,"io_b", false,-1, 31,0);
    tracep->declBus(c+90,"io_aluOp", false,-1, 4,0);
    tracep->declBus(c+88,"io_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+115,"clock", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBit(c+91,"io_in_ready", false,-1);
    tracep->declBit(c+92,"io_in_valid", false,-1);
    tracep->declBus(c+124,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+93,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+81,"io_out_ready", false,-1);
    tracep->declBit(c+82,"io_out_valid", false,-1);
    tracep->declBus(c+44,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+83,"io_out_bits_alu_op1", false,-1, 31,0);
    tracep->declBus(c+84,"io_out_bits_alu_op2", false,-1, 31,0);
    tracep->declBus(c+85,"io_out_bits_rs2_data", false,-1, 31,0);
    tracep->declBus(c+47,"io_jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+48,"io_br_target", false,-1, 31,0);
    tracep->declBus(c+49,"io_jmp_target", false,-1, 31,0);
    tracep->declBus(c+94,"io_pc_sel", false,-1, 2,0);
    tracep->declBus(c+50,"io_rs1_data", false,-1, 31,0);
    tracep->declBus(c+85,"io_rs2_data", false,-1, 31,0);
    tracep->declBus(c+51,"io_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+52,"io_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+44,"idu_reg_inst", false,-1, 31,0);
    tracep->declBus(c+53,"idu_reg_pc", false,-1, 31,0);
    tracep->declBus(c+54,"state", false,-1, 1,0);
    tracep->declBit(c+91,"io_in_ready_0", false,-1);
    tracep->declBit(c+95,"br_eq", false,-1);
    tracep->declBit(c+96,"br_lt", false,-1);
    tracep->declBit(c+97,"br_ltu", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+115,"clock", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBit(c+91,"io_out_ready", false,-1);
    tracep->declBit(c+92,"io_out_valid", false,-1);
    tracep->declBus(c+124,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+93,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+94,"io_pc_sel", false,-1, 2,0);
    tracep->declBus(c+47,"io_jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+48,"io_br_target", false,-1, 31,0);
    tracep->declBus(c+49,"io_jmp_target", false,-1, 31,0);
    tracep->declBit(c+55,"io_pc_wen", false,-1);
    tracep->declBit(c+67,"io_memory_ar_valid", false,-1);
    tracep->declBit(c+34,"io_memory_ar_ready", false,-1);
    tracep->declBus(c+68,"io_memory_ar_addr", false,-1, 31,0);
    tracep->declBit(c+117,"io_memory_r_valid", false,-1);
    tracep->declBit(c+69,"io_memory_r_ready", false,-1);
    tracep->declBus(c+118,"io_memory_r_data", false,-1, 31,0);
    tracep->declBus(c+93,"pc", false,-1, 31,0);
    tracep->declBus(c+56,"if_inst_buffer", false,-1, 31,0);
    tracep->declBus(c+98,"state", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+115,"clock", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBit(c+86,"io_in_ready", false,-1);
    tracep->declBit(c+87,"io_in_valid", false,-1);
    tracep->declBus(c+45,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+88,"io_in_bits_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+89,"io_in_bits_rs2_data", false,-1, 31,0);
    tracep->declBit(c+99,"io_out_valid", false,-1);
    tracep->declBit(c+35,"io_memory_aw_valid", false,-1);
    tracep->declBit(c+36,"io_memory_aw_ready", false,-1);
    tracep->declBus(c+70,"io_memory_aw_addr", false,-1, 31,0);
    tracep->declBit(c+35,"io_memory_w_valid", false,-1);
    tracep->declBit(c+36,"io_memory_w_ready", false,-1);
    tracep->declBus(c+71,"io_memory_w_data", false,-1, 31,0);
    tracep->declBus(c+72,"io_memory_w_strb", false,-1, 3,0);
    tracep->declBit(c+119,"io_memory_b_valid", false,-1);
    tracep->declBit(c+37,"io_memory_b_ready", false,-1);
    tracep->declBit(c+73,"io_memory_ar_valid", false,-1);
    tracep->declBit(c+36,"io_memory_ar_ready", false,-1);
    tracep->declBus(c+74,"io_memory_ar_addr", false,-1, 31,0);
    tracep->declBit(c+120,"io_memory_r_valid", false,-1);
    tracep->declBit(c+38,"io_memory_r_ready", false,-1);
    tracep->declBus(c+57,"lsu_reg_inst", false,-1, 31,0);
    tracep->declBus(c+100,"lsu_reg_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+101,"lsu_reg_rs2_data", false,-1, 31,0);
    tracep->declBit(c+58,"isLoad", false,-1);
    tracep->declBit(c+59,"isStore", false,-1);
    tracep->declBus(c+102,"state", false,-1, 1,0);
    tracep->declBit(c+86,"io_in_ready_0", false,-1);
    tracep->declBit(c+35,"io_memory_w_valid_0", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("write_mask_gen ");
    tracep->declBus(c+100,"io_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+101,"io_dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+103,"io_control", false,-1, 2,0);
    tracep->declBus(c+104,"io_wmask", false,-1, 7,0);
    tracep->declBus(c+105,"io_dmem_wdata", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+125,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+126,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBus(c+127,"rd_data", false,-1, 31,0);
    tracep->declBus(c+128,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+129,"wen", false,-1);
    tracep->declBus(c+51,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+52,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+50,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+85,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+33,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+115,"clock", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBit(c+115,"io_clk", false,-1);
    tracep->declBit(c+116,"io_rst", false,-1);
    tracep->declBit(c+39,"io_axi_aw_valid", false,-1);
    tracep->declBit(c+40,"io_axi_aw_ready", false,-1);
    tracep->declBus(c+75,"io_axi_aw_addr", false,-1, 31,0);
    tracep->declBit(c+39,"io_axi_w_valid", false,-1);
    tracep->declBit(c+40,"io_axi_w_ready", false,-1);
    tracep->declBus(c+76,"io_axi_w_data", false,-1, 31,0);
    tracep->declBus(c+77,"io_axi_w_strb", false,-1, 3,0);
    tracep->declBit(c+121,"io_axi_b_valid", false,-1);
    tracep->declBit(c+41,"io_axi_b_ready", false,-1);
    tracep->declBit(c+78,"io_axi_ar_valid", false,-1);
    tracep->declBit(c+40,"io_axi_ar_ready", false,-1);
    tracep->declBus(c+79,"io_axi_ar_addr", false,-1, 31,0);
    tracep->declBit(c+122,"io_axi_r_valid", false,-1);
    tracep->declBit(c+42,"io_axi_r_ready", false,-1);
    tracep->declBus(c+123,"io_axi_r_data", false,-1, 31,0);
    tracep->declBus(c+106,"state", false,-1, 1,0);
    tracep->declBus(c+107,"addr_reg", false,-1, 31,0);
    tracep->declBus(c+108,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+109,"wstrb_reg", false,-1, 7,0);
    tracep->declBit(c+110,"rd_req_valid", false,-1);
    tracep->declBit(c+111,"wt_req_valid", false,-1);
    tracep->declBit(c+40,"io_axi_w_ready_0", false,-1);
    tracep->pushNamePrefix("sram ");
    tracep->declBus(c+130,"DELAY_CYCLES", false,-1, 31,0);
    tracep->declBus(c+126,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"rst", false,-1);
    tracep->declBit(c+110,"rd_req_valid", false,-1);
    tracep->declBus(c+107,"addr", false,-1, 31,0);
    tracep->declBus(c+112,"data_out", false,-1, 31,0);
    tracep->declBit(c+113,"rd_res_valid", false,-1);
    tracep->declBit(c+111,"wt_req_valid", false,-1);
    tracep->declBus(c+107,"waddr", false,-1, 31,0);
    tracep->declBus(c+108,"wdata", false,-1, 31,0);
    tracep->declBus(c+109,"wmask", false,-1, 7,0);
    tracep->declBit(c+114,"wt_res_valid", false,-1);
    tracep->declBus(c+61,"addr_delayed", false,-1, 31,0);
    tracep->declBit(c+62,"rd_req_valid_delayed", false,-1);
    tracep->declBus(c+63,"waddr_delayed", false,-1, 31,0);
    tracep->declBus(c+64,"wdata_delayed", false,-1, 31,0);
    tracep->declBus(c+65,"wmask_delayed", false,-1, 7,0);
    tracep->declBit(c+66,"wt_req_valid_delayed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+115,"clock", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBit(c+99,"io_in_valid", false,-1);
    tracep->declBus(c+127,"io_wb_data", false,-1, 31,0);
    tracep->declBus(c+128,"io_wb_addr", false,-1, 4,0);
    tracep->declBit(c+129,"io_wb_wen", false,-1);
    tracep->declBit(c+55,"io_pc_wen", false,-1);
    tracep->declBus(c+60,"state", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_init_top(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root__trace_init_top\n"); );
    // Body
    Vysyx_24120009_core___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24120009_core___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24120009_core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_register(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_24120009_core___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_24120009_core___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_24120009_core___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_full_sub_0(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_24120009_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24120009_core___024root*>(voidSelf);
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_24120009_core___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_full_sub_0(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h5d0c4d3a__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+34,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h4ab110e3__0) 
                            & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__io_axi_w_ready_0))));
    bufp->fullBit(oldp+35,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_memory_w_valid_0));
    bufp->fullBit(oldp+36,(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready));
    bufp->fullBit(oldp+37,(((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____VdfgTmp_h9bd8307f__0) 
                            & (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready))));
    bufp->fullBit(oldp+38,(((0U != (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)) 
                            & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_1) 
                               & (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready)))));
    bufp->fullBit(oldp+39,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0) 
                            & (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_memory_w_valid_0))));
    bufp->fullBit(oldp+40,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__io_axi_w_ready_0));
    bufp->fullBit(oldp+41,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0) 
                            & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____VdfgTmp_h9bd8307f__0) 
                               & (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready)))));
    bufp->fullBit(oldp+42,(((0U != (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)) 
                            & ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state))
                                ? ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT___GEN_2)) 
                                   & (2U == (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state)))
                                : ((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)) 
                                   & ((0U != (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)) 
                                      & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_1) 
                                         & (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready))))))));
    bufp->fullBit(oldp+43,(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__unnamedblk1__DOT__isLSUActive));
    bufp->fullIData(oldp+44,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst),32);
    bufp->fullCData(oldp+46,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__state),2);
    bufp->fullIData(oldp+47,((0xfffffffeU & (vlSelf->ysyx_24120009_core__DOT___regfile_rs1_data 
                                             + (((- (IData)(
                                                            (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                   >> 0x14U))))),32);
    bufp->fullIData(oldp+48,((vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_pc 
                              + (((- (IData)((vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0x800U 
                                               & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                       >> 7U))))))),32);
    bufp->fullIData(oldp+49,((vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_pc 
                              + (((- (IData)((vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst) 
                                               | ((0x800U 
                                                   & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                        >> 0x14U))))))),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_24120009_core__DOT___regfile_rs1_data),32);
    bufp->fullCData(oldp+51,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+52,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_pc),32);
    bufp->fullCData(oldp+54,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__state),2);
    bufp->fullBit(oldp+55,((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state))));
    bufp->fullIData(oldp+56,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst),32);
    bufp->fullBit(oldp+58,((3U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst))));
    bufp->fullBit(oldp+59,((0x23U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst))));
    bufp->fullCData(oldp+60,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state),2);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__addr_delayed),32);
    bufp->fullBit(oldp+62,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__rd_req_valid_delayed));
    bufp->fullIData(oldp+63,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__waddr_delayed),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wdata_delayed),32);
    bufp->fullCData(oldp+65,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wmask_delayed),8);
    bufp->fullBit(oldp+66,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wt_req_valid_delayed));
    bufp->fullBit(oldp+67,(vlSelf->ysyx_24120009_core__DOT___ifu_io_memory_ar_valid));
    bufp->fullIData(oldp+68,(((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT___GEN_3)
                               ? vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc
                               : 0U)),32);
    bufp->fullBit(oldp+69,(((~ (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT___GEN_2)) 
                            & (2U == (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state)))));
    bufp->fullIData(oldp+70,(((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2)
                               ? 0U : vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
    bufp->fullIData(oldp+71,(((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2)
                               ? 0U : (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_rs2_data 
                                       << (0x18U & 
                                           (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                            << 3U))))),32);
    bufp->fullCData(oldp+72,(((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2)
                               ? 0U : (0xfU & (((0U 
                                                 == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____Vcellinp__write_mask_gen__io_control))
                                                 ? 1U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____Vcellinp__write_mask_gen__io_control))
                                                  ? 3U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____Vcellinp__write_mask_gen__io_control))
                                                   ? 0xfU
                                                   : 0U))) 
                                               << (3U 
                                                   & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr))))),4);
    bufp->fullBit(oldp+73,(vlSelf->ysyx_24120009_core__DOT___lsu_io_memory_ar_valid));
    bufp->fullIData(oldp+74,(((1U & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_1)) 
                                     | (0U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state))))
                               ? 0U : vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
    bufp->fullIData(oldp+75,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT___GEN_3)
                               ? 0U : ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2)
                                        ? 0U : vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr))),32);
    bufp->fullIData(oldp+76,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT___GEN_3)
                               ? 0U : ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2)
                                        ? 0U : (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_rs2_data 
                                                << 
                                                (0x18U 
                                                 & (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                                    << 3U)))))),32);
    bufp->fullCData(oldp+77,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT___GEN_3)
                               ? 0U : ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2)
                                        ? 0U : (0xfU 
                                                & (((0U 
                                                     == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____Vcellinp__write_mask_gen__io_control))
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____Vcellinp__write_mask_gen__io_control))
                                                      ? 3U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____Vcellinp__write_mask_gen__io_control))
                                                       ? 0xfU
                                                       : 0U))) 
                                                   << 
                                                   (3U 
                                                    & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr)))))),4);
    bufp->fullBit(oldp+78,(vlSelf->ysyx_24120009_core__DOT___arbiter_io_axi_ar_valid));
    __Vtemp_h5d0c4d3a__0[0U] = 0U;
    __Vtemp_h5d0c4d3a__0[1U] = ((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT___GEN_3)
                                 ? vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc
                                 : 0U);
    __Vtemp_h5d0c4d3a__0[2U] = (IData)((QData)((IData)(
                                                       ((1U 
                                                         & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_1)) 
                                                            | (0U 
                                                               == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state))))
                                                         ? 0U
                                                         : vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr))));
    __Vtemp_h5d0c4d3a__0[3U] = (IData)(((QData)((IData)(
                                                        ((1U 
                                                          & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_1)) 
                                                             | (0U 
                                                                == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state))))
                                                          ? 0U
                                                          : vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr))) 
                                        >> 0x20U));
    bufp->fullIData(oldp+79,((((0U == (0x1fU & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                                << 5U)))
                                ? 0U : (__Vtemp_h5d0c4d3a__0[
                                        (((IData)(0x1fU) 
                                          + (0x7fU 
                                             & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                                << 5U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                             << 5U))))) 
                              | (__Vtemp_h5d0c4d3a__0[
                                 (3U & (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state))] 
                                 >> (0x1fU & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                              << 5U))))),32);
    bufp->fullCData(oldp+80,(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state),2);
    bufp->fullBit(oldp+81,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+82,(vlSelf->ysyx_24120009_core__DOT___idu_io_out_valid));
    bufp->fullIData(oldp+83,(vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_24120009_core__DOT___regfile_rs2_data),32);
    bufp->fullBit(oldp+86,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+87,(vlSelf->ysyx_24120009_core__DOT___exu_io_out_valid));
    bufp->fullIData(oldp+88,(((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                               ? (vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1 
                                  + vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2)
                               : ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                   ? (vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1 
                                      - vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2)
                                   : ((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                       ? (vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1 
                                          & vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2)
                                       : ((3U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                           ? (vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1 
                                              | vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2)
                                           : ((4U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                               ? (vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1 
                                                  ^ vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2)
                                               : ((5U 
                                                   == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                                   ? 
                                                  VL_LTS_III(32, vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1, vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                                    ? 
                                                   (vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1 
                                                    < vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                                     ? 
                                                    (vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2))
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1, 
                                                                    (0x1fU 
                                                                     & vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2))
                                                      : 
                                                     ((9U 
                                                       == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                                       ? 
                                                      (vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2))
                                                       : 
                                                      ((0xfU 
                                                        == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                                        ? vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1
                                                        : 0U)))))))))))),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_rs2_data),32);
    bufp->fullCData(oldp+90,(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp),5);
    bufp->fullBit(oldp+91,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+92,(vlSelf->ysyx_24120009_core__DOT___ifu_io_out_valid));
    bufp->fullIData(oldp+93,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc),32);
    bufp->fullCData(oldp+94,(vlSelf->ysyx_24120009_core__DOT___idu_io_pc_sel),3);
    bufp->fullBit(oldp+95,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq));
    bufp->fullBit(oldp+96,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt));
    bufp->fullBit(oldp+97,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu));
    bufp->fullCData(oldp+98,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state),2);
    bufp->fullBit(oldp+99,(((~ ((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)) 
                                | (1U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)))) 
                            & (2U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)))));
    bufp->fullIData(oldp+100,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_rs2_data),32);
    bufp->fullCData(oldp+102,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state),2);
    bufp->fullCData(oldp+103,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____Vcellinp__write_mask_gen__io_control),3);
    bufp->fullCData(oldp+104,((0xffU & (((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____Vcellinp__write_mask_gen__io_control))
                                          ? 1U : ((1U 
                                                   == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____Vcellinp__write_mask_gen__io_control))
                                                   ? 3U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____Vcellinp__write_mask_gen__io_control))
                                                    ? 0xfU
                                                    : 0U))) 
                                        << (3U & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr)))),8);
    bufp->fullIData(oldp+105,((vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_rs2_data 
                               << (0x18U & (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                            << 3U)))),32);
    bufp->fullCData(oldp+106,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state),2);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__addr_reg),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__wdata_reg),32);
    bufp->fullCData(oldp+109,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__wstrb_reg),8);
    bufp->fullBit(oldp+110,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__rd_req_valid));
    bufp->fullBit(oldp+111,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__wt_req_valid));
    bufp->fullIData(oldp+112,(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_data_out),32);
    bufp->fullBit(oldp+113,(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_rd_res_valid));
    bufp->fullBit(oldp+114,(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_wt_res_valid));
    bufp->fullBit(oldp+115,(vlSelf->clock));
    bufp->fullBit(oldp+116,(vlSelf->reset));
    bufp->fullBit(oldp+117,(vlSelf->ysyx_24120009_core__DOT___arbiter_io_ifu_r_valid));
    bufp->fullIData(oldp+118,((((1U != (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)) 
                                | (0U == (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)))
                                ? 0U : ((1U & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT____VdfgTmp_hb61e3587__0)) 
                                               | (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN_3)))
                                         ? 0U : vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_data_out))),32);
    bufp->fullBit(oldp+119,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0) 
                             & ((~ ((IData)(vlSelf->reset) 
                                    | (0U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)))) 
                                & ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)) 
                                   & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_wt_res_valid))))));
    bufp->fullBit(oldp+120,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0) 
                             & (IData)(vlSelf->ysyx_24120009_core__DOT___sram_io_axi_r_valid))));
    bufp->fullBit(oldp+121,(((~ ((IData)(vlSelf->reset) 
                                 | (0U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)))) 
                             & ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)) 
                                & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_wt_res_valid)))));
    bufp->fullBit(oldp+122,(vlSelf->ysyx_24120009_core__DOT___sram_io_axi_r_valid));
    bufp->fullIData(oldp+123,(((1U & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT____VdfgTmp_hb61e3587__0)) 
                                      | (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN_3)))
                                ? 0U : vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_data_out)),32);
    bufp->fullIData(oldp+124,(((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT___GEN_3)
                                ? vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer
                                : 0U)),32);
    bufp->fullIData(oldp+125,(5U),32);
    bufp->fullIData(oldp+126,(0x20U),32);
    bufp->fullIData(oldp+127,(0U),32);
    bufp->fullCData(oldp+128,(0U),5);
    bufp->fullBit(oldp+129,(0U));
    bufp->fullIData(oldp+130,(1U),32);
}
