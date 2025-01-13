// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120009_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24120009_core__Syms.h"
#include "Vysyx_24120009_core___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120009_core___024root___dump_triggers__ico(Vysyx_24120009_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24120009_core___024root___eval_triggers__ico(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24120009_core___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vysyx_24120009_core___024unit____Vdpiimwrap_simulation_exit_TOP____024unit();

VL_INLINE_OPT void Vysyx_24120009_core___024root___ico_sequent__TOP__0(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->ysyx_24120009_core__DOT__pc + ((
                                                   (- (IData)(
                                                              (vlSelf->imem_rdata 
                                                               >> 0x1fU))) 
                                                   << 0x15U) 
                                                  | ((0x100000U 
                                                      & (vlSelf->imem_rdata 
                                                         >> 0xbU)) 
                                                     | ((0xff000U 
                                                         & vlSelf->imem_rdata) 
                                                        | ((0x800U 
                                                            & (vlSelf->imem_rdata 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlSelf->imem_rdata 
                                                                 >> 0x14U)))))));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->ysyx_24120009_core__DOT__pc + ((
                                                   (- (IData)(
                                                              (vlSelf->imem_rdata 
                                                               >> 0x1fU))) 
                                                   << 0xdU) 
                                                  | ((0x1000U 
                                                      & (vlSelf->imem_rdata 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (vlSelf->imem_rdata 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->imem_rdata 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelf->imem_rdata 
                                                                 >> 7U)))))));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext 
        = (((- (IData)((vlSelf->imem_rdata >> 0x1fU))) 
            << 0xcU) | (vlSelf->imem_rdata >> 0x14U));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[0U] 
        = (0xfffff000U & vlSelf->imem_rdata);
    if ((0U == (0x1fU & (vlSelf->imem_rdata >> 0xfU)))) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1U] = 0U;
        vlSelf->ysyx_24120009_core__DOT__rdata1 = 0U;
    } else {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1U] 
            = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
            [(0x1fU & (vlSelf->imem_rdata >> 0xfU))];
        vlSelf->ysyx_24120009_core__DOT__rdata1 = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
            [(0x1fU & (vlSelf->imem_rdata >> 0xfU))];
    }
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->imem_rdata >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->imem_rdata 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->imem_rdata 
                                                    >> 7U))));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->imem_rdata >> 0x1fU))) 
            << 0xcU) | (vlSelf->imem_rdata >> 0x14U));
    if ((0U == (0x1fU & (vlSelf->imem_rdata >> 0x14U)))) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->ysyx_24120009_core__DOT__rdata2 = 0U;
    } else {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0U] 
            = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
            [(0x1fU & (vlSelf->imem_rdata >> 0x14U))];
        vlSelf->ysyx_24120009_core__DOT__rdata2 = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
            [(0x1fU & (vlSelf->imem_rdata >> 0x14U))];
    }
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->ysyx_24120009_core__DOT__rdata1 
           + vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext);
    vlSelf->ysyx_24120009_core__DOT__br_eq = (vlSelf->ysyx_24120009_core__DOT__rdata1 
                                              == vlSelf->ysyx_24120009_core__DOT__rdata2);
    vlSelf->ysyx_24120009_core__DOT__br_lt = VL_LTS_III(32, vlSelf->ysyx_24120009_core__DOT__rdata1, vlSelf->ysyx_24120009_core__DOT__rdata2);
    vlSelf->ysyx_24120009_core__DOT__br_ltu = (vlSelf->ysyx_24120009_core__DOT__rdata1 
                                               < vlSelf->ysyx_24120009_core__DOT__rdata2);
    if ((0x40U & vlSelf->imem_rdata)) {
        if ((0x20U & vlSelf->imem_rdata)) {
            if ((0x10U & vlSelf->imem_rdata)) {
                if ((8U & vlSelf->imem_rdata)) {
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                } else if ((4U & vlSelf->imem_rdata)) {
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                } else if ((2U & vlSelf->imem_rdata)) {
                    if ((1U & vlSelf->imem_rdata)) {
                        if (VL_UNLIKELY((0U == (7U 
                                                & (vlSelf->imem_rdata 
                                                   >> 0xcU))))) {
                            VL_WRITEF("EBREAK: Simulation exiting...\n");
                            Vysyx_24120009_core___024unit____Vdpiimwrap_simulation_exit_TOP____024unit();
                        } else {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                        }
                    } else {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                    }
                } else {
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                }
            } else if ((8U & vlSelf->imem_rdata)) {
                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
            } else if ((4U & vlSelf->imem_rdata)) {
                if ((2U & vlSelf->imem_rdata)) {
                    if ((1U & vlSelf->imem_rdata)) {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 1U;
                    } else {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                    }
                } else {
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                }
            } else if ((2U & vlSelf->imem_rdata)) {
                if ((1U & vlSelf->imem_rdata)) {
                    if ((0U == (7U & (vlSelf->imem_rdata 
                                      >> 0xcU)))) {
                        if (vlSelf->ysyx_24120009_core__DOT__br_eq) {
                            if (vlSelf->ysyx_24120009_core__DOT__br_eq) {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 9U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 2U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                            } else {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                            }
                        } else {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 8U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        }
                    } else if ((4U == (7U & (vlSelf->imem_rdata 
                                             >> 0xcU)))) {
                        if (vlSelf->ysyx_24120009_core__DOT__br_lt) {
                            if (vlSelf->ysyx_24120009_core__DOT__br_lt) {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 9U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 2U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                            } else {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                            }
                        } else {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 8U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        }
                    } else if ((6U == (7U & (vlSelf->imem_rdata 
                                             >> 0xcU)))) {
                        if (vlSelf->ysyx_24120009_core__DOT__br_ltu) {
                            if (vlSelf->ysyx_24120009_core__DOT__br_ltu) {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 9U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 2U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                            } else {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                            }
                        } else {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 8U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        }
                    } else {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                    }
                } else {
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                }
            } else {
                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
            }
        } else {
            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
        }
    } else if ((0x20U & vlSelf->imem_rdata)) {
        if ((0x10U & vlSelf->imem_rdata)) {
            if ((8U & vlSelf->imem_rdata)) {
                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
            } else if ((4U & vlSelf->imem_rdata)) {
                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
            } else if ((2U & vlSelf->imem_rdata)) {
                if ((1U & vlSelf->imem_rdata)) {
                    if ((0x4000U & vlSelf->imem_rdata)) {
                        if ((0x2000U & vlSelf->imem_rdata)) {
                            if ((0x1000U & vlSelf->imem_rdata)) {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 6U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                            } else {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 5U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                            }
                        } else if ((0x1000U & vlSelf->imem_rdata)) {
                            if ((0U == (vlSelf->imem_rdata 
                                        >> 0x19U))) {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 8U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                            } else if ((0x20U == (vlSelf->imem_rdata 
                                                  >> 0x19U))) {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 9U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                            } else {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                            }
                        } else {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 4U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        }
                    } else if ((0x2000U & vlSelf->imem_rdata)) {
                        if ((0x1000U & vlSelf->imem_rdata)) {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 3U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        } else {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 2U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        }
                    } else if ((0x1000U & vlSelf->imem_rdata)) {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 7U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                    } else if ((0U == (vlSelf->imem_rdata 
                                       >> 0x19U))) {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                    } else if ((0x20U == (vlSelf->imem_rdata 
                                          >> 0x19U))) {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                    } else {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                    }
                } else {
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                }
            } else {
                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
            }
        } else {
            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
        }
    } else if ((0x10U & vlSelf->imem_rdata)) {
        if ((8U & vlSelf->imem_rdata)) {
            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
        } else if ((4U & vlSelf->imem_rdata)) {
            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
        } else if ((2U & vlSelf->imem_rdata)) {
            if ((1U & vlSelf->imem_rdata)) {
                if ((0x4000U & vlSelf->imem_rdata)) {
                    if ((0x2000U & vlSelf->imem_rdata)) {
                        if ((0x1000U & vlSelf->imem_rdata)) {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 6U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        } else {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 5U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        }
                    } else if ((0x1000U & vlSelf->imem_rdata)) {
                        if ((0U == (vlSelf->imem_rdata 
                                    >> 0x19U))) {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 8U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        } else if ((0x20U == (vlSelf->imem_rdata 
                                              >> 0x19U))) {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 9U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        } else {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                        }
                    } else {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 4U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                    }
                } else if ((0x2000U & vlSelf->imem_rdata)) {
                    if ((0x1000U & vlSelf->imem_rdata)) {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 3U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                    } else {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 2U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                    }
                } else if ((0x1000U & vlSelf->imem_rdata)) {
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 7U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                } else {
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                }
            } else {
                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
            }
        } else {
            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
        }
    } else {
        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
    }
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg) 
                       == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg) 
                          == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg) 
                          == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg) 
                          == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg) 
                          == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next 
        = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg) 
                       == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg) 
                          == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__Op1 = vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg) 
                       == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg) 
                          == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg) 
                          == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg) 
                          == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__Op2 = vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out;
    vlSelf->Op1_debug = vlSelf->ysyx_24120009_core__DOT__Op1;
    vlSelf->Op2_debug = vlSelf->ysyx_24120009_core__DOT__Op2;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__result 
        = ((0x10U & (IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg))
            ? 0U : ((8U & (IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg))
                     ? ((4U & (IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg))
                         ? 0U : ((2U & (IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg))
                                  ? 0U : ((1U & (IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg))
                                           ? ((0x1fU 
                                               >= vlSelf->ysyx_24120009_core__DOT__Op2)
                                               ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24120009_core__DOT__Op1, vlSelf->ysyx_24120009_core__DOT__Op2)
                                               : (- 
                                                  (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                   >> 0x1fU)))
                                           : ((0x1fU 
                                               >= vlSelf->ysyx_24120009_core__DOT__Op2)
                                               ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                  >> vlSelf->ysyx_24120009_core__DOT__Op2)
                                               : 0U))))
                     : ((4U & (IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg))
                         ? ((2U & (IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg))
                             ? ((1U & (IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg))
                                 ? ((0x1fU >= vlSelf->ysyx_24120009_core__DOT__Op2)
                                     ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                        << vlSelf->ysyx_24120009_core__DOT__Op2)
                                     : 0U) : (vlSelf->ysyx_24120009_core__DOT__Op1 
                                              & vlSelf->ysyx_24120009_core__DOT__Op2))
                             : ((1U & (IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg))
                                 ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                    | vlSelf->ysyx_24120009_core__DOT__Op2)
                                 : (vlSelf->ysyx_24120009_core__DOT__Op1 
                                    ^ vlSelf->ysyx_24120009_core__DOT__Op2)))
                         : ((2U & (IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg))
                             ? ((1U & (IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg))
                                 ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                    < vlSelf->ysyx_24120009_core__DOT__Op2)
                                 : VL_LTS_III(32, vlSelf->ysyx_24120009_core__DOT__Op1, vlSelf->ysyx_24120009_core__DOT__Op2))
                             : ((1U & (IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg))
                                 ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                    - vlSelf->ysyx_24120009_core__DOT__Op2)
                                 : (vlSelf->ysyx_24120009_core__DOT__Op1 
                                    + vlSelf->ysyx_24120009_core__DOT__Op2))))));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list[1U] 
        = vlSelf->ysyx_24120009_core__DOT__exu__DOT__result;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg) 
                       == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg) 
           == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__reg_write_data 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit)
            ? vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out
            : 0U);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120009_core___024root___dump_triggers__act(Vysyx_24120009_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24120009_core___024root___eval_triggers__act(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24120009_core___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vysyx_24120009_core___024root___nba_sequent__TOP__0(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvdim0__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvval__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvset__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0 = 0U;
    if (((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg) 
         & (0U != (0x1fU & (vlSelf->imem_rdata >> 7U))))) {
        __Vdlyvval__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0 
            = vlSelf->ysyx_24120009_core__DOT__reg_write_data;
        __Vdlyvset__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0 
            = (0x1fU & (vlSelf->imem_rdata >> 7U));
    }
    vlSelf->ysyx_24120009_core__DOT__pc = ((IData)(vlSelf->rst)
                                            ? 0x80000000U
                                            : vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next);
    if (__Vdlyvset__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0) {
        vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[__Vdlyvdim0__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0] 
            = __Vdlyvval__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0;
    }
    vlSelf->x1 = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [1U];
    vlSelf->x2 = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [2U];
    vlSelf->x3 = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [3U];
    if ((0U == (0x1fU & (vlSelf->imem_rdata >> 0xfU)))) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1U] = 0U;
        vlSelf->ysyx_24120009_core__DOT__rdata1 = 0U;
    } else {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1U] 
            = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
            [(0x1fU & (vlSelf->imem_rdata >> 0xfU))];
        vlSelf->ysyx_24120009_core__DOT__rdata1 = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
            [(0x1fU & (vlSelf->imem_rdata >> 0xfU))];
    }
    if ((0U == (0x1fU & (vlSelf->imem_rdata >> 0x14U)))) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->ysyx_24120009_core__DOT__rdata2 = 0U;
    } else {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0U] 
            = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
            [(0x1fU & (vlSelf->imem_rdata >> 0x14U))];
        vlSelf->ysyx_24120009_core__DOT__rdata2 = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
            [(0x1fU & (vlSelf->imem_rdata >> 0x14U))];
    }
    vlSelf->imem_addr = vlSelf->ysyx_24120009_core__DOT__pc;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[4U] 
        = ((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__pc);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->ysyx_24120009_core__DOT__pc + ((
                                                   (- (IData)(
                                                              (vlSelf->imem_rdata 
                                                               >> 0x1fU))) 
                                                   << 0x15U) 
                                                  | ((0x100000U 
                                                      & (vlSelf->imem_rdata 
                                                         >> 0xbU)) 
                                                     | ((0xff000U 
                                                         & vlSelf->imem_rdata) 
                                                        | ((0x800U 
                                                            & (vlSelf->imem_rdata 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlSelf->imem_rdata 
                                                                 >> 0x14U)))))));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->ysyx_24120009_core__DOT__pc + ((
                                                   (- (IData)(
                                                              (vlSelf->imem_rdata 
                                                               >> 0x1fU))) 
                                                   << 0xdU) 
                                                  | ((0x1000U 
                                                      & (vlSelf->imem_rdata 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (vlSelf->imem_rdata 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->imem_rdata 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelf->imem_rdata 
                                                                 >> 7U)))))));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[3U] 
        = vlSelf->ysyx_24120009_core__DOT__pc;
    vlSelf->ysyx_24120009_core__DOT__br_eq = (vlSelf->ysyx_24120009_core__DOT__rdata1 
                                              == vlSelf->ysyx_24120009_core__DOT__rdata2);
    vlSelf->ysyx_24120009_core__DOT__br_lt = VL_LTS_III(32, vlSelf->ysyx_24120009_core__DOT__rdata1, vlSelf->ysyx_24120009_core__DOT__rdata2);
    vlSelf->ysyx_24120009_core__DOT__br_ltu = (vlSelf->ysyx_24120009_core__DOT__rdata1 
                                               < vlSelf->ysyx_24120009_core__DOT__rdata2);
    vlSelf->pc_debug = vlSelf->imem_addr;
    if ((0x40U & vlSelf->imem_rdata)) {
        if ((0x20U & vlSelf->imem_rdata)) {
            if ((0x10U & vlSelf->imem_rdata)) {
                if ((8U & vlSelf->imem_rdata)) {
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                } else if ((4U & vlSelf->imem_rdata)) {
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                } else if ((2U & vlSelf->imem_rdata)) {
                    if ((1U & vlSelf->imem_rdata)) {
                        if (VL_UNLIKELY((0U == (7U 
                                                & (vlSelf->imem_rdata 
                                                   >> 0xcU))))) {
                            VL_WRITEF("EBREAK: Simulation exiting...\n");
                            Vysyx_24120009_core___024unit____Vdpiimwrap_simulation_exit_TOP____024unit();
                        } else {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                        }
                    } else {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                    }
                } else {
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                }
            } else if ((8U & vlSelf->imem_rdata)) {
                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
            } else if ((4U & vlSelf->imem_rdata)) {
                if ((2U & vlSelf->imem_rdata)) {
                    if ((1U & vlSelf->imem_rdata)) {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 1U;
                    } else {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                    }
                } else {
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                }
            } else if ((2U & vlSelf->imem_rdata)) {
                if ((1U & vlSelf->imem_rdata)) {
                    if ((0U == (7U & (vlSelf->imem_rdata 
                                      >> 0xcU)))) {
                        if (vlSelf->ysyx_24120009_core__DOT__br_eq) {
                            if (vlSelf->ysyx_24120009_core__DOT__br_eq) {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 9U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 2U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                            } else {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                            }
                        } else {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 8U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        }
                    } else if ((4U == (7U & (vlSelf->imem_rdata 
                                             >> 0xcU)))) {
                        if (vlSelf->ysyx_24120009_core__DOT__br_lt) {
                            if (vlSelf->ysyx_24120009_core__DOT__br_lt) {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 9U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 2U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                            } else {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                            }
                        } else {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 8U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        }
                    } else if ((6U == (7U & (vlSelf->imem_rdata 
                                             >> 0xcU)))) {
                        if (vlSelf->ysyx_24120009_core__DOT__br_ltu) {
                            if (vlSelf->ysyx_24120009_core__DOT__br_ltu) {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 9U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 2U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                            } else {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                            }
                        } else {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 8U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        }
                    } else {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                    }
                } else {
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                }
            } else {
                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
            }
        } else {
            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
        }
    } else if ((0x20U & vlSelf->imem_rdata)) {
        if ((0x10U & vlSelf->imem_rdata)) {
            if ((8U & vlSelf->imem_rdata)) {
                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
            } else if ((4U & vlSelf->imem_rdata)) {
                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
            } else if ((2U & vlSelf->imem_rdata)) {
                if ((1U & vlSelf->imem_rdata)) {
                    if ((0x4000U & vlSelf->imem_rdata)) {
                        if ((0x2000U & vlSelf->imem_rdata)) {
                            if ((0x1000U & vlSelf->imem_rdata)) {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 6U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                            } else {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 5U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                            }
                        } else if ((0x1000U & vlSelf->imem_rdata)) {
                            if ((0U == (vlSelf->imem_rdata 
                                        >> 0x19U))) {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 8U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                            } else if ((0x20U == (vlSelf->imem_rdata 
                                                  >> 0x19U))) {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 9U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                            } else {
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                            }
                        } else {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 4U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        }
                    } else if ((0x2000U & vlSelf->imem_rdata)) {
                        if ((0x1000U & vlSelf->imem_rdata)) {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 3U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        } else {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 2U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        }
                    } else if ((0x1000U & vlSelf->imem_rdata)) {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 7U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                    } else if ((0U == (vlSelf->imem_rdata 
                                       >> 0x19U))) {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                    } else if ((0x20U == (vlSelf->imem_rdata 
                                          >> 0x19U))) {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 3U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                    } else {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                    }
                } else {
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                }
            } else {
                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
            }
        } else {
            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
        }
    } else if ((0x10U & vlSelf->imem_rdata)) {
        if ((8U & vlSelf->imem_rdata)) {
            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
        } else if ((4U & vlSelf->imem_rdata)) {
            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
        } else if ((2U & vlSelf->imem_rdata)) {
            if ((1U & vlSelf->imem_rdata)) {
                if ((0x4000U & vlSelf->imem_rdata)) {
                    if ((0x2000U & vlSelf->imem_rdata)) {
                        if ((0x1000U & vlSelf->imem_rdata)) {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 6U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        } else {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 5U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        }
                    } else if ((0x1000U & vlSelf->imem_rdata)) {
                        if ((0U == (vlSelf->imem_rdata 
                                    >> 0x19U))) {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 8U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        } else if ((0x20U == (vlSelf->imem_rdata 
                                              >> 0x19U))) {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 9U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                        } else {
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
                        }
                    } else {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 4U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                    }
                } else if ((0x2000U & vlSelf->imem_rdata)) {
                    if ((0x1000U & vlSelf->imem_rdata)) {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 3U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                    } else {
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 2U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                    }
                } else if ((0x1000U & vlSelf->imem_rdata)) {
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 7U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                } else {
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 1U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 1U;
                    vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 2U;
                }
            } else {
                vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
                vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
            }
        } else {
            vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
        }
    } else {
        vlSelf->ysyx_24120009_core__DOT__control__DOT__alu_op_reg = 0U;
        vlSelf->ysyx_24120009_core__DOT__control__DOT__op1_sel_reg = 0U;
        vlSelf->ysyx_24120009_core__DOT__control__DOT__op2_sel_reg = 0U;
        vlSelf->ysyx_24120009_core__DOT__control__DOT__pc_sel_reg = 0U;
        vlSelf->ysyx_24120009_core__DOT__control__DOT__rf_we_reg = 0U;
        vlSelf->ysyx_24120009_core__DOT__control__DOT__wb_sel_reg = 0U;
    }
}
