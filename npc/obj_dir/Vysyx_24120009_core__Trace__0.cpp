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
    VlWide<4>/*127:0*/ __Vtemp_hfc7a4a63__0;
    VlWide<8>/*255:0*/ __Vtemp_h26b388b7__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+1,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h4ab110e3__0) 
                              & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__io_axi_w_ready_0))));
        bufp->chgBit(oldp+2,(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready));
        bufp->chgIData(oldp+3,(((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_3)
                                 ? 0U : vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
        bufp->chgIData(oldp+4,(((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_3)
                                 ? 0U : (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_rs2_data 
                                         << (0x18U 
                                             & (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                                << 3U))))),32);
        bufp->chgCData(oldp+5,(((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_3)
                                 ? 0U : (0xfU & (((0U 
                                                   == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))
                                                     ? 0xfU
                                                     : 0U))) 
                                                 << 
                                                 (3U 
                                                  & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr))))),4);
        bufp->chgIData(oldp+6,(((1U & ((~ ((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)) 
                                           & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__isLoad) 
                                              & (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready)))) 
                                       | (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2)))
                                 ? 0U : vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
        bufp->chgBit(oldp+7,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__io_axi_w_ready_0));
        bufp->chgIData(oldp+8,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT___GEN_3)
                                 ? 0U : ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_3)
                                          ? 0U : vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr))),32);
        bufp->chgIData(oldp+9,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT___GEN_3)
                                 ? 0U : ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_3)
                                          ? 0U : (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_rs2_data 
                                                  << 
                                                  (0x18U 
                                                   & (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                                      << 3U)))))),32);
        bufp->chgCData(oldp+10,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT___GEN_3)
                                  ? 0U : ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_3)
                                           ? 0U : (0xfU 
                                                   & (((0U 
                                                        == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))
                                                        ? 1U
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))
                                                         ? 3U
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))
                                                          ? 0xfU
                                                          : 0U))) 
                                                      << 
                                                      (3U 
                                                       & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr)))))),4);
        __Vtemp_hfc7a4a63__0[0U] = 0U;
        __Vtemp_hfc7a4a63__0[1U] = ((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT___GEN_3)
                                     ? vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc
                                     : 0U);
        __Vtemp_hfc7a4a63__0[2U] = (IData)((QData)((IData)(
                                                           ((1U 
                                                             & ((~ 
                                                                 ((2U 
                                                                   == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)) 
                                                                  & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__isLoad) 
                                                                     & (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready)))) 
                                                                | (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2)))
                                                             ? 0U
                                                             : vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr))));
        __Vtemp_hfc7a4a63__0[3U] = (IData)(((QData)((IData)(
                                                            ((1U 
                                                              & ((~ 
                                                                  ((2U 
                                                                    == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)) 
                                                                   & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__isLoad) 
                                                                      & (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready)))) 
                                                                 | (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2)))
                                                              ? 0U
                                                              : vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr))) 
                                            >> 0x20U));
        bufp->chgIData(oldp+11,((((0U == (0x1fU & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                                   << 5U)))
                                   ? 0U : (__Vtemp_hfc7a4a63__0[
                                           (((IData)(0x1fU) 
                                             + (0x7fU 
                                                & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                                   << 5U))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                                     << 5U))))) 
                                 | (__Vtemp_hfc7a4a63__0[
                                    (3U & (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state))] 
                                    >> (0x1fU & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                                 << 5U))))),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+12,(vlSelf->ysyx_24120009_core__DOT___arbiter_io_ifu_r_valid));
        bufp->chgIData(oldp+13,(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_r_data),32);
        bufp->chgBit(oldp+14,(vlSelf->ysyx_24120009_core__DOT___sram_io_axi_r_valid));
        bufp->chgIData(oldp+15,(vlSelf->ysyx_24120009_core__DOT___sram_io_axi_r_data),32);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__alignment_network__DOT__shifted_data),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+17,(vlSelf->ysyx_24120009_core__DOT___ifu_io_memory_ar_valid));
        bufp->chgBit(oldp+18,(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__unnamedblk1__DOT__isIFUActive));
        bufp->chgIData(oldp+19,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_pc),32);
        bufp->chgCData(oldp+21,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                          >> 7U))),5);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_pc),32);
        bufp->chgCData(oldp+25,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_wb_addr),5);
        bufp->chgCData(oldp+26,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__state),2);
        bufp->chgCData(oldp+27,(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp),5);
        bufp->chgBit(oldp+28,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__io_in_ready_0));
        bufp->chgBit(oldp+29,(vlSelf->ysyx_24120009_core__DOT___ifu_io_out_valid));
        bufp->chgIData(oldp+30,((0xfffffffeU & (vlSelf->ysyx_24120009_core__DOT___regfile_rs1_data 
                                                + (
                                                   ((- (IData)(
                                                               (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                      >> 0x14U))))),32);
        bufp->chgIData(oldp+31,((vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_pc 
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
        bufp->chgIData(oldp+32,((vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_pc 
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
        bufp->chgIData(oldp+33,(vlSelf->ysyx_24120009_core__DOT___regfile_rs1_data),32);
        bufp->chgCData(oldp+34,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+35,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+36,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__state),2);
        bufp->chgBit(oldp+37,((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state))));
        bufp->chgIData(oldp+38,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer),32);
        bufp->chgCData(oldp+39,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state),2);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_pc),32);
        bufp->chgCData(oldp+41,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_wb_addr),5);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst),32);
        bufp->chgCData(oldp+43,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wbu_reg_wb_addr),5);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+57,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+58,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+68,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[31]),32);
        bufp->chgCData(oldp+76,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state),2);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wbu_reg_inst),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wbu_reg_pc),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wbu_reg_result),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wbu_reg_dmem_rdata),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+81,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__addr_delayed),32);
        bufp->chgBit(oldp+82,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__rd_req_valid_delayed));
        bufp->chgIData(oldp+83,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__waddr_delayed),32);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wdata_delayed),32);
        bufp->chgCData(oldp+85,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wmask_delayed),8);
        bufp->chgBit(oldp+86,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wt_req_valid_delayed));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+87,(((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT___GEN_3)
                                  ? vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc
                                  : 0U)),32);
        bufp->chgBit(oldp+88,(vlSelf->ysyx_24120009_core__DOT___ifu_io_memory_r_ready));
        bufp->chgBit(oldp+89,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_memory_b_ready_0));
        bufp->chgBit(oldp+90,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_memory_r_ready_0));
        bufp->chgBit(oldp+91,(vlSelf->ysyx_24120009_core__DOT___arbiter_io_axi_aw_valid));
        bufp->chgBit(oldp+92,(vlSelf->ysyx_24120009_core__DOT___arbiter_io_axi_ar_valid));
        bufp->chgBit(oldp+93,(((0U != (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)) 
                               & ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state))
                                   ? (IData)(vlSelf->ysyx_24120009_core__DOT___ifu_io_memory_r_ready)
                                   : (IData)(vlSelf->__VdfgTmp_h5315af70__0)))));
        bufp->chgCData(oldp+94,(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state),2);
        bufp->chgBit(oldp+95,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__io_in_ready_0));
        bufp->chgBit(oldp+96,(vlSelf->ysyx_24120009_core__DOT___idu_io_out_valid));
        bufp->chgIData(oldp+97,(vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2),32);
        bufp->chgIData(oldp+98,(vlSelf->ysyx_24120009_core__DOT___regfile_rs2_data),32);
        bufp->chgBit(oldp+99,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_in_ready_0));
        bufp->chgBit(oldp+100,(vlSelf->ysyx_24120009_core__DOT___exu_io_out_valid));
        bufp->chgIData(oldp+101,(vlSelf->ysyx_24120009_core__DOT__exu__DOT___alu_instance_io_result),32);
        bufp->chgIData(oldp+102,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_rs2_data),32);
        bufp->chgCData(oldp+103,(vlSelf->ysyx_24120009_core__DOT___idu_io_pc_sel),3);
        bufp->chgBit(oldp+104,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq));
        bufp->chgBit(oldp+105,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt));
        bufp->chgBit(oldp+106,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu));
        bufp->chgIData(oldp+107,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc),32);
        bufp->chgBit(oldp+108,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__io_in_ready_0));
        bufp->chgBit(oldp+109,(vlSelf->ysyx_24120009_core__DOT___lsu_io_out_valid));
        bufp->chgIData(oldp+110,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr),32);
        bufp->chgBit(oldp+111,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__isStore));
        bufp->chgBit(oldp+112,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__isLoad));
        bufp->chgIData(oldp+113,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_rs2_data),32);
        bufp->chgCData(oldp+114,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control),3);
        bufp->chgCData(oldp+115,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state),2);
        bufp->chgCData(oldp+116,((0xffU & (((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))
                                             ? 1U : 
                                            ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))
                                              ? 3U : 
                                             ((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))
                                               ? 0xfU
                                               : 0U))) 
                                           << (3U & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr)))),8);
        bufp->chgIData(oldp+117,((vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_rs2_data 
                                  << (0x18U & (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                               << 3U)))),32);
        bufp->chgCData(oldp+118,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state),2);
        bufp->chgIData(oldp+119,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__addr_reg),32);
        bufp->chgIData(oldp+120,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__wdata_reg),32);
        bufp->chgCData(oldp+121,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__wstrb_reg),8);
        bufp->chgBit(oldp+122,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__rd_req_valid));
        bufp->chgBit(oldp+123,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__wt_req_valid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+124,(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_data_out),32);
        bufp->chgBit(oldp+125,(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_rd_res_valid));
        bufp->chgBit(oldp+126,(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_wt_res_valid));
    }
    bufp->chgBit(oldp+127,(vlSelf->clock));
    bufp->chgBit(oldp+128,(vlSelf->reset));
    bufp->chgIData(oldp+129,(vlSelf->io_pc_debug),32);
    bufp->chgIData(oldp+130,(vlSelf->io_inst_debug),32);
    bufp->chgCData(oldp+131,(vlSelf->io_ifu_state_debug),2);
    bufp->chgCData(oldp+132,(vlSelf->io_lsu_state_debug),2);
    bufp->chgBit(oldp+133,(vlSelf->io_lsu_is_ld_or_st_debug));
    bufp->chgIData(oldp+134,(vlSelf->io_lsu_reg_inst_debug),32);
    bufp->chgCData(oldp+135,(vlSelf->io_wbu_state_debug),2);
    bufp->chgIData(oldp+136,(vlSelf->io_wb_data_debug),32);
    bufp->chgBit(oldp+137,(vlSelf->io_wb_wen_debug));
    bufp->chgCData(oldp+138,(vlSelf->io_wb_sel_debug),2);
    bufp->chgCData(oldp+139,(vlSelf->io_Arbiter_state_debug),2);
    bufp->chgIData(oldp+140,((((1U != (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)) 
                               | (0U == (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)))
                               ? 0U : vlSelf->ysyx_24120009_core__DOT___sram_io_axi_r_data)),32);
    bufp->chgBit(oldp+141,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0) 
                            & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT____VdfgTmp_h93f38017__0)) 
                               & ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)) 
                                  & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_wt_res_valid))))));
    bufp->chgBit(oldp+142,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0) 
                            & (IData)(vlSelf->ysyx_24120009_core__DOT___sram_io_axi_r_valid))));
    bufp->chgBit(oldp+143,(((~ (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT____VdfgTmp_h93f38017__0)) 
                            & ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)) 
                               & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_wt_res_valid)))));
    __Vtemp_h26b388b7__0[0U] = (((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__alignment_network__DOT__shifted_data));
    __Vtemp_h26b388b7__0[1U] = (((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
                                                   >> 0xfU)))) 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__alignment_network__DOT__shifted_data));
    __Vtemp_h26b388b7__0[2U] = (IData)((QData)((IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_r_data)));
    __Vtemp_h26b388b7__0[3U] = (IData)(((QData)((IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_r_data)) 
                                        >> 0x20U));
    __Vtemp_h26b388b7__0[4U] = (0xffU & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__alignment_network__DOT__shifted_data);
    __Vtemp_h26b388b7__0[5U] = (0xffffU & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__alignment_network__DOT__shifted_data);
    __Vtemp_h26b388b7__0[6U] = 0U;
    __Vtemp_h26b388b7__0[7U] = 0U;
    bufp->chgIData(oldp+144,((((0U == (0x1fU & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control) 
                                                << 5U)))
                                ? 0U : (__Vtemp_h26b388b7__0[
                                        (((IData)(0x1fU) 
                                          + (0xffU 
                                             & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control) 
                                                << 5U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control) 
                                             << 5U))))) 
                              | (__Vtemp_h26b388b7__0[
                                 (7U & (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))] 
                                 >> (0x1fU & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control) 
                                              << 5U))))),32);
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
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
