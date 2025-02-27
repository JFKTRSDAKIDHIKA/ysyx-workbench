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
    VlWide<6>/*191:0*/ __Vtemp_hfb869668__0;
    VlWide<13>/*415:0*/ __Vtemp_hd74bf4d1__0;
    VlWide<5>/*159:0*/ __Vtemp_h992c0b13__0;
    VlWide<3>/*95:0*/ __Vtemp_h6ce46ea2__0;
    VlWide<5>/*159:0*/ __Vtemp_h40015b3a__0;
    VlWide<6>/*191:0*/ __Vtemp_hf96e2bca__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[4]),3);
        bufp->chgSData(oldp+5,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[0]),13);
        bufp->chgSData(oldp+6,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[1]),13);
        bufp->chgSData(oldp+7,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[2]),13);
        bufp->chgSData(oldp+8,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[3]),13);
        bufp->chgSData(oldp+9,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[4]),13);
        bufp->chgSData(oldp+10,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[5]),13);
        bufp->chgSData(oldp+11,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[6]),13);
        bufp->chgSData(oldp+12,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[7]),13);
        bufp->chgSData(oldp+13,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[0]),10);
        bufp->chgSData(oldp+14,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[1]),10);
        bufp->chgSData(oldp+15,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[2]),10);
        bufp->chgSData(oldp+16,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[3]),10);
        bufp->chgSData(oldp+17,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[4]),10);
        bufp->chgSData(oldp+18,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[5]),10);
        bufp->chgSData(oldp+19,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[6]),10);
        bufp->chgSData(oldp+20,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[7]),10);
        bufp->chgCData(oldp+21,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+22,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+23,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+24,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+25,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+26,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[5]),3);
        bufp->chgCData(oldp+27,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[6]),3);
        bufp->chgCData(oldp+28,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[7]),3);
        bufp->chgCData(oldp+29,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[0]),5);
        bufp->chgCData(oldp+30,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[1]),5);
        bufp->chgCData(oldp+31,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[2]),5);
        bufp->chgCData(oldp+32,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[3]),5);
        bufp->chgCData(oldp+33,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[4]),5);
        bufp->chgCData(oldp+34,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[5]),5);
        bufp->chgCData(oldp+35,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[6]),5);
        bufp->chgCData(oldp+36,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[7]),5);
        bufp->chgCData(oldp+37,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[8]),5);
        bufp->chgCData(oldp+38,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[9]),5);
        bufp->chgCData(oldp+39,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[10]),5);
        bufp->chgCData(oldp+40,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list[0]),2);
        bufp->chgCData(oldp+41,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list[1]),2);
        bufp->chgCData(oldp+42,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list[2]),2);
        bufp->chgCData(oldp+43,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list[3]),2);
        bufp->chgCData(oldp+44,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+45,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+46,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+47,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+48,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+49,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+50,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+51,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+52,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+53,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+54,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[4]),3);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+56,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list[0]),11);
        bufp->chgSData(oldp+57,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list[1]),11);
        bufp->chgSData(oldp+58,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list[2]),11);
        bufp->chgCData(oldp+59,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+60,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+61,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+62,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list[0]),8);
        bufp->chgCData(oldp+63,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list[1]),8);
        bufp->chgCData(oldp+64,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list[2]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+65,(vlSelf->ysyx_24120009_core__DOT__pc),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_24120009_core__DOT__reg_write_data),32);
        bufp->chgCData(oldp+67,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                          >> 0xcU))),5);
        bufp->chgCData(oldp+68,((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                       >> 0xaU))),2);
        bufp->chgCData(oldp+69,((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                       >> 8U))),2);
        bufp->chgCData(oldp+70,(vlSelf->ysyx_24120009_core__DOT__pc_sel),3);
        bufp->chgBit(oldp+71,((1U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                     >> 4U))));
        bufp->chgCData(oldp+72,((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals)),2);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_24120009_core__DOT__Op1),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_24120009_core__DOT__Op2),32);
        bufp->chgIData(oldp+75,(((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__pc)),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_24120009_core__DOT__jump_reg_target),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_24120009_core__DOT__br_target),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_24120009_core__DOT__jmp_target),32);
        bufp->chgBit(oldp+79,(vlSelf->ysyx_24120009_core__DOT__br_eq));
        bufp->chgBit(oldp+80,(vlSelf->ysyx_24120009_core__DOT__br_lt));
        bufp->chgBit(oldp+81,(vlSelf->ysyx_24120009_core__DOT__br_ltu));
        bufp->chgCData(oldp+82,(vlSelf->ysyx_24120009_core__DOT__ctl_mem_access),3);
        bufp->chgCData(oldp+83,((0x1fU & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+84,((0x1fU & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_24120009_core__DOT__rdata1),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_24120009_core__DOT__rdata2),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_24120009_core__DOT__dmem_rdata_raw),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_24120009_core__DOT__dmem_rdata),32);
        bufp->chgCData(oldp+89,((3U & vlSelf->ysyx_24120009_core__DOT__exu__DOT__result)),2);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data),32);
        bufp->chgIData(oldp+91,((0xffU & vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data)),32);
        bufp->chgIData(oldp+92,((0xffffU & vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data)),32);
        bufp->chgIData(oldp+93,((((- (IData)((1U & 
                                              (vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data 
                                               >> 7U)))) 
                                  << 8U) | (0xffU & vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data))),32);
        bufp->chgIData(oldp+94,((((- (IData)((1U & 
                                              (vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data 
                                               >> 0xfU)))) 
                                  << 0x10U) | (0xffffU 
                                               & vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data))),32);
        __Vtemp_hfb869668__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data 
                                                                               >> 0xfU)))) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data))))));
        __Vtemp_hfb869668__0[1U] = ((0xfffffff8U & 
                                     (((- (IData)((1U 
                                                   & (vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data 
                                                      >> 7U)))) 
                                       << 0xbU) | (0x7f8U 
                                                   & (vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data 
                                                      << 3U)))) 
                                    | (IData)(((0x100000000ULL 
                                                | (QData)((IData)(
                                                                  (((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data 
                                                                                >> 0xfU)))) 
                                                                    << 0x10U) 
                                                                   | (0xffffU 
                                                                      & vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data))))) 
                                               >> 0x20U)));
        __Vtemp_hfb869668__0[2U] = ((vlSelf->ysyx_24120009_core__DOT__dmem_rdata_raw 
                                     << 6U) | (7U & 
                                               ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data 
                                                               >> 7U)))) 
                                                >> 0x15U)));
        __Vtemp_hfb869668__0[3U] = (0x80U | ((0x1fffe00U 
                                              & (vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data 
                                                 << 9U)) 
                                             | (vlSelf->ysyx_24120009_core__DOT__dmem_rdata_raw 
                                                >> 0x1aU)));
        __Vtemp_hfb869668__0[4U] = (0xa00U | (0xff000U 
                                              & (vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data 
                                                 << 0xcU)));
        __Vtemp_hfb869668__0[5U] = 0x4000U;
        bufp->chgWData(oldp+95,(__Vtemp_hfb869668__0),175);
        bufp->chgQData(oldp+101,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+103,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+105,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+107,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+109,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+112,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+113,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+114,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+116,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+117,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+118,((0x7fU & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)),7);
        bufp->chgCData(oldp+119,((7U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+120,((vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                  >> 0x19U)),7);
        bufp->chgIData(oldp+121,(vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key),17);
        bufp->chgIData(oldp+122,(vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals),17);
        bufp->chgIData(oldp+123,(vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out),17);
        bufp->chgBit(oldp+124,(vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+125,(vlSelf->ysyx_24120009_core__DOT__control__DOT____Vcellinp__mem_acces_ctl_mux__key),10);
        bufp->chgCData(oldp+126,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+127,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+128,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__result),32);
        bufp->chgIData(oldp+129,((vlSelf->ysyx_24120009_core__DOT__Op1 
                                  + vlSelf->ysyx_24120009_core__DOT__Op2)),32);
        bufp->chgIData(oldp+130,((vlSelf->ysyx_24120009_core__DOT__Op1 
                                  - vlSelf->ysyx_24120009_core__DOT__Op2)),32);
        bufp->chgIData(oldp+131,(vlSelf->__VdfgTmp_h9d12977d__0),32);
        bufp->chgIData(oldp+132,(vlSelf->__VdfgTmp_h9d0653ad__0),32);
        bufp->chgIData(oldp+133,((vlSelf->ysyx_24120009_core__DOT__Op1 
                                  ^ vlSelf->ysyx_24120009_core__DOT__Op2)),32);
        bufp->chgIData(oldp+134,((vlSelf->ysyx_24120009_core__DOT__Op1 
                                  | vlSelf->ysyx_24120009_core__DOT__Op2)),32);
        bufp->chgIData(oldp+135,((vlSelf->ysyx_24120009_core__DOT__Op1 
                                  & vlSelf->ysyx_24120009_core__DOT__Op2)),32);
        bufp->chgIData(oldp+136,(((0x1fU >= (0x1fU 
                                             & vlSelf->ysyx_24120009_core__DOT__Op2))
                                   ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                      << (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                   : 0U)),32);
        bufp->chgIData(oldp+137,(((0x1fU >= (0x1fU 
                                             & vlSelf->ysyx_24120009_core__DOT__Op2))
                                   ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                      >> (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                   : 0U)),32);
        bufp->chgIData(oldp+138,(((0x1fU >= (0x1fU 
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
        bufp->chgWData(oldp+139,(__Vtemp_hd74bf4d1__0),407);
        bufp->chgQData(oldp+152,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+154,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+156,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[2]),37);
        bufp->chgQData(oldp+158,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[3]),37);
        bufp->chgQData(oldp+160,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[4]),37);
        bufp->chgQData(oldp+162,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[5]),37);
        bufp->chgQData(oldp+164,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[6]),37);
        bufp->chgQData(oldp+166,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[7]),37);
        bufp->chgQData(oldp+168,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[8]),37);
        bufp->chgQData(oldp+170,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[9]),37);
        bufp->chgQData(oldp+172,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[10]),37);
        bufp->chgIData(oldp+174,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+175,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+176,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+177,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+178,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+179,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+180,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+181,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+182,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+183,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+184,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[10]),32);
        bufp->chgIData(oldp+185,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+186,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit));
        __Vtemp_h992c0b13__0[0U] = (IData)((0x300000000ULL 
                                            | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__dmem_rdata))));
        __Vtemp_h992c0b13__0[1U] = ((vlSelf->ysyx_24120009_core__DOT__exu__DOT__result 
                                     << 2U) | (IData)(
                                                      ((0x300000000ULL 
                                                        | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__dmem_rdata))) 
                                                       >> 0x20U)));
        __Vtemp_h992c0b13__0[2U] = (8U | ((((IData)(4U) 
                                            + vlSelf->ysyx_24120009_core__DOT__pc) 
                                           << 4U) | 
                                          (vlSelf->ysyx_24120009_core__DOT__exu__DOT__result 
                                           >> 0x1eU)));
        __Vtemp_h992c0b13__0[3U] = (0x10U | (((IData)(4U) 
                                              + vlSelf->ysyx_24120009_core__DOT__pc) 
                                             >> 0x1cU));
        __Vtemp_h992c0b13__0[4U] = 0U;
        bufp->chgWData(oldp+187,(__Vtemp_h992c0b13__0),136);
        bufp->chgQData(oldp+192,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+194,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+196,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+198,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+200,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+201,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+202,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+203,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list[3]),32);
        bufp->chgIData(oldp+204,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+205,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit));
        bufp->chgSData(oldp+206,((vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                  >> 0x14U)),12);
        bufp->chgSData(oldp+207,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s),12);
        bufp->chgSData(oldp+208,(((0x800U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                             >> 0x14U)) 
                                  | ((0x400U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                << 3U)) 
                                     | ((0x3f0U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                   >> 0x15U)) 
                                        | (0xfU & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                   >> 8U)))))),12);
        bufp->chgIData(oldp+209,((vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                  >> 0xcU)),20);
        bufp->chgIData(oldp+210,(((0x80000U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                               >> 0xcU)) 
                                  | ((0x7f800U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                            >> 0x15U)))))),20);
        bufp->chgIData(oldp+211,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext),32);
        bufp->chgIData(oldp+212,((((- (IData)((vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                               >> 0x1fU))) 
                                   << 0xcU) | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s))),32);
        bufp->chgIData(oldp+213,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext),32);
        bufp->chgIData(oldp+214,((0xfffff000U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)),32);
        bufp->chgIData(oldp+215,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext),32);
        __Vtemp_h6ce46ea2__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(
                                                              (0xfffff000U 
                                                               & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)))));
        __Vtemp_h6ce46ea2__0[1U] = ((vlSelf->ysyx_24120009_core__DOT__rdata1 
                                     << 2U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(
                                                                          (0xfffff000U 
                                                                           & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)))) 
                                                       >> 0x20U)));
        __Vtemp_h6ce46ea2__0[2U] = (vlSelf->ysyx_24120009_core__DOT__rdata1 
                                    >> 0x1eU);
        bufp->chgWData(oldp+216,(__Vtemp_h6ce46ea2__0),68);
        bufp->chgQData(oldp+219,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+221,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgIData(oldp+223,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+224,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+225,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+226,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit));
        __Vtemp_h40015b3a__0[0U] = (IData)((0x300000000ULL 
                                            | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__rdata2))));
        __Vtemp_h40015b3a__0[1U] = ((0xfffffffcU & 
                                     (((- (IData)((vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                   >> 0x1fU))) 
                                       << 0xeU) | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s) 
                                                   << 2U))) 
                                    | (IData)(((0x300000000ULL 
                                                | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__rdata2))) 
                                               >> 0x20U)));
        __Vtemp_h40015b3a__0[2U] = (8U | ((vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext 
                                           << 4U) | 
                                          (3U & ((3U 
                                                  & ((- (IData)(
                                                                (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                                 >> 0x1fU))) 
                                                     >> 0x12U)) 
                                                 | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s) 
                                                    >> 0x1eU)))));
        __Vtemp_h40015b3a__0[3U] = (0x10U | ((vlSelf->ysyx_24120009_core__DOT__pc 
                                              << 6U) 
                                             | (vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext 
                                                >> 0x1cU)));
        __Vtemp_h40015b3a__0[4U] = (vlSelf->ysyx_24120009_core__DOT__pc 
                                    >> 0x1aU);
        bufp->chgWData(oldp+227,(__Vtemp_h40015b3a__0),136);
        bufp->chgQData(oldp+232,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+234,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+236,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+238,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+240,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+241,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+242,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+243,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+244,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+245,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+246,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next),32);
        __Vtemp_hf96e2bca__0[0U] = 0U;
        __Vtemp_hf96e2bca__0[1U] = (4U | (vlSelf->ysyx_24120009_core__DOT__jmp_target 
                                          << 3U));
        __Vtemp_hf96e2bca__0[2U] = (0x18U | ((vlSelf->ysyx_24120009_core__DOT__br_target 
                                              << 6U) 
                                             | (vlSelf->ysyx_24120009_core__DOT__jmp_target 
                                                >> 0x1dU)));
        __Vtemp_hf96e2bca__0[3U] = (0x80U | ((vlSelf->ysyx_24120009_core__DOT__jump_reg_target 
                                              << 9U) 
                                             | (vlSelf->ysyx_24120009_core__DOT__br_target 
                                                >> 0x1aU)));
        __Vtemp_hf96e2bca__0[4U] = (0x200U | ((((IData)(4U) 
                                                + vlSelf->ysyx_24120009_core__DOT__pc) 
                                               << 0xcU) 
                                              | (vlSelf->ysyx_24120009_core__DOT__jump_reg_target 
                                                 >> 0x17U)));
        __Vtemp_hf96e2bca__0[5U] = (((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__pc) 
                                    >> 0x14U);
        bufp->chgWData(oldp+247,(__Vtemp_hf96e2bca__0),175);
        bufp->chgQData(oldp+253,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+255,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+257,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+259,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+261,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+263,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+264,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+265,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+266,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+267,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+268,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+269,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+270,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0]),32);
        bufp->chgIData(oldp+271,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[1]),32);
        bufp->chgIData(oldp+272,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[2]),32);
        bufp->chgIData(oldp+273,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[3]),32);
        bufp->chgIData(oldp+274,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[4]),32);
        bufp->chgIData(oldp+275,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[5]),32);
        bufp->chgIData(oldp+276,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[6]),32);
        bufp->chgIData(oldp+277,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[7]),32);
        bufp->chgIData(oldp+278,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[8]),32);
        bufp->chgIData(oldp+279,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[9]),32);
        bufp->chgIData(oldp+280,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[10]),32);
        bufp->chgIData(oldp+281,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[11]),32);
        bufp->chgIData(oldp+282,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[12]),32);
        bufp->chgIData(oldp+283,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[13]),32);
        bufp->chgIData(oldp+284,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[14]),32);
        bufp->chgIData(oldp+285,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[15]),32);
        bufp->chgIData(oldp+286,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[16]),32);
        bufp->chgIData(oldp+287,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[17]),32);
        bufp->chgIData(oldp+288,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[18]),32);
        bufp->chgIData(oldp+289,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[19]),32);
        bufp->chgIData(oldp+290,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[20]),32);
        bufp->chgIData(oldp+291,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[21]),32);
        bufp->chgIData(oldp+292,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[22]),32);
        bufp->chgIData(oldp+293,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[23]),32);
        bufp->chgIData(oldp+294,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[24]),32);
        bufp->chgIData(oldp+295,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[25]),32);
        bufp->chgIData(oldp+296,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[26]),32);
        bufp->chgIData(oldp+297,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[27]),32);
        bufp->chgIData(oldp+298,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[28]),32);
        bufp->chgIData(oldp+299,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[29]),32);
        bufp->chgIData(oldp+300,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[30]),32);
        bufp->chgIData(oldp+301,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[31]),32);
        bufp->chgCData(oldp+302,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__base_mask),8);
        bufp->chgCData(oldp+303,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+304,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit));
    }
    bufp->chgBit(oldp+305,(vlSelf->clk));
    bufp->chgBit(oldp+306,(vlSelf->rst));
    bufp->chgIData(oldp+307,(vlSelf->pc_debug),32);
    bufp->chgIData(oldp+308,(vlSelf->Op1_debug),32);
    bufp->chgIData(oldp+309,(vlSelf->Op2_debug),32);
    bufp->chgIData(oldp+310,(vlSelf->inst_debug),32);
    bufp->chgIData(oldp+311,(vlSelf->reg_write_data_debug),32);
    bufp->chgBit(oldp+312,(vlSelf->is_ebreak_debug));
    bufp->chgIData(oldp+313,(vlSelf->x2_debug),32);
    bufp->chgCData(oldp+314,(vlSelf->waddr_debug),5);
    bufp->chgIData(oldp+315,(vlSelf->imem_addr_debug),32);
    bufp->chgBit(oldp+316,(vlSelf->mem_wen_debug));
    bufp->chgBit(oldp+317,(vlSelf->mem_en_debug));
    bufp->chgIData(oldp+318,(vlSelf->dmem_addr_debug),32);
    bufp->chgIData(oldp+319,(vlSelf->dmem_wdata_debug),32);
    bufp->chgCData(oldp+320,(vlSelf->wmask_debug),8);
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
}
