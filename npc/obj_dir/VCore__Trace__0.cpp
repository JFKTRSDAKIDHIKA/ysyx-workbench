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
    VlWide<8>/*255:0*/ __Vtemp_5;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->Core__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+1,(vlSelf->Core__DOT___arbiter_io_ifu_r_valid));
        bufp->chgIData(oldp+2,(vlSelf->Core__DOT___arbiter_io_lsu_r_data),32);
        bufp->chgBit(oldp+3,(vlSelf->Core__DOT___xbar_io_in_r_valid));
        bufp->chgIData(oldp+4,(vlSelf->Core__DOT___xbar_io_in_r_data),32);
        bufp->chgIData(oldp+5,(vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+6,(((~ (IData)(vlSelf->Core__DOT__ifu__DOT____VdfgTmp_h3a4270d2__0)) 
                              & (1U == (IData)(vlSelf->Core__DOT__ifu__DOT__state)))));
        bufp->chgIData(oldp+7,(((IData)(vlSelf->Core__DOT__ifu__DOT___GEN_6)
                                 ? vlSelf->Core__DOT__ifu__DOT__pc
                                 : 0U)),32);
        bufp->chgBit(oldp+8,(((~ (IData)(vlSelf->Core__DOT__ifu__DOT___GEN_4)) 
                              & (3U == (IData)(vlSelf->Core__DOT__ifu__DOT__state)))));
        bufp->chgBit(oldp+9,(((IData)(vlSelf->Core__DOT__lsu__DOT____VdfgTmp_h4810bc75__0) 
                              & (IData)(vlSelf->Core__DOT__lsu__DOT___GEN_3))));
        bufp->chgIData(oldp+10,(((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_4)
                                  ? 0U : vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
        bufp->chgCData(oldp+11,(((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_4)
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
        bufp->chgBit(oldp+12,(((IData)(vlSelf->Core__DOT__lsu__DOT____VdfgTmp_hbdad3c0b__0) 
                               & (IData)(vlSelf->Core__DOT__lsu__DOT___GEN_3))));
        bufp->chgBit(oldp+13,(((IData)(vlSelf->Core__DOT__lsu__DOT____VdfgTmp_h4810bc75__0) 
                               & (IData)(vlSelf->Core__DOT__lsu__DOT__isLoad))));
        bufp->chgIData(oldp+14,(((1U & ((~ ((2U == (IData)(vlSelf->Core__DOT__lsu__DOT__state)) 
                                            & (IData)(vlSelf->Core__DOT__lsu__DOT__isLoad))) 
                                        | (IData)(vlSelf->Core__DOT__lsu__DOT___GEN_2)))
                                  ? 0U : vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
        bufp->chgBit(oldp+15,(((IData)(vlSelf->Core__DOT__lsu__DOT____VdfgTmp_hbdad3c0b__0) 
                               & (IData)(vlSelf->Core__DOT__lsu__DOT__isLoad))));
        bufp->chgBit(oldp+16,(vlSelf->Core__DOT___arbiter_io_axi_ar_valid));
        bufp->chgBit(oldp+17,(vlSelf->Core__DOT___ifu_io_arbiter_valid));
        bufp->chgBit(oldp+18,((1U & (~ (IData)(vlSelf->Core__DOT__arbiter__DOT__state)))));
        bufp->chgBit(oldp+19,(vlSelf->Core__DOT___lsu_io_arbiter_valid));
        bufp->chgBit(oldp+20,(vlSelf->Core__DOT__arbiter__DOT__state));
        bufp->chgBit(oldp+21,(vlSelf->Core__DOT__exu__DOT__io_in_ready_0));
        bufp->chgBit(oldp+22,(vlSelf->Core__DOT___idu_io_out_valid));
        bufp->chgIData(oldp+23,(vlSelf->Core__DOT__idu__DOT__idu_reg_inst),32);
        bufp->chgIData(oldp+24,(vlSelf->Core__DOT__idu__DOT__idu_reg_pc),32);
        bufp->chgCData(oldp+25,((0x1fU & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                          >> 7U))),5);
        bufp->chgIData(oldp+26,(vlSelf->Core__DOT___idu_io_out_bits_alu_op1),32);
        bufp->chgIData(oldp+27,(vlSelf->Core__DOT___idu_io_out_bits_alu_op2),32);
        bufp->chgIData(oldp+28,(vlSelf->Core__DOT___regfile_rs2_data),32);
        bufp->chgBit(oldp+29,(vlSelf->Core__DOT__lsu__DOT__io_in_ready_0));
        bufp->chgBit(oldp+30,(vlSelf->Core__DOT___exu_io_out_valid));
        bufp->chgIData(oldp+31,(vlSelf->Core__DOT__exu__DOT__exu_reg_inst),32);
        bufp->chgIData(oldp+32,(vlSelf->Core__DOT__exu__DOT__exu_reg_pc),32);
        bufp->chgIData(oldp+33,(vlSelf->Core__DOT__exu__DOT___alu_instance_io_result),32);
        bufp->chgIData(oldp+34,(vlSelf->Core__DOT__exu__DOT__exu_reg_rs2_data),32);
        bufp->chgCData(oldp+35,(vlSelf->Core__DOT__exu__DOT__exu_reg_wb_addr),5);
        bufp->chgCData(oldp+36,(vlSelf->Core__DOT__exu__DOT__state),2);
        bufp->chgCData(oldp+37,(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp),5);
        bufp->chgBit(oldp+38,(vlSelf->Core__DOT__idu__DOT__io_in_ready_0));
        bufp->chgBit(oldp+39,(vlSelf->Core__DOT___ifu_io_out_valid));
        bufp->chgIData(oldp+40,((0xfffffffeU & (vlSelf->Core__DOT___regfile_rs1_data 
                                                + (
                                                   ((- (IData)(
                                                               (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                      >> 0x14U))))),32);
        bufp->chgIData(oldp+41,((vlSelf->Core__DOT__idu__DOT__idu_reg_pc 
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
        bufp->chgIData(oldp+42,((vlSelf->Core__DOT__idu__DOT__idu_reg_pc 
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
        bufp->chgCData(oldp+43,(vlSelf->Core__DOT___idu_io_pc_sel),3);
        bufp->chgIData(oldp+44,(vlSelf->Core__DOT___regfile_rs1_data),32);
        bufp->chgCData(oldp+45,((0x1fU & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+46,((0x1fU & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+47,(vlSelf->Core__DOT__idu__DOT__state),2);
        bufp->chgBit(oldp+48,(vlSelf->Core__DOT__idu__DOT__br_eq));
        bufp->chgBit(oldp+49,(vlSelf->Core__DOT__idu__DOT__br_lt));
        bufp->chgBit(oldp+50,(vlSelf->Core__DOT__idu__DOT__br_ltu));
        bufp->chgBit(oldp+51,((2U == (IData)(vlSelf->Core__DOT__wbu__DOT__state))));
        bufp->chgIData(oldp+52,(vlSelf->Core__DOT__ifu__DOT__pc),32);
        bufp->chgIData(oldp+53,(vlSelf->Core__DOT__ifu__DOT__if_inst_buffer),32);
        bufp->chgCData(oldp+54,(vlSelf->Core__DOT__ifu__DOT__state),3);
        bufp->chgBit(oldp+55,(vlSelf->Core__DOT__wbu__DOT__io_in_ready_0));
        bufp->chgBit(oldp+56,(vlSelf->Core__DOT___lsu_io_out_valid));
        bufp->chgIData(oldp+57,(vlSelf->Core__DOT__lsu__DOT__lsu_reg_pc),32);
        bufp->chgIData(oldp+58,(vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr),32);
        bufp->chgCData(oldp+59,(vlSelf->Core__DOT__lsu__DOT__lsu_reg_wb_addr),5);
        bufp->chgBit(oldp+60,(vlSelf->Core__DOT__lsu__DOT__isStore));
        bufp->chgBit(oldp+61,(vlSelf->Core__DOT__lsu__DOT__isLoad));
        bufp->chgIData(oldp+62,(vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst),32);
        bufp->chgIData(oldp+63,(vlSelf->Core__DOT__lsu__DOT__lsu_reg_rs2_data),32);
        bufp->chgCData(oldp+64,(vlSelf->Core__DOT__lsu__DOT__mem_access_control),3);
        bufp->chgIData(oldp+65,(vlSelf->Core__DOT__lsu__DOT__dmem_rdata_delay),32);
        bufp->chgCData(oldp+66,(vlSelf->Core__DOT__lsu__DOT__state),3);
        bufp->chgCData(oldp+67,((0xffU & (((0U == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                            ? 1U : 
                                           ((1U == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                             ? 3U : 
                                            ((2U == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                              ? 0xfU
                                              : 0U))) 
                                          << (3U & vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr)))),8);
        bufp->chgCData(oldp+68,(vlSelf->Core__DOT__wbu__DOT__wbu_reg_wb_addr),5);
        bufp->chgIData(oldp+69,(vlSelf->Core__DOT__regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+70,(vlSelf->Core__DOT__regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+71,(vlSelf->Core__DOT__regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+72,(vlSelf->Core__DOT__regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+73,(vlSelf->Core__DOT__regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+74,(vlSelf->Core__DOT__regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+75,(vlSelf->Core__DOT__regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+76,(vlSelf->Core__DOT__regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+77,(vlSelf->Core__DOT__regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+78,(vlSelf->Core__DOT__regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+79,(vlSelf->Core__DOT__regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+80,(vlSelf->Core__DOT__regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+81,(vlSelf->Core__DOT__regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+82,(vlSelf->Core__DOT__regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+83,(vlSelf->Core__DOT__regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+84,(vlSelf->Core__DOT__regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+85,(vlSelf->Core__DOT__regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+86,(vlSelf->Core__DOT__regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+87,(vlSelf->Core__DOT__regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+88,(vlSelf->Core__DOT__regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+89,(vlSelf->Core__DOT__regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+90,(vlSelf->Core__DOT__regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+91,(vlSelf->Core__DOT__regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+92,(vlSelf->Core__DOT__regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+93,(vlSelf->Core__DOT__regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+94,(vlSelf->Core__DOT__regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+95,(vlSelf->Core__DOT__regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+96,(vlSelf->Core__DOT__regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+97,(vlSelf->Core__DOT__regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+98,(vlSelf->Core__DOT__regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+99,(vlSelf->Core__DOT__regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+100,(vlSelf->Core__DOT__regfile__DOT__rf[31]),32);
        bufp->chgCData(oldp+101,(vlSelf->Core__DOT__wbu__DOT__state),2);
        bufp->chgIData(oldp+102,(vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst),32);
        bufp->chgIData(oldp+103,(vlSelf->Core__DOT__wbu__DOT__wbu_reg_pc),32);
        bufp->chgIData(oldp+104,(vlSelf->Core__DOT__wbu__DOT__wbu_reg_result),32);
        bufp->chgIData(oldp+105,(vlSelf->Core__DOT__wbu__DOT__wbu_reg_dmem_rdata),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+106,(vlSelf->Core__DOT__sram__DOT__sram__DOT__addr_delayed),32);
        bufp->chgBit(oldp+107,(vlSelf->Core__DOT__sram__DOT__sram__DOT__rd_req_valid_delayed));
        bufp->chgIData(oldp+108,(vlSelf->Core__DOT__sram__DOT__sram__DOT__waddr_delayed),32);
        bufp->chgIData(oldp+109,(vlSelf->Core__DOT__sram__DOT__sram__DOT__wdata_delayed),32);
        bufp->chgCData(oldp+110,(vlSelf->Core__DOT__sram__DOT__sram__DOT__wmask_delayed),8);
        bufp->chgBit(oldp+111,(vlSelf->Core__DOT__sram__DOT__sram__DOT__wt_req_valid_delayed));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+112,(vlSelf->Core__DOT___uart_io_axi_w_ready));
        bufp->chgBit(oldp+113,(vlSelf->Core__DOT___uart_io_axi_b_valid));
        bufp->chgIData(oldp+114,(vlSelf->Core__DOT__uart__DOT__uartRaw__DOT__uart_reg),32);
        bufp->chgCData(oldp+115,(vlSelf->Core__DOT__uart__DOT__uartRaw__DOT__state),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+116,(vlSelf->Core__DOT___arbiter_io_axi_aw_valid));
        bufp->chgIData(oldp+117,(vlSelf->Core__DOT___arbiter_io_axi_aw_addr),32);
        bufp->chgIData(oldp+118,(vlSelf->Core__DOT___arbiter_io_axi_w_data),32);
        bufp->chgCData(oldp+119,(vlSelf->Core__DOT___arbiter_io_axi_w_strb),4);
        bufp->chgBit(oldp+120,(vlSelf->Core__DOT___arbiter_io_axi_b_ready));
        bufp->chgIData(oldp+121,(vlSelf->Core__DOT___arbiter_io_axi_ar_addr),32);
        bufp->chgBit(oldp+122,(vlSelf->Core__DOT___arbiter_io_axi_r_ready));
        bufp->chgBit(oldp+123,(((IData)(vlSelf->Core__DOT__xbar__DOT____VdfgTmp_h9f2d9de7__0) 
                                & (IData)(vlSelf->Core__DOT___arbiter_io_axi_aw_valid))));
        bufp->chgIData(oldp+124,(((IData)(vlSelf->Core__DOT__xbar__DOT___GEN_1)
                                   ? 0U : vlSelf->Core__DOT___arbiter_io_axi_aw_addr)),32);
        bufp->chgIData(oldp+125,(((IData)(vlSelf->Core__DOT__xbar__DOT___GEN_1)
                                   ? 0U : vlSelf->Core__DOT___arbiter_io_axi_w_data)),32);
        bufp->chgCData(oldp+126,(((IData)(vlSelf->Core__DOT__xbar__DOT___GEN_1)
                                   ? 0U : (IData)(vlSelf->Core__DOT___arbiter_io_axi_w_strb))),4);
        bufp->chgBit(oldp+127,(((IData)(vlSelf->Core__DOT__xbar__DOT____VdfgTmp_h9f2d9de7__0) 
                                & (IData)(vlSelf->Core__DOT___arbiter_io_axi_b_ready))));
        bufp->chgBit(oldp+128,(vlSelf->Core__DOT___xbar_io_sram_ar_valid));
        bufp->chgIData(oldp+129,(((IData)(vlSelf->Core__DOT__xbar__DOT___GEN_1)
                                   ? 0U : vlSelf->Core__DOT___arbiter_io_axi_ar_addr)),32);
        bufp->chgBit(oldp+130,(((IData)(vlSelf->Core__DOT__xbar__DOT____VdfgTmp_h9f2d9de7__0) 
                                & (IData)(vlSelf->Core__DOT___arbiter_io_axi_r_ready))));
        bufp->chgCData(oldp+131,(vlSelf->Core__DOT__sram__DOT__state),2);
        bufp->chgIData(oldp+132,(vlSelf->Core__DOT__sram__DOT__addr_reg),32);
        bufp->chgIData(oldp+133,(vlSelf->Core__DOT__sram__DOT__wdata_reg),32);
        bufp->chgCData(oldp+134,(vlSelf->Core__DOT__sram__DOT__wstrb_reg),8);
        bufp->chgBit(oldp+135,(vlSelf->Core__DOT__sram__DOT__rd_req_valid));
        bufp->chgBit(oldp+136,(vlSelf->Core__DOT__sram__DOT__wt_req_valid));
        bufp->chgBit(oldp+137,(vlSelf->Core__DOT___xbar_io_uart_aw_valid));
        bufp->chgIData(oldp+138,(vlSelf->Core__DOT___xbar_io_uart_aw_addr),32);
        bufp->chgIData(oldp+139,(vlSelf->Core__DOT___xbar_io_uart_w_data),32);
        bufp->chgCData(oldp+140,(((IData)(vlSelf->Core__DOT__xbar__DOT___GEN_1)
                                   ? (IData)(vlSelf->Core__DOT___arbiter_io_axi_w_strb)
                                   : 0U)),4);
        bufp->chgBit(oldp+141,(((IData)(vlSelf->Core__DOT__xbar__DOT___GEN_1) 
                                & (IData)(vlSelf->Core__DOT___arbiter_io_axi_b_ready))));
        bufp->chgIData(oldp+142,(((IData)(vlSelf->Core__DOT__xbar__DOT___GEN_1)
                                   ? vlSelf->Core__DOT___arbiter_io_axi_ar_addr
                                   : 0U)),32);
        bufp->chgBit(oldp+143,(((IData)(vlSelf->Core__DOT__xbar__DOT___GEN_1) 
                                & (IData)(vlSelf->Core__DOT___arbiter_io_axi_r_ready))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+144,(vlSelf->Core__DOT__sram__DOT___sram_data_out),32);
        bufp->chgBit(oldp+145,(vlSelf->Core__DOT__sram__DOT___sram_rd_res_valid));
        bufp->chgBit(oldp+146,(vlSelf->Core__DOT__sram__DOT___sram_wt_res_valid));
    }
    bufp->chgBit(oldp+147,(vlSelf->clock));
    bufp->chgBit(oldp+148,(vlSelf->reset));
    bufp->chgIData(oldp+149,(vlSelf->io_pc_debug),32);
    bufp->chgIData(oldp+150,(vlSelf->io_inst_debug),32);
    bufp->chgCData(oldp+151,(vlSelf->io_ifu_state_debug),3);
    bufp->chgCData(oldp+152,(vlSelf->io_lsu_state_debug),3);
    bufp->chgBit(oldp+153,(vlSelf->io_lsu_is_ld_or_st_debug));
    bufp->chgIData(oldp+154,(vlSelf->io_lsu_reg_inst_debug),32);
    bufp->chgIData(oldp+155,(vlSelf->io_dmem_wdata_debug),32);
    bufp->chgIData(oldp+156,(vlSelf->io_dmem_rdata_debug),32);
    bufp->chgCData(oldp+157,(vlSelf->io_wbu_state_debug),2);
    bufp->chgIData(oldp+158,(vlSelf->io_wb_data_debug),32);
    bufp->chgBit(oldp+159,(vlSelf->io_wb_wen_debug));
    bufp->chgCData(oldp+160,(vlSelf->io_wb_sel_debug),2);
    bufp->chgIData(oldp+161,(vlSelf->io_wbu_reg_dmem_rdata_debug),32);
    bufp->chgCData(oldp+162,(vlSelf->io_Arbiter_state_debug),2);
    bufp->chgBit(oldp+163,(((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h41ece670__0) 
                            & (IData)(vlSelf->Core__DOT___xbar_io_in_ar_ready))));
    bufp->chgIData(oldp+164,(((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h41ece670__0)
                               ? vlSelf->Core__DOT___xbar_io_in_r_data
                               : 0U)),32);
    bufp->chgBit(oldp+165,(((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_hd26a19fd__0) 
                            & ((IData)(vlSelf->Core__DOT__xbar__DOT___GEN_1)
                                ? (IData)(vlSelf->Core__DOT___uart_io_axi_aw_ready)
                                : (IData)(vlSelf->Core__DOT__sram__DOT__io_axi_w_ready_0)))));
    bufp->chgBit(oldp+166,(((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_hd26a19fd__0) 
                            & ((IData)(vlSelf->Core__DOT__xbar__DOT___GEN_1)
                                ? (IData)(vlSelf->Core__DOT___uart_io_axi_w_ready)
                                : (IData)(vlSelf->Core__DOT__sram__DOT__io_axi_w_ready_0)))));
    bufp->chgIData(oldp+167,(((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_4)
                               ? 0U : vlSelf->io_dmem_wdata_debug)),32);
    bufp->chgBit(oldp+168,(((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_hd26a19fd__0) 
                            & ((IData)(vlSelf->Core__DOT__xbar__DOT___GEN_1)
                                ? (IData)(vlSelf->Core__DOT___uart_io_axi_b_valid)
                                : ((~ (IData)(vlSelf->Core__DOT__sram__DOT____VdfgTmp_h93f383d4__0)) 
                                   & ((1U == (IData)(vlSelf->Core__DOT__sram__DOT__state)) 
                                      & (IData)(vlSelf->Core__DOT__sram__DOT___sram_wt_res_valid)))))));
    bufp->chgBit(oldp+169,(((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_hd26a19fd__0) 
                            & (IData)(vlSelf->Core__DOT___xbar_io_in_ar_ready))));
    bufp->chgBit(oldp+170,(((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_hd26a19fd__0) 
                            & (IData)(vlSelf->Core__DOT___xbar_io_in_r_valid))));
    bufp->chgBit(oldp+171,(((IData)(vlSelf->Core__DOT__xbar__DOT___GEN_1)
                             ? (IData)(vlSelf->Core__DOT___uart_io_axi_aw_ready)
                             : (IData)(vlSelf->Core__DOT__sram__DOT__io_axi_w_ready_0))));
    bufp->chgBit(oldp+172,(((IData)(vlSelf->Core__DOT__xbar__DOT___GEN_1)
                             ? (IData)(vlSelf->Core__DOT___uart_io_axi_w_ready)
                             : (IData)(vlSelf->Core__DOT__sram__DOT__io_axi_w_ready_0))));
    bufp->chgBit(oldp+173,(((IData)(vlSelf->Core__DOT__xbar__DOT___GEN_1)
                             ? (IData)(vlSelf->Core__DOT___uart_io_axi_b_valid)
                             : ((~ (IData)(vlSelf->Core__DOT__sram__DOT____VdfgTmp_h93f383d4__0)) 
                                & ((1U == (IData)(vlSelf->Core__DOT__sram__DOT__state)) 
                                   & (IData)(vlSelf->Core__DOT__sram__DOT___sram_wt_res_valid))))));
    bufp->chgBit(oldp+174,(vlSelf->Core__DOT___xbar_io_in_ar_ready));
    __Vtemp_5[0U] = (((- (IData)((1U & (vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
                                        >> 7U)))) << 8U) 
                     | (0xffU & vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data));
    __Vtemp_5[1U] = (((- (IData)((1U & (vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
                                        >> 0xfU)))) 
                      << 0x10U) | (0xffffU & vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data));
    __Vtemp_5[2U] = (IData)((QData)((IData)(vlSelf->Core__DOT___arbiter_io_lsu_r_data)));
    __Vtemp_5[3U] = (IData)(((QData)((IData)(vlSelf->Core__DOT___arbiter_io_lsu_r_data)) 
                             >> 0x20U));
    __Vtemp_5[4U] = (0xffU & vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data);
    __Vtemp_5[5U] = (0xffffU & vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data);
    __Vtemp_5[6U] = 0U;
    __Vtemp_5[7U] = 0U;
    bufp->chgIData(oldp+175,((((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U)))
                                ? 0U : (__Vtemp_5[(
                                                   ((IData)(0x1fU) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U))) 
                                                   >> 5U)] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U))))) 
                              | (__Vtemp_5[(7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U) 
                                                  >> 5U))] 
                                 >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U))))),32);
    bufp->chgBit(oldp+176,(vlSelf->Core__DOT__sram__DOT__io_axi_w_ready_0));
    bufp->chgBit(oldp+177,(((~ (IData)(vlSelf->Core__DOT__sram__DOT____VdfgTmp_h93f383d4__0)) 
                            & ((1U == (IData)(vlSelf->Core__DOT__sram__DOT__state)) 
                               & (IData)(vlSelf->Core__DOT__sram__DOT___sram_wt_res_valid)))));
    bufp->chgBit(oldp+178,(((~ (IData)(vlSelf->Core__DOT__sram__DOT___GEN_2)) 
                            & (IData)(vlSelf->Core__DOT__sram__DOT____VdfgTmp_hb61e3587__0))));
    bufp->chgIData(oldp+179,(((1U & ((~ (IData)(vlSelf->Core__DOT__sram__DOT____VdfgTmp_hb61e3587__0)) 
                                     | (IData)(vlSelf->Core__DOT__sram__DOT___GEN_2)))
                               ? 0U : vlSelf->Core__DOT__sram__DOT___sram_data_out)),32);
    bufp->chgBit(oldp+180,(vlSelf->Core__DOT___uart_io_axi_aw_ready));
    bufp->chgBit(oldp+181,(((IData)(vlSelf->Core__DOT__xbar__DOT___GEN_1) 
                            & (IData)(vlSelf->Core__DOT___arbiter_io_axi_ar_valid))));
    bufp->chgCData(oldp+182,(vlSelf->Core__DOT__uart__DOT__uartRaw__DOT__next_state),2);
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
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
}
