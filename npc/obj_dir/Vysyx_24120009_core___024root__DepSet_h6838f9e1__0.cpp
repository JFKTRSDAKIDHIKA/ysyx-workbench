// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120009_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24120009_core___024root.h"

VL_INLINE_OPT void Vysyx_24120009_core___024root___ico_sequent__TOP__0(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN_3 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN_2));
    vlSelf->ysyx_24120009_core__DOT__sram__DOT__io_axi_w_ready_0 
        = ((~ (IData)(vlSelf->reset)) & (0U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)));
    vlSelf->ysyx_24120009_core__DOT___sram_io_axi_r_valid 
        = ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN_3)) 
           & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT____VdfgTmp_hb61e3587__0));
    vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0) 
           & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__io_axi_w_ready_0));
    vlSelf->ysyx_24120009_core__DOT___arbiter_io_ifu_r_valid 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h4ab110e3__0) 
           & (IData)(vlSelf->ysyx_24120009_core__DOT___sram_io_axi_r_valid));
    vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_memory_w_valid_0 
        = ((~ (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready)) 
           & (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____VdfgTmp_h9bd8307f__0));
}

void Vysyx_24120009_core___024root___eval_ico(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_24120009_core___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_24120009_core___024root___eval_act(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vysyx_24120009_core___024root___nba_sequent__TOP__0(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__ysyx_24120009_core__DOT__wbu__DOT__state;
    __Vdly__ysyx_24120009_core__DOT__wbu__DOT__state = 0;
    // Body
    __Vdly__ysyx_24120009_core__DOT__wbu__DOT__state 
        = vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state;
    vlSelf->__Vdly__ysyx_24120009_core__DOT__arbiter__DOT__state 
        = vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state;
    vlSelf->__Vdly__ysyx_24120009_core__DOT__ifu__DOT__state 
        = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state;
    vlSelf->__Vdly__ysyx_24120009_core__DOT__sram__DOT__wt_req_valid 
        = vlSelf->ysyx_24120009_core__DOT__sram__DOT__wt_req_valid;
    vlSelf->__Vdly__ysyx_24120009_core__DOT__sram__DOT__rd_req_valid 
        = vlSelf->ysyx_24120009_core__DOT__sram__DOT__rd_req_valid;
    vlSelf->__Vdly__ysyx_24120009_core__DOT__ifu__DOT__pc 
        = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc;
    vlSelf->__Vdly__ysyx_24120009_core__DOT__lsu__DOT__state 
        = vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state;
    vlSelf->__Vdly__ysyx_24120009_core__DOT__sram__DOT__rd_req_valid 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN_2) 
                                                | (2U 
                                                   != (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)))
                                                ? (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__rd_req_valid)
                                                : (~ (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_rd_res_valid)))));
    if (vlSelf->reset) {
        __Vdly__ysyx_24120009_core__DOT__wbu__DOT__state = 0U;
        vlSelf->__Vdly__ysyx_24120009_core__DOT__arbiter__DOT__state = 0U;
        vlSelf->__Vdly__ysyx_24120009_core__DOT__ifu__DOT__state = 0U;
        vlSelf->__Vdly__ysyx_24120009_core__DOT__ifu__DOT__pc = 0U;
        vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state 
            = __Vdly__ysyx_24120009_core__DOT__wbu__DOT__state;
        vlSelf->__Vdly__ysyx_24120009_core__DOT__lsu__DOT__state = 0U;
    } else {
        vlSelf->ysyx_24120009_core__DOT__wbu__DOT__unnamedblk1__DOT___GEN 
            = (8U | (((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state) 
                      << 6U) | (((~ ((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)) 
                                     | (1U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)))) 
                                 & (2U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)))
                                 ? 1U : (IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state))));
        __Vdly__ysyx_24120009_core__DOT__wbu__DOT__state 
            = (3U & ((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__unnamedblk1__DOT___GEN) 
                     >> (7U & ((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state) 
                               << 1U))));
        vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__unnamedblk1__DOT__isLSUActive 
            = ((IData)(vlSelf->ysyx_24120009_core__DOT___lsu_io_memory_ar_valid) 
               | ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_memory_w_valid_0) 
                  & (~ (IData)(vlSelf->ysyx_24120009_core__DOT___ifu_io_memory_ar_valid))));
        vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_5 
            = ((IData)(vlSelf->ysyx_24120009_core__DOT___ifu_io_memory_ar_valid)
                ? 1U : ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__unnamedblk1__DOT__isLSUActive) 
                        << 1U));
        vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_6 
            = (((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                << 6U) | (((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_5) 
                           << 4U) | (((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_5) 
                                      << 2U) | ((IData)(vlSelf->ysyx_24120009_core__DOT___ifu_io_memory_ar_valid)
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__unnamedblk1__DOT__isLSUActive)
                                                  ? 2U
                                                  : (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state))))));
        vlSelf->__Vdly__ysyx_24120009_core__DOT__arbiter__DOT__state 
            = (3U & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_6) 
                     >> (7U & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                               << 1U))));
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__unnamedblk1__DOT___GEN_4 
            = (((((3U == (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state)) 
                  & (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__io_in_ready_0))
                  ? 0U : (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state)) 
                << 6U) | ((((IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_ifu_r_valid)
                             ? 3U : (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state)) 
                           << 4U) | (((((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h4ab110e3__0) 
                                        & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__io_axi_w_ready_0))
                                        ? 2U : (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state)) 
                                      << 2U) | ((2U 
                                                 == (IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state))
                                                 ? 1U
                                                 : (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state)))));
        vlSelf->__Vdly__ysyx_24120009_core__DOT__ifu__DOT__state 
            = (3U & ((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__unnamedblk1__DOT___GEN_4) 
                     >> (7U & ((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state) 
                               << 1U))));
        if ((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state))) {
            vlSelf->__Vdly__ysyx_24120009_core__DOT__ifu__DOT__pc 
                = ((4U == (IData)(vlSelf->ysyx_24120009_core__DOT___idu_io_pc_sel))
                    ? 0U : ((3U == (IData)(vlSelf->ysyx_24120009_core__DOT___idu_io_pc_sel))
                             ? (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_pc 
                                + (((- (IData)((vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst) 
                                                 | ((0x800U 
                                                     & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                          >> 0x14U))))))
                             : ((2U == (IData)(vlSelf->ysyx_24120009_core__DOT___idu_io_pc_sel))
                                 ? (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_pc 
                                    + (((- (IData)(
                                                   (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                 >> 7U))))))
                                 : ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT___idu_io_pc_sel))
                                     ? (0xfffffffeU 
                                        & (vlSelf->ysyx_24120009_core__DOT___regfile_rs1_data 
                                           + (((- (IData)(
                                                          (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                 >> 0x14U))))
                                     : ((IData)(4U) 
                                        + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc)))));
        }
        vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state 
            = __Vdly__ysyx_24120009_core__DOT__wbu__DOT__state;
        if (vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN) {
            if (vlSelf->ysyx_24120009_core__DOT___exu_io_out_valid) {
                vlSelf->__Vdly__ysyx_24120009_core__DOT__lsu__DOT__state = 1U;
            }
        } else if (((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_0) 
                    & ((3U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst))
                        ? ((IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready) 
                           & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0) 
                              & (IData)(vlSelf->ysyx_24120009_core__DOT___sram_io_axi_r_valid)))
                        : (((0x23U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst)) 
                            & (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready)) 
                           & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0) 
                              & ((~ ((IData)(vlSelf->reset) 
                                     | (0U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)))) 
                                 & ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)) 
                                    & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_wt_res_valid)))))))) {
            vlSelf->__Vdly__ysyx_24120009_core__DOT__lsu__DOT__state = 2U;
        }
    }
    if (((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_in_ready_0) 
         & (IData)(vlSelf->ysyx_24120009_core__DOT___exu_io_out_valid))) {
        vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst 
            = vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst;
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__state = 0U;
    } else if (vlSelf->ysyx_24120009_core__DOT__idu__DOT___GEN) {
        if (vlSelf->ysyx_24120009_core__DOT___ifu_io_out_valid) {
            vlSelf->ysyx_24120009_core__DOT__idu__DOT__state = 1U;
        }
    } else if (vlSelf->ysyx_24120009_core__DOT__idu__DOT___GEN_0) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__state = 2U;
    } else if (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT___GEN_1) 
                & (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__io_in_ready_0))) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__state = 0U;
    }
    vlSelf->ysyx_24120009_core__DOT__idu__DOT___GEN 
        = (0U == (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__state));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT___GEN_0 
        = (1U == (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__state));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT___GEN_1 
        = (2U == (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__state));
    if (vlSelf->reset) {
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__state = 0U;
    } else if (vlSelf->ysyx_24120009_core__DOT__exu__DOT___GEN) {
        if (vlSelf->ysyx_24120009_core__DOT___idu_io_out_valid) {
            vlSelf->ysyx_24120009_core__DOT__exu__DOT__state = 1U;
        }
    } else if (vlSelf->ysyx_24120009_core__DOT__exu__DOT___GEN_0) {
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__state = 2U;
    } else if (((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT___GEN_1) 
                & (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_in_ready_0))) {
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__state = 0U;
    }
    vlSelf->ysyx_24120009_core__DOT__exu__DOT___GEN 
        = (0U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__state));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT___GEN_0 
        = (1U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__state));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT___GEN_1 
        = (2U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__state));
    vlSelf->ysyx_24120009_core__DOT__lsu__DOT___mem_access_control_T 
        = ((0x3f8U & (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst 
                      << 3U)) | (7U & (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst 
                                       >> 0xcU)));
    if (((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__io_in_ready_0) 
         & (IData)(vlSelf->ysyx_24120009_core__DOT___idu_io_out_valid))) {
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst 
            = vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst;
    }
    if (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__io_in_ready_0) 
         & (IData)(vlSelf->ysyx_24120009_core__DOT___ifu_io_out_valid))) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_pc 
            = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc;
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
            = ((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT___GEN_3)
                ? vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer
                : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT___GEN_2) 
                         | (~ ((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state)) 
                               & (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_ifu_r_valid))))))) {
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer 
            = (((1U != (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)) 
                | (0U == (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)))
                ? 0U : ((1U & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT____VdfgTmp_hb61e3587__0)) 
                               | (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN_3)))
                         ? 0U : vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_data_out));
    }
    vlSelf->ysyx_24120009_core__DOT___regfile_rs1_data 
        = vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf
        [(0x1fU & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                   >> 0xfU))];
}

