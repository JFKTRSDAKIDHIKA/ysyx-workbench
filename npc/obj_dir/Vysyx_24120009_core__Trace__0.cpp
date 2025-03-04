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
    VlWide<4>/*127:0*/ __Vtemp_h5d0c4d3a__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[31]),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+33,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h4ab110e3__0) 
                               & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__io_axi_w_ready_0))));
        bufp->chgBit(oldp+34,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_memory_w_valid_0));
        bufp->chgBit(oldp+35,(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready));
        bufp->chgBit(oldp+36,(((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____VdfgTmp_h9bd8307f__0) 
                               & (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready))));
        bufp->chgBit(oldp+37,(((0U != (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)) 
                               & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_1) 
                                  & (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready)))));
        bufp->chgBit(oldp+38,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0) 
                               & (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_memory_w_valid_0))));
        bufp->chgBit(oldp+39,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__io_axi_w_ready_0));
        bufp->chgBit(oldp+40,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0) 
                               & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____VdfgTmp_h9bd8307f__0) 
                                  & (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready)))));
        bufp->chgBit(oldp+41,(((0U != (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)) 
                               & ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state))
                                   ? ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT___GEN_2)) 
                                      & (2U == (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state)))
                                   : ((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)) 
                                      & ((0U != (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)) 
                                         & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_1) 
                                            & (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready))))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+42,(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__unnamedblk1__DOT__isLSUActive));
        bufp->chgIData(oldp+43,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst),32);
        bufp->chgCData(oldp+45,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__state),2);
        bufp->chgIData(oldp+46,((0xfffffffeU & (vlSelf->ysyx_24120009_core__DOT___regfile_rs1_data 
                                                + (
                                                   ((- (IData)(
                                                               (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                      >> 0x14U))))),32);
        bufp->chgIData(oldp+47,((vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_pc 
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
        bufp->chgIData(oldp+48,((vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_pc 
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
        bufp->chgIData(oldp+49,(vlSelf->ysyx_24120009_core__DOT___regfile_rs1_data),32);
        bufp->chgCData(oldp+50,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+51,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_pc),32);
        bufp->chgCData(oldp+53,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__state),2);
        bufp->chgBit(oldp+54,((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state))));
        bufp->chgIData(oldp+55,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst),32);
        bufp->chgBit(oldp+57,((3U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst))));
        bufp->chgBit(oldp+58,((0x23U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst))));
        bufp->chgCData(oldp+59,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+60,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__addr_delayed),32);
        bufp->chgBit(oldp+61,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__rd_req_valid_delayed));
        bufp->chgIData(oldp+62,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__waddr_delayed),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wdata_delayed),32);
        bufp->chgCData(oldp+64,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wmask_delayed),8);
        bufp->chgBit(oldp+65,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wt_req_valid_delayed));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+66,(vlSelf->ysyx_24120009_core__DOT___ifu_io_memory_ar_valid));
        bufp->chgIData(oldp+67,(((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT___GEN_3)
                                  ? vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc
                                  : 0U)),32);
        bufp->chgBit(oldp+68,(((~ (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT___GEN_2)) 
                               & (2U == (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state)))));
        bufp->chgIData(oldp+69,(((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2)
                                  ? 0U : vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
        bufp->chgIData(oldp+70,(((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2)
                                  ? 0U : (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_rs2_data 
                                          << (0x18U 
                                              & (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                                 << 3U))))),32);
        bufp->chgCData(oldp+71,(((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2)
                                  ? 0U : (0xfU & ((
                                                   (0U 
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
                                                   & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr))))),4);
        bufp->chgBit(oldp+72,(vlSelf->ysyx_24120009_core__DOT___lsu_io_memory_ar_valid));
        bufp->chgIData(oldp+73,(((1U & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_1)) 
                                        | (0U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state))))
                                  ? 0U : vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
        bufp->chgIData(oldp+74,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT___GEN_3)
                                  ? 0U : ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2)
                                           ? 0U : vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr))),32);
        bufp->chgIData(oldp+75,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT___GEN_3)
                                  ? 0U : ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2)
                                           ? 0U : (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_rs2_data 
                                                   << 
                                                   (0x18U 
                                                    & (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                                       << 3U)))))),32);
        bufp->chgCData(oldp+76,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT___GEN_3)
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
        bufp->chgBit(oldp+77,(vlSelf->ysyx_24120009_core__DOT___arbiter_io_axi_ar_valid));
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
        bufp->chgIData(oldp+78,((((0U == (0x1fU & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                                   << 5U)))
                                   ? 0U : (__Vtemp_h5d0c4d3a__0[
                                           (((IData)(0x1fU) 
                                             + (0x7fU 
                                                & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                                   << 5U))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                                     << 5U))))) 
                                 | (__Vtemp_h5d0c4d3a__0[
                                    (3U & (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state))] 
                                    >> (0x1fU & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                                 << 5U))))),32);
        bufp->chgCData(oldp+79,(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state),2);
        bufp->chgBit(oldp+80,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__io_in_ready_0));
        bufp->chgBit(oldp+81,(vlSelf->ysyx_24120009_core__DOT___idu_io_out_valid));
        bufp->chgIData(oldp+82,(vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1),32);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2),32);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_24120009_core__DOT___regfile_rs2_data),32);
        bufp->chgBit(oldp+85,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_in_ready_0));
        bufp->chgBit(oldp+86,(vlSelf->ysyx_24120009_core__DOT___exu_io_out_valid));
        bufp->chgIData(oldp+87,(((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
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
                                              : ((4U 
                                                  == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                                  ? 
                                                 (vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1 
                                                  ^ vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2)
                                                  : 
                                                 ((5U 
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
        bufp->chgIData(oldp+88,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_rs2_data),32);
        bufp->chgCData(oldp+89,(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp),5);
        bufp->chgBit(oldp+90,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__io_in_ready_0));
        bufp->chgBit(oldp+91,(vlSelf->ysyx_24120009_core__DOT___ifu_io_out_valid));
        bufp->chgIData(oldp+92,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc),32);
        bufp->chgCData(oldp+93,(vlSelf->ysyx_24120009_core__DOT___idu_io_pc_sel),3);
        bufp->chgBit(oldp+94,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq));
        bufp->chgBit(oldp+95,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt));
        bufp->chgBit(oldp+96,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu));
        bufp->chgCData(oldp+97,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state),2);
        bufp->chgBit(oldp+98,(((~ ((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)) 
                                   | (1U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)))) 
                               & (2U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)))));
        bufp->chgIData(oldp+99,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr),32);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_rs2_data),32);
        bufp->chgCData(oldp+101,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state),2);
        bufp->chgCData(oldp+102,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____Vcellinp__write_mask_gen__io_control),3);
        bufp->chgCData(oldp+103,((0xffU & (((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____Vcellinp__write_mask_gen__io_control))
                                             ? 1U : 
                                            ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____Vcellinp__write_mask_gen__io_control))
                                              ? 3U : 
                                             ((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____Vcellinp__write_mask_gen__io_control))
                                               ? 0xfU
                                               : 0U))) 
                                           << (3U & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr)))),8);
        bufp->chgIData(oldp+104,((vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_rs2_data 
                                  << (0x18U & (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                               << 3U)))),32);
        bufp->chgCData(oldp+105,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state),2);
        bufp->chgIData(oldp+106,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__addr_reg),32);
        bufp->chgIData(oldp+107,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__wdata_reg),32);
        bufp->chgCData(oldp+108,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__wstrb_reg),8);
        bufp->chgBit(oldp+109,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__rd_req_valid));
        bufp->chgBit(oldp+110,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__wt_req_valid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+111,(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_data_out),32);
        bufp->chgBit(oldp+112,(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_rd_res_valid));
        bufp->chgBit(oldp+113,(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_wt_res_valid));
    }
    bufp->chgBit(oldp+114,(vlSelf->clock));
    bufp->chgBit(oldp+115,(vlSelf->reset));
    bufp->chgBit(oldp+116,(vlSelf->ysyx_24120009_core__DOT___arbiter_io_ifu_r_valid));
    bufp->chgIData(oldp+117,((((1U != (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)) 
                               | (0U == (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)))
                               ? 0U : ((1U & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT____VdfgTmp_hb61e3587__0)) 
                                              | (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN_3)))
                                        ? 0U : vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_data_out))),32);
    bufp->chgBit(oldp+118,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0) 
                            & ((~ ((IData)(vlSelf->reset) 
                                   | (0U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)))) 
                               & ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)) 
                                  & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_wt_res_valid))))));
    bufp->chgBit(oldp+119,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0) 
                            & (IData)(vlSelf->ysyx_24120009_core__DOT___sram_io_axi_r_valid))));
    bufp->chgBit(oldp+120,(((~ ((IData)(vlSelf->reset) 
                                | (0U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)))) 
                            & ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)) 
                               & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_wt_res_valid)))));
    bufp->chgBit(oldp+121,(vlSelf->ysyx_24120009_core__DOT___sram_io_axi_r_valid));
    bufp->chgIData(oldp+122,(((1U & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT____VdfgTmp_hb61e3587__0)) 
                                     | (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN_3)))
                               ? 0U : vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_data_out)),32);
    bufp->chgIData(oldp+123,(((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT___GEN_3)
                               ? vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer
                               : 0U)),32);
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
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
