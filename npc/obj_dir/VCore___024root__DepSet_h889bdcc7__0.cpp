// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "VCore__pch.h"
#include "VCore___024root.h"

VL_INLINE_OPT void VCore___024root___ico_sequent__TOP__0(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->Core__DOT__sram__DOT__io_axi_w_ready_0 
        = ((~ (IData)(vlSelf->reset)) & (0U == (IData)(vlSelf->Core__DOT__sram__DOT__state)));
    vlSelf->Core__DOT__sram__DOT____VdfgTmp_h93f383d4__0 
        = ((IData)(vlSelf->reset) | (0U == (IData)(vlSelf->Core__DOT__sram__DOT__state)));
    vlSelf->Core__DOT___arbiter_io_lsu_aw_ready = ((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0) 
                                                   & (IData)(vlSelf->Core__DOT__sram__DOT__io_axi_w_ready_0));
    vlSelf->Core__DOT__sram__DOT___GEN_2 = ((IData)(vlSelf->Core__DOT__sram__DOT____VdfgTmp_h93f383d4__0) 
                                            | (1U == (IData)(vlSelf->Core__DOT__sram__DOT__state)));
    vlSelf->Core__DOT__lsu__DOT__io_memory_w_valid_0 
        = ((~ (IData)(vlSelf->Core__DOT___arbiter_io_lsu_aw_ready)) 
           & (IData)(vlSelf->Core__DOT__lsu__DOT____VdfgTmp_hf7573e74__0));
    vlSelf->Core__DOT___sram_io_axi_r_valid = ((~ (IData)(vlSelf->Core__DOT__sram__DOT___GEN_2)) 
                                               & (IData)(vlSelf->Core__DOT__sram__DOT____VdfgTmp_hb61e3587__0));
    vlSelf->Core__DOT___sram_io_axi_r_data = ((1U & 
                                               ((~ (IData)(vlSelf->Core__DOT__sram__DOT____VdfgTmp_hb61e3587__0)) 
                                                | (IData)(vlSelf->Core__DOT__sram__DOT___GEN_2)))
                                               ? 0U
                                               : vlSelf->Core__DOT__sram__DOT___sram_data_out);
    vlSelf->Core__DOT___arbiter_io_ifu_r_valid = ((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h4b16e7a1__0) 
                                                  & (IData)(vlSelf->Core__DOT___sram_io_axi_r_valid));
    vlSelf->Core__DOT___arbiter_io_lsu_r_data = ((IData)(vlSelf->Core__DOT__arbiter__DOT___GEN_3)
                                                  ? 0U
                                                  : vlSelf->Core__DOT___sram_io_axi_r_data);
    vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
        = (vlSelf->Core__DOT___arbiter_io_lsu_r_data 
           >> (0x18U & (vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                        << 3U)));
}