VL_INLINE_OPT void Vysyx_24120009_core___024root___nba_sequent__TOP__1(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wt_req_valid_delayed 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__wt_req_valid));
    vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__rd_req_valid_delayed 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__rd_req_valid));
    if (vlSelf->reset) {
        vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wmask_delayed = 0U;
        vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wdata_delayed = 0U;
        vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__waddr_delayed = 0U;
        vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__addr_delayed = 0U;
    } else {
        vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wmask_delayed 
            = vlSelf->ysyx_24120009_core__DOT__sram__DOT__wstrb_reg;
        vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wdata_delayed 
            = vlSelf->ysyx_24120009_core__DOT__sram__DOT__wdata_reg;
        vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__waddr_delayed 
            = vlSelf->ysyx_24120009_core__DOT__sram__DOT__addr_reg;
        vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__addr_delayed 
            = vlSelf->ysyx_24120009_core__DOT__sram__DOT__addr_reg;
    }
}

VL_INLINE_OPT void Vysyx_24120009_core___024root___nba_sequent__TOP__2(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ ysyx_24120009_core__DOT__sram__DOT__unnamedblk1__DOT___GEN_4;
    ysyx_24120009_core__DOT__sram__DOT__unnamedblk1__DOT___GEN_4 = 0;
    VlWide<4>/*127:0*/ __Vtemp_h5d0c4d3a__0;
    VlWide<4>/*127:0*/ __Vtemp_h1a6a2b0f__0;
    // Body
    vlSelf->ysyx_24120009_core__DOT__sram__DOT__rd_req_valid 
        = vlSelf->__Vdly__ysyx_24120009_core__DOT__sram__DOT__rd_req_valid;
    ysyx_24120009_core__DOT__sram__DOT__unnamedblk1__DOT___GEN_4 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0) 
           & (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_memory_w_valid_0));
    if (vlSelf->reset) {
        vlSelf->ysyx_24120009_core__DOT__sram__DOT__state = 0U;
        vlSelf->__Vdly__ysyx_24120009_core__DOT__sram__DOT__wt_req_valid = 0U;
    } else {
        if (vlSelf->reset) {
            vlSelf->ysyx_24120009_core__DOT__sram__DOT__state = 0U;
        } else if (vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN) {
            if (ysyx_24120009_core__DOT__sram__DOT__unnamedblk1__DOT___GEN_4) {
                vlSelf->ysyx_24120009_core__DOT__sram__DOT__state = 1U;
            } else if (vlSelf->ysyx_24120009_core__DOT___arbiter_io_axi_ar_valid) {
                vlSelf->ysyx_24120009_core__DOT__sram__DOT__state = 2U;
            }
        } else if (((IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN_0)
                     ? ((IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_wt_res_valid) 
                        & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0) 
                           & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____VdfgTmp_h9bd8307f__0) 
                              & (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready))))
                     : (((IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN_1) 
                         & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_rd_res_valid)) 
                        & ((0U != (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)) 
                           & ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state))
                               ? ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT___GEN_2)) 
                                  & (2U == (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state)))
                               : ((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)) 
                                  & ((0U != (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)) 
                                     & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_1) 
                                        & (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready))))))))) {
            vlSelf->ysyx_24120009_core__DOT__sram__DOT__state = 0U;
        }
        vlSelf->__Vdly__ysyx_24120009_core__DOT__sram__DOT__wt_req_valid 
            = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN)
                                              ? ((IData)(ysyx_24120009_core__DOT__sram__DOT__unnamedblk1__DOT___GEN_4) 
                                                 | (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__wt_req_valid))
                                              : ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN_0)) 
                                                 & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__wt_req_valid))));
    }
    if ((1U & (~ ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN)))))) {
        if (ysyx_24120009_core__DOT__sram__DOT__unnamedblk1__DOT___GEN_4) {
            vlSelf->ysyx_24120009_core__DOT__sram__DOT__addr_reg 
                = ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT___GEN_3)
                    ? 0U : ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2)
                             ? 0U : vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr));
        } else if (vlSelf->ysyx_24120009_core__DOT___arbiter_io_axi_ar_valid) {
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
            vlSelf->ysyx_24120009_core__DOT__sram__DOT__addr_reg 
                = (((0U == (0x1fU & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                     << 5U))) ? 0U : 
                    (__Vtemp_h5d0c4d3a__0[(((IData)(0x1fU) 
                                            + (0x7fU 
                                               & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                                  << 5U))) 
                                           >> 5U)] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                            << 5U))))) 
                   | (__Vtemp_h5d0c4d3a__0[(3U & (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state))] 
                      >> (0x1fU & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                   << 5U))));
        }
    }
    if ((1U & (~ ((IData)(vlSelf->reset) | (~ ((IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN) 
                                               & (IData)(ysyx_24120009_core__DOT__sram__DOT__unnamedblk1__DOT___GEN_4))))))) {
        if (vlSelf->ysyx_24120009_core__DOT__arbiter__DOT___GEN_3) {
            vlSelf->ysyx_24120009_core__DOT__sram__DOT__wdata_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__sram__DOT__wstrb_reg = 0U;
        } else if (vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2) {
            vlSelf->ysyx_24120009_core__DOT__sram__DOT__wdata_reg = 0U;
            vlSelf->ysyx_24120009_core__DOT__sram__DOT__wstrb_reg = 0U;
        } else {
            vlSelf->ysyx_24120009_core__DOT__sram__DOT__wdata_reg 
                = (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_rs2_data 
                   << (0x18U & (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                << 3U)));
            vlSelf->ysyx_24120009_core__DOT__sram__DOT__wstrb_reg 
                = (0xfU & (((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____Vcellinp__write_mask_gen__io_control))
                             ? 1U : ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____Vcellinp__write_mask_gen__io_control))
                                      ? 3U : ((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____Vcellinp__write_mask_gen__io_control))
                                               ? 0xfU
                                               : 0U))) 
                           << (3U & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr)));
        }
    }
    vlSelf->ysyx_24120009_core__DOT__lsu__DOT____Vcellinp__write_mask_gen__io_control 
        = ((0x119U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___mem_access_control_T))
            ? 1U : ((0x118U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___mem_access_control_T))
                     ? 0U : ((0x11aU == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___mem_access_control_T))
                              ? 2U : ((0x1dU == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___mem_access_control_T))
                                       ? 5U : ((0x19U 
                                                == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___mem_access_control_T))
                                                ? 1U
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___mem_access_control_T))
                                                    ? 4U
                                                    : 
                                                   ((0x18U 
                                                     == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___mem_access_control_T))
                                                     ? 0U
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___mem_access_control_T)) 
                                                     << 1U))))))));
    vlSelf->ysyx_24120009_core__DOT__sram__DOT__wt_req_valid 
        = vlSelf->__Vdly__ysyx_24120009_core__DOT__sram__DOT__wt_req_valid;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc = vlSelf->__Vdly__ysyx_24120009_core__DOT__ifu__DOT__pc;
    vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state 
        = vlSelf->__Vdly__ysyx_24120009_core__DOT__lsu__DOT__state;
    vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state 
        = vlSelf->__Vdly__ysyx_24120009_core__DOT__arbiter__DOT__state;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state 
        = vlSelf->__Vdly__ysyx_24120009_core__DOT__ifu__DOT__state;
    vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN 
        = (0U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state));
    vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_0 
        = (1U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state));
    vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2 
        = ((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)) 
           | ((1U != (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)) 
              | ((0x23U != (0x7fU & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst)) 
                 | (3U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst)))));
    vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_1 
        = ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)) 
           & (3U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst)));
    vlSelf->ysyx_24120009_core__DOT__lsu__DOT____VdfgTmp_h4ab110e3__0 
        = ((0U != (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)) 
           & (1U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)));
    vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN 
        = (0U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state));
    vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN_0 
        = (1U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state));
    vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN_1 
        = (2U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state));
    vlSelf->ysyx_24120009_core__DOT__sram__DOT__io_axi_w_ready_0 
        = ((~ (IData)(vlSelf->reset)) & (0U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)));
    vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN_2 
        = ((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)) 
           | (1U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)));
    if (((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_in_ready_0) 
         & (IData)(vlSelf->ysyx_24120009_core__DOT___exu_io_out_valid))) {
        vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr 
            = ((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
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
                            : ((4U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                ? (vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1 
                                   ^ vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2)
                                : ((5U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                    ? VL_LTS_III(32, vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1, vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2)
                                    : ((6U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                        ? (vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1 
                                           < vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2)
                                        : ((7U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                            ? (vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1 
                                               << (0x1fU 
                                                   & vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2))
                                            : ((8U 
                                                == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                                ? VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1, 
                                                                 (0x1fU 
                                                                  & vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2))
                                                : (
                                                   (9U 
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
                                                     : 0U)))))))))));
        vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_rs2_data 
            = vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_rs2_data;
    }
    vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h4ab110e3__0 
        = ((0U != (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)) 
           & (1U == (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)));
    vlSelf->ysyx_24120009_core__DOT__arbiter__DOT___GEN_2 
        = ((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)) 
           | (1U == (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)));
    vlSelf->ysyx_24120009_core__DOT___ifu_io_memory_ar_valid 
        = ((0U != (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state)) 
           & (1U == (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state)));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT___GEN_2 
        = ((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state)) 
           | (1U == (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state)));
    vlSelf->ysyx_24120009_core__DOT__lsu__DOT____VdfgTmp_h9bd8307f__0 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____VdfgTmp_h4ab110e3__0) 
           & ((3U != (0x7fU & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst)) 
              & (0x23U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst))));
    vlSelf->ysyx_24120009_core__DOT___lsu_io_memory_ar_valid 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____VdfgTmp_h4ab110e3__0) 
           & (3U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst)));
    vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN_3 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN_2));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp 
        = (0x1fU & ((0x33U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst))
                     ? ((0x27U >= (0x3fU & ((IData)(5U) 
                                            * (7U & 
                                               (vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst 
                                                >> 0xcU)))))
                         ? (IData)(((0x10d0000000ULL 
                                     | (QData)((IData)(
                                                       (0x4314e0U 
                                                        | (((0U 
                                                             == 
                                                             (vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst 
                                                              >> 0x19U)) 
                                                            << 0x19U) 
                                                           | (0U 
                                                              != 
                                                              (vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst 
                                                               >> 0x19U))))))) 
                                    >> (0x3fU & ((IData)(5U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst 
                                                     >> 0xcU))))))
                         : 0U) : ((0x13U == (0x7fU 
                                             & vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst))
                                   ? ((0x27U >= (0x3fU 
                                                 & ((IData)(5U) 
                                                    * 
                                                    (7U 
                                                     & (vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst 
                                                        >> 0xcU)))))
                                       ? (IData)(((0x10d0000000ULL 
                                                   | (QData)((IData)(
                                                                     (0x4314e0U 
                                                                      | ((0U 
                                                                          == 
                                                                          (vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst 
                                                                           >> 0x19U)) 
                                                                         << 0x19U))))) 
                                                  >> 
                                                  (0x3fU 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst 
                                                          >> 0xcU))))))
                                       : 0U) : (((0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst)) 
                                                 | ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst)) 
                                                    | ((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst)) 
                                                       | (0x37U 
                                                          != 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst)))))
                                                 ? 0U
                                                 : 0xfU))));
    vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1 
        = (((~ ((0x13U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst)) 
                | ((0x33U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst)) 
                   | ((0x23U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst)) 
                      | ((3U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst)) 
                         | ((0x63U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst)) 
                            | ((0x6fU == (0x7fU & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst)) 
                               | (0x67U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))))))))) 
            & ((0x17U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst)) 
               | (0x37U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))))
            ? (0xfffff000U & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst)
            : vlSelf->ysyx_24120009_core__DOT___regfile_rs1_data);
    vlSelf->ysyx_24120009_core__DOT___exu_io_out_valid 
        = ((~ ((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__state)) 
               | (1U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__state)))) 
           & (2U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__state)));
    vlSelf->ysyx_24120009_core__DOT__arbiter__DOT___GEN_3 
        = ((2U != (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)) 
           | (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT___GEN_2));
    vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0 
        = ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT___GEN_2)) 
           & (2U == (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT____VdfgTmp_h111114cf__0 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT___GEN_2) 
           | (2U == (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state)));
    vlSelf->ysyx_24120009_core__DOT___arbiter_io_axi_ar_valid 
        = ((0U != (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)) 
           & ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state))
               ? (IData)(vlSelf->ysyx_24120009_core__DOT___ifu_io_memory_ar_valid)
               : ((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)) 
                  & (IData)(vlSelf->ysyx_24120009_core__DOT___lsu_io_memory_ar_valid))));
    vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_in_ready_0 
        = ((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)) 
           & (IData)(vlSelf->ysyx_24120009_core__DOT___exu_io_out_valid));
    if (((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__io_in_ready_0) 
         & (IData)(vlSelf->ysyx_24120009_core__DOT___idu_io_out_valid))) {
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_rs2_data 
            = vlSelf->ysyx_24120009_core__DOT___regfile_rs2_data;
    }
    vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0) 
           & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__io_axi_w_ready_0));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT___GEN_3 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT____VdfgTmp_h111114cf__0) 
           | (3U == (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state)));
    vlSelf->ysyx_24120009_core__DOT___ifu_io_out_valid 
        = ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT____VdfgTmp_h111114cf__0)) 
           & (3U == (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state)));
    vlSelf->ysyx_24120009_core__DOT___idu_io_out_valid 
        = ((~ ((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__state)) 
               | (1U == (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__state)))) 
           & (2U == (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__state)));
    vlSelf->ysyx_24120009_core__DOT___regfile_rs2_data 
        = vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf
        [(0x1fU & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                   >> 0x14U))];
    vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_memory_w_valid_0 
        = ((~ (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready)) 
           & (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT____VdfgTmp_h9bd8307f__0));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__io_in_ready_0 
        = ((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__state)) 
           & (IData)(vlSelf->ysyx_24120009_core__DOT___ifu_io_out_valid));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__io_in_ready_0 
        = ((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__state)) 
           & (IData)(vlSelf->ysyx_24120009_core__DOT___idu_io_out_valid));
    __Vtemp_h1a6a2b0f__0[0U] = (IData)((((QData)((IData)(
                                                         (((- (IData)(
                                                                      (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                                       >> 0x1fU))) 
                                                           << 0xcU) 
                                                          | (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                             >> 0x14U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_pc))));
    __Vtemp_h1a6a2b0f__0[1U] = (IData)(((((QData)((IData)(
                                                          (((- (IData)(
                                                                       (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                                        >> 0x1fU))) 
                                                            << 0xcU) 
                                                           | (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                              >> 0x14U)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_pc))) 
                                        >> 0x20U));
    __Vtemp_h1a6a2b0f__0[2U] = (((- (IData)((vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                   >> 7U))));
    __Vtemp_h1a6a2b0f__0[3U] = vlSelf->ysyx_24120009_core__DOT___regfile_rs2_data;
    vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2 
        = (((0U == (0x1fU & (((0x13U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))
                               ? 1U : ((0x33U == (0x7fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))
                                        ? 3U : ((0x23U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))
                                                 ? 2U
                                                 : 
                                                (3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))))) 
                             << 5U))) ? 0U : (__Vtemp_h1a6a2b0f__0[
                                              (((IData)(0x1fU) 
                                                + (0x7fU 
                                                   & (((0x13U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x33U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))
                                                         ? 3U
                                                         : 
                                                        ((0x23U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))
                                                          ? 2U
                                                          : 
                                                         (3U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))))) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((0x13U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x33U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))
                                                         ? 3U
                                                         : 
                                                        ((0x23U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))
                                                          ? 2U
                                                          : 
                                                         (3U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))))) 
                                                      << 5U))))) 
           | (__Vtemp_h1a6a2b0f__0[((0x13U == (0x7fU 
                                               & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))
                                     ? 1U : ((0x33U 
                                              == (0x7fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))
                                              ? 3U : 
                                             ((0x23U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))
                                               ? 2U
                                               : (3U 
                                                  & (3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))))))] 
              >> (0x1fU & (((0x13U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))
                             ? 1U : ((0x33U == (0x7fU 
                                                & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))
                                      ? 3U : ((0x23U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))
                                               ? 2U
                                               : (3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))))) 
                           << 5U))));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt 
        = VL_LTS_III(32, vlSelf->ysyx_24120009_core__DOT___regfile_rs1_data, vlSelf->ysyx_24120009_core__DOT___regfile_rs2_data);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu 
        = (vlSelf->ysyx_24120009_core__DOT___regfile_rs1_data 
           < vlSelf->ysyx_24120009_core__DOT___regfile_rs2_data);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq 
        = (vlSelf->ysyx_24120009_core__DOT___regfile_rs1_data 
           == vlSelf->ysyx_24120009_core__DOT___regfile_rs2_data);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT___branch_taken_T_4 
        = (IData)(((0U == (0x7000U & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst)) 
                   & (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq)));
    vlSelf->ysyx_24120009_core__DOT___idu_io_pc_sel 
        = ((0x63U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))
            ? (2U & ((((0x80U & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu)) 
                                 << 7U)) | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu) 
                                             << 6U) 
                                            | ((0x20U 
                                                & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt)) 
                                                   << 5U)) 
                                               | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT___branch_taken_T_4) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT___branch_taken_T_4) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq)) 
                                                               << 1U)) 
                                                           | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT___branch_taken_T_4)))))))) 
                      >> (7U & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                >> 0xcU))) << 1U)) : 
           ((0x6fU == (0x7fU & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))
             ? 3U : (0x67U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst))));
}

void Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__sram__DOT__sram__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__sram__DOT__sram__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_24120009_core___024root___nba_sequent__TOP__3(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__rd_req_valid_delayed) {
        Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__sram__DOT__sram__DOT__pmem_read_TOP(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__addr_delayed, vlSelf->__Vfunc_ysyx_24120009_core__DOT__sram__DOT__sram__DOT__pmem_read__1__Vfuncout);
        vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_data_out 
            = vlSelf->__Vfunc_ysyx_24120009_core__DOT__sram__DOT__sram__DOT__pmem_read__1__Vfuncout;
        vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_rd_res_valid = 1U;
        vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_wt_res_valid = 0U;
    } else if (vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wt_req_valid_delayed) {
        Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__sram__DOT__sram__DOT__pmem_write_TOP(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__waddr_delayed, vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wdata_delayed, (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wmask_delayed));
        vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_data_out 
            = vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wdata_delayed;
        vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_rd_res_valid = 0U;
        vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_wt_res_valid = 1U;
    } else {
        vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_data_out = 0U;
        vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_rd_res_valid = 0U;
        vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_wt_res_valid = 0U;
    }
}

VL_INLINE_OPT void Vysyx_24120009_core___024root___nba_comb__TOP__0(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24120009_core__DOT__sram__DOT____VdfgTmp_hb61e3587__0 
        = ((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)) 
           & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_rd_res_valid));
    vlSelf->ysyx_24120009_core__DOT___sram_io_axi_r_valid 
        = ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___GEN_3)) 
           & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT____VdfgTmp_hb61e3587__0));
    vlSelf->ysyx_24120009_core__DOT___arbiter_io_ifu_r_valid 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h4ab110e3__0) 
           & (IData)(vlSelf->ysyx_24120009_core__DOT___sram_io_axi_r_valid));
}

void Vysyx_24120009_core___024root___eval_nba(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_24120009_core___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_24120009_core___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_24120009_core___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_24120009_core___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vysyx_24120009_core___024root___nba_comb__TOP__0(vlSelf);
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
    VlTriggerVec<2> __VpreTriggered;
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
                VL_FATAL_MT("vsrc/cpu/ysyx_24120009_core.v", 813, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("vsrc/cpu/ysyx_24120009_core.v", 813, "", "Active region did not converge.");
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
                VL_FATAL_MT("vsrc/cpu/ysyx_24120009_core.v", 813, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
