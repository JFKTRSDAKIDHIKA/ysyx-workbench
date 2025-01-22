// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120009_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24120009_core___024root.h"

void Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__simulation_exit_TOP();

VL_INLINE_OPT void Vysyx_24120009_core___024root___ico_sequent__TOP__0(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->inst_debug = vlSelf->imem_rdata;
    vlSelf->is_ebreak_debug = (0x100073U == vlSelf->imem_rdata);
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
    vlSelf->ysyx_24120009_core__DOT__rdata1 = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->imem_rdata >> 0xfU))];
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[0U] 
        = (0xfffff000U & vlSelf->imem_rdata);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->imem_rdata >> 0xfU))];
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->imem_rdata >> 0x1fU))) 
            << 0xcU) | (vlSelf->imem_rdata >> 0x14U));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->imem_rdata >> 0x14U))];
    vlSelf->waddr_debug = (0x1fU & (vlSelf->imem_rdata 
                                    >> 7U));
    vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_ha098e26d__0 
        = ((0x1fc00U & (vlSelf->imem_rdata << 0xaU)) 
           | (0x380U & (vlSelf->imem_rdata >> 5U)));
    vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0 
        = ((0x1fc00U & (vlSelf->imem_rdata << 0xaU)) 
           | ((0x380U & (vlSelf->imem_rdata >> 5U)) 
              | (vlSelf->imem_rdata >> 0x19U)));
    if (VL_UNLIKELY(vlSelf->is_ebreak_debug)) {
        VL_WRITEF("EBREAK: Simulation exiting...\n");
        Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__simulation_exit_TOP();
    }
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->ysyx_24120009_core__DOT__rdata1 
           + vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->imem_rdata >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->imem_rdata 
                                   >> 0x14U)) | (IData)(vlSelf->waddr_debug)));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
        = ((0x67U == (0x7fU & vlSelf->imem_rdata)) ? 
           ((0U == (7U & (vlSelf->imem_rdata >> 0xcU)))
             ? vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_ha098e26d__0
             : (0x6fU | ((0x1fc00U & (vlSelf->imem_rdata 
                                      << 0xaU)) | (0x380U 
                                                   & (vlSelf->imem_rdata 
                                                      >> 5U)))))
            : ((0x13U == (0x7fU & vlSelf->imem_rdata))
                ? ((5U == (7U & (vlSelf->imem_rdata 
                                 >> 0xcU))) ? vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0
                    : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_ha098e26d__0)
                : ((0x17U == (0x7fU & vlSelf->imem_rdata))
                    ? (0x1fc00U & (vlSelf->imem_rdata 
                                   << 0xaU)) : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0)));
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
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
        = vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                              >> 5U)) == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 5U)) == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 5U)) == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 5U)) == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 5U)) == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next 
        = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                              >> 0xaU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 0xaU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__Op1 = vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                              >> 8U)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 8U)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 8U)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 8U)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
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
                                 >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__result 
        = vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list[1U] 
        = vlSelf->ysyx_24120009_core__DOT__exu__DOT__result;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = ((- (IData)(((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
                       == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
           == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__reg_write_data 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit)
            ? vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out
            : 0U);
    vlSelf->reg_write_data_debug = vlSelf->ysyx_24120009_core__DOT__reg_write_data;
}

void Vysyx_24120009_core___024root___eval_ico(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_24120009_core___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vysyx_24120009_core___024root___eval_act(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_act\n"); );
}

void Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__u_RegisterFile__DOT__get_register_values_TOP(VlUnpacked<IData/*31:0*/, 32> rf);

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
    if (((vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
          >> 4U) & (0U != (IData)(vlSelf->waddr_debug)))) {
        __Vdlyvval__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0 
            = vlSelf->ysyx_24120009_core__DOT__reg_write_data;
        __Vdlyvset__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0 
            = vlSelf->waddr_debug;
    }
    vlSelf->ysyx_24120009_core__DOT__pc = ((IData)(vlSelf->rst)
                                            ? 0x80000000U
                                            : vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next);
    if (__Vdlyvset__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0) {
        vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[__Vdlyvdim0__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0] 
            = __Vdlyvval__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0;
    }
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[1U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [1U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[2U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [2U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[3U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [3U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[4U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [4U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[5U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [5U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[6U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [6U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[7U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [7U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[8U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [8U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[9U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [9U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0xaU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0xaU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0xbU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0xbU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0xcU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0xcU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0xdU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0xdU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0xeU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0xeU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0xfU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0xfU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x10U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x10U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x11U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x11U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x12U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x12U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x13U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x13U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x14U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x14U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x15U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x15U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x16U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x16U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x17U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x17U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x18U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x18U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x19U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x19U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x1aU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x1aU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x1bU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x1bU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x1cU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x1cU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x1dU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x1dU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x1eU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x1eU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x1fU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x1fU];
    Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__u_RegisterFile__DOT__get_register_values_TOP(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat);
    vlSelf->x2_debug = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [2U];
    vlSelf->ysyx_24120009_core__DOT__rdata1 = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->imem_rdata >> 0xfU))];
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->imem_rdata >> 0xfU))];
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->imem_rdata >> 0x14U))];
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
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list[2U] 
        = ((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__pc);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[3U] 
        = vlSelf->ysyx_24120009_core__DOT__pc;
    vlSelf->pc_debug = vlSelf->imem_addr;
}

VL_INLINE_OPT void Vysyx_24120009_core___024root___nba_sequent__TOP__1(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->ysyx_24120009_core__DOT__rdata1 
           + vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                              >> 0xaU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 0xaU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__Op1 = vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                              >> 8U)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 8U)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 8U)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 8U)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__Op2 = vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                              >> 5U)) == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 5U)) == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 5U)) == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 5U)) == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 5U)) == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next 
        = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out;
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
                                 >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__result 
        = vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list[1U] 
        = vlSelf->ysyx_24120009_core__DOT__exu__DOT__result;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = ((- (IData)(((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
                       == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
           == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__reg_write_data 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit)
            ? vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out
            : 0U);
    vlSelf->reg_write_data_debug = vlSelf->ysyx_24120009_core__DOT__reg_write_data;
}

void Vysyx_24120009_core___024root___eval_nba(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_24120009_core___024root___nba_sequent__TOP__0(vlSelf);
        Vysyx_24120009_core___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vysyx_24120009_core___024root___eval_triggers__ico(Vysyx_24120009_core___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120009_core___024root___dump_triggers__ico(Vysyx_24120009_core___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_24120009_core___024root___eval_triggers__act(Vysyx_24120009_core___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120009_core___024root___dump_triggers__act(Vysyx_24120009_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120009_core___024root___dump_triggers__nba(Vysyx_24120009_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24120009_core___024root___eval(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_24120009_core___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24120009_core___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/cpu/ysyx_24120009_core.v", 3, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_24120009_core___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_24120009_core___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_24120009_core___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/cpu/ysyx_24120009_core.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_24120009_core___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24120009_core___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/cpu/ysyx_24120009_core.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_24120009_core___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_24120009_core___024root___eval_debug_assertions(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