void VCore___024root___eval_ico(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VCore___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VCore___024root___eval_triggers__ico(VCore___024root* vlSelf);

bool VCore___024root___eval_phase__ico(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VCore___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VCore___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VCore___024root___eval_act(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_act\n"); );
}

void VCore___024root____Vdpiimwrap_Core__DOT__regfile__DOT__get_register_values_TOP(VlUnpacked<IData/*31:0*/, 32> rf);

VL_INLINE_OPT void VCore___024root___nba_sequent__TOP__0(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__Core__DOT__wbu__DOT__state;
    __Vdly__Core__DOT__wbu__DOT__state = 0;
    CData/*4:0*/ __Vdlyvdim0__Core__DOT__regfile__DOT__rf__v0;
    __Vdlyvdim0__Core__DOT__regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__Core__DOT__regfile__DOT__rf__v0;
    __Vdlyvval__Core__DOT__regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Core__DOT__regfile__DOT__rf__v0;
    __Vdlyvset__Core__DOT__regfile__DOT__rf__v0 = 0;
    VlWide<8>/*255:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_7;
    // Body
    __Vdly__Core__DOT__wbu__DOT__state = vlSelf->Core__DOT__wbu__DOT__state;
    vlSelf->__Vdly__Core__DOT__arbiter__DOT__state 
        = vlSelf->Core__DOT__arbiter__DOT__state;
    vlSelf->__Vdly__Core__DOT__ifu__DOT__state = vlSelf->Core__DOT__ifu__DOT__state;
    vlSelf->__Vdly__Core__DOT__ifu__DOT__pc = vlSelf->Core__DOT__ifu__DOT__pc;
    __Vdlyvset__Core__DOT__regfile__DOT__rf__v0 = 0U;
    vlSelf->__Vdly__Core__DOT__sram__DOT__wt_req_valid 
        = vlSelf->Core__DOT__sram__DOT__wt_req_valid;
    vlSelf->__Vdly__Core__DOT__sram__DOT__rd_req_valid 
        = vlSelf->Core__DOT__sram__DOT__rd_req_valid;
    vlSelf->__Vdly__Core__DOT__sram__DOT__state = vlSelf->Core__DOT__sram__DOT__state;
    if (vlSelf->reset) {
        __Vdly__Core__DOT__wbu__DOT__state = 0U;
        vlSelf->__Vdly__Core__DOT__arbiter__DOT__state = 0U;
        vlSelf->__Vdly__Core__DOT__ifu__DOT__state = 0U;
        vlSelf->__Vdly__Core__DOT__ifu__DOT__pc = 0U;
        vlSelf->Core__DOT__idu__DOT__state = 0U;
        vlSelf->Core__DOT__exu__DOT__state = 0U;
        vlSelf->Core__DOT__ifu__DOT__if_inst_buffer = 0U;
    } else {
        vlSelf->Core__DOT__wbu__DOT__unnamedblk1__DOT___GEN_0 
            = (8U | (((IData)(vlSelf->Core__DOT__wbu__DOT__state) 
                      << 6U) | ((IData)(vlSelf->Core__DOT___lsu_io_out_valid)
                                 ? 1U : (IData)(vlSelf->Core__DOT__wbu__DOT__state))));
        __Vdly__Core__DOT__wbu__DOT__state = (3U & 
                                              ((IData)(vlSelf->Core__DOT__wbu__DOT__unnamedblk1__DOT___GEN_0) 
                                               >> (7U 
                                                   & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->Core__DOT__wbu__DOT__state), 1U))));
        vlSelf->Core__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_5 
            = ((IData)(vlSelf->Core__DOT___ifu_io_memory_ar_valid)
                ? 1U : (((IData)(vlSelf->Core__DOT___lsu_io_memory_ar_valid) 
                         | ((IData)(vlSelf->Core__DOT__lsu__DOT__io_memory_w_valid_0) 
                            & (~ (IData)(vlSelf->Core__DOT___ifu_io_memory_ar_valid)))) 
                        << 1U));
        vlSelf->Core__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_6 
            = (((IData)(vlSelf->Core__DOT__arbiter__DOT__state) 
                << 6U) | (0x3fU & (((IData)(vlSelf->Core__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_5) 
                                    << 4U) | (((IData)(vlSelf->Core__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_5) 
                                               << 2U) 
                                              | (IData)(vlSelf->Core__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_5)))));
        vlSelf->__Vdly__Core__DOT__arbiter__DOT__state 
            = (3U & ((IData)(vlSelf->Core__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_6) 
                     >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->Core__DOT__arbiter__DOT__state), 1U))));
        vlSelf->Core__DOT__ifu__DOT__unnamedblk1__DOT___GEN_4 
            = (((((3U == (IData)(vlSelf->Core__DOT__ifu__DOT__state)) 
                  & (IData)(vlSelf->Core__DOT__idu__DOT__io_in_ready_0))
                  ? 0U : (IData)(vlSelf->Core__DOT__ifu__DOT__state)) 
                << 6U) | ((((IData)(vlSelf->Core__DOT___arbiter_io_ifu_r_valid)
                             ? 3U : (IData)(vlSelf->Core__DOT__ifu__DOT__state)) 
                           << 4U) | (((((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h4b16e7a1__0) 
                                        & (IData)(vlSelf->Core__DOT__sram__DOT__io_axi_w_ready_0))
                                        ? 2U : (IData)(vlSelf->Core__DOT__ifu__DOT__state)) 
                                      << 2U) | ((2U 
                                                 == (IData)(vlSelf->Core__DOT__wbu__DOT__state))
                                                 ? 1U
                                                 : (IData)(vlSelf->Core__DOT__ifu__DOT__state)))));
        vlSelf->__Vdly__Core__DOT__ifu__DOT__state 
            = (3U & ((IData)(vlSelf->Core__DOT__ifu__DOT__unnamedblk1__DOT___GEN_4) 
                     >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->Core__DOT__ifu__DOT__state), 1U))));
        if ((2U == (IData)(vlSelf->Core__DOT__wbu__DOT__state))) {
            vlSelf->__Vdly__Core__DOT__ifu__DOT__pc 
                = ((4U == (IData)(vlSelf->Core__DOT___idu_io_pc_sel))
                    ? 0U : ((3U == (IData)(vlSelf->Core__DOT___idu_io_pc_sel))
                             ? (vlSelf->Core__DOT__idu__DOT__idu_reg_pc 
                                + (((- (IData)((vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->Core__DOT__idu__DOT__idu_reg_inst) 
                                                 | ((0x800U 
                                                     & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                          >> 0x14U))))))
                             : ((2U == (IData)(vlSelf->Core__DOT___idu_io_pc_sel))
                                 ? (vlSelf->Core__DOT__idu__DOT__idu_reg_pc 
                                    + (((- (IData)(
                                                   (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                 >> 7U))))))
                                 : ((1U == (IData)(vlSelf->Core__DOT___idu_io_pc_sel))
                                     ? (0xfffffffeU 
                                        & (vlSelf->Core__DOT___regfile_rs1_data 
                                           + (((- (IData)(
                                                          (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                 >> 0x14U))))
                                     : ((IData)(4U) 
                                        + vlSelf->Core__DOT__ifu__DOT__pc)))));
        }
        if (vlSelf->Core__DOT__idu__DOT___GEN) {
            if (vlSelf->Core__DOT___ifu_io_out_valid) {
                vlSelf->Core__DOT__idu__DOT__state = 1U;
            }
        } else if (vlSelf->Core__DOT__idu__DOT___GEN_0) {
            vlSelf->Core__DOT__idu__DOT__state = 2U;
        } else if (((IData)(vlSelf->Core__DOT__idu__DOT___GEN_1) 
                    & (IData)(vlSelf->Core__DOT__exu__DOT__io_in_ready_0))) {
            vlSelf->Core__DOT__idu__DOT__state = 0U;
        }
        if (vlSelf->Core__DOT__exu__DOT___GEN) {
            if (vlSelf->Core__DOT___idu_io_out_valid) {
                vlSelf->Core__DOT__exu__DOT__state = 1U;
            }
        } else if (vlSelf->Core__DOT__exu__DOT___GEN_0) {
            vlSelf->Core__DOT__exu__DOT__state = 2U;
        } else if (((IData)(vlSelf->Core__DOT__exu__DOT___GEN_1) 
                    & (IData)(vlSelf->Core__DOT__lsu__DOT__io_in_ready_0))) {
            vlSelf->Core__DOT__exu__DOT__state = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->Core__DOT__ifu__DOT___GEN_2) 
                      | (~ ((2U == (IData)(vlSelf->Core__DOT__ifu__DOT__state)) 
                            & (IData)(vlSelf->Core__DOT___arbiter_io_ifu_r_valid))))))) {
            vlSelf->Core__DOT__ifu__DOT__if_inst_buffer 
                = (((1U != (IData)(vlSelf->Core__DOT__arbiter__DOT__state)) 
                    | (0U == (IData)(vlSelf->Core__DOT__arbiter__DOT__state)))
                    ? 0U : vlSelf->Core__DOT___sram_io_axi_r_data);
        }
    }
    if ((((IData)(vlSelf->io_wb_wen_debug) & (1U == (IData)(vlSelf->Core__DOT__wbu__DOT__state))) 
         & (0U != (IData)(vlSelf->Core__DOT__wbu__DOT__wbu_reg_wb_addr)))) {
        __Vdlyvval__Core__DOT__regfile__DOT__rf__v0 
            = vlSelf->io_wb_data_debug;
        __Vdlyvset__Core__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__Core__DOT__regfile__DOT__rf__v0 
            = vlSelf->Core__DOT__wbu__DOT__wbu_reg_wb_addr;
    }
    vlSelf->Core__DOT__wbu__DOT__state = __Vdly__Core__DOT__wbu__DOT__state;
    if (__Vdlyvset__Core__DOT__regfile__DOT__rf__v0) {
        vlSelf->Core__DOT__regfile__DOT__rf[__Vdlyvdim0__Core__DOT__regfile__DOT__rf__v0] 
            = __Vdlyvval__Core__DOT__regfile__DOT__rf__v0;
    }
    vlSelf->io_wbu_state_debug = vlSelf->Core__DOT__wbu__DOT__state;
    if (((IData)(vlSelf->Core__DOT__wbu__DOT__io_in_ready_0) 
         & (IData)(vlSelf->Core__DOT___lsu_io_out_valid))) {
        __Vtemp_5[0U] = (((- (IData)((1U & (vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
                                            >> 7U)))) 
                          << 8U) | (0xffU & vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data));
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
        vlSelf->Core__DOT__wbu__DOT__wbu_reg_dmem_rdata 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U)))
                 ? 0U : (__Vtemp_5[(((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U))))) 
               | (__Vtemp_5[(7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U))));
        vlSelf->Core__DOT__wbu__DOT__wbu_reg_result 
            = vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr;
        vlSelf->Core__DOT__wbu__DOT__wbu_reg_pc = vlSelf->Core__DOT__lsu__DOT__lsu_reg_pc;
        vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst = vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst;
    }
    VCore___024root____Vdpiimwrap_Core__DOT__regfile__DOT__get_register_values_TOP(vlSelf->Core__DOT__regfile__DOT__rf);
    if (((IData)(vlSelf->Core__DOT__wbu__DOT__io_in_ready_0) 
         & (IData)(vlSelf->Core__DOT___lsu_io_out_valid))) {
        vlSelf->Core__DOT__wbu__DOT__wbu_reg_wb_addr 
            = vlSelf->Core__DOT__lsu__DOT__lsu_reg_wb_addr;
    }
    vlSelf->Core__DOT__idu__DOT___GEN = (0U == (IData)(vlSelf->Core__DOT__idu__DOT__state));
    vlSelf->Core__DOT__idu__DOT___GEN_0 = (1U == (IData)(vlSelf->Core__DOT__idu__DOT__state));
    vlSelf->Core__DOT__idu__DOT___GEN_1 = (2U == (IData)(vlSelf->Core__DOT__idu__DOT__state));
    vlSelf->Core__DOT__exu__DOT___GEN = (0U == (IData)(vlSelf->Core__DOT__exu__DOT__state));
    vlSelf->Core__DOT__exu__DOT___GEN_0 = (1U == (IData)(vlSelf->Core__DOT__exu__DOT__state));
    vlSelf->Core__DOT__exu__DOT___GEN_1 = (2U == (IData)(vlSelf->Core__DOT__exu__DOT__state));
    if (((IData)(vlSelf->Core__DOT__lsu__DOT__io_in_ready_0) 
         & (IData)(vlSelf->Core__DOT___exu_io_out_valid))) {
        vlSelf->Core__DOT__lsu__DOT__lsu_reg_pc = vlSelf->Core__DOT__exu__DOT__exu_reg_pc;
        vlSelf->Core__DOT__lsu__DOT__lsu_reg_wb_addr 
            = vlSelf->Core__DOT__exu__DOT__exu_reg_wb_addr;
    }
    vlSelf->Core__DOT__wbu__DOT____VdfgTmp_he33a7f1b__0 
        = ((0x67U == (0x7fU & vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst)) 
           | (0x6fU == (0x7fU & vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst)));
    vlSelf->Core__DOT__wbu__DOT____VdfgTmp_h00d1e98b__0 
        = ((0x13U == (0x7fU & vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst)) 
           | ((0x33U == (0x7fU & vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst)) 
              | ((0x17U == (0x7fU & vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst)) 
                 | (0x37U == (0x7fU & vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst)))));
    vlSelf->io_wb_wen_debug = ((IData)(vlSelf->Core__DOT__wbu__DOT____VdfgTmp_he33a7f1b__0) 
                               | ((3U == (0x7fU & vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst)) 
                                  | (IData)(vlSelf->Core__DOT__wbu__DOT____VdfgTmp_h00d1e98b__0)));
    vlSelf->io_wb_sel_debug = ((IData)(vlSelf->Core__DOT__wbu__DOT____VdfgTmp_he33a7f1b__0)
                                ? 1U : (((0x73U == 
                                          (0x7fU & vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst)) 
                                         | (0x63U == 
                                            (0x7fU 
                                             & vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst)))
                                         ? 0U : ((3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst))
                                                  ? 3U
                                                  : 
                                                 ((IData)(vlSelf->Core__DOT__wbu__DOT____VdfgTmp_h00d1e98b__0) 
                                                  << 1U))));
    if (((IData)(vlSelf->Core__DOT__exu__DOT__io_in_ready_0) 
         & (IData)(vlSelf->Core__DOT___idu_io_out_valid))) {
        vlSelf->Core__DOT__exu__DOT__exu_reg_pc = vlSelf->Core__DOT__idu__DOT__idu_reg_pc;
        vlSelf->Core__DOT__exu__DOT__exu_reg_wb_addr 
            = (0x1fU & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                        >> 7U));
    }
    __Vtemp_7[0U] = 0U;
    __Vtemp_7[1U] = ((IData)(4U) + vlSelf->Core__DOT__wbu__DOT__wbu_reg_pc);
    __Vtemp_7[2U] = (IData)((((QData)((IData)(vlSelf->Core__DOT__wbu__DOT__wbu_reg_dmem_rdata)) 
                              << 0x20U) | (QData)((IData)(vlSelf->Core__DOT__wbu__DOT__wbu_reg_result))));
    __Vtemp_7[3U] = (IData)(((((QData)((IData)(vlSelf->Core__DOT__wbu__DOT__wbu_reg_dmem_rdata)) 
                               << 0x20U) | (QData)((IData)(vlSelf->Core__DOT__wbu__DOT__wbu_reg_result))) 
                             >> 0x20U));
    vlSelf->io_wb_data_debug = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->io_wb_sel_debug), 5U)))
                                  ? 0U : (__Vtemp_7[
                                          (((IData)(0x1fU) 
                                            + (0x7fU 
                                               & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->io_wb_sel_debug), 5U))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->io_wb_sel_debug), 5U))))) 
                                | (__Vtemp_7[(3U & 
                                              (VL_SHIFTL_III(7,7,32, (IData)(vlSelf->io_wb_sel_debug), 5U) 
                                               >> 5U))] 
                                   >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->io_wb_sel_debug), 5U))));
    if (((IData)(vlSelf->Core__DOT__idu__DOT__io_in_ready_0) 
         & (IData)(vlSelf->Core__DOT___ifu_io_out_valid))) {
        vlSelf->Core__DOT__idu__DOT__idu_reg_pc = vlSelf->io_pc_debug;
    }
}

VL_INLINE_OPT void VCore___024root___nba_sequent__TOP__1(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->Core__DOT__sram__DOT__sram__DOT__wt_req_valid_delayed 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->Core__DOT__sram__DOT__wt_req_valid));
    vlSelf->Core__DOT__sram__DOT__sram__DOT__rd_req_valid_delayed 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->Core__DOT__sram__DOT__rd_req_valid));
    if (vlSelf->reset) {
        vlSelf->Core__DOT__sram__DOT__sram__DOT__wmask_delayed = 0U;
        vlSelf->Core__DOT__sram__DOT__sram__DOT__wdata_delayed = 0U;
        vlSelf->Core__DOT__sram__DOT__sram__DOT__waddr_delayed = 0U;
        vlSelf->Core__DOT__sram__DOT__sram__DOT__addr_delayed = 0U;
    } else {
        vlSelf->Core__DOT__sram__DOT__sram__DOT__wmask_delayed 
            = vlSelf->Core__DOT__sram__DOT__wstrb_reg;
        vlSelf->Core__DOT__sram__DOT__sram__DOT__wdata_delayed 
            = vlSelf->Core__DOT__sram__DOT__wdata_reg;
        vlSelf->Core__DOT__sram__DOT__sram__DOT__waddr_delayed 
            = vlSelf->Core__DOT__sram__DOT__addr_reg;
        vlSelf->Core__DOT__sram__DOT__sram__DOT__addr_delayed 
            = vlSelf->Core__DOT__sram__DOT__addr_reg;
    }
}

void VCore___024root____Vdpiimwrap_Core__DOT__ifu__DOT__ebreakHandler__DOT__simulation_exit_TOP();

VL_INLINE_OPT void VCore___024root___nba_sequent__TOP__2(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ Core__DOT__sram__DOT__unnamedblk1__DOT___GEN_3;
    Core__DOT__sram__DOT__unnamedblk1__DOT___GEN_3 = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    Core__DOT__sram__DOT__unnamedblk1__DOT___GEN_3 
        = ((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0) 
           & (IData)(vlSelf->Core__DOT__lsu__DOT__io_memory_w_valid_0));
    if ((1U & (~ ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->Core__DOT__sram__DOT___GEN)))))) {
        if (Core__DOT__sram__DOT__unnamedblk1__DOT___GEN_3) {
            vlSelf->Core__DOT__sram__DOT__addr_reg 
                = ((IData)(vlSelf->Core__DOT__arbiter__DOT___GEN_3)
                    ? 0U : ((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_2)
                             ? 0U : vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr));
        } else if (vlSelf->Core__DOT___arbiter_io_axi_ar_valid) {
            __Vtemp_2[0U] = 0U;
            __Vtemp_2[1U] = ((IData)(vlSelf->Core__DOT__ifu__DOT___GEN_3)
                              ? vlSelf->Core__DOT__ifu__DOT__pc
                              : 0U);
            __Vtemp_2[2U] = (IData)((QData)((IData)(
                                                    ((1U 
                                                      & ((~ (IData)(vlSelf->Core__DOT__lsu__DOT___GEN_1)) 
                                                         | (0U 
                                                            == (IData)(vlSelf->Core__DOT__lsu__DOT__state))))
                                                      ? 0U
                                                      : vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr))));
            __Vtemp_2[3U] = (IData)(((QData)((IData)(
                                                     ((1U 
                                                       & ((~ (IData)(vlSelf->Core__DOT__lsu__DOT___GEN_1)) 
                                                          | (0U 
                                                             == (IData)(vlSelf->Core__DOT__lsu__DOT__state))))
                                                       ? 0U
                                                       : vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr))) 
                                     >> 0x20U));
            vlSelf->Core__DOT__sram__DOT__addr_reg 
                = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->Core__DOT__arbiter__DOT__state), 5U)))
                     ? 0U : (__Vtemp_2[(((IData)(0x1fU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,7,32, (IData)(vlSelf->Core__DOT__arbiter__DOT__state), 5U))) 
                                        >> 5U)] << 
                             ((IData)(0x20U) - (0x1fU 
                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->Core__DOT__arbiter__DOT__state), 5U))))) 
                   | (__Vtemp_2[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelf->Core__DOT__arbiter__DOT__state), 5U) 
                                       >> 5U))] >> 
                      (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->Core__DOT__arbiter__DOT__state), 5U))));
        }
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__Core__DOT__sram__DOT__state = 0U;
        vlSelf->__Vdly__Core__DOT__sram__DOT__rd_req_valid = 0U;
        vlSelf->__Vdly__Core__DOT__sram__DOT__wt_req_valid = 0U;
        vlSelf->Core__DOT__lsu__DOT__state = 0U;
    } else {
        if (vlSelf->reset) {
            vlSelf->__Vdly__Core__DOT__sram__DOT__state = 0U;
        } else if (vlSelf->Core__DOT__sram__DOT___GEN) {
            if (Core__DOT__sram__DOT__unnamedblk1__DOT___GEN_3) {
                vlSelf->__Vdly__Core__DOT__sram__DOT__state = 1U;
            } else if (vlSelf->Core__DOT___arbiter_io_axi_ar_valid) {
                vlSelf->__Vdly__Core__DOT__sram__DOT__state = 2U;
            }
        } else if (((IData)(vlSelf->Core__DOT__sram__DOT___GEN_0)
                     ? ((IData)(vlSelf->Core__DOT__sram__DOT___sram_wt_res_valid) 
                        & ((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0) 
                           & ((IData)(vlSelf->Core__DOT__lsu__DOT____VdfgTmp_hf7573e74__0) 
                              & (IData)(vlSelf->Core__DOT___arbiter_io_lsu_aw_ready))))
                     : (((IData)(vlSelf->Core__DOT__sram__DOT___GEN_1) 
                         & (IData)(vlSelf->Core__DOT__sram__DOT___sram_rd_res_valid)) 
                        & ((0U != (IData)(vlSelf->Core__DOT__arbiter__DOT__state)) 
                           & ((1U == (IData)(vlSelf->Core__DOT__arbiter__DOT__state))
                               ? ((~ (IData)(vlSelf->Core__DOT__ifu__DOT___GEN_2)) 
                                  & (2U == (IData)(vlSelf->Core__DOT__ifu__DOT__state)))
                               : ((2U == (IData)(vlSelf->Core__DOT__arbiter__DOT__state)) 
                                  & ((0U != (IData)(vlSelf->Core__DOT__lsu__DOT__state)) 
                                     & ((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_1) 
                                        & (IData)(vlSelf->Core__DOT___arbiter_io_lsu_aw_ready))))))))) {
            vlSelf->__Vdly__Core__DOT__sram__DOT__state = 0U;
        }
        vlSelf->__Vdly__Core__DOT__sram__DOT__rd_req_valid 
            = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->Core__DOT__sram__DOT___GEN)
                                              ? (((~ (IData)(Core__DOT__sram__DOT__unnamedblk1__DOT___GEN_3)) 
                                                  & (IData)(vlSelf->Core__DOT___arbiter_io_axi_ar_valid)) 
                                                 | (IData)(vlSelf->Core__DOT__sram__DOT__rd_req_valid))
                                              : (((IData)(vlSelf->Core__DOT__sram__DOT___GEN_0) 
                                                  | (~ (IData)(vlSelf->Core__DOT__sram__DOT___GEN_1))) 
                                                 & (IData)(vlSelf->Core__DOT__sram__DOT__rd_req_valid))));
        vlSelf->__Vdly__Core__DOT__sram__DOT__wt_req_valid 
            = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->Core__DOT__sram__DOT___GEN)
                                              ? ((IData)(Core__DOT__sram__DOT__unnamedblk1__DOT___GEN_3) 
                                                 | (IData)(vlSelf->Core__DOT__sram__DOT__wt_req_valid))
                                              : ((~ (IData)(vlSelf->Core__DOT__sram__DOT___GEN_0)) 
                                                 & (IData)(vlSelf->Core__DOT__sram__DOT__wt_req_valid))));
        if (vlSelf->Core__DOT__lsu__DOT___GEN) {
            if (vlSelf->Core__DOT___exu_io_out_valid) {
                vlSelf->Core__DOT__lsu__DOT__state = 1U;
            }
        } else if (vlSelf->Core__DOT__lsu__DOT___GEN_0) {
            if (((3U == (0x7fU & vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst))
                  ? ((IData)(vlSelf->Core__DOT___arbiter_io_lsu_aw_ready) 
                     & ((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0) 
                        & (IData)(vlSelf->Core__DOT___sram_io_axi_r_valid)))
                  : (((0x23U == (0x7fU & vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst)) 
                      & (IData)(vlSelf->Core__DOT___arbiter_io_lsu_aw_ready)) 
                     & ((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0) 
                        & ((~ (IData)(vlSelf->Core__DOT__sram__DOT____VdfgTmp_h93f383d4__0)) 
                           & ((1U == (IData)(vlSelf->Core__DOT__sram__DOT__state)) 
                              & (IData)(vlSelf->Core__DOT__sram__DOT___sram_wt_res_valid))))))) {
                vlSelf->Core__DOT__lsu__DOT__state = 2U;
            }
        } else if (((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_4) 
                    & (IData)(vlSelf->Core__DOT__wbu__DOT__io_in_ready_0))) {
            vlSelf->Core__DOT__lsu__DOT__state = 0U;
        }
    }
    if ((1U & (~ ((IData)(vlSelf->reset) | (~ ((IData)(vlSelf->Core__DOT__sram__DOT___GEN) 
                                               & (IData)(Core__DOT__sram__DOT__unnamedblk1__DOT___GEN_3))))))) {
        if (vlSelf->Core__DOT__arbiter__DOT___GEN_3) {
            vlSelf->Core__DOT__sram__DOT__wdata_reg = 0U;
            vlSelf->Core__DOT__sram__DOT__wstrb_reg = 0U;
        } else if (vlSelf->Core__DOT__lsu__DOT___GEN_2) {
            vlSelf->Core__DOT__sram__DOT__wdata_reg = 0U;
            vlSelf->Core__DOT__sram__DOT__wstrb_reg = 0U;
        } else {
            vlSelf->Core__DOT__sram__DOT__wdata_reg 
                = (vlSelf->Core__DOT__lsu__DOT__lsu_reg_rs2_data 
                   << (0x18U & (vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                << 3U)));
            vlSelf->Core__DOT__sram__DOT__wstrb_reg 
                = (0xfU & (((0U == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                             ? 1U : ((1U == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                      ? 3U : ((2U == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                               ? 0xfU
                                               : 0U))) 
                           << (3U & vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr)));
        }
    }
    vlSelf->Core__DOT__sram__DOT__rd_req_valid = vlSelf->__Vdly__Core__DOT__sram__DOT__rd_req_valid;
    vlSelf->Core__DOT__sram__DOT__wt_req_valid = vlSelf->__Vdly__Core__DOT__sram__DOT__wt_req_valid;
    vlSelf->Core__DOT__ifu__DOT__pc = vlSelf->__Vdly__Core__DOT__ifu__DOT__pc;
    vlSelf->Core__DOT__arbiter__DOT__state = vlSelf->__Vdly__Core__DOT__arbiter__DOT__state;
    vlSelf->Core__DOT__ifu__DOT__state = vlSelf->__Vdly__Core__DOT__ifu__DOT__state;
    vlSelf->io_pc_debug = vlSelf->Core__DOT__ifu__DOT__pc;
    if (((IData)(vlSelf->Core__DOT__lsu__DOT__io_in_ready_0) 
         & (IData)(vlSelf->Core__DOT___exu_io_out_valid))) {
        vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr 
            = vlSelf->Core__DOT__exu__DOT___alu_instance_io_result;
        vlSelf->Core__DOT__lsu__DOT__lsu_reg_rs2_data 
            = vlSelf->Core__DOT__exu__DOT__exu_reg_rs2_data;
        vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst = vlSelf->Core__DOT__exu__DOT__exu_reg_inst;
    }
    vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h4b16e7a1__0 
        = ((0U != (IData)(vlSelf->Core__DOT__arbiter__DOT__state)) 
           & (1U == (IData)(vlSelf->Core__DOT__arbiter__DOT__state)));
    vlSelf->Core__DOT__arbiter__DOT___GEN_2 = ((0U 
                                                == (IData)(vlSelf->Core__DOT__arbiter__DOT__state)) 
                                               | (1U 
                                                  == (IData)(vlSelf->Core__DOT__arbiter__DOT__state)));
    vlSelf->Core__DOT___ifu_io_memory_ar_valid = ((0U 
                                                   != (IData)(vlSelf->Core__DOT__ifu__DOT__state)) 
                                                  & (1U 
                                                     == (IData)(vlSelf->Core__DOT__ifu__DOT__state)));
    vlSelf->Core__DOT__ifu__DOT___GEN_2 = ((0U == (IData)(vlSelf->Core__DOT__ifu__DOT__state)) 
                                           | (1U == (IData)(vlSelf->Core__DOT__ifu__DOT__state)));
    vlSelf->Core__DOT__arbiter__DOT___GEN_3 = ((2U 
                                                != (IData)(vlSelf->Core__DOT__arbiter__DOT__state)) 
                                               | (IData)(vlSelf->Core__DOT__arbiter__DOT___GEN_2));
    vlSelf->Core__DOT__ifu__DOT____VdfgTmp_h111114cf__0 
        = ((IData)(vlSelf->Core__DOT__ifu__DOT___GEN_2) 
           | (2U == (IData)(vlSelf->Core__DOT__ifu__DOT__state)));
    vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0 
        = ((~ (IData)(vlSelf->Core__DOT__arbiter__DOT___GEN_2)) 
           & (2U == (IData)(vlSelf->Core__DOT__arbiter__DOT__state)));
    vlSelf->Core__DOT__sram__DOT__state = vlSelf->__Vdly__Core__DOT__sram__DOT__state;
    vlSelf->Core__DOT__ifu__DOT___GEN_3 = ((IData)(vlSelf->Core__DOT__ifu__DOT____VdfgTmp_h111114cf__0) 
                                           | (3U == (IData)(vlSelf->Core__DOT__ifu__DOT__state)));
    if (((IData)(vlSelf->Core__DOT__exu__DOT__io_in_ready_0) 
         & (IData)(vlSelf->Core__DOT___idu_io_out_valid))) {
        vlSelf->Core__DOT__exu__DOT__exu_reg_rs2_data 
            = vlSelf->Core__DOT___regfile_rs2_data;
        vlSelf->Core__DOT__exu__DOT__exu_reg_inst = vlSelf->Core__DOT__idu__DOT__idu_reg_inst;
    }
    vlSelf->io_lsu_state_debug = vlSelf->Core__DOT__lsu__DOT__state;
    vlSelf->Core__DOT__lsu__DOT___GEN = (0U == (IData)(vlSelf->Core__DOT__lsu__DOT__state));
    vlSelf->Core__DOT__lsu__DOT___GEN_0 = (1U == (IData)(vlSelf->Core__DOT__lsu__DOT__state));
    vlSelf->Core__DOT__lsu__DOT___GEN_4 = (2U == (IData)(vlSelf->Core__DOT__lsu__DOT__state));
    vlSelf->Core__DOT___lsu_io_out_valid = ((~ ((0U 
                                                 == (IData)(vlSelf->Core__DOT__lsu__DOT__state)) 
                                                | (1U 
                                                   == (IData)(vlSelf->Core__DOT__lsu__DOT__state)))) 
                                            & (2U == (IData)(vlSelf->Core__DOT__lsu__DOT__state)));
    vlSelf->Core__DOT__lsu__DOT____VdfgTmp_h4b16e7a1__0 
        = ((0U != (IData)(vlSelf->Core__DOT__lsu__DOT__state)) 
           & (1U == (IData)(vlSelf->Core__DOT__lsu__DOT__state)));
    vlSelf->Core__DOT__sram__DOT___GEN = (0U == (IData)(vlSelf->Core__DOT__sram__DOT__state));
    vlSelf->Core__DOT__sram__DOT___GEN_0 = (1U == (IData)(vlSelf->Core__DOT__sram__DOT__state));
    vlSelf->Core__DOT__sram__DOT___GEN_1 = (2U == (IData)(vlSelf->Core__DOT__sram__DOT__state));
    vlSelf->Core__DOT__sram__DOT__io_axi_w_ready_0 
        = ((~ (IData)(vlSelf->reset)) & (0U == (IData)(vlSelf->Core__DOT__sram__DOT__state)));
    vlSelf->Core__DOT__sram__DOT____VdfgTmp_h93f383d4__0 
        = ((IData)(vlSelf->reset) | (0U == (IData)(vlSelf->Core__DOT__sram__DOT__state)));
    vlSelf->Core__DOT__wbu__DOT__io_in_ready_0 = ((0U 
                                                   == (IData)(vlSelf->Core__DOT__wbu__DOT__state)) 
                                                  & (IData)(vlSelf->Core__DOT___lsu_io_out_valid));
    vlSelf->Core__DOT___arbiter_io_lsu_aw_ready = ((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0) 
                                                   & (IData)(vlSelf->Core__DOT__sram__DOT__io_axi_w_ready_0));
    vlSelf->Core__DOT__sram__DOT___GEN_2 = ((IData)(vlSelf->Core__DOT__sram__DOT____VdfgTmp_h93f383d4__0) 
                                            | (1U == (IData)(vlSelf->Core__DOT__sram__DOT__state)));
    vlSelf->Core__DOT___exu_io_out_valid = ((~ ((0U 
                                                 == (IData)(vlSelf->Core__DOT__exu__DOT__state)) 
                                                | (1U 
                                                   == (IData)(vlSelf->Core__DOT__exu__DOT__state)))) 
                                            & (2U == (IData)(vlSelf->Core__DOT__exu__DOT__state)));
    vlSelf->Core__DOT__lsu__DOT__io_in_ready_0 = ((0U 
                                                   == (IData)(vlSelf->Core__DOT__lsu__DOT__state)) 
                                                  & (IData)(vlSelf->Core__DOT___exu_io_out_valid));
    vlSelf->Core__DOT__lsu__DOT___GEN_2 = ((0U == (IData)(vlSelf->Core__DOT__lsu__DOT__state)) 
                                           | ((1U != (IData)(vlSelf->Core__DOT__lsu__DOT__state)) 
                                              | ((0x23U 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst)) 
                                                 | (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst)))));
    vlSelf->Core__DOT__lsu__DOT___GEN_1 = ((1U == (IData)(vlSelf->Core__DOT__lsu__DOT__state)) 
                                           & (3U == 
                                              (0x7fU 
                                               & vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst)));
    vlSelf->Core__DOT__lsu__DOT___mem_access_control_T 
        = ((0x3f8U & (vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst 
                      << 3U)) | (7U & (vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst 
                                       >> 0xcU)));
    vlSelf->Core__DOT__lsu__DOT____VdfgTmp_hf7573e74__0 
        = ((IData)(vlSelf->Core__DOT__lsu__DOT____VdfgTmp_h4b16e7a1__0) 
           & ((3U != (0x7fU & vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst)) 
              & (0x23U == (0x7fU & vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst))));
    vlSelf->Core__DOT___lsu_io_memory_ar_valid = ((IData)(vlSelf->Core__DOT__lsu__DOT____VdfgTmp_h4b16e7a1__0) 
                                                  & (3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst)));
    vlSelf->Core__DOT__lsu__DOT__mem_access_control 
        = ((0x119U == (IData)(vlSelf->Core__DOT__lsu__DOT___mem_access_control_T))
            ? 1U : ((0x118U == (IData)(vlSelf->Core__DOT__lsu__DOT___mem_access_control_T))
                     ? 0U : ((0x11aU == (IData)(vlSelf->Core__DOT__lsu__DOT___mem_access_control_T))
                              ? 2U : ((0x1dU == (IData)(vlSelf->Core__DOT__lsu__DOT___mem_access_control_T))
                                       ? 5U : ((0x19U 
                                                == (IData)(vlSelf->Core__DOT__lsu__DOT___mem_access_control_T))
                                                ? 1U
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->Core__DOT__lsu__DOT___mem_access_control_T))
                                                    ? 4U
                                                    : 
                                                   ((0x18U 
                                                     == (IData)(vlSelf->Core__DOT__lsu__DOT___mem_access_control_T))
                                                     ? 0U
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->Core__DOT__lsu__DOT___mem_access_control_T)) 
                                                     << 1U))))))));
    vlSelf->Core__DOT__lsu__DOT__io_memory_w_valid_0 
        = ((~ (IData)(vlSelf->Core__DOT___arbiter_io_lsu_aw_ready)) 
           & (IData)(vlSelf->Core__DOT__lsu__DOT____VdfgTmp_hf7573e74__0));
    vlSelf->Core__DOT___arbiter_io_axi_ar_valid = (
                                                   (0U 
                                                    != (IData)(vlSelf->Core__DOT__arbiter__DOT__state)) 
                                                   & ((1U 
                                                       == (IData)(vlSelf->Core__DOT__arbiter__DOT__state))
                                                       ? (IData)(vlSelf->Core__DOT___ifu_io_memory_ar_valid)
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->Core__DOT__arbiter__DOT__state)) 
                                                       & (IData)(vlSelf->Core__DOT___lsu_io_memory_ar_valid))));
    vlSelf->Core__DOT___idu_io_out_valid = ((~ ((0U 
                                                 == (IData)(vlSelf->Core__DOT__idu__DOT__state)) 
                                                | (1U 
                                                   == (IData)(vlSelf->Core__DOT__idu__DOT__state)))) 
                                            & (2U == (IData)(vlSelf->Core__DOT__idu__DOT__state)));
    vlSelf->Core__DOT__exu__DOT__io_in_ready_0 = ((0U 
                                                   == (IData)(vlSelf->Core__DOT__exu__DOT__state)) 
                                                  & (IData)(vlSelf->Core__DOT___idu_io_out_valid));
    vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp 
        = (0x1fU & ((0x33U == (0x7fU & vlSelf->Core__DOT__exu__DOT__exu_reg_inst))
                     ? ((0x27U >= (0x3fU & ((IData)(5U) 
                                            * (7U & 
                                               (vlSelf->Core__DOT__exu__DOT__exu_reg_inst 
                                                >> 0xcU)))))
                         ? (IData)(((0x10d0000000ULL 
                                     | (QData)((IData)(
                                                       (0x4314e0U 
                                                        | (((0U 
                                                             == 
                                                             (vlSelf->Core__DOT__exu__DOT__exu_reg_inst 
                                                              >> 0x19U)) 
                                                            << 0x19U) 
                                                           | (0U 
                                                              != 
                                                              (vlSelf->Core__DOT__exu__DOT__exu_reg_inst 
                                                               >> 0x19U))))))) 
                                    >> (0x3fU & ((IData)(5U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->Core__DOT__exu__DOT__exu_reg_inst 
                                                     >> 0xcU))))))
                         : 0U) : ((0x13U == (0x7fU 
                                             & vlSelf->Core__DOT__exu__DOT__exu_reg_inst))
                                   ? ((0x27U >= (0x3fU 
                                                 & ((IData)(5U) 
                                                    * 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__exu__DOT__exu_reg_inst 
                                                        >> 0xcU)))))
                                       ? (IData)(((0x10d0000000ULL 
                                                   | (QData)((IData)(
                                                                     (0x4314e0U 
                                                                      | ((0U 
                                                                          == 
                                                                          (vlSelf->Core__DOT__exu__DOT__exu_reg_inst 
                                                                           >> 0x19U)) 
                                                                         << 0x19U))))) 
                                                  >> 
                                                  (0x3fU 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__exu__DOT__exu_reg_inst 
                                                          >> 0xcU))))))
                                       : 0U) : (((0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Core__DOT__exu__DOT__exu_reg_inst)) 
                                                 | ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->Core__DOT__exu__DOT__exu_reg_inst)) 
                                                    | ((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->Core__DOT__exu__DOT__exu_reg_inst)) 
                                                       | (0x37U 
                                                          != 
                                                          (0x7fU 
                                                           & vlSelf->Core__DOT__exu__DOT__exu_reg_inst)))))
                                                 ? 0U
                                                 : 0xfU))));
    if (((IData)(vlSelf->Core__DOT__idu__DOT__io_in_ready_0) 
         & (IData)(vlSelf->Core__DOT___ifu_io_out_valid))) {
        vlSelf->Core__DOT__idu__DOT__idu_reg_inst = vlSelf->io_inst_debug;
    }
    vlSelf->io_inst_debug = ((IData)(vlSelf->Core__DOT__ifu__DOT___GEN_3)
                              ? vlSelf->Core__DOT__ifu__DOT__if_inst_buffer
                              : 0U);
    vlSelf->Core__DOT___ifu_io_out_valid = ((~ (IData)(vlSelf->Core__DOT__ifu__DOT____VdfgTmp_h111114cf__0)) 
                                            & (3U == (IData)(vlSelf->Core__DOT__ifu__DOT__state)));
    if (VL_UNLIKELY((0x100073U == vlSelf->io_inst_debug))) {
        VL_WRITEF("EBREAK: Simulation exiting...\n");
        VCore___024root____Vdpiimwrap_Core__DOT__ifu__DOT__ebreakHandler__DOT__simulation_exit_TOP();
    }
    vlSelf->Core__DOT__idu__DOT__io_in_ready_0 = ((0U 
                                                   == (IData)(vlSelf->Core__DOT__idu__DOT__state)) 
                                                  & (IData)(vlSelf->Core__DOT___ifu_io_out_valid));
    vlSelf->Core__DOT___regfile_rs1_data = vlSelf->Core__DOT__regfile__DOT__rf
        [(0x1fU & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                   >> 0xfU))];
    vlSelf->Core__DOT___regfile_rs2_data = vlSelf->Core__DOT__regfile__DOT__rf
        [(0x1fU & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                   >> 0x14U))];
    vlSelf->Core__DOT___idu_io_out_bits_alu_op1 = (
                                                   ((~ 
                                                     ((0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->Core__DOT__idu__DOT__idu_reg_inst)) 
                                                      | ((0x33U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->Core__DOT__idu__DOT__idu_reg_inst)) 
                                                         | ((0x23U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->Core__DOT__idu__DOT__idu_reg_inst)) 
                                                            | ((3U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->Core__DOT__idu__DOT__idu_reg_inst)) 
                                                               | ((0x63U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->Core__DOT__idu__DOT__idu_reg_inst)) 
                                                                  | ((0x6fU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->Core__DOT__idu__DOT__idu_reg_inst)) 
                                                                     | (0x67U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))))))))) 
                                                    & ((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->Core__DOT__idu__DOT__idu_reg_inst)) 
                                                       | (0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelf->Core__DOT__idu__DOT__idu_reg_inst)
                                                    : vlSelf->Core__DOT___regfile_rs1_data);
    __Vtemp_6[0U] = (IData)((((QData)((IData)((((- (IData)(
                                                           (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                  >> 0x14U)))) 
                              << 0x20U) | (QData)((IData)(vlSelf->Core__DOT__idu__DOT__idu_reg_pc))));
    __Vtemp_6[1U] = (IData)(((((QData)((IData)((((- (IData)(
                                                            (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                   >> 0x14U)))) 
                               << 0x20U) | (QData)((IData)(vlSelf->Core__DOT__idu__DOT__idu_reg_pc))) 
                             >> 0x20U));
    __Vtemp_6[2U] = (((- (IData)((vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                  >> 0x1fU))) << 0xcU) 
                     | ((0xfe0U & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                    >> 7U))));
    __Vtemp_6[3U] = vlSelf->Core__DOT___regfile_rs2_data;
    vlSelf->Core__DOT___idu_io_out_bits_alu_op2 = (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(7,7,32, 
                                                                      ((0x13U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                                                        ? 1U
                                                                        : 
                                                                       ((0x33U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                                                         ? 3U
                                                                         : 
                                                                        ((0x23U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                                                          ? 2U
                                                                          : 
                                                                         (3U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))))), 5U)))
                                                     ? 0U
                                                     : 
                                                    (__Vtemp_6[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x7fU 
                                                        & VL_SHIFTL_III(7,7,32, 
                                                                        ((0x13U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                                                          ? 1U
                                                                          : 
                                                                         ((0x33U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                                                           ? 3U
                                                                           : 
                                                                          ((0x23U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                                                            ? 2U
                                                                            : 
                                                                           (3U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))))), 5U))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(7,7,32, 
                                                                       ((0x13U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                                                         ? 1U
                                                                         : 
                                                                        ((0x33U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                                                          ? 3U
                                                                          : 
                                                                         ((0x23U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                                                           ? 2U
                                                                           : 
                                                                          (3U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))))), 5U))))) 
                                                   | (__Vtemp_6[
                                                      (3U 
                                                       & (VL_SHIFTL_III(7,7,32, 
                                                                        ((0x13U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                                                          ? 1U
                                                                          : 
                                                                         ((0x33U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                                                           ? 3U
                                                                           : 
                                                                          ((0x23U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                                                            ? 2U
                                                                            : 
                                                                           (3U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))))), 5U) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(7,7,32, 
                                                                       ((0x13U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                                                         ? 1U
                                                                         : 
                                                                        ((0x33U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                                                          ? 3U
                                                                          : 
                                                                         ((0x23U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                                                           ? 2U
                                                                           : 
                                                                          (3U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))))), 5U))));
    vlSelf->Core__DOT__idu__DOT__br_lt = VL_LTS_III(32, vlSelf->Core__DOT___regfile_rs1_data, vlSelf->Core__DOT___regfile_rs2_data);
    vlSelf->Core__DOT__idu__DOT__br_ltu = (vlSelf->Core__DOT___regfile_rs1_data 
                                           < vlSelf->Core__DOT___regfile_rs2_data);
    vlSelf->Core__DOT__idu__DOT__br_eq = (vlSelf->Core__DOT___regfile_rs1_data 
                                          == vlSelf->Core__DOT___regfile_rs2_data);
    vlSelf->Core__DOT__exu__DOT___alu_instance_io_result 
        = ((0U == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
            ? (vlSelf->Core__DOT___idu_io_out_bits_alu_op1 
               + vlSelf->Core__DOT___idu_io_out_bits_alu_op2)
            : ((1U == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                ? (vlSelf->Core__DOT___idu_io_out_bits_alu_op1 
                   - vlSelf->Core__DOT___idu_io_out_bits_alu_op2)
                : ((2U == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                    ? (vlSelf->Core__DOT___idu_io_out_bits_alu_op1 
                       & vlSelf->Core__DOT___idu_io_out_bits_alu_op2)
                    : ((3U == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                        ? (vlSelf->Core__DOT___idu_io_out_bits_alu_op1 
                           | vlSelf->Core__DOT___idu_io_out_bits_alu_op2)
                        : ((4U == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                            ? (vlSelf->Core__DOT___idu_io_out_bits_alu_op1 
                               ^ vlSelf->Core__DOT___idu_io_out_bits_alu_op2)
                            : ((5U == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                ? VL_LTS_III(32, vlSelf->Core__DOT___idu_io_out_bits_alu_op1, vlSelf->Core__DOT___idu_io_out_bits_alu_op2)
                                : ((6U == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                    ? (vlSelf->Core__DOT___idu_io_out_bits_alu_op1 
                                       < vlSelf->Core__DOT___idu_io_out_bits_alu_op2)
                                    : ((7U == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                        ? (vlSelf->Core__DOT___idu_io_out_bits_alu_op1 
                                           << (0x1fU 
                                               & vlSelf->Core__DOT___idu_io_out_bits_alu_op2))
                                        : ((8U == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                            ? VL_SHIFTRS_III(32,32,5, vlSelf->Core__DOT___idu_io_out_bits_alu_op1, 
                                                             (0x1fU 
                                                              & vlSelf->Core__DOT___idu_io_out_bits_alu_op2))
                                            : ((9U 
                                                == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                                ? (vlSelf->Core__DOT___idu_io_out_bits_alu_op1 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->Core__DOT___idu_io_out_bits_alu_op2))
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                                    ? vlSelf->Core__DOT___idu_io_out_bits_alu_op1
                                                    : 0U)))))))))));
    vlSelf->Core__DOT__idu__DOT___branch_taken_T_4 
        = (IData)(((0U == (0x7000U & vlSelf->Core__DOT__idu__DOT__idu_reg_inst)) 
                   & (IData)(vlSelf->Core__DOT__idu__DOT__br_eq)));
    vlSelf->Core__DOT___idu_io_pc_sel = ((0x63U == 
                                          (0x7fU & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                          ? (2U & (
                                                   (((0x80U 
                                                      & ((~ (IData)(vlSelf->Core__DOT__idu__DOT__br_ltu)) 
                                                         << 7U)) 
                                                     | (((IData)(vlSelf->Core__DOT__idu__DOT__br_ltu) 
                                                         << 6U) 
                                                        | ((0x20U 
                                                            & ((~ (IData)(vlSelf->Core__DOT__idu__DOT__br_lt)) 
                                                               << 5U)) 
                                                           | (((IData)(vlSelf->Core__DOT__idu__DOT__br_lt) 
                                                               << 4U) 
                                                              | (((IData)(vlSelf->Core__DOT__idu__DOT___branch_taken_T_4) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelf->Core__DOT__idu__DOT___branch_taken_T_4) 
                                                                     << 2U) 
                                                                    | ((2U 
                                                                        & ((~ (IData)(vlSelf->Core__DOT__idu__DOT__br_eq)) 
                                                                           << 1U)) 
                                                                       | (IData)(vlSelf->Core__DOT__idu__DOT___branch_taken_T_4)))))))) 
                                                    >> 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                        >> 0xcU))) 
                                                   << 1U))
                                          : ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                              ? 3U : 
                                             (0x67U 
                                              == (0x7fU 
                                                  & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))));
}

void VCore___024root____Vdpiimwrap_Core__DOT__sram__DOT__sram__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void VCore___024root____Vdpiimwrap_Core__DOT__sram__DOT__sram__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void VCore___024root___nba_sequent__TOP__3(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->Core__DOT__sram__DOT__sram__DOT__rd_req_valid_delayed) {
        VCore___024root____Vdpiimwrap_Core__DOT__sram__DOT__sram__DOT__pmem_read_TOP(vlSelf->Core__DOT__sram__DOT__sram__DOT__addr_delayed, vlSelf->__Vfunc_Core__DOT__sram__DOT__sram__DOT__pmem_read__2__Vfuncout);
        vlSelf->Core__DOT__sram__DOT___sram_data_out 
            = vlSelf->__Vfunc_Core__DOT__sram__DOT__sram__DOT__pmem_read__2__Vfuncout;
        vlSelf->Core__DOT__sram__DOT___sram_rd_res_valid = 1U;
        vlSelf->Core__DOT__sram__DOT___sram_wt_res_valid = 0U;
    } else if (vlSelf->Core__DOT__sram__DOT__sram__DOT__wt_req_valid_delayed) {
        VCore___024root____Vdpiimwrap_Core__DOT__sram__DOT__sram__DOT__pmem_write_TOP(vlSelf->Core__DOT__sram__DOT__sram__DOT__waddr_delayed, vlSelf->Core__DOT__sram__DOT__sram__DOT__wdata_delayed, (IData)(vlSelf->Core__DOT__sram__DOT__sram__DOT__wmask_delayed));
        vlSelf->Core__DOT__sram__DOT___sram_data_out 
            = vlSelf->Core__DOT__sram__DOT__sram__DOT__wdata_delayed;
        vlSelf->Core__DOT__sram__DOT___sram_rd_res_valid = 0U;
        vlSelf->Core__DOT__sram__DOT___sram_wt_res_valid = 1U;
    } else {
        vlSelf->Core__DOT__sram__DOT___sram_data_out = 0U;
        vlSelf->Core__DOT__sram__DOT___sram_rd_res_valid = 0U;
        vlSelf->Core__DOT__sram__DOT___sram_wt_res_valid = 0U;
    }
}

VL_INLINE_OPT void VCore___024root___nba_comb__TOP__0(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->Core__DOT__sram__DOT____VdfgTmp_hb61e3587__0 
        = ((2U == (IData)(vlSelf->Core__DOT__sram__DOT__state)) 
           & (IData)(vlSelf->Core__DOT__sram__DOT___sram_rd_res_valid));
    vlSelf->Core__DOT___sram_io_axi_r_valid = ((~ (IData)(vlSelf->Core__DOT__sram__DOT___GEN_2)) 
                                               & (IData)(vlSelf->Core__DOT__sram__DOT____VdfgTmp_hb61e3587__0));
    vlSelf->Core__DOT___sram_io_axi_r_data = ((1U & 
                                               ((~ (IData)(vlSelf->Core__DOT__sram__DOT____VdfgTmp_hb61e3587__0)) 
                                                | (IData)(vlSelf->Core__DOT__sram__DOT___GEN_2)))
                                               ? 0U
                                               : vlSelf->Core__DOT__sram__DOT___sram_data_out);
    vlSelf->Core__DOT___arbiter_io_ifu_r_valid = ((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h4b16e7a1__0) 
                                                  & (IData)(vlSelf->Core__DOT___sram_io_axi_r_valid));
    vlSelf->Core__DOT___arbiter_io_lsu_r_data = ((IData)(vlSelf->Core__DOT__arbiter__DOT___GEN_3)
                                                  ? 0U
                                                  : vlSelf->Core__DOT___sram_io_axi_r_data);
    vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
        = (vlSelf->Core__DOT___arbiter_io_lsu_r_data 
           >> (0x18U & (vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                        << 3U)));
}

void VCore___024root___eval_nba(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCore___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCore___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCore___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCore___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCore___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

void VCore___024root___eval_triggers__act(VCore___024root* vlSelf);

bool VCore___024root___eval_phase__act(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VCore___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VCore___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VCore___024root___eval_phase__nba(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VCore___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__ico(VCore___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__nba(VCore___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__act(VCore___024root* vlSelf);
#endif  // VL_DEBUG

void VCore___024root___eval(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VCore___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("npc-chisel/generated/Core.sv", 956, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VCore___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VCore___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("npc-chisel/generated/Core.sv", 956, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VCore___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("npc-chisel/generated/Core.sv", 956, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VCore___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VCore___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VCore___024root___eval_debug_assertions(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
