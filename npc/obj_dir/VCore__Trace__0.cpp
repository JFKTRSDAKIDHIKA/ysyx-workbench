// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCore__Syms.h"


void VCore___024root__trace_chg_0_sub_0(VCore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCore___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_chg_0\n"); );
    // Init
    VCore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore___024root*>(voidSelf);
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCore___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VCore___024root__trace_chg_0_sub_0(VCore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_7;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->Core__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+1,(((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h4b16e7a1__0) 
                              & (IData)(vlSelf->Core__DOT__sram__DOT__io_axi_w_ready_0))));
        bufp->chgBit(oldp+2,(vlSelf->Core__DOT__lsu__DOT__io_memory_w_valid_0));
        bufp->chgBit(oldp+3,(vlSelf->Core__DOT___arbiter_io_lsu_aw_ready));
        bufp->chgBit(oldp+4,(((IData)(vlSelf->Core__DOT__lsu__DOT____VdfgTmp_hf7573e74__0) 
                              & (IData)(vlSelf->Core__DOT___arbiter_io_lsu_aw_ready))));
        bufp->chgBit(oldp+5,(((0U != (IData)(vlSelf->Core__DOT__lsu__DOT__state)) 
                              & ((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_1) 
                                 & (IData)(vlSelf->Core__DOT___arbiter_io_lsu_aw_ready)))));
        bufp->chgBit(oldp+6,(((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0) 
                              & (IData)(vlSelf->Core__DOT__lsu__DOT__io_memory_w_valid_0))));
        bufp->chgBit(oldp+7,(vlSelf->Core__DOT__sram__DOT__io_axi_w_ready_0));
        bufp->chgBit(oldp+8,(((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0) 
                              & ((IData)(vlSelf->Core__DOT__lsu__DOT____VdfgTmp_hf7573e74__0) 
                                 & (IData)(vlSelf->Core__DOT___arbiter_io_lsu_aw_ready)))));
        bufp->chgBit(oldp+9,(((0U != (IData)(vlSelf->Core__DOT__arbiter__DOT__state)) 
                              & ((1U == (IData)(vlSelf->Core__DOT__arbiter__DOT__state))
                                  ? (IData)(vlSelf->Core__DOT___ifu_io_memory_r_ready)
                                  : ((2U == (IData)(vlSelf->Core__DOT__arbiter__DOT__state)) 
                                     & ((0U != (IData)(vlSelf->Core__DOT__lsu__DOT__state)) 
                                        & ((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_1) 
                                           & (IData)(vlSelf->Core__DOT___arbiter_io_lsu_aw_ready))))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+10,(vlSelf->Core__DOT___arbiter_io_ifu_r_valid));
        bufp->chgIData(oldp+11,(vlSelf->Core__DOT___arbiter_io_lsu_r_data),32);
        bufp->chgBit(oldp+12,(vlSelf->Core__DOT___sram_io_axi_r_valid));
        bufp->chgIData(oldp+13,(vlSelf->Core__DOT___sram_io_axi_r_data),32);
        bufp->chgIData(oldp+14,(vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+15,(vlSelf->Core__DOT___ifu_io_memory_ar_valid));
        bufp->chgBit(oldp+16,(vlSelf->Core__DOT__arbiter__DOT__unnamedblk1__DOT__isIFUActive));
        bufp->chgIData(oldp+17,(vlSelf->Core__DOT__idu__DOT__idu_reg_pc),32);
        bufp->chgIData(oldp+18,(vlSelf->Core__DOT__exu__DOT__exu_reg_pc),32);
        bufp->chgCData(oldp+19,(vlSelf->Core__DOT__exu__DOT__exu_reg_wb_addr),5);
        bufp->chgCData(oldp+20,(vlSelf->Core__DOT__exu__DOT__state),2);
        bufp->chgCData(oldp+21,(vlSelf->Core__DOT__idu__DOT__state),2);
        bufp->chgBit(oldp+22,((2U == (IData)(vlSelf->Core__DOT__wbu__DOT__state))));
        bufp->chgIData(oldp+23,(vlSelf->Core__DOT__ifu__DOT__if_inst_buffer),32);
        bufp->chgCData(oldp+24,(vlSelf->Core__DOT__ifu__DOT__state),2);
        bufp->chgIData(oldp+25,(vlSelf->Core__DOT__lsu__DOT__lsu_reg_pc),32);
        bufp->chgCData(oldp+26,(vlSelf->Core__DOT__lsu__DOT__lsu_reg_wb_addr),5);
        bufp->chgCData(oldp+27,(vlSelf->Core__DOT__wbu__DOT__wbu_reg_wb_addr),5);
        bufp->chgIData(oldp+28,(vlSelf->Core__DOT__regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+29,(vlSelf->Core__DOT__regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+30,(vlSelf->Core__DOT__regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+31,(vlSelf->Core__DOT__regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+32,(vlSelf->Core__DOT__regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+33,(vlSelf->Core__DOT__regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+34,(vlSelf->Core__DOT__regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+35,(vlSelf->Core__DOT__regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+36,(vlSelf->Core__DOT__regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+37,(vlSelf->Core__DOT__regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+38,(vlSelf->Core__DOT__regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+39,(vlSelf->Core__DOT__regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+40,(vlSelf->Core__DOT__regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+41,(vlSelf->Core__DOT__regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+42,(vlSelf->Core__DOT__regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+43,(vlSelf->Core__DOT__regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+44,(vlSelf->Core__DOT__regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+45,(vlSelf->Core__DOT__regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+46,(vlSelf->Core__DOT__regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+47,(vlSelf->Core__DOT__regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+48,(vlSelf->Core__DOT__regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+49,(vlSelf->Core__DOT__regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+50,(vlSelf->Core__DOT__regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+51,(vlSelf->Core__DOT__regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+52,(vlSelf->Core__DOT__regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+53,(vlSelf->Core__DOT__regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+54,(vlSelf->Core__DOT__regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+55,(vlSelf->Core__DOT__regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+56,(vlSelf->Core__DOT__regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+57,(vlSelf->Core__DOT__regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+58,(vlSelf->Core__DOT__regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+59,(vlSelf->Core__DOT__regfile__DOT__rf[31]),32);
        bufp->chgCData(oldp+60,(vlSelf->Core__DOT__wbu__DOT__state),2);
        bufp->chgIData(oldp+61,(vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst),32);
        bufp->chgIData(oldp+62,(vlSelf->Core__DOT__wbu__DOT__wbu_reg_pc),32);
        bufp->chgIData(oldp+63,(vlSelf->Core__DOT__wbu__DOT__wbu_reg_result),32);
        bufp->chgIData(oldp+64,(vlSelf->Core__DOT__wbu__DOT__wbu_reg_dmem_rdata),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+65,(vlSelf->Core__DOT__sram__DOT__sram__DOT__addr_delayed),32);
        bufp->chgBit(oldp+66,(vlSelf->Core__DOT__sram__DOT__sram__DOT__rd_req_valid_delayed));
        bufp->chgIData(oldp+67,(vlSelf->Core__DOT__sram__DOT__sram__DOT__waddr_delayed),32);
        bufp->chgIData(oldp+68,(vlSelf->Core__DOT__sram__DOT__sram__DOT__wdata_delayed),32);
        bufp->chgCData(oldp+69,(vlSelf->Core__DOT__sram__DOT__sram__DOT__wmask_delayed),8);
        bufp->chgBit(oldp+70,(vlSelf->Core__DOT__sram__DOT__sram__DOT__wt_req_valid_delayed));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+71,(((IData)(vlSelf->Core__DOT__ifu__DOT___GEN_3)
                                  ? vlSelf->Core__DOT__ifu__DOT__pc
                                  : 0U)),32);
        bufp->chgBit(oldp+72,(vlSelf->Core__DOT___ifu_io_memory_r_ready));
        bufp->chgIData(oldp+73,(((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_2)
                                  ? 0U : vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
        bufp->chgIData(oldp+74,(((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_2)
                                  ? 0U : (vlSelf->Core__DOT__lsu__DOT__lsu_reg_rs2_data 
                                          << (0x18U 
                                              & (vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                                 << 3U))))),32);
        bufp->chgCData(oldp+75,(((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_2)
                                  ? 0U : (0xfU & ((
                                                   (0U 
                                                    == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                                      ? 0xfU
                                                      : 0U))) 
                                                  << 
                                                  (3U 
                                                   & vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr))))),4);
        bufp->chgBit(oldp+76,(vlSelf->Core__DOT___lsu_io_memory_ar_valid));
        bufp->chgIData(oldp+77,(((1U & ((~ (IData)(vlSelf->Core__DOT__lsu__DOT___GEN_1)) 
                                        | (0U == (IData)(vlSelf->Core__DOT__lsu__DOT__state))))
                                  ? 0U : vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
        bufp->chgIData(oldp+78,(((IData)(vlSelf->Core__DOT__arbiter__DOT___GEN_3)
                                  ? 0U : ((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_2)
                                           ? 0U : vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr))),32);
        bufp->chgIData(oldp+79,(((IData)(vlSelf->Core__DOT__arbiter__DOT___GEN_3)
                                  ? 0U : ((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_2)
                                           ? 0U : (vlSelf->Core__DOT__lsu__DOT__lsu_reg_rs2_data 
                                                   << 
                                                   (0x18U 
                                                    & (vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                                       << 3U)))))),32);
        bufp->chgCData(oldp+80,(((IData)(vlSelf->Core__DOT__arbiter__DOT___GEN_3)
                                  ? 0U : ((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_2)
                                           ? 0U : (0xfU 
                                                   & (((0U 
                                                        == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                                        ? 1U
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                                         ? 3U
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                                          ? 0xfU
                                                          : 0U))) 
                                                      << 
                                                      (3U 
                                                       & vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr)))))),4);
        bufp->chgBit(oldp+81,(vlSelf->Core__DOT___arbiter_io_axi_ar_valid));
        __Vtemp_2[0U] = 0U;
        __Vtemp_2[1U] = ((IData)(vlSelf->Core__DOT__ifu__DOT___GEN_3)
                          ? vlSelf->Core__DOT__ifu__DOT__pc
                          : 0U);
        __Vtemp_2[2U] = (IData)((QData)((IData)(((1U 
                                                  & ((~ (IData)(vlSelf->Core__DOT__lsu__DOT___GEN_1)) 
                                                     | (0U 
                                                        == (IData)(vlSelf->Core__DOT__lsu__DOT__state))))
                                                  ? 0U
                                                  : vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr))));
        __Vtemp_2[3U] = (IData)(((QData)((IData)(((1U 
                                                   & ((~ (IData)(vlSelf->Core__DOT__lsu__DOT___GEN_1)) 
                                                      | (0U 
                                                         == (IData)(vlSelf->Core__DOT__lsu__DOT__state))))
                                                   ? 0U
                                                   : vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr))) 
                                 >> 0x20U));
        bufp->chgIData(oldp+82,((((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->Core__DOT__arbiter__DOT__state), 5U)))
                                   ? 0U : (__Vtemp_2[
                                           (((IData)(0x1fU) 
                                             + (0x7fU 
                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->Core__DOT__arbiter__DOT__state), 5U))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->Core__DOT__arbiter__DOT__state), 5U))))) 
                                 | (__Vtemp_2[(3U & 
                                               (VL_SHIFTL_III(7,7,32, (IData)(vlSelf->Core__DOT__arbiter__DOT__state), 5U) 
                                                >> 5U))] 
                                    >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->Core__DOT__arbiter__DOT__state), 5U))))),32);
        bufp->chgCData(oldp+83,(vlSelf->Core__DOT__arbiter__DOT__state),2);
        bufp->chgBit(oldp+84,(vlSelf->Core__DOT__exu__DOT__io_in_ready_0));
        bufp->chgBit(oldp+85,(vlSelf->Core__DOT___idu_io_out_valid));
        bufp->chgIData(oldp+86,(vlSelf->Core__DOT__idu__DOT__idu_reg_inst),32);
        bufp->chgCData(oldp+87,((0x1fU & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                          >> 7U))),5);
        bufp->chgIData(oldp+88,(vlSelf->Core__DOT___idu_io_out_bits_alu_op1),32);
        bufp->chgIData(oldp+89,(vlSelf->Core__DOT___idu_io_out_bits_alu_op2),32);
        bufp->chgIData(oldp+90,(vlSelf->Core__DOT___regfile_rs2_data),32);
        bufp->chgBit(oldp+91,(vlSelf->Core__DOT__lsu__DOT__io_in_ready_0));
        bufp->chgBit(oldp+92,(vlSelf->Core__DOT___exu_io_out_valid));
        bufp->chgIData(oldp+93,(vlSelf->Core__DOT__exu__DOT__exu_reg_inst),32);
        bufp->chgIData(oldp+94,(vlSelf->Core__DOT__exu__DOT___alu_instance_io_result),32);
        bufp->chgIData(oldp+95,(vlSelf->Core__DOT__exu__DOT__exu_reg_rs2_data),32);
        bufp->chgCData(oldp+96,(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp),5);
        bufp->chgBit(oldp+97,(vlSelf->Core__DOT__idu__DOT__io_in_ready_0));
        bufp->chgBit(oldp+98,(vlSelf->Core__DOT___ifu_io_out_valid));
        bufp->chgIData(oldp+99,((0xfffffffeU & (vlSelf->Core__DOT___regfile_rs1_data 
                                                + (
                                                   ((- (IData)(
                                                               (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                      >> 0x14U))))),32);
        bufp->chgCData(oldp+100,(vlSelf->Core__DOT___idu_io_pc_sel),3);
        bufp->chgIData(oldp+101,(vlSelf->Core__DOT___regfile_rs1_data),32);
        bufp->chgCData(oldp+102,((0x1fU & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+103,((0x1fU & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                           >> 0x14U))),5);
        bufp->chgBit(oldp+104,(vlSelf->Core__DOT__idu__DOT__br_eq));
        bufp->chgBit(oldp+105,(vlSelf->Core__DOT__idu__DOT__br_lt));
        bufp->chgBit(oldp+106,(vlSelf->Core__DOT__idu__DOT__br_ltu));
        bufp->chgIData(oldp+107,(vlSelf->Core__DOT__ifu__DOT__pc),32);
        bufp->chgBit(oldp+108,(vlSelf->Core__DOT__wbu__DOT__io_in_ready_0));
        bufp->chgBit(oldp+109,(vlSelf->Core__DOT___lsu_io_out_valid));
        bufp->chgIData(oldp+110,(vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst),32);
        bufp->chgIData(oldp+111,(vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr),32);
        bufp->chgIData(oldp+112,(vlSelf->Core__DOT__lsu__DOT__lsu_reg_rs2_data),32);
        bufp->chgBit(oldp+113,((3U == (0x7fU & vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst))));
        bufp->chgBit(oldp+114,((0x23U == (0x7fU & vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst))));
        bufp->chgCData(oldp+115,(vlSelf->Core__DOT__lsu__DOT__mem_access_control),3);
        bufp->chgCData(oldp+116,(vlSelf->Core__DOT__lsu__DOT__state),2);
        bufp->chgCData(oldp+117,((0xffU & (((0U == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                             ? 1U : 
                                            ((1U == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                              ? 3U : 
                                             ((2U == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                               ? 0xfU
                                               : 0U))) 
                                           << (3U & vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr)))),8);
        bufp->chgIData(oldp+118,((vlSelf->Core__DOT__lsu__DOT__lsu_reg_rs2_data 
                                  << (0x18U & (vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                               << 3U)))),32);
        bufp->chgCData(oldp+119,(vlSelf->Core__DOT__sram__DOT__state),2);
        bufp->chgIData(oldp+120,(vlSelf->Core__DOT__sram__DOT__addr_reg),32);
        bufp->chgIData(oldp+121,(vlSelf->Core__DOT__sram__DOT__wdata_reg),32);
        bufp->chgCData(oldp+122,(vlSelf->Core__DOT__sram__DOT__wstrb_reg),8);
        bufp->chgBit(oldp+123,(vlSelf->Core__DOT__sram__DOT__rd_req_valid));
        bufp->chgBit(oldp+124,(vlSelf->Core__DOT__sram__DOT__wt_req_valid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+125,(vlSelf->Core__DOT__sram__DOT___sram_data_out),32);
        bufp->chgBit(oldp+126,(vlSelf->Core__DOT__sram__DOT___sram_rd_res_valid));
        bufp->chgBit(oldp+127,(vlSelf->Core__DOT__sram__DOT___sram_wt_res_valid));
    }
    bufp->chgBit(oldp+128,(vlSelf->clock));
    bufp->chgBit(oldp+129,(vlSelf->reset));
    bufp->chgIData(oldp+130,(vlSelf->io_pc_debug),32);
    bufp->chgIData(oldp+131,(vlSelf->io_inst_debug),32);
    bufp->chgCData(oldp+132,(vlSelf->io_ifu_state_debug),2);
    bufp->chgCData(oldp+133,(vlSelf->io_lsu_state_debug),2);
    bufp->chgCData(oldp+134,(vlSelf->io_wbu_state_debug),2);
    bufp->chgIData(oldp+135,(vlSelf->io_wb_data_debug),32);
    bufp->chgBit(oldp+136,(vlSelf->io_wb_wen_debug));
    bufp->chgCData(oldp+137,(vlSelf->io_wb_sel_debug),2);
    bufp->chgIData(oldp+138,((((1U != (IData)(vlSelf->Core__DOT__arbiter__DOT__state)) 
                               | (0U == (IData)(vlSelf->Core__DOT__arbiter__DOT__state)))
                               ? 0U : vlSelf->Core__DOT___sram_io_axi_r_data)),32);
    bufp->chgBit(oldp+139,(((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0) 
                            & ((~ (IData)(vlSelf->Core__DOT__sram__DOT____VdfgTmp_h93f383d4__0)) 
                               & ((1U == (IData)(vlSelf->Core__DOT__sram__DOT__state)) 
                                  & (IData)(vlSelf->Core__DOT__sram__DOT___sram_wt_res_valid))))));
    bufp->chgBit(oldp+140,(((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0) 
                            & (IData)(vlSelf->Core__DOT___sram_io_axi_r_valid))));
    bufp->chgBit(oldp+141,(((~ (IData)(vlSelf->Core__DOT__sram__DOT____VdfgTmp_h93f383d4__0)) 
                            & ((1U == (IData)(vlSelf->Core__DOT__sram__DOT__state)) 
                               & (IData)(vlSelf->Core__DOT__sram__DOT___sram_wt_res_valid)))));
    bufp->chgIData(oldp+142,((vlSelf->Core__DOT__idu__DOT__idu_reg_pc 
                              + (((- (IData)((vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0x800U 
                                               & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                       >> 7U))))))),32);
    bufp->chgIData(oldp+143,((vlSelf->Core__DOT__idu__DOT__idu_reg_pc 
                              + (((- (IData)((vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->Core__DOT__idu__DOT__idu_reg_inst) 
                                               | ((0x800U 
                                                   & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                        >> 0x14U))))))),32);
    __Vtemp_7[0U] = (((- (IData)((1U & (vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
                                        >> 7U)))) << 8U) 
                     | (0xffU & vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data));
    __Vtemp_7[1U] = (((- (IData)((1U & (vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
                                        >> 0xfU)))) 
                      << 0x10U) | (0xffffU & vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data));
    __Vtemp_7[2U] = (IData)((QData)((IData)(vlSelf->Core__DOT___arbiter_io_lsu_r_data)));
    __Vtemp_7[3U] = (IData)(((QData)((IData)(vlSelf->Core__DOT___arbiter_io_lsu_r_data)) 
                             >> 0x20U));
    __Vtemp_7[4U] = (0xffU & vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data);
    __Vtemp_7[5U] = (0xffffU & vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data);
    __Vtemp_7[6U] = 0U;
    __Vtemp_7[7U] = 0U;
    bufp->chgIData(oldp+144,((((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U)))
                                ? 0U : (__Vtemp_7[(
                                                   ((IData)(0x1fU) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U))) 
                                                   >> 5U)] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U))))) 
                              | (__Vtemp_7[(7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U) 
                                                  >> 5U))] 
                                 >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U))))),32);
    bufp->chgBit(oldp+145,(((IData)(vlSelf->io_wb_wen_debug) 
                            & (1U == (IData)(vlSelf->Core__DOT__wbu__DOT__state)))));
}

void VCore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_cleanup\n"); );
    // Init
    VCore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore___024root*>(voidSelf);
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
