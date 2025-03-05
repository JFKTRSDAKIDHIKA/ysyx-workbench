// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "VCore__pch.h"
#include "VCore___024root.h"

VL_ATTR_COLD void VCore___024root___eval_static(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_static\n"); );
}

VL_ATTR_COLD void VCore___024root___eval_initial__TOP(VCore___024root* vlSelf);

VL_ATTR_COLD void VCore___024root___eval_initial(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_initial\n"); );
    // Body
    VCore___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void VCore___024root___eval_initial__TOP(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->Core__DOT__regfile__DOT__rf[0U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[1U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[2U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[3U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[4U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[5U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[6U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[7U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[8U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[9U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0xaU] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0xbU] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0xcU] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0xdU] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0xeU] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0xfU] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0x10U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0x11U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0x12U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0x13U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0x14U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0x15U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0x16U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0x17U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0x18U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0x19U] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0x1aU] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0x1bU] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0x1cU] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0x1dU] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0x1eU] = 0U;
    vlSelf->Core__DOT__regfile__DOT__rf[0x1fU] = 0U;
    vlSelf->Core__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x20U;
}

VL_ATTR_COLD void VCore___024root___eval_final(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__stl(VCore___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VCore___024root___eval_phase__stl(VCore___024root* vlSelf);

VL_ATTR_COLD void VCore___024root___eval_settle(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VCore___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("npc-chisel/generated/Core.sv", 978, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VCore___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__stl(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VCore___024root____Vdpiimwrap_Core__DOT__regfile__DOT__get_register_values_TOP(VlUnpacked<IData/*31:0*/, 32> rf);
void VCore___024root____Vdpiimwrap_Core__DOT__sram__DOT__sram__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void VCore___024root____Vdpiimwrap_Core__DOT__sram__DOT__sram__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void VCore___024root____Vdpiimwrap_Core__DOT__ifu__DOT__ebreakHandler__DOT__simulation_exit_TOP();

VL_ATTR_COLD void VCore___024root___stl_sequent__TOP__0(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    VCore___024root____Vdpiimwrap_Core__DOT__regfile__DOT__get_register_values_TOP(vlSelf->Core__DOT__regfile__DOT__rf);
    vlSelf->io_pc_debug = vlSelf->Core__DOT__ifu__DOT__pc;
    vlSelf->io_ifu_state_debug = vlSelf->Core__DOT__ifu__DOT__state;
    vlSelf->io_lsu_state_debug = vlSelf->Core__DOT__lsu__DOT__state;
    vlSelf->io_lsu_reg_inst_debug = vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst;
    vlSelf->io_wbu_state_debug = vlSelf->Core__DOT__wbu__DOT__state;
    vlSelf->io_wbu_reg_dmem_rdata_debug = vlSelf->Core__DOT__wbu__DOT__wbu_reg_dmem_rdata;
    vlSelf->io_Arbiter_state_debug = vlSelf->Core__DOT__arbiter__DOT__state;
    vlSelf->Core__DOT__idu__DOT___GEN = (0U == (IData)(vlSelf->Core__DOT__idu__DOT__state));
    vlSelf->Core__DOT__idu__DOT___GEN_0 = (1U == (IData)(vlSelf->Core__DOT__idu__DOT__state));
    vlSelf->Core__DOT__idu__DOT___GEN_1 = (2U == (IData)(vlSelf->Core__DOT__idu__DOT__state));
    vlSelf->Core__DOT__exu__DOT___GEN = (0U == (IData)(vlSelf->Core__DOT__exu__DOT__state));
    vlSelf->Core__DOT__exu__DOT___GEN_0 = (1U == (IData)(vlSelf->Core__DOT__exu__DOT__state));
    vlSelf->Core__DOT__exu__DOT___GEN_1 = (2U == (IData)(vlSelf->Core__DOT__exu__DOT__state));
    vlSelf->Core__DOT__sram__DOT___GEN = (0U == (IData)(vlSelf->Core__DOT__sram__DOT__state));
    vlSelf->Core__DOT__sram__DOT___GEN_0 = (1U == (IData)(vlSelf->Core__DOT__sram__DOT__state));
    vlSelf->Core__DOT__sram__DOT___GEN_1 = (2U == (IData)(vlSelf->Core__DOT__sram__DOT__state));
    vlSelf->io_dmem_rdata_debug = vlSelf->Core__DOT__lsu__DOT__dmem_rdata_delay;
    vlSelf->io_dmem_wdata_debug = (vlSelf->Core__DOT__lsu__DOT__lsu_reg_rs2_data 
                                   << (0x18U & (vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                                << 3U)));
    vlSelf->Core__DOT__lsu__DOT___mem_access_control_T 
        = ((0x3f8U & (vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst 
                      << 3U)) | (7U & (vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst 
                                       >> 0xcU)));
    vlSelf->Core__DOT___idu_io_out_valid = ((~ ((0U 
                                                 == (IData)(vlSelf->Core__DOT__idu__DOT__state)) 
                                                | (1U 
                                                   == (IData)(vlSelf->Core__DOT__idu__DOT__state)))) 
                                            & (2U == (IData)(vlSelf->Core__DOT__idu__DOT__state)));
    vlSelf->Core__DOT___exu_io_out_valid = ((~ ((0U 
                                                 == (IData)(vlSelf->Core__DOT__exu__DOT__state)) 
                                                | (1U 
                                                   == (IData)(vlSelf->Core__DOT__exu__DOT__state)))) 
                                            & (2U == (IData)(vlSelf->Core__DOT__exu__DOT__state)));
    vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h4b16e7a1__0 
        = ((0U != (IData)(vlSelf->Core__DOT__arbiter__DOT__state)) 
           & (1U == (IData)(vlSelf->Core__DOT__arbiter__DOT__state)));
    vlSelf->Core__DOT___ifu_io_memory_ar_valid = ((0U 
                                                   != (IData)(vlSelf->Core__DOT__ifu__DOT__state)) 
                                                  & (1U 
                                                     == (IData)(vlSelf->Core__DOT__ifu__DOT__state)));
    vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp 
        = (0x1fU & ((0x33U == (0x7fU & vlSelf->Core__DOT__exu__DOT__exu_reg_inst))
                     ? ((0x27U >= (0x3fU & ((IData)(5U) 
                                            * (7U & 
                                               (vlSelf->Core__DOT__exu__DOT__exu_reg_inst 
                                                >> 0xcU)))))
                         ? (IData)(((0x10d0000000ULL 
                                     | (QData)((IData)(
                                                       (0x4314e0U 
                                                        | (((0x20U 
                                                             != 
                                                             (vlSelf->Core__DOT__exu__DOT__exu_reg_inst 
                                                              >> 0x19U)) 
                                                            << 0x19U) 
                                                           | (0x20U 
                                                              == 
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
                                                                      | ((0x20U 
                                                                          != 
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
    vlSelf->Core__DOT__sram__DOT__io_axi_w_ready_0 
        = ((~ (IData)(vlSelf->reset)) & (0U == (IData)(vlSelf->Core__DOT__sram__DOT__state)));
    vlSelf->Core__DOT__wbu__DOT____VdfgTmp_he33a7f1b__0 
        = ((0x67U == (0x7fU & vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst)) 
           | (0x6fU == (0x7fU & vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst)));
    vlSelf->Core__DOT__wbu__DOT____VdfgTmp_h00d1e98b__0 
        = ((0x13U == (0x7fU & vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst)) 
           | ((0x33U == (0x7fU & vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst)) 
              | ((0x17U == (0x7fU & vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst)) 
                 | (0x37U == (0x7fU & vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst)))));
    vlSelf->Core__DOT__lsu__DOT__isStore = ((0U != (IData)(vlSelf->Core__DOT__lsu__DOT__state)) 
                                            & ((1U 
                                                == (IData)(vlSelf->Core__DOT__lsu__DOT__state))
                                                ? (0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst))
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->Core__DOT__lsu__DOT__state)) 
                                                   & (0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst)))));
    vlSelf->Core__DOT__ifu__DOT___GEN_2 = ((0U == (IData)(vlSelf->Core__DOT__ifu__DOT__state)) 
                                           | (1U == (IData)(vlSelf->Core__DOT__ifu__DOT__state)));
    vlSelf->Core__DOT__sram__DOT____VdfgTmp_h93f383d4__0 
        = ((IData)(vlSelf->reset) | (0U == (IData)(vlSelf->Core__DOT__sram__DOT__state)));
    vlSelf->Core__DOT__arbiter__DOT___GEN_2 = ((0U 
                                                == (IData)(vlSelf->Core__DOT__arbiter__DOT__state)) 
                                               | (1U 
                                                  == (IData)(vlSelf->Core__DOT__arbiter__DOT__state)));
    vlSelf->Core__DOT__lsu__DOT__isLoad = ((0U != (IData)(vlSelf->Core__DOT__lsu__DOT__state)) 
                                           & ((1U == (IData)(vlSelf->Core__DOT__lsu__DOT__state))
                                               ? (3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst))
                                               : ((2U 
                                                   == (IData)(vlSelf->Core__DOT__lsu__DOT__state)) 
                                                  & (3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst)))));
    vlSelf->Core__DOT__lsu__DOT___GEN_2 = ((0U == (IData)(vlSelf->Core__DOT__lsu__DOT__state)) 
                                           | (1U == (IData)(vlSelf->Core__DOT__lsu__DOT__state)));
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
    vlSelf->Core__DOT___regfile_rs1_data = vlSelf->Core__DOT__regfile__DOT__rf
        [(0x1fU & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                   >> 0xfU))];
    vlSelf->Core__DOT___regfile_rs2_data = vlSelf->Core__DOT__regfile__DOT__rf
        [(0x1fU & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                   >> 0x14U))];
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
    vlSelf->Core__DOT__exu__DOT__io_in_ready_0 = ((0U 
                                                   == (IData)(vlSelf->Core__DOT__exu__DOT__state)) 
                                                  & (IData)(vlSelf->Core__DOT___idu_io_out_valid));
    vlSelf->Core__DOT__lsu__DOT__io_in_ready_0 = ((0U 
                                                   == (IData)(vlSelf->Core__DOT__lsu__DOT__state)) 
                                                  & (IData)(vlSelf->Core__DOT___exu_io_out_valid));
    vlSelf->io_wb_wen_debug = (((IData)(vlSelf->Core__DOT__wbu__DOT____VdfgTmp_he33a7f1b__0) 
                                | ((3U == (0x7fU & vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst)) 
                                   | (IData)(vlSelf->Core__DOT__wbu__DOT____VdfgTmp_h00d1e98b__0))) 
                               & (1U == (IData)(vlSelf->Core__DOT__wbu__DOT__state)));
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
    vlSelf->Core__DOT___ifu_io_memory_r_ready = ((~ (IData)(vlSelf->Core__DOT__ifu__DOT___GEN_2)) 
                                                 & (2U 
                                                    == (IData)(vlSelf->Core__DOT__ifu__DOT__state)));
    vlSelf->Core__DOT__ifu__DOT____VdfgTmp_h111114cf__0 
        = ((IData)(vlSelf->Core__DOT__ifu__DOT___GEN_2) 
           | (2U == (IData)(vlSelf->Core__DOT__ifu__DOT__state)));
    vlSelf->Core__DOT__sram__DOT___GEN_2 = ((IData)(vlSelf->Core__DOT__sram__DOT____VdfgTmp_h93f383d4__0) 
                                            | (1U == (IData)(vlSelf->Core__DOT__sram__DOT__state)));
    vlSelf->Core__DOT__arbiter__DOT___GEN_3 = ((2U 
                                                != (IData)(vlSelf->Core__DOT__arbiter__DOT__state)) 
                                               | (IData)(vlSelf->Core__DOT__arbiter__DOT___GEN_2));
    vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0 
        = ((~ (IData)(vlSelf->Core__DOT__arbiter__DOT___GEN_2)) 
           & (2U == (IData)(vlSelf->Core__DOT__arbiter__DOT__state)));
    vlSelf->io_lsu_is_ld_or_st_debug = ((IData)(vlSelf->Core__DOT__lsu__DOT__isLoad) 
                                        | (IData)(vlSelf->Core__DOT__lsu__DOT__isStore));
    vlSelf->Core__DOT___lsu_io_out_valid = ((~ ((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_2) 
                                                | (2U 
                                                   == (IData)(vlSelf->Core__DOT__lsu__DOT__state)))) 
                                            & (3U == (IData)(vlSelf->Core__DOT__lsu__DOT__state)));
    vlSelf->Core__DOT__lsu__DOT____VdfgTmp_h0d5fed69__0 
        = ((~ (IData)(vlSelf->Core__DOT__lsu__DOT___GEN_2)) 
           & (2U == (IData)(vlSelf->Core__DOT__lsu__DOT__state)));
    vlSelf->Core__DOT__sram__DOT____VdfgTmp_hb61e3587__0 
        = ((2U == (IData)(vlSelf->Core__DOT__sram__DOT__state)) 
           & (IData)(vlSelf->Core__DOT__sram__DOT___sram_rd_res_valid));
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
    __Vtemp_4[0U] = (IData)((((QData)((IData)((((- (IData)(
                                                           (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                  >> 0x14U)))) 
                              << 0x20U) | (QData)((IData)(vlSelf->Core__DOT__idu__DOT__idu_reg_pc))));
    __Vtemp_4[1U] = (IData)(((((QData)((IData)((((- (IData)(
                                                            (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                   >> 0x14U)))) 
                               << 0x20U) | (QData)((IData)(vlSelf->Core__DOT__idu__DOT__idu_reg_pc))) 
                             >> 0x20U));
    __Vtemp_4[2U] = (((- (IData)((vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                  >> 0x1fU))) << 0xcU) 
                     | ((0xfe0U & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                    >> 7U))));
    __Vtemp_4[3U] = vlSelf->Core__DOT___regfile_rs2_data;
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
                                                    (__Vtemp_4[
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
                                                   | (__Vtemp_4[
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
    __Vtemp_6[0U] = 0U;
    __Vtemp_6[1U] = ((IData)(4U) + vlSelf->Core__DOT__wbu__DOT__wbu_reg_pc);
    __Vtemp_6[2U] = (IData)((((QData)((IData)(vlSelf->Core__DOT__wbu__DOT__wbu_reg_dmem_rdata)) 
                              << 0x20U) | (QData)((IData)(vlSelf->Core__DOT__wbu__DOT__wbu_reg_result))));
    __Vtemp_6[3U] = (IData)(((((QData)((IData)(vlSelf->Core__DOT__wbu__DOT__wbu_reg_dmem_rdata)) 
                               << 0x20U) | (QData)((IData)(vlSelf->Core__DOT__wbu__DOT__wbu_reg_result))) 
                             >> 0x20U));
    vlSelf->io_wb_data_debug = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->io_wb_sel_debug), 5U)))
                                  ? 0U : (__Vtemp_6[
                                          (((IData)(0x1fU) 
                                            + (0x7fU 
                                               & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->io_wb_sel_debug), 5U))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->io_wb_sel_debug), 5U))))) 
                                | (__Vtemp_6[(3U & 
                                              (VL_SHIFTL_III(7,7,32, (IData)(vlSelf->io_wb_sel_debug), 5U) 
                                               >> 5U))] 
                                   >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->io_wb_sel_debug), 5U))));
    vlSelf->Core__DOT___ifu_io_out_valid = ((~ (IData)(vlSelf->Core__DOT__ifu__DOT____VdfgTmp_h111114cf__0)) 
                                            & (3U == (IData)(vlSelf->Core__DOT__ifu__DOT__state)));
    vlSelf->Core__DOT__ifu__DOT___GEN_3 = ((IData)(vlSelf->Core__DOT__ifu__DOT____VdfgTmp_h111114cf__0) 
                                           | (3U == (IData)(vlSelf->Core__DOT__ifu__DOT__state)));
    vlSelf->Core__DOT___arbiter_io_lsu_aw_ready = ((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0) 
                                                   & (IData)(vlSelf->Core__DOT__sram__DOT__io_axi_w_ready_0));
    vlSelf->Core__DOT__wbu__DOT__io_in_ready_0 = ((0U 
                                                   == (IData)(vlSelf->Core__DOT__wbu__DOT__state)) 
                                                  & (IData)(vlSelf->Core__DOT___lsu_io_out_valid));
    vlSelf->Core__DOT__lsu__DOT__io_memory_b_ready_0 
        = ((IData)(vlSelf->Core__DOT__lsu__DOT____VdfgTmp_h0d5fed69__0) 
           & ((~ (IData)(vlSelf->Core__DOT__lsu__DOT__isLoad)) 
              & (IData)(vlSelf->Core__DOT__lsu__DOT__isStore)));
    vlSelf->Core__DOT__lsu__DOT__io_memory_r_ready_0 
        = ((IData)(vlSelf->Core__DOT__lsu__DOT____VdfgTmp_h0d5fed69__0) 
           & (IData)(vlSelf->Core__DOT__lsu__DOT__isLoad));
    vlSelf->Core__DOT___sram_io_axi_r_valid = ((~ (IData)(vlSelf->Core__DOT__sram__DOT___GEN_2)) 
                                               & (IData)(vlSelf->Core__DOT__sram__DOT____VdfgTmp_hb61e3587__0));
    vlSelf->Core__DOT___sram_io_axi_r_data = ((1U & 
                                               ((~ (IData)(vlSelf->Core__DOT__sram__DOT____VdfgTmp_hb61e3587__0)) 
                                                | (IData)(vlSelf->Core__DOT__sram__DOT___GEN_2)))
                                               ? 0U
                                               : vlSelf->Core__DOT__sram__DOT___sram_data_out);
    vlSelf->Core__DOT__exu__DOT___alu_instance_io_result 
        = ((0xfU == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
            ? vlSelf->Core__DOT___idu_io_out_bits_alu_op1
            : ((8U == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                ? VL_SHIFTRS_III(32,32,5, vlSelf->Core__DOT___idu_io_out_bits_alu_op1, 
                                 (0x1fU & vlSelf->Core__DOT___idu_io_out_bits_alu_op2))
                : ((9U == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                    ? (vlSelf->Core__DOT___idu_io_out_bits_alu_op1 
                       >> (0x1fU & vlSelf->Core__DOT___idu_io_out_bits_alu_op2))
                    : ((7U == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                        ? (vlSelf->Core__DOT___idu_io_out_bits_alu_op1 
                           << (0x1fU & vlSelf->Core__DOT___idu_io_out_bits_alu_op2))
                        : ((6U == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                            ? (vlSelf->Core__DOT___idu_io_out_bits_alu_op1 
                               < vlSelf->Core__DOT___idu_io_out_bits_alu_op2)
                            : ((5U == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                ? VL_LTS_III(32, vlSelf->Core__DOT___idu_io_out_bits_alu_op1, vlSelf->Core__DOT___idu_io_out_bits_alu_op2)
                                : ((4U == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                    ? (vlSelf->Core__DOT___idu_io_out_bits_alu_op1 
                                       ^ vlSelf->Core__DOT___idu_io_out_bits_alu_op2)
                                    : ((3U == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                        ? (vlSelf->Core__DOT___idu_io_out_bits_alu_op1 
                                           | vlSelf->Core__DOT___idu_io_out_bits_alu_op2)
                                        : ((2U == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                            ? (vlSelf->Core__DOT___idu_io_out_bits_alu_op1 
                                               & vlSelf->Core__DOT___idu_io_out_bits_alu_op2)
                                            : ((1U 
                                                == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                                ? (vlSelf->Core__DOT___idu_io_out_bits_alu_op1 
                                                   - vlSelf->Core__DOT___idu_io_out_bits_alu_op2)
                                                : (
                                                   (0U 
                                                    == (IData)(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp))
                                                    ? 
                                                   (vlSelf->Core__DOT___idu_io_out_bits_alu_op1 
                                                    + vlSelf->Core__DOT___idu_io_out_bits_alu_op2)
                                                    : 0U)))))))))));
    vlSelf->Core__DOT__idu__DOT___branch_taken_T_4 
        = (IData)(((0U == (0x7000U & vlSelf->Core__DOT__idu__DOT__idu_reg_inst)) 
                   & (IData)(vlSelf->Core__DOT__idu__DOT__br_eq)));
    vlSelf->Core__DOT__idu__DOT__io_in_ready_0 = ((0U 
                                                   == (IData)(vlSelf->Core__DOT__idu__DOT__state)) 
                                                  & (IData)(vlSelf->Core__DOT___ifu_io_out_valid));
    vlSelf->io_inst_debug = ((IData)(vlSelf->Core__DOT__ifu__DOT___GEN_3)
                              ? vlSelf->Core__DOT__ifu__DOT__if_inst_buffer
                              : 0U);
    vlSelf->Core__DOT__lsu__DOT___GEN_3 = (1U & ((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_2) 
                                                 | ((2U 
                                                     != (IData)(vlSelf->Core__DOT__lsu__DOT__state)) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->Core__DOT__lsu__DOT__isStore) 
                                                         & (IData)(vlSelf->Core__DOT___arbiter_io_lsu_aw_ready))) 
                                                       | (IData)(vlSelf->Core__DOT__lsu__DOT__isLoad)))));
    vlSelf->Core__DOT___arbiter_io_axi_aw_valid = ((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0) 
                                                   & (IData)(vlSelf->Core__DOT__lsu__DOT__io_memory_b_ready_0));
    vlSelf->__VdfgTmp_hde5c20bb__0 = ((2U == (IData)(vlSelf->Core__DOT__arbiter__DOT__state)) 
                                      & (IData)(vlSelf->Core__DOT__lsu__DOT__io_memory_r_ready_0));
    vlSelf->Core__DOT___arbiter_io_ifu_r_valid = ((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h4b16e7a1__0) 
                                                  & (IData)(vlSelf->Core__DOT___sram_io_axi_r_valid));
    vlSelf->Core__DOT___arbiter_io_lsu_r_data = ((IData)(vlSelf->Core__DOT__arbiter__DOT___GEN_3)
                                                  ? 0U
                                                  : vlSelf->Core__DOT___sram_io_axi_r_data);
    vlSelf->Core__DOT___idu_io_pc_sel = ((0x63U == 
                                          (0x7fU & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                          ? (1U & (
                                                   ((0x80U 
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
                                                       >> 0xcU))))
                                          : ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                              ? 2U : 
                                             ((0x67U 
                                               == (0x7fU 
                                                   & vlSelf->Core__DOT__idu__DOT__idu_reg_inst))
                                               ? 3U
                                               : 0U)));
    if (VL_UNLIKELY((0x100073U == vlSelf->io_inst_debug))) {
        VL_WRITEF("EBREAK: Simulation exiting...\n");
        VCore___024root____Vdpiimwrap_Core__DOT__ifu__DOT__ebreakHandler__DOT__simulation_exit_TOP();
    }
    vlSelf->Core__DOT___arbiter_io_axi_ar_valid = (
                                                   (0U 
                                                    != (IData)(vlSelf->Core__DOT__arbiter__DOT__state)) 
                                                   & ((1U 
                                                       == (IData)(vlSelf->Core__DOT__arbiter__DOT__state))
                                                       ? (IData)(vlSelf->Core__DOT___ifu_io_memory_ar_valid)
                                                       : (IData)(vlSelf->__VdfgTmp_hde5c20bb__0)));
    vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
        = (vlSelf->Core__DOT___arbiter_io_lsu_r_data 
           >> (0x18U & (vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                        << 3U)));
}

VL_ATTR_COLD void VCore___024root___eval_stl(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VCore___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VCore___024root___eval_triggers__stl(VCore___024root* vlSelf);

VL_ATTR_COLD bool VCore___024root___eval_phase__stl(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VCore___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VCore___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__ico(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__act(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clock or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__nba(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clock or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCore___024root___ctor_var_reset(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_pc_debug = VL_RAND_RESET_I(32);
    vlSelf->io_inst_debug = VL_RAND_RESET_I(32);
    vlSelf->io_ifu_state_debug = VL_RAND_RESET_I(2);
    vlSelf->io_lsu_state_debug = VL_RAND_RESET_I(2);
    vlSelf->io_lsu_is_ld_or_st_debug = VL_RAND_RESET_I(1);
    vlSelf->io_lsu_reg_inst_debug = VL_RAND_RESET_I(32);
    vlSelf->io_dmem_wdata_debug = VL_RAND_RESET_I(32);
    vlSelf->io_dmem_rdata_debug = VL_RAND_RESET_I(32);
    vlSelf->io_wbu_state_debug = VL_RAND_RESET_I(2);
    vlSelf->io_wb_data_debug = VL_RAND_RESET_I(32);
    vlSelf->io_wb_wen_debug = VL_RAND_RESET_I(1);
    vlSelf->io_wb_sel_debug = VL_RAND_RESET_I(2);
    vlSelf->io_wbu_reg_dmem_rdata_debug = VL_RAND_RESET_I(32);
    vlSelf->io_Arbiter_state_debug = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT___sram_io_axi_r_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT___sram_io_axi_r_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT___arbiter_io_ifu_r_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT___arbiter_io_lsu_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT___arbiter_io_lsu_r_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT___arbiter_io_axi_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT___arbiter_io_axi_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT___regfile_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT___regfile_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT___lsu_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT___exu_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT___idu_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT___idu_io_out_bits_alu_op1 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT___idu_io_out_bits_alu_op2 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT___idu_io_pc_sel = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT___ifu_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT___ifu_io_memory_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT___ifu_io_memory_r_ready = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__ifu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ifu__DOT__if_inst_buffer = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ifu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__ifu__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__ifu__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__ifu__DOT__unnamedblk1__DOT___GEN_4 = VL_RAND_RESET_I(8);
    vlSelf->Core__DOT__ifu__DOT____VdfgTmp_h111114cf__0 = 0;
    vlSelf->Core__DOT__idu__DOT__idu_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__idu__DOT__idu_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__idu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__idu__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__idu__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__idu__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__idu__DOT__io_in_ready_0 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__idu__DOT__br_eq = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__idu__DOT__br_lt = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__idu__DOT__br_ltu = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__idu__DOT___branch_taken_T_4 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__exu__DOT___alu_instance_io_result = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__exu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__exu__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__exu__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__exu__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__exu__DOT__io_in_ready_0 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__exu__DOT__exu_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__exu__DOT__exu_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__exu__DOT__exu_reg_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__exu__DOT__exu_reg_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__lsu__DOT__isStore = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__lsu__DOT__isLoad = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__lsu__DOT__lsu_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__lsu__DOT__lsu_reg_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__lsu__DOT__lsu_reg_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__lsu__DOT___mem_access_control_T = VL_RAND_RESET_I(10);
    vlSelf->Core__DOT__lsu__DOT__mem_access_control = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__lsu__DOT__dmem_rdata_delay = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__lsu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__lsu__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__lsu__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__lsu__DOT__io_in_ready_0 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__lsu__DOT__io_memory_r_ready_0 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__lsu__DOT__io_memory_b_ready_0 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__lsu__DOT__unnamedblk1__DOT___GEN_4 = VL_RAND_RESET_I(8);
    vlSelf->Core__DOT__lsu__DOT____VdfgTmp_h0d5fed69__0 = 0;
    vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__wbu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__wbu__DOT__io_in_ready_0 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__wbu__DOT__wbu_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__wbu__DOT__wbu_reg_result = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__wbu__DOT__wbu_reg_dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__wbu__DOT__wbu_reg_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__wbu__DOT__unnamedblk1__DOT___GEN_0 = VL_RAND_RESET_I(8);
    vlSelf->Core__DOT__wbu__DOT____VdfgTmp_he33a7f1b__0 = 0;
    vlSelf->Core__DOT__wbu__DOT____VdfgTmp_h00d1e98b__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Core__DOT__regfile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Core__DOT__regfile__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__arbiter__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__arbiter__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__arbiter__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__arbiter__DOT__unnamedblk1__DOT__isIFUActive = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_5 = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_6 = VL_RAND_RESET_I(8);
    vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h4b16e7a1__0 = 0;
    vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0 = 0;
    vlSelf->Core__DOT__sram__DOT___sram_data_out = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__sram__DOT___sram_rd_res_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__sram__DOT___sram_wt_res_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__sram__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__sram__DOT__addr_reg = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__sram__DOT__wdata_reg = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__sram__DOT__wstrb_reg = VL_RAND_RESET_I(8);
    vlSelf->Core__DOT__sram__DOT__rd_req_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__sram__DOT__wt_req_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__sram__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__sram__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__sram__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__sram__DOT__io_axi_w_ready_0 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__sram__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__sram__DOT____VdfgTmp_h93f383d4__0 = 0;
    vlSelf->Core__DOT__sram__DOT____VdfgTmp_hb61e3587__0 = 0;
    vlSelf->Core__DOT__sram__DOT__sram__DOT__addr_delayed = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__sram__DOT__sram__DOT__rd_req_valid_delayed = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__sram__DOT__sram__DOT__waddr_delayed = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__sram__DOT__sram__DOT__wdata_delayed = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__sram__DOT__sram__DOT__wmask_delayed = VL_RAND_RESET_I(8);
    vlSelf->Core__DOT__sram__DOT__sram__DOT__wt_req_valid_delayed = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_hde5c20bb__0 = 0;
    vlSelf->__Vfunc_Core__DOT__sram__DOT__sram__DOT__pmem_read__2__Vfuncout = 0;
    vlSelf->__Vdly__Core__DOT__ifu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__Core__DOT__lsu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__Core__DOT__arbiter__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__Core__DOT__sram__DOT__rd_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__Core__DOT__sram__DOT__wt_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
