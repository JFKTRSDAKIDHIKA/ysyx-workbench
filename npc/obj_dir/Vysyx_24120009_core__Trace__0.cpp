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
    VlWide<6>/*191:0*/ __Vtemp_hdb58eddb__0;
    VlWide<13>/*415:0*/ __Vtemp_hd74bf4d1__0;
    VlWide<3>/*95:0*/ __Vtemp_h3e4b9c5b__0;
    VlWide<5>/*159:0*/ __Vtemp_h4b1a9c47__0;
    VlWide<6>/*191:0*/ __Vtemp_h47858337__0;
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
        bufp->chgBit(oldp+71,(vlSelf->ysyx_24120009_core__DOT__inst_valid));
        bufp->chgBit(oldp+72,((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__state))));
        bufp->chgBit(oldp+73,((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__state))));
        bufp->chgCData(oldp+74,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__state),2);
        bufp->chgCData(oldp+75,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__state),2);
        bufp->chgCData(oldp+76,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state),3);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__rdata),32);
        bufp->chgBit(oldp+78,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__rvalid));
        bufp->chgIData(oldp+79,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer),32);
        bufp->chgBit(oldp+80,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__arvalid));
        bufp->chgBit(oldp+81,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__arready));
        bufp->chgBit(oldp+82,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__rready));
        bufp->chgBit(oldp+83,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__awready));
        bufp->chgBit(oldp+84,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wready));
        bufp->chgBit(oldp+85,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__bvalid));
        bufp->chgCData(oldp+86,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__bresp),2);
        bufp->chgCData(oldp+87,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__rresp),2);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_data_out),32);
        bufp->chgBit(oldp+89,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_rd_res_valid));
        bufp->chgBit(oldp+90,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_wt_res_valid));
        bufp->chgCData(oldp+91,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__state),2);
        bufp->chgIData(oldp+92,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__addr_reg),32);
        bufp->chgBit(oldp+93,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__rd_req_valid));
        bufp->chgBit(oldp+94,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wt_req_valid));
        bufp->chgIData(oldp+95,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline
                                [9U]),32);
        bufp->chgBit(oldp+96,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline
                              [9U]));
        bufp->chgIData(oldp+97,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline
                                [9U]),32);
        bufp->chgIData(oldp+98,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline
                                [9U]),32);
        bufp->chgCData(oldp+99,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline
                                [9U]),8);
        bufp->chgBit(oldp+100,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline
                               [9U]));
        bufp->chgIData(oldp+101,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[0]),32);
        bufp->chgIData(oldp+102,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[1]),32);
        bufp->chgIData(oldp+103,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[2]),32);
        bufp->chgIData(oldp+104,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[3]),32);
        bufp->chgIData(oldp+105,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[4]),32);
        bufp->chgIData(oldp+106,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[5]),32);
        bufp->chgIData(oldp+107,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[6]),32);
        bufp->chgIData(oldp+108,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[7]),32);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[8]),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[9]),32);
        bufp->chgBit(oldp+111,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[0]));
        bufp->chgBit(oldp+112,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[1]));
        bufp->chgBit(oldp+113,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[2]));
        bufp->chgBit(oldp+114,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[3]));
        bufp->chgBit(oldp+115,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[4]));
        bufp->chgBit(oldp+116,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[5]));
        bufp->chgBit(oldp+117,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[6]));
        bufp->chgBit(oldp+118,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[7]));
        bufp->chgBit(oldp+119,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[8]));
        bufp->chgBit(oldp+120,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[9]));
        bufp->chgIData(oldp+121,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[0]),32);
        bufp->chgIData(oldp+122,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[1]),32);
        bufp->chgIData(oldp+123,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[2]),32);
        bufp->chgIData(oldp+124,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[3]),32);
        bufp->chgIData(oldp+125,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[4]),32);
        bufp->chgIData(oldp+126,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[5]),32);
        bufp->chgIData(oldp+127,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[6]),32);
        bufp->chgIData(oldp+128,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[7]),32);
        bufp->chgIData(oldp+129,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[8]),32);
        bufp->chgIData(oldp+130,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[9]),32);
        bufp->chgIData(oldp+131,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[0]),32);
        bufp->chgIData(oldp+132,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[1]),32);
        bufp->chgIData(oldp+133,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[2]),32);
        bufp->chgIData(oldp+134,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[3]),32);
        bufp->chgIData(oldp+135,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[4]),32);
        bufp->chgIData(oldp+136,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[5]),32);
        bufp->chgIData(oldp+137,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[6]),32);
        bufp->chgIData(oldp+138,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[7]),32);
        bufp->chgIData(oldp+139,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[8]),32);
        bufp->chgIData(oldp+140,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[9]),32);
        bufp->chgCData(oldp+141,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[0]),8);
        bufp->chgCData(oldp+142,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[1]),8);
        bufp->chgCData(oldp+143,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[2]),8);
        bufp->chgCData(oldp+144,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[3]),8);
        bufp->chgCData(oldp+145,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[4]),8);
        bufp->chgCData(oldp+146,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[5]),8);
        bufp->chgCData(oldp+147,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[6]),8);
        bufp->chgCData(oldp+148,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[7]),8);
        bufp->chgCData(oldp+149,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[8]),8);
        bufp->chgCData(oldp+150,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[9]),8);
        bufp->chgBit(oldp+151,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[0]));
        bufp->chgBit(oldp+152,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[1]));
        bufp->chgBit(oldp+153,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[2]));
        bufp->chgBit(oldp+154,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[3]));
        bufp->chgBit(oldp+155,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[4]));
        bufp->chgBit(oldp+156,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[5]));
        bufp->chgBit(oldp+157,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[6]));
        bufp->chgBit(oldp+158,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[7]));
        bufp->chgBit(oldp+159,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[8]));
        bufp->chgBit(oldp+160,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[9]));
        bufp->chgIData(oldp+161,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+162,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk2__DOT__i),32);
        bufp->chgCData(oldp+163,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__state),2);
        bufp->chgIData(oldp+164,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw),32);
        bufp->chgBit(oldp+165,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en));
        bufp->chgBit(oldp+166,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen));
        bufp->chgBit(oldp+167,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rvalid));
        bufp->chgBit(oldp+168,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wt_res_valid));
        bufp->chgBit(oldp+169,(((~ (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen)) 
                                & (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en))));
        bufp->chgBit(oldp+170,(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en) 
                                & (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen))));
        bufp->chgBit(oldp+171,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__arready));
        bufp->chgBit(oldp+172,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__awready));
        bufp->chgBit(oldp+173,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rready));
        bufp->chgBit(oldp+174,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wready));
        bufp->chgBit(oldp+175,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__bready));
        bufp->chgCData(oldp+176,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__bresp),2);
        bufp->chgCData(oldp+177,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__rresp),2);
        bufp->chgIData(oldp+178,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_data_out),32);
        bufp->chgBit(oldp+179,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_rd_res_valid));
        bufp->chgBit(oldp+180,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_wt_res_valid));
        bufp->chgCData(oldp+181,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__state),2);
        bufp->chgIData(oldp+182,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__addr_reg),32);
        bufp->chgIData(oldp+183,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__wdata_reg),32);
        bufp->chgCData(oldp+184,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__wstrb_reg),8);
        bufp->chgBit(oldp+185,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__rd_req_valid));
        bufp->chgBit(oldp+186,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__wt_req_valid));
        bufp->chgIData(oldp+187,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline
                                 [9U]),32);
        bufp->chgBit(oldp+188,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline
                               [9U]));
        bufp->chgIData(oldp+189,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline
                                 [9U]),32);
        bufp->chgIData(oldp+190,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline
                                 [9U]),32);
        bufp->chgCData(oldp+191,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline
                                 [9U]),8);
        bufp->chgBit(oldp+192,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline
                               [9U]));
        bufp->chgIData(oldp+193,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[0]),32);
        bufp->chgIData(oldp+194,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[1]),32);
        bufp->chgIData(oldp+195,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[2]),32);
        bufp->chgIData(oldp+196,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[3]),32);
        bufp->chgIData(oldp+197,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[4]),32);
        bufp->chgIData(oldp+198,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[5]),32);
        bufp->chgIData(oldp+199,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[6]),32);
        bufp->chgIData(oldp+200,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[7]),32);
        bufp->chgIData(oldp+201,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[8]),32);
        bufp->chgIData(oldp+202,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[9]),32);
        bufp->chgBit(oldp+203,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[0]));
        bufp->chgBit(oldp+204,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[1]));
        bufp->chgBit(oldp+205,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[2]));
        bufp->chgBit(oldp+206,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[3]));
        bufp->chgBit(oldp+207,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[4]));
        bufp->chgBit(oldp+208,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[5]));
        bufp->chgBit(oldp+209,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[6]));
        bufp->chgBit(oldp+210,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[7]));
        bufp->chgBit(oldp+211,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[8]));
        bufp->chgBit(oldp+212,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[9]));
        bufp->chgIData(oldp+213,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[0]),32);
        bufp->chgIData(oldp+214,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[1]),32);
        bufp->chgIData(oldp+215,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[2]),32);
        bufp->chgIData(oldp+216,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[3]),32);
        bufp->chgIData(oldp+217,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[4]),32);
        bufp->chgIData(oldp+218,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[5]),32);
        bufp->chgIData(oldp+219,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[6]),32);
        bufp->chgIData(oldp+220,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[7]),32);
        bufp->chgIData(oldp+221,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[8]),32);
        bufp->chgIData(oldp+222,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[9]),32);
        bufp->chgIData(oldp+223,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[0]),32);
        bufp->chgIData(oldp+224,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[1]),32);
        bufp->chgIData(oldp+225,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[2]),32);
        bufp->chgIData(oldp+226,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[3]),32);
        bufp->chgIData(oldp+227,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[4]),32);
        bufp->chgIData(oldp+228,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[5]),32);
        bufp->chgIData(oldp+229,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[6]),32);
        bufp->chgIData(oldp+230,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[7]),32);
        bufp->chgIData(oldp+231,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[8]),32);
        bufp->chgIData(oldp+232,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[9]),32);
        bufp->chgCData(oldp+233,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[0]),8);
        bufp->chgCData(oldp+234,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[1]),8);
        bufp->chgCData(oldp+235,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[2]),8);
        bufp->chgCData(oldp+236,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[3]),8);
        bufp->chgCData(oldp+237,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[4]),8);
        bufp->chgCData(oldp+238,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[5]),8);
        bufp->chgCData(oldp+239,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[6]),8);
        bufp->chgCData(oldp+240,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[7]),8);
        bufp->chgCData(oldp+241,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[8]),8);
        bufp->chgCData(oldp+242,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[9]),8);
        bufp->chgBit(oldp+243,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[0]));
        bufp->chgBit(oldp+244,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[1]));
        bufp->chgBit(oldp+245,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[2]));
        bufp->chgBit(oldp+246,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[3]));
        bufp->chgBit(oldp+247,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[4]));
        bufp->chgBit(oldp+248,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[5]));
        bufp->chgBit(oldp+249,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[6]));
        bufp->chgBit(oldp+250,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[7]));
        bufp->chgBit(oldp+251,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[8]));
        bufp->chgBit(oldp+252,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[9]));
        bufp->chgIData(oldp+253,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+254,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
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
        bufp->chgWData(oldp+255,(__Vtemp_hdb58eddb__0),175);
        bufp->chgQData(oldp+261,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+263,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+265,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+267,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+269,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+271,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+272,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+273,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+274,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+275,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[4]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+276,(vlSelf->ysyx_24120009_core__DOT__reg_write_data),32);
        bufp->chgCData(oldp+277,(vlSelf->ysyx_24120009_core__DOT__pc_sel),3);
        bufp->chgIData(oldp+278,(vlSelf->ysyx_24120009_core__DOT__Op1),32);
        bufp->chgIData(oldp+279,(vlSelf->ysyx_24120009_core__DOT__Op2),32);
        bufp->chgIData(oldp+280,(vlSelf->ysyx_24120009_core__DOT__jump_reg_target),32);
        bufp->chgIData(oldp+281,(vlSelf->ysyx_24120009_core__DOT__br_target),32);
        bufp->chgIData(oldp+282,(vlSelf->ysyx_24120009_core__DOT__jmp_target),32);
        bufp->chgIData(oldp+283,(vlSelf->ysyx_24120009_core__DOT__pc_from_IDU_to_EXU),32);
        bufp->chgIData(oldp+284,(vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU),32);
        bufp->chgIData(oldp+285,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU),32);
        bufp->chgCData(oldp+286,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                           >> 7U))),5);
        bufp->chgIData(oldp+287,(vlSelf->ysyx_24120009_core__DOT__pc_from_EXU_to_MEM),32);
        bufp->chgIData(oldp+288,(vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM),32);
        bufp->chgIData(oldp+289,(vlSelf->ysyx_24120009_core__DOT__result_from_EXU_to_MEM),32);
        bufp->chgIData(oldp+290,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_EXU_to_MEM),32);
        bufp->chgCData(oldp+291,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_EXU_to_MEM),5);
        bufp->chgIData(oldp+292,(vlSelf->ysyx_24120009_core__DOT__result_from_MEM_to_WBU),32);
        bufp->chgCData(oldp+293,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_MEM_to_WBU),5);
        bufp->chgIData(oldp+294,(vlSelf->ysyx_24120009_core__DOT__pc_from_MEM_to_WBU),32);
        bufp->chgIData(oldp+295,(vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU),32);
        bufp->chgIData(oldp+296,(vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM),32);
        bufp->chgCData(oldp+297,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+298,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+299,(vlSelf->ysyx_24120009_core__DOT__waddr),5);
        bufp->chgIData(oldp+300,(vlSelf->ysyx_24120009_core__DOT__rdata1),32);
        bufp->chgCData(oldp+301,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op),5);
        bufp->chgCData(oldp+302,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+303,((vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+304,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)),7);
        bufp->chgIData(oldp+305,((vlSelf->ysyx_24120009_core__DOT__Op1 
                                  + vlSelf->ysyx_24120009_core__DOT__Op2)),32);
        bufp->chgIData(oldp+306,((vlSelf->ysyx_24120009_core__DOT__Op1 
                                  - vlSelf->ysyx_24120009_core__DOT__Op2)),32);
        bufp->chgIData(oldp+307,(vlSelf->__VdfgTmp_h9d12977d__0),32);
        bufp->chgIData(oldp+308,(vlSelf->__VdfgTmp_h9d0653ad__0),32);
        bufp->chgIData(oldp+309,((vlSelf->ysyx_24120009_core__DOT__Op1 
                                  ^ vlSelf->ysyx_24120009_core__DOT__Op2)),32);
        bufp->chgIData(oldp+310,((vlSelf->ysyx_24120009_core__DOT__Op1 
                                  | vlSelf->ysyx_24120009_core__DOT__Op2)),32);
        bufp->chgIData(oldp+311,((vlSelf->ysyx_24120009_core__DOT__Op1 
                                  & vlSelf->ysyx_24120009_core__DOT__Op2)),32);
        bufp->chgIData(oldp+312,(((0x1fU >= (0x1fU 
                                             & vlSelf->ysyx_24120009_core__DOT__Op2))
                                   ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                      << (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                   : 0U)),32);
        bufp->chgIData(oldp+313,(((0x1fU >= (0x1fU 
                                             & vlSelf->ysyx_24120009_core__DOT__Op2))
                                   ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                      >> (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                   : 0U)),32);
        bufp->chgIData(oldp+314,(((0x1fU >= (0x1fU 
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
        bufp->chgWData(oldp+315,(__Vtemp_hd74bf4d1__0),407);
        bufp->chgQData(oldp+328,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+330,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+332,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[2]),37);
        bufp->chgQData(oldp+334,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[3]),37);
        bufp->chgQData(oldp+336,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[4]),37);
        bufp->chgQData(oldp+338,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[5]),37);
        bufp->chgQData(oldp+340,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[6]),37);
        bufp->chgQData(oldp+342,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[7]),37);
        bufp->chgQData(oldp+344,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[8]),37);
        bufp->chgQData(oldp+346,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[9]),37);
        bufp->chgQData(oldp+348,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[10]),37);
        bufp->chgIData(oldp+350,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+351,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+352,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+353,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+354,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+355,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+356,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+357,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+358,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+359,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+360,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[10]),32);
        bufp->chgIData(oldp+361,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+362,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+363,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq));
        bufp->chgBit(oldp+364,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt));
        bufp->chgBit(oldp+365,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu));
        bufp->chgCData(oldp+366,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel),2);
        bufp->chgCData(oldp+367,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel),2);
        bufp->chgSData(oldp+368,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                  >> 0x14U)),12);
        bufp->chgSData(oldp+369,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s),12);
        bufp->chgSData(oldp+370,(((0x800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                             >> 0x14U)) 
                                  | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                << 3U)) 
                                     | ((0x3f0U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                   >> 0x15U)) 
                                        | (0xfU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                   >> 8U)))))),12);
        bufp->chgIData(oldp+371,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                  >> 0xcU)),20);
        bufp->chgIData(oldp+372,(((0x80000U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                               >> 0xcU)) 
                                  | ((0x7f800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0x15U)))))),20);
        bufp->chgIData(oldp+373,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext),32);
        bufp->chgIData(oldp+374,((((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                               >> 0x1fU))) 
                                   << 0xcU) | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s))),32);
        bufp->chgIData(oldp+375,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext),32);
        bufp->chgIData(oldp+376,((0xfffff000U & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),32);
        bufp->chgIData(oldp+377,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext),32);
        bufp->chgCData(oldp+378,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+379,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+380,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),7);
        bufp->chgBit(oldp+381,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__branch_taken));
        bufp->chgIData(oldp+382,((0x28aceU | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq) 
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
        bufp->chgCData(oldp+383,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+384,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+385,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[2]),4);
        bufp->chgCData(oldp+386,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[3]),4);
        bufp->chgCData(oldp+387,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[4]),4);
        bufp->chgCData(oldp+388,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[5]),4);
        bufp->chgBit(oldp+389,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+390,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+391,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+392,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+393,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[4]));
        bufp->chgBit(oldp+394,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[5]));
        bufp->chgBit(oldp+395,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+396,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit));
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
        bufp->chgWData(oldp+397,(__Vtemp_h3e4b9c5b__0),68);
        bufp->chgQData(oldp+400,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+402,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgIData(oldp+404,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+405,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+406,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+407,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit));
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
        bufp->chgWData(oldp+408,(__Vtemp_h4b1a9c47__0),136);
        bufp->chgQData(oldp+413,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+415,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+417,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+419,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+421,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+422,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+423,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+424,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+425,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+426,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+427,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc),32);
        bufp->chgIData(oldp+428,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next),32);
        bufp->chgIData(oldp+429,(((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc)),32);
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
        bufp->chgWData(oldp+430,(__Vtemp_h47858337__0),175);
        bufp->chgQData(oldp+436,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+438,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+440,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+442,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+444,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+446,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+447,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+448,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+449,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+450,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+451,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+452,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+453,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o),32);
        bufp->chgIData(oldp+454,(((0x1fU >= (0x18U 
                                             & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                << 3U)))
                                   ? (vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o 
                                      << (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                   << 3U)))
                                   : 0U)),32);
        bufp->chgCData(oldp+455,((0xffU & ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask) 
                                           << (3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)))),8);
        bufp->chgCData(oldp+456,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access),3);
        bufp->chgIData(oldp+457,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o),32);
        bufp->chgCData(oldp+458,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+459,((vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+460,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU)),7);
        bufp->chgCData(oldp+461,((3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)),2);
        bufp->chgBit(oldp+462,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+463,(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key),10);
        bufp->chgCData(oldp+464,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+465,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+466,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask),8);
        bufp->chgCData(oldp+467,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+468,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+469,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0]),32);
        bufp->chgIData(oldp+470,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[1]),32);
        bufp->chgIData(oldp+471,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[2]),32);
        bufp->chgIData(oldp+472,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[3]),32);
        bufp->chgIData(oldp+473,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[4]),32);
        bufp->chgIData(oldp+474,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[5]),32);
        bufp->chgIData(oldp+475,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[6]),32);
        bufp->chgIData(oldp+476,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[7]),32);
        bufp->chgIData(oldp+477,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[8]),32);
        bufp->chgIData(oldp+478,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[9]),32);
        bufp->chgIData(oldp+479,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[10]),32);
        bufp->chgIData(oldp+480,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[11]),32);
        bufp->chgIData(oldp+481,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[12]),32);
        bufp->chgIData(oldp+482,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[13]),32);
        bufp->chgIData(oldp+483,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[14]),32);
        bufp->chgIData(oldp+484,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[15]),32);
        bufp->chgIData(oldp+485,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[16]),32);
        bufp->chgIData(oldp+486,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[17]),32);
        bufp->chgIData(oldp+487,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[18]),32);
        bufp->chgIData(oldp+488,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[19]),32);
        bufp->chgIData(oldp+489,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[20]),32);
        bufp->chgIData(oldp+490,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[21]),32);
        bufp->chgIData(oldp+491,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[22]),32);
        bufp->chgIData(oldp+492,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[23]),32);
        bufp->chgIData(oldp+493,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[24]),32);
        bufp->chgIData(oldp+494,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[25]),32);
        bufp->chgIData(oldp+495,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[26]),32);
        bufp->chgIData(oldp+496,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[27]),32);
        bufp->chgIData(oldp+497,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[28]),32);
        bufp->chgIData(oldp+498,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[29]),32);
        bufp->chgIData(oldp+499,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[30]),32);
        bufp->chgIData(oldp+500,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[31]),32);
        bufp->chgIData(oldp+501,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o),32);
        bufp->chgIData(oldp+502,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o),32);
        bufp->chgIData(oldp+503,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o),32);
        bufp->chgCData(oldp+504,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel),2);
        bufp->chgCData(oldp+505,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+506,((vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                                  >> 0x19U)),7);
        bufp->chgQData(oldp+507,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+509,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+511,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+513,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+515,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+516,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+517,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+518,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[3]),32);
        bufp->chgIData(oldp+519,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+520,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+521,(vlSelf->ysyx_24120009_core__DOT__rf_we));
        bufp->chgIData(oldp+522,(vlSelf->ysyx_24120009_core__DOT__dmem_rdata_from_MEM_to_WBU),32);
        bufp->chgIData(oldp+523,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data),32);
        bufp->chgIData(oldp+524,((0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
        bufp->chgIData(oldp+525,((0xffffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
        bufp->chgIData(oldp+526,((((- (IData)((1U & 
                                               (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                >> 7U)))) 
                                   << 8U) | (0xffU 
                                             & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
        bufp->chgIData(oldp+527,((((- (IData)((1U & 
                                               (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                >> 0xfU)))) 
                                   << 0x10U) | (0xffffU 
                                                & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
        bufp->chgIData(oldp+528,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out),32);
    }
    bufp->chgBit(oldp+529,(vlSelf->clk));
    bufp->chgBit(oldp+530,(vlSelf->rst));
    bufp->chgIData(oldp+531,(vlSelf->pc_debug),32);
    bufp->chgIData(oldp+532,(vlSelf->inst_debug),32);
    bufp->chgIData(oldp+533,(vlSelf->reg_write_data_debug),32);
    bufp->chgIData(oldp+534,(vlSelf->x2_debug),32);
    bufp->chgCData(oldp+535,(vlSelf->waddr_debug),5);
    bufp->chgBit(oldp+536,(vlSelf->mem_wen_debug));
    bufp->chgBit(oldp+537,(vlSelf->mem_en_debug));
    bufp->chgIData(oldp+538,(vlSelf->Op1_debug),32);
    bufp->chgIData(oldp+539,(vlSelf->Op2_debug),32);
    bufp->chgBit(oldp+540,(vlSelf->rf_we_debug));
    bufp->chgBit(oldp+541,(vlSelf->wbu_active_debug));
    bufp->chgIData(oldp+542,(vlSelf->imem_addr_debug),32);
    bufp->chgIData(oldp+543,(vlSelf->pc_plus4_debug),32);
    bufp->chgCData(oldp+544,(vlSelf->wb_sel_debug),2);
    bufp->chgCData(oldp+545,(vlSelf->opcode_debug),7);
    bufp->chgBit(oldp+546,(vlSelf->pc_wen_debug));
    bufp->chgBit(oldp+547,(vlSelf->mem_active_debug));
    bufp->chgIData(oldp+548,(vlSelf->result_from_EXU_to_MEM_debug),32);
    bufp->chgIData(oldp+549,(vlSelf->result_from_MEM_to_WBU_debug),32);
    bufp->chgIData(oldp+550,(vlSelf->result_from_WB_debug),32);
    bufp->chgCData(oldp+551,(vlSelf->alu_op_debug),5);
    bufp->chgIData(oldp+552,(vlSelf->inst_from_EXU_to_MEM_debug),32);
    bufp->chgBit(oldp+553,(vlSelf->mem_access_done_debug));
    bufp->chgIData(oldp+554,(vlSelf->dmem_rdata_from_MEM_to_WBU_debug),32);
    bufp->chgBit(oldp+555,(vlSelf->wt_res_valid_debug));
    bufp->chgCData(oldp+556,(vlSelf->ifu_state_debug),3);
    bufp->chgBit(oldp+557,(vlSelf->rd_res_valid_debug));
    bufp->chgCData(oldp+558,(vlSelf->axi4_ifu_state_debug),2);
    bufp->chgCData(oldp+559,(vlSelf->mem_ctl_state_debug),2);
    bufp->chgCData(oldp+560,(vlSelf->axi4_mem_state_debug),2);
    bufp->chgCData(oldp+561,(vlSelf->idu_state_debug),2);
    bufp->chgBit(oldp+562,(vlSelf->inst_valid_debug));
    bufp->chgBit(oldp+563,(vlSelf->ysyx_24120009_core__DOT__pc_wen));
    bufp->chgCData(oldp+564,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state),2);
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
    bufp->chgWData(oldp+565,(__Vtemp_h650a5f8e__0),136);
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
}
