// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24120009_core__Syms.h"


void Vysyx_24120009_core___024root__trace_chg_sub_0(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_24120009_core___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_24120009_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24120009_core___024root*>(voidSelf);
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_24120009_core___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_24120009_core___024root__trace_chg_sub_0(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_h3e4b9c5b__0;
    VlWide<13>/*415:0*/ __Vtemp_hd74bf4d1__0;
    VlWide<5>/*159:0*/ __Vtemp_h4b1a9c47__0;
    VlWide<6>/*191:0*/ __Vtemp_h47858337__0;
    VlWide<6>/*191:0*/ __Vtemp_hdb58eddb__0;
    VlWide<5>/*159:0*/ __Vtemp_h650a5f8e__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[0]),5);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[1]),5);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[2]),5);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[3]),5);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[4]),5);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[5]),5);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[6]),5);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[7]),5);
        bufp->chgCData(oldp+8,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[8]),5);
        bufp->chgCData(oldp+9,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[9]),5);
        bufp->chgCData(oldp+10,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[10]),5);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+12,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+13,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+15,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+16,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+17,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+18,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+19,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+20,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+21,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+22,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+23,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+24,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+25,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+26,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+27,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+28,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+29,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+30,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+31,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+32,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[4]),3);
        bufp->chgSData(oldp+33,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[0]),13);
        bufp->chgSData(oldp+34,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[1]),13);
        bufp->chgSData(oldp+35,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[2]),13);
        bufp->chgSData(oldp+36,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[3]),13);
        bufp->chgSData(oldp+37,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[4]),13);
        bufp->chgSData(oldp+38,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[5]),13);
        bufp->chgSData(oldp+39,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[6]),13);
        bufp->chgSData(oldp+40,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[7]),13);
        bufp->chgSData(oldp+41,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[0]),10);
        bufp->chgSData(oldp+42,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[1]),10);
        bufp->chgSData(oldp+43,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[2]),10);
        bufp->chgSData(oldp+44,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[3]),10);
        bufp->chgSData(oldp+45,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[4]),10);
        bufp->chgSData(oldp+46,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[5]),10);
        bufp->chgSData(oldp+47,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[6]),10);
        bufp->chgSData(oldp+48,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[7]),10);
        bufp->chgCData(oldp+49,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+50,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+51,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+52,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+53,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+54,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[5]),3);
        bufp->chgCData(oldp+55,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[6]),3);
        bufp->chgCData(oldp+56,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[7]),3);
        bufp->chgSData(oldp+57,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list[0]),11);
        bufp->chgSData(oldp+58,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list[1]),11);
        bufp->chgSData(oldp+59,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list[2]),11);
        bufp->chgCData(oldp+60,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+61,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+62,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+63,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list[0]),8);
        bufp->chgCData(oldp+64,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list[1]),8);
        bufp->chgCData(oldp+65,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list[2]),8);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+67,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list[0]),2);
        bufp->chgCData(oldp+68,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list[1]),2);
        bufp->chgCData(oldp+69,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list[2]),2);
        bufp->chgCData(oldp+70,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list[3]),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+71,(vlSelf->ysyx_24120009_core__DOT__reg_write_data),32);
        bufp->chgCData(oldp+72,(vlSelf->ysyx_24120009_core__DOT__pc_sel),3);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_24120009_core__DOT__Op1),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_24120009_core__DOT__jump_reg_target),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_24120009_core__DOT__pc_from_IDU_to_EXU),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU),32);
        bufp->chgCData(oldp+78,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                          >> 7U))),5);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_24120009_core__DOT__pc_from_EXU_to_MEM),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_EXU_to_MEM),32);
        bufp->chgCData(oldp+82,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_EXU_to_MEM),5);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_24120009_core__DOT__result_from_MEM_to_WBU),32);
        bufp->chgCData(oldp+84,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_MEM_to_WBU),5);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_24120009_core__DOT__pc_from_MEM_to_WBU),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM),32);
        bufp->chgCData(oldp+88,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+89,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+90,(vlSelf->ysyx_24120009_core__DOT__waddr),5);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_24120009_core__DOT__rdata1),32);
        bufp->chgCData(oldp+92,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op),5);
        bufp->chgCData(oldp+93,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+94,((vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+95,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)),7);
        bufp->chgBit(oldp+96,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+97,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq));
        bufp->chgBit(oldp+98,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt));
        bufp->chgBit(oldp+99,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu));
        bufp->chgCData(oldp+100,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel),2);
        bufp->chgCData(oldp+101,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel),2);
        bufp->chgSData(oldp+102,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                  >> 0x14U)),12);
        bufp->chgSData(oldp+103,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s),12);
        bufp->chgSData(oldp+104,(((0x800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                             >> 0x14U)) 
                                  | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                << 3U)) 
                                     | ((0x3f0U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                   >> 0x15U)) 
                                        | (0xfU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                   >> 8U)))))),12);
        bufp->chgIData(oldp+105,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                  >> 0xcU)),20);
        bufp->chgIData(oldp+106,(((0x80000U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                               >> 0xcU)) 
                                  | ((0x7f800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0x15U)))))),20);
        bufp->chgIData(oldp+107,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext),32);
        bufp->chgIData(oldp+108,((((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                               >> 0x1fU))) 
                                   << 0xcU) | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s))),32);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext),32);
        bufp->chgIData(oldp+110,((0xfffff000U & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext),32);
        bufp->chgCData(oldp+112,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+113,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+114,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),7);
        bufp->chgBit(oldp+115,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__branch_taken));
        bufp->chgIData(oldp+116,((0x28aceU | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq) 
                                               << 0x14U) 
                                              | ((0x10000U 
                                                  & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq)) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt) 
                                                     << 0xcU) 
                                                    | ((0x100U 
                                                        & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt)) 
                                                           << 8U)) 
                                                       | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu) 
                                                           << 4U) 
                                                          | (1U 
                                                             & (~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu)))))))))),24);
        bufp->chgCData(oldp+117,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+118,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+119,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[2]),4);
        bufp->chgCData(oldp+120,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[3]),4);
        bufp->chgCData(oldp+121,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[4]),4);
        bufp->chgCData(oldp+122,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[5]),4);
        bufp->chgBit(oldp+123,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+124,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+125,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+126,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+127,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[4]));
        bufp->chgBit(oldp+128,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[5]));
        bufp->chgBit(oldp+129,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+130,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit));
        __Vtemp_h3e4b9c5b__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(
                                                              (0xfffff000U 
                                                               & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)))));
        __Vtemp_h3e4b9c5b__0[1U] = ((vlSelf->ysyx_24120009_core__DOT__rdata1 
                                     << 2U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(
                                                                          (0xfffff000U 
                                                                           & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)))) 
                                                       >> 0x20U)));
        __Vtemp_h3e4b9c5b__0[2U] = (vlSelf->ysyx_24120009_core__DOT__rdata1 
                                    >> 0x1eU);
        bufp->chgWData(oldp+131,(__Vtemp_h3e4b9c5b__0),68);
        bufp->chgQData(oldp+134,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+136,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgIData(oldp+138,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+139,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+140,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+141,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+142,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+143,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+144,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o),32);
        bufp->chgIData(oldp+145,(((0x1fU >= (0x18U 
                                             & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                << 3U)))
                                   ? (vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o 
                                      << (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                   << 3U)))
                                   : 0U)),32);
        bufp->chgCData(oldp+146,((0xffU & ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask) 
                                           << (3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)))),8);
        bufp->chgCData(oldp+147,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access),3);
        bufp->chgIData(oldp+148,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o),32);
        bufp->chgCData(oldp+149,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+150,((vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+151,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU)),7);
        bufp->chgCData(oldp+152,((3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)),2);
        bufp->chgBit(oldp+153,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+154,(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key),10);
        bufp->chgCData(oldp+155,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+156,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+157,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask),8);
        bufp->chgCData(oldp+158,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+159,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+160,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0]),32);
        bufp->chgIData(oldp+161,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[1]),32);
        bufp->chgIData(oldp+162,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[2]),32);
        bufp->chgIData(oldp+163,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[3]),32);
        bufp->chgIData(oldp+164,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[4]),32);
        bufp->chgIData(oldp+165,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[5]),32);
        bufp->chgIData(oldp+166,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[6]),32);
        bufp->chgIData(oldp+167,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[7]),32);
        bufp->chgIData(oldp+168,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[8]),32);
        bufp->chgIData(oldp+169,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[9]),32);
        bufp->chgIData(oldp+170,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[10]),32);
        bufp->chgIData(oldp+171,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[11]),32);
        bufp->chgIData(oldp+172,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[12]),32);
        bufp->chgIData(oldp+173,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[13]),32);
        bufp->chgIData(oldp+174,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[14]),32);
        bufp->chgIData(oldp+175,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[15]),32);
        bufp->chgIData(oldp+176,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[16]),32);
        bufp->chgIData(oldp+177,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[17]),32);
        bufp->chgIData(oldp+178,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[18]),32);
        bufp->chgIData(oldp+179,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[19]),32);
        bufp->chgIData(oldp+180,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[20]),32);
        bufp->chgIData(oldp+181,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[21]),32);
        bufp->chgIData(oldp+182,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[22]),32);
        bufp->chgIData(oldp+183,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[23]),32);
        bufp->chgIData(oldp+184,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[24]),32);
        bufp->chgIData(oldp+185,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[25]),32);
        bufp->chgIData(oldp+186,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[26]),32);
        bufp->chgIData(oldp+187,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[27]),32);
        bufp->chgIData(oldp+188,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[28]),32);
        bufp->chgIData(oldp+189,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[29]),32);
        bufp->chgIData(oldp+190,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[30]),32);
        bufp->chgIData(oldp+191,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[31]),32);
        bufp->chgIData(oldp+192,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o),32);
        bufp->chgIData(oldp+193,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o),32);
        bufp->chgIData(oldp+194,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o),32);
        bufp->chgCData(oldp+195,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel),2);
        bufp->chgCData(oldp+196,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+197,((vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                                  >> 0x19U)),7);
        bufp->chgQData(oldp+198,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+200,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+202,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+204,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+206,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+207,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+208,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+209,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[3]),32);
        bufp->chgIData(oldp+210,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+211,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+212,((vlSelf->ysyx_24120009_core__DOT__Op1 
                                  + vlSelf->ysyx_24120009_core__DOT__Op2)),32);
        bufp->chgIData(oldp+213,((vlSelf->ysyx_24120009_core__DOT__Op1 
                                  - vlSelf->ysyx_24120009_core__DOT__Op2)),32);
        bufp->chgIData(oldp+214,((vlSelf->ysyx_24120009_core__DOT__Op1 
                                  ^ vlSelf->ysyx_24120009_core__DOT__Op2)),32);
        bufp->chgIData(oldp+215,((vlSelf->ysyx_24120009_core__DOT__Op1 
                                  | vlSelf->ysyx_24120009_core__DOT__Op2)),32);
        bufp->chgIData(oldp+216,((vlSelf->ysyx_24120009_core__DOT__Op1 
                                  & vlSelf->ysyx_24120009_core__DOT__Op2)),32);
        bufp->chgIData(oldp+217,(((0x1fU >= (0x1fU 
                                             & vlSelf->ysyx_24120009_core__DOT__Op2))
                                   ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                      << (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                   : 0U)),32);
        bufp->chgIData(oldp+218,(((0x1fU >= (0x1fU 
                                             & vlSelf->ysyx_24120009_core__DOT__Op2))
                                   ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                      >> (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                   : 0U)),32);
        bufp->chgIData(oldp+219,(((0x1fU >= (0x1fU 
                                             & vlSelf->ysyx_24120009_core__DOT__Op2))
                                   ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24120009_core__DOT__Op1, 
                                                    (0x1fU 
                                                     & vlSelf->ysyx_24120009_core__DOT__Op2))
                                   : (- (vlSelf->ysyx_24120009_core__DOT__Op1 
                                         >> 0x1fU)))),32);
        __Vtemp_hd74bf4d1__0[0U] = (IData)((0xa00000000ULL 
                                            | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__Op1))));
        __Vtemp_hd74bf4d1__0[1U] = ((((0x1fU >= (0x1fU 
                                                 & vlSelf->ysyx_24120009_core__DOT__Op2))
                                       ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24120009_core__DOT__Op1, 
                                                        (0x1fU 
                                                         & vlSelf->ysyx_24120009_core__DOT__Op2))
                                       : (- (vlSelf->ysyx_24120009_core__DOT__Op1 
                                             >> 0x1fU))) 
                                     << 5U) | (IData)(
                                                      ((0xa00000000ULL 
                                                        | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__Op1))) 
                                                       >> 0x20U)));
        __Vtemp_hd74bf4d1__0[2U] = (0x120U | ((((0x1fU 
                                                 >= 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                                 ? 
                                                (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                                 : 0U) 
                                               << 0xaU) 
                                              | (((0x1fU 
                                                   >= 
                                                   (0x1fU 
                                                    & vlSelf->ysyx_24120009_core__DOT__Op2))
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24120009_core__DOT__Op1, 
                                                                 (0x1fU 
                                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                                   : 
                                                  (- 
                                                   (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                    >> 0x1fU))) 
                                                 >> 0x1bU)));
        __Vtemp_hd74bf4d1__0[3U] = (0x2000U | ((((0x1fU 
                                                  >= 
                                                  (0x1fU 
                                                   & vlSelf->ysyx_24120009_core__DOT__Op2))
                                                  ? 
                                                 (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->ysyx_24120009_core__DOT__Op2))
                                                  : 0U) 
                                                << 0xfU) 
                                               | (((0x1fU 
                                                    >= 
                                                    (0x1fU 
                                                     & vlSelf->ysyx_24120009_core__DOT__Op2))
                                                    ? 
                                                   (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->ysyx_24120009_core__DOT__Op2))
                                                    : 0U) 
                                                  >> 0x16U)));
        __Vtemp_hd74bf4d1__0[4U] = (0x38000U | (((vlSelf->ysyx_24120009_core__DOT__Op1 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2) 
                                                 << 0x14U) 
                                                | (((0x1fU 
                                                     >= 
                                                     (0x1fU 
                                                      & vlSelf->ysyx_24120009_core__DOT__Op2))
                                                     ? 
                                                    (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->ysyx_24120009_core__DOT__Op2))
                                                     : 0U) 
                                                   >> 0x11U)));
        __Vtemp_hd74bf4d1__0[5U] = (0x600000U | (((vlSelf->ysyx_24120009_core__DOT__Op1 
                                                   | vlSelf->ysyx_24120009_core__DOT__Op2) 
                                                  << 0x19U) 
                                                 | ((vlSelf->ysyx_24120009_core__DOT__Op1 
                                                     & vlSelf->ysyx_24120009_core__DOT__Op2) 
                                                    >> 0xcU)));
        __Vtemp_hd74bf4d1__0[6U] = (0xa000000U | ((
                                                   (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                    ^ vlSelf->ysyx_24120009_core__DOT__Op2) 
                                                   << 0x1eU) 
                                                  | ((vlSelf->ysyx_24120009_core__DOT__Op1 
                                                      | vlSelf->ysyx_24120009_core__DOT__Op2) 
                                                     >> 7U)));
        __Vtemp_hd74bf4d1__0[7U] = ((vlSelf->ysyx_24120009_core__DOT__Op1 
                                     ^ vlSelf->ysyx_24120009_core__DOT__Op2) 
                                    >> 2U);
        __Vtemp_hd74bf4d1__0[8U] = (1U | ((IData)(vlSelf->__VdfgTmp_h9d0653ad__0) 
                                          << 3U));
        __Vtemp_hd74bf4d1__0[9U] = (0x18U | (((IData)(vlSelf->__VdfgTmp_h9d12977d__0) 
                                              << 8U) 
                                             | ((IData)(vlSelf->__VdfgTmp_h9d0653ad__0) 
                                                >> 0x1dU)));
        __Vtemp_hd74bf4d1__0[0xaU] = (0x200U | (((vlSelf->ysyx_24120009_core__DOT__Op1 
                                                  - vlSelf->ysyx_24120009_core__DOT__Op2) 
                                                 << 0xdU) 
                                                | ((IData)(vlSelf->__VdfgTmp_h9d12977d__0) 
                                                   >> 0x18U)));
        __Vtemp_hd74bf4d1__0[0xbU] = (0x2000U | (((vlSelf->ysyx_24120009_core__DOT__Op1 
                                                   + vlSelf->ysyx_24120009_core__DOT__Op2) 
                                                  << 0x12U) 
                                                 | ((vlSelf->ysyx_24120009_core__DOT__Op1 
                                                     - vlSelf->ysyx_24120009_core__DOT__Op2) 
                                                    >> 0x13U)));
        __Vtemp_hd74bf4d1__0[0xcU] = ((vlSelf->ysyx_24120009_core__DOT__Op1 
                                       + vlSelf->ysyx_24120009_core__DOT__Op2) 
                                      >> 0xeU);
        bufp->chgWData(oldp+220,(__Vtemp_hd74bf4d1__0),407);
        bufp->chgQData(oldp+233,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+235,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+237,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[2]),37);
        bufp->chgQData(oldp+239,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[3]),37);
        bufp->chgQData(oldp+241,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[4]),37);
        bufp->chgQData(oldp+243,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[5]),37);
        bufp->chgQData(oldp+245,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[6]),37);
        bufp->chgQData(oldp+247,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[7]),37);
        bufp->chgQData(oldp+249,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[8]),37);
        bufp->chgQData(oldp+251,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[9]),37);
        bufp->chgQData(oldp+253,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[10]),37);
        bufp->chgIData(oldp+255,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+256,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+257,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+258,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+259,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+260,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+261,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+262,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+263,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+264,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+265,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[10]),32);
        __Vtemp_h4b1a9c47__0[0U] = (IData)((0x300000000ULL 
                                            | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU))));
        __Vtemp_h4b1a9c47__0[1U] = ((0xfffffffcU & 
                                     (((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                   >> 0x1fU))) 
                                       << 0xeU) | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s) 
                                                   << 2U))) 
                                    | (IData)(((0x300000000ULL 
                                                | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU))) 
                                               >> 0x20U)));
        __Vtemp_h4b1a9c47__0[2U] = (8U | ((vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext 
                                           << 4U) | 
                                          (3U & ((3U 
                                                  & ((- (IData)(
                                                                (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                                 >> 0x1fU))) 
                                                     >> 0x12U)) 
                                                 | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s) 
                                                    >> 0x1eU)))));
        __Vtemp_h4b1a9c47__0[3U] = (0x10U | ((vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc 
                                              << 6U) 
                                             | (vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext 
                                                >> 0x1cU)));
        __Vtemp_h4b1a9c47__0[4U] = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc 
                                    >> 0x1aU);
        bufp->chgWData(oldp+266,(__Vtemp_h4b1a9c47__0),136);
        bufp->chgQData(oldp+271,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+273,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+275,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+277,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+279,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+280,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+281,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+282,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[3]),32);
        __Vtemp_h47858337__0[0U] = 0U;
        __Vtemp_h47858337__0[1U] = (4U | (vlSelf->ysyx_24120009_core__DOT__jmp_target 
                                          << 3U));
        __Vtemp_h47858337__0[2U] = (0x18U | ((vlSelf->ysyx_24120009_core__DOT__br_target 
                                              << 6U) 
                                             | (vlSelf->ysyx_24120009_core__DOT__jmp_target 
                                                >> 0x1dU)));
        __Vtemp_h47858337__0[3U] = (0x80U | ((vlSelf->ysyx_24120009_core__DOT__jump_reg_target 
                                              << 9U) 
                                             | (vlSelf->ysyx_24120009_core__DOT__br_target 
                                                >> 0x1aU)));
        __Vtemp_h47858337__0[4U] = (0x200U | ((((IData)(4U) 
                                                + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc) 
                                               << 0xcU) 
                                              | (vlSelf->ysyx_24120009_core__DOT__jump_reg_target 
                                                 >> 0x17U)));
        __Vtemp_h47858337__0[5U] = (((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc) 
                                    >> 0x14U);
        bufp->chgWData(oldp+283,(__Vtemp_h47858337__0),175);
        bufp->chgQData(oldp+289,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+291,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+293,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+295,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+297,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+299,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+300,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+301,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+302,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+303,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[4]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+304,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__inst),32);
        bufp->chgBit(oldp+305,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__rd_res_valid));
        bufp->chgIData(oldp+306,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__addr_delayed),32);
        bufp->chgBit(oldp+307,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__rd_req_delayed));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+308,(vlSelf->ysyx_24120009_core__DOT__Op2),32);
        bufp->chgIData(oldp+309,(vlSelf->ysyx_24120009_core__DOT__br_target),32);
        bufp->chgIData(oldp+310,(vlSelf->ysyx_24120009_core__DOT__jmp_target),32);
        bufp->chgIData(oldp+311,(vlSelf->ysyx_24120009_core__DOT__result_from_EXU_to_MEM),32);
        bufp->chgIData(oldp+312,(vlSelf->__VdfgTmp_h9d12977d__0),32);
        bufp->chgIData(oldp+313,(vlSelf->__VdfgTmp_h9d0653ad__0),32);
        bufp->chgIData(oldp+314,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgIData(oldp+315,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgIData(oldp+316,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc),32);
        bufp->chgIData(oldp+317,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next),32);
        bufp->chgIData(oldp+318,(((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc)),32);
        bufp->chgIData(oldp+319,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+320,(vlSelf->ysyx_24120009_core__DOT__rf_we));
        bufp->chgIData(oldp+321,(vlSelf->ysyx_24120009_core__DOT__dmem_rdata_from_MEM_to_WBU),32);
        bufp->chgIData(oldp+322,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw),32);
        bufp->chgIData(oldp+323,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data),32);
        bufp->chgIData(oldp+324,((0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
        bufp->chgIData(oldp+325,((0xffffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
        bufp->chgIData(oldp+326,((((- (IData)((1U & 
                                               (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                >> 7U)))) 
                                   << 8U) | (0xffU 
                                             & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
        bufp->chgIData(oldp+327,((((- (IData)((1U & 
                                               (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                >> 0xfU)))) 
                                   << 0x10U) | (0xffffU 
                                                & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
        __Vtemp_hdb58eddb__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                                               >> 0xfU)))) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))))));
        __Vtemp_hdb58eddb__0[1U] = ((0xfffffff8U & 
                                     (((- (IData)((1U 
                                                   & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                      >> 7U)))) 
                                       << 0xbU) | (0x7f8U 
                                                   & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                      << 3U)))) 
                                    | (IData)(((0x100000000ULL 
                                                | (QData)((IData)(
                                                                  (((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                                                >> 0xfU)))) 
                                                                    << 0x10U) 
                                                                   | (0xffffU 
                                                                      & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))))) 
                                               >> 0x20U)));
        __Vtemp_hdb58eddb__0[2U] = ((vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw 
                                     << 6U) | (7U & 
                                               ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                               >> 7U)))) 
                                                >> 0x15U)));
        __Vtemp_hdb58eddb__0[3U] = (0x80U | ((0x1fffe00U 
                                              & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                 << 9U)) 
                                             | (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw 
                                                >> 0x1aU)));
        __Vtemp_hdb58eddb__0[4U] = (0xa00U | (0xff000U 
                                              & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                 << 0xcU)));
        __Vtemp_hdb58eddb__0[5U] = 0x4000U;
        bufp->chgWData(oldp+328,(__Vtemp_hdb58eddb__0),175);
        bufp->chgQData(oldp+334,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+336,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+338,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+340,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+342,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+344,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+345,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+346,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+347,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+348,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+349,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out),32);
    }
    bufp->chgBit(oldp+350,(vlSelf->clk));
    bufp->chgBit(oldp+351,(vlSelf->rst));
    bufp->chgIData(oldp+352,(vlSelf->pc_debug),32);
    bufp->chgIData(oldp+353,(vlSelf->inst_debug),32);
    bufp->chgIData(oldp+354,(vlSelf->reg_write_data_debug),32);
    bufp->chgIData(oldp+355,(vlSelf->x2_debug),32);
    bufp->chgCData(oldp+356,(vlSelf->waddr_debug),5);
    bufp->chgBit(oldp+357,(vlSelf->mem_wen_debug));
    bufp->chgBit(oldp+358,(vlSelf->mem_en_debug));
    bufp->chgIData(oldp+359,(vlSelf->Op1_debug),32);
    bufp->chgIData(oldp+360,(vlSelf->Op2_debug),32);
    bufp->chgBit(oldp+361,(vlSelf->rf_we_debug));
    bufp->chgBit(oldp+362,(vlSelf->wbu_active_debug));
    bufp->chgIData(oldp+363,(vlSelf->imem_addr_debug),32);
    bufp->chgIData(oldp+364,(vlSelf->pc_plus4_debug),32);
    bufp->chgCData(oldp+365,(vlSelf->wb_sel_debug),2);
    bufp->chgCData(oldp+366,(vlSelf->opcode_debug),7);
    bufp->chgBit(oldp+367,(vlSelf->pc_wen_debug));
    bufp->chgBit(oldp+368,(vlSelf->mem_active_debug));
    bufp->chgIData(oldp+369,(vlSelf->result_from_EXU_to_MEM_debug),32);
    bufp->chgIData(oldp+370,(vlSelf->result_from_MEM_to_WBU_debug),32);
    bufp->chgIData(oldp+371,(vlSelf->result_from_WB_debug),32);
    bufp->chgCData(oldp+372,(vlSelf->alu_op_debug),5);
    bufp->chgIData(oldp+373,(vlSelf->inst_from_EXU_to_MEM_debug),32);
    bufp->chgBit(oldp+374,(((IData)(vlSelf->mem_active_debug) 
                            & ((3U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU)) 
                               | (0x23U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU))))));
    bufp->chgBit(oldp+375,(((IData)(vlSelf->mem_active_debug) 
                            & (0x23U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU)))));
    __Vtemp_h650a5f8e__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o))));
    __Vtemp_h650a5f8e__0[1U] = ((vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o 
                                 << 2U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o))) 
                                                   >> 0x20U)));
    __Vtemp_h650a5f8e__0[2U] = (8U | ((vlSelf->pc_plus4_debug 
                                       << 4U) | (vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o 
                                                 >> 0x1eU)));
    __Vtemp_h650a5f8e__0[3U] = (0x10U | (vlSelf->pc_plus4_debug 
                                         >> 0x1cU));
    __Vtemp_h650a5f8e__0[4U] = 0U;
    bufp->chgWData(oldp+376,(__Vtemp_h650a5f8e__0),136);
}

void Vysyx_24120009_core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root__trace_cleanup\n"); );
    // Init
    Vysyx_24120009_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24120009_core___024root*>(voidSelf);
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
