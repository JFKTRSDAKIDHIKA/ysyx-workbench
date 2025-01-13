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
    if (VL_UNLIKELY((0x100073U == vlSelf->imem_rdata))) {
        VL_WRITEF("EBREAK: Simulation exiting...\n");
        Vysyx_24120009_core___024unit____Vdpiimwrap_simulation_exit_TOP____024unit();
    }
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
        vlSelf->ysyx_24120009_core__DOT__rdata1 = 0U;
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1U] = 0U;
    } else {
        vlSelf->ysyx_24120009_core__DOT__rdata1 = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
            [(0x1fU & (vlSelf->imem_rdata >> 0xfU))];
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1U] 
            = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
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
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0U] 
        = ((0U == (0x1fU & (vlSelf->imem_rdata >> 0x14U)))
            ? 0U : vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
           [(0x1fU & (vlSelf->imem_rdata >> 0x14U))]);
    vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
        = ((0x1fc00U & (vlSelf->imem_rdata << 0xaU)) 
           | ((0x380U & (vlSelf->imem_rdata >> 5U)) 
              | (vlSelf->imem_rdata >> 0x19U)));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->ysyx_24120009_core__DOT__rdata1 
           + vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext);
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                       == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
        = vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                              >> 7U)) == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 7U)) == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 7U)) == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 7U)) == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 7U)) == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next 
        = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                              >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__Op1 = vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                              >> 0xaU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 0xaU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 0xaU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 0xaU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__Op2 = vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out;
    vlSelf->Op1_debug = vlSelf->ysyx_24120009_core__DOT__Op1;
    vlSelf->Op2_debug = vlSelf->ysyx_24120009_core__DOT__Op2;
    if ((0x1fU >= vlSelf->ysyx_24120009_core__DOT__Op2)) {
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0U] 
            = VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24120009_core__DOT__Op1, vlSelf->ysyx_24120009_core__DOT__Op2);
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[1U] 
            = (vlSelf->ysyx_24120009_core__DOT__Op1 
               >> vlSelf->ysyx_24120009_core__DOT__Op2);
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[2U] 
            = (vlSelf->ysyx_24120009_core__DOT__Op1 
               << vlSelf->ysyx_24120009_core__DOT__Op2);
    } else {
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0U] 
            = (- (vlSelf->ysyx_24120009_core__DOT__Op1 
                  >> 0x1fU));
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[1U] = 0U;
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[2U] = 0U;
    }
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->ysyx_24120009_core__DOT__Op1 & vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[4U] 
        = (vlSelf->ysyx_24120009_core__DOT__Op1 | vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[5U] 
        = (vlSelf->ysyx_24120009_core__DOT__Op1 ^ vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[8U] 
        = (vlSelf->ysyx_24120009_core__DOT__Op1 - vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[9U] 
        = (vlSelf->ysyx_24120009_core__DOT__Op1 + vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->__VdfgTmp_h9d12977d__0 = VL_LTS_III(32, vlSelf->ysyx_24120009_core__DOT__Op1, vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->__VdfgTmp_h9d0653ad__0 = (vlSelf->ysyx_24120009_core__DOT__Op1 
                                      < vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[7U] 
        = vlSelf->__VdfgTmp_h9d12977d__0;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[6U] 
        = vlSelf->__VdfgTmp_h9d0653ad__0;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 0xeU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xeU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xeU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xeU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xeU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xeU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xeU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xeU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xeU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xeU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__result 
        = vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list[1U] 
        = vlSelf->ysyx_24120009_core__DOT__exu__DOT__result;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                              >> 2U)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                  >> 2U)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 2U)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                     >> 2U)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 2U)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                     >> 2U)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 2U)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                     >> 2U)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
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
