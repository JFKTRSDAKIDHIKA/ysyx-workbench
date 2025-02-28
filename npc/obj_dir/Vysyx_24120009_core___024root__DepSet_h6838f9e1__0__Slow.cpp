// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120009_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24120009_core___024root.h"

VL_ATTR_COLD void Vysyx_24120009_core___024root___eval_static(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_24120009_core___024root___eval_initial__TOP(Vysyx_24120009_core___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24120009_core___024root___eval_initial(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_initial\n"); );
    // Body
    Vysyx_24120009_core___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vysyx_24120009_core___024root___eval_initial__TOP(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[0U] = 4U;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[1U] = 3U;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[4U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[0U] = 0x400000000ULL;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[2U] = 5U;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[3U] = 4U;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[4U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[5U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[0U] = 0xaU;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[1U] = 9U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[2U] = 8U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[3U] = 7U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[4U] = 6U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[5U] = 5U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[6U] = 4U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[7U] = 3U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[8U] = 2U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[9U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[0xaU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list[0U] = 3U;
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list[1U] = 2U;
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list[2U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list[3U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[3U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[3U] = 0ULL;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[3U] = 5U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[4U] = 4U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list[0U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list[1U] = 3U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list[2U] = 0xfU;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list[0U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list[1U] = 0x103U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list[2U] = 0x20fU;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[0U] = 0x119U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[1U] = 0x118U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[2U] = 0x11aU;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[3U] = 0x1dU;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[4U] = 0x19U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[5U] = 0x1cU;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[6U] = 0x18U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[7U] = 0x1aU;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[2U] = 2U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[3U] = 5U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[4U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[5U] = 4U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[6U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[7U] = 2U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[0U] = 0x8c9U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[1U] = 0x8c0U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[2U] = 0x8d2U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[3U] = 0xedU;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[4U] = 0xc9U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[5U] = 0xe4U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[6U] = 0xc0U;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[7U] = 0xd2U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[1U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[2U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[3U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[4U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[5U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[6U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[7U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[8U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[9U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0xaU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0xbU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0xcU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0xdU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0xeU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0xfU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x10U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x11U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x12U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x13U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x14U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x15U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x16U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x17U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x18U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x19U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x1aU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x1bU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x1cU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x1dU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x1eU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x1fU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i = 0x20U;
}

VL_ATTR_COLD void Vysyx_24120009_core___024root___eval_final(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_24120009_core___024root___eval_triggers__stl(Vysyx_24120009_core___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120009_core___024root___dump_triggers__stl(Vysyx_24120009_core___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_24120009_core___024root___eval_stl(Vysyx_24120009_core___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24120009_core___024root___eval_settle(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_24120009_core___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24120009_core___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/cpu/ysyx_24120009_core.v", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_24120009_core___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120009_core___024root___dump_triggers__stl(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__u_RegisterFile__DOT__get_register_values_TOP(VlUnpacked<IData/*31:0*/, 32> rf);
void Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__ifu__DOT__simulation_exit_TOP();
void Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_24120009_core__ConstPool__TABLE_h757d5658_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_24120009_core__ConstPool__TABLE_h68f45f92_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_24120009_core__ConstPool__TABLE_h86cd9fc5_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_24120009_core__ConstPool__TABLE_h4c715f24_0;

VL_ATTR_COLD void Vysyx_24120009_core___024root___stl_sequent__TOP__0(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___stl_sequent__TOP__0\n"); );
    // Body
    Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__u_RegisterFile__DOT__get_register_values_TOP(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf);
    if (VL_UNLIKELY((0x100073U == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer))) {
        VL_WRITEF("EBREAK: Simulation exiting...\n");
        Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__ifu__DOT__simulation_exit_TOP();
    }
    vlSelf->x2_debug = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [2U];
    vlSelf->inst_debug = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer;
    vlSelf->reg_write_data_debug = vlSelf->ysyx_24120009_core__DOT__reg_write_data;
    vlSelf->waddr_debug = vlSelf->ysyx_24120009_core__DOT__waddr;
    vlSelf->mem_wen_debug = vlSelf->ysyx_24120009_core__DOT__mem_wen;
    vlSelf->mem_en_debug = vlSelf->ysyx_24120009_core__DOT__mem_en;
    vlSelf->result_from_WB_debug = vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o;
    vlSelf->pc_wen_debug = vlSelf->ysyx_24120009_core__DOT__pc_wen;
    vlSelf->mem_active_debug = (1U == (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__state));
    vlSelf->mem_access_done_debug = (2U == (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__state));
    vlSelf->mem_ctl_state_debug = vlSelf->ysyx_24120009_core__DOT__mem__DOT__state;
    vlSelf->result_from_MEM_to_WBU_debug = vlSelf->ysyx_24120009_core__DOT__result_from_MEM_to_WBU;
    vlSelf->inst_from_EXU_to_MEM_debug = vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM;
    vlSelf->wt_res_valid_debug = vlSelf->ysyx_24120009_core__DOT__mem_bvalid;
    vlSelf->ifu_state_debug = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state;
    vlSelf->rd_res_valid_debug = vlSelf->ysyx_24120009_core__DOT__ifu_rvalid;
    vlSelf->idu_state_debug = vlSelf->ysyx_24120009_core__DOT__idu__DOT__state;
    vlSelf->inst_valid_debug = vlSelf->ysyx_24120009_core__DOT__inst_valid;
    vlSelf->arbiter_state_debug = vlSelf->ysyx_24120009_core__DOT__bus_arbiter_inst__DOT__state;
    vlSelf->axi4_lite_state_debug = vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__state;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                  >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                     >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                     >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                     >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                     >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                     >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)((0xfffff000U 
                                             & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU))));
    vlSelf->ysyx_24120009_core__DOT__mem_awvalid = 
        ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en) 
         & (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen));
    vlSelf->ysyx_24120009_core__DOT__mem_arvalid = 
        ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen)) 
         & (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en));
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o)));
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o)));
    vlSelf->pc_debug = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)(((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc)));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__mem_rdata)));
    vlSelf->pc_plus4_debug = ((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[4U] 
        = ((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc);
    if (vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__rd_req_valid_delayed) {
        Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__pmem_read_TOP(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__addr_delayed, vlSelf->__Vfunc_ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__pmem_read__1__Vfuncout);
        vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_data_out 
            = vlSelf->__Vfunc_ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__pmem_read__1__Vfuncout;
        vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_rd_res_valid = 1U;
        vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_wt_res_valid = 0U;
    } else if (vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__wt_req_valid_delayed) {
        Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__pmem_write_TOP(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__waddr_delayed, vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__wdata_delayed, (IData)(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__wmask_delayed));
        vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_data_out 
            = vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__wdata_delayed;
        vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_rd_res_valid = 0U;
        vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_wt_res_valid = 1U;
    } else {
        vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_data_out = 0U;
        vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_rd_res_valid = 0U;
        vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_wt_res_valid = 0U;
    }
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[0U] 
        = vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o;
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[1U] 
        = vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o;
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[2U] 
        = ((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[2U] 
        = vlSelf->ysyx_24120009_core__DOT__mem_rdata;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op 
        = ((0x40U & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
            ? 0U : ((0x20U & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                     ? ((0x10U & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                         ? ((8U & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                             ? 0U : ((4U & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                      ? ((2U & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                          ? ((1U & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                              ? 0xaU
                                              : 0U)
                                          : 0U) : (
                                                   (2U 
                                                    & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                        ? 6U
                                                        : 5U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                        ? 
                                                       ((0U 
                                                         == 
                                                         (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                                          >> 0x19U))
                                                         ? 8U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                                           >> 0x19U))
                                                          ? 9U
                                                          : 0U))
                                                        : 4U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                        ? 3U
                                                        : 2U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                        ? 7U
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                                          >> 0x19U))
                                                         ? 0U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                                           >> 0x19U))
                                                          ? 1U
                                                          : 0U)))))
                                                     : 0U)
                                                    : 0U)))
                         : 0U) : ((0x10U & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                   ? ((8U & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                       ? 0U : ((4U 
                                                & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                ? 0U
                                                : (
                                                   (2U 
                                                    & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                        ? 6U
                                                        : 5U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                        ? 
                                                       ((0U 
                                                         == 
                                                         (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                                          >> 0x19U))
                                                         ? 8U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                                           >> 0x19U))
                                                          ? 9U
                                                          : 0U))
                                                        : 4U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                        ? 3U
                                                        : 2U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                        ? 7U
                                                        : 0U)))
                                                     : 0U)
                                                    : 0U)))
                                   : 0U)));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext 
        = (((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                        >> 0x1fU))) << 0xdU) | ((0x1000U 
                                                 & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                            >> 7U))))));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext 
        = (((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                        >> 0x1fU))) << 0x15U) | ((0x100000U 
                                                  & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU) 
                                                    | ((0x800U 
                                                        & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                             >> 0x14U))))));
    vlSelf->opcode_debug = (0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext 
        = (((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0x14U));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key 
        = ((0x3f8U & (vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                      << 3U)) | (7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                                       >> 0xcU)));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
        = ((0x1fU >= (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                               << 3U))) ? (vlSelf->ysyx_24120009_core__DOT__mem_rdata 
                                           >> (0x18U 
                                               & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                  << 3U)))
            : 0U);
    vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                   >> 0x14U))];
    vlSelf->ysyx_24120009_core__DOT__rdata1 = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                   >> 0xfU))];
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0x14U));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[3U] 
        = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                   >> 0x14U))];
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s 
        = ((0xfe0U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                      >> 0x14U)) | (0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                             >> 7U)));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[0U] 
        = (0xfffff000U & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                   >> 0xfU))];
    vlSelf->__Vtableidx1 = (0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel 
        = Vysyx_24120009_core__ConstPool__TABLE_h757d5658_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel 
        = Vysyx_24120009_core__ConstPool__TABLE_h68f45f92_0
        [vlSelf->__Vtableidx1];
    vlSelf->imem_addr_debug = vlSelf->pc_debug;
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->pc_plus4_debug)));
    vlSelf->alu_op_debug = vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
           == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_24120009_core__DOT__br_target = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc 
                                                  + vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc 
           + vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext);
    vlSelf->ysyx_24120009_core__DOT__jmp_target = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc 
                                                   + vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc 
           + vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext);
    vlSelf->__Vtableidx3 = (((IData)(vlSelf->opcode_debug) 
                             << 1U) | (IData)(vlSelf->wbu_active_debug));
    vlSelf->ysyx_24120009_core__DOT__rf_we = Vysyx_24120009_core__ConstPool__TABLE_h86cd9fc5_0
        [vlSelf->__Vtableidx3];
    vlSelf->__Vtableidx4 = vlSelf->opcode_debug;
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel 
        = Vysyx_24120009_core__ConstPool__TABLE_h4c715f24_0
        [vlSelf->__Vtableidx4];
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext)));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
           == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                       == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access 
        = vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)))));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x500000000ULL | (QData)((IData)((0xffffU 
                                             & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[4U] 
        = (0x400000000ULL | (QData)((IData)((0xffU 
                                             & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[3U] 
        = (0xffffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU)));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__rdata1));
    vlSelf->ysyx_24120009_core__DOT__jump_reg_target 
        = (vlSelf->ysyx_24120009_core__DOT__rdata1 
           + vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->ysyx_24120009_core__DOT__rdata1 
           + vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->ysyx_24120009_core__DOT__rdata1 
           < vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[3U] 
        = VL_LTS_III(32, vlSelf->ysyx_24120009_core__DOT__rdata1, vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[5U] 
        = (vlSelf->ysyx_24120009_core__DOT__rdata1 
           == vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq 
        = (vlSelf->ysyx_24120009_core__DOT__rdata1 
           == vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt 
        = VL_LTS_III(32, vlSelf->ysyx_24120009_core__DOT__rdata1, vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu 
        = (vlSelf->ysyx_24120009_core__DOT__rdata1 
           < vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s)))));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel) 
           == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel) 
              == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel) 
              == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel) 
              == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel) 
           == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel) 
              == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel) 
                       == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel) 
                          == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__Op1 = vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[2U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__br_target)));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__jmp_target)));
    vlSelf->rf_we_debug = vlSelf->ysyx_24120009_core__DOT__rf_we;
    vlSelf->wb_sel_debug = vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel;
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel) 
                       == vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel) 
           == vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel) 
                          == vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel) 
              == vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel) 
                          == vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel) 
              == vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel) 
                          == vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel) 
              == vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__reg_write_data 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit)
            ? vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out
            : 0U);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
           == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
           == vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
                       == vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask 
        = vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
                       == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__dmem_rdata_from_MEM_to_WBU 
        = vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__jump_reg_target)));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[4U] 
        = (2U | (1U & (~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq))));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[5U] 
        = vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[4U] 
        = (1U & (~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq)));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[2U] 
        = (0xaU | (1U & (~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt))));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[3U] 
        = (8U | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[2U] 
        = (1U & (~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt)));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[0U] 
        = (0xeU | (1U & (~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu))));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[1U] 
        = (0xcU | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[0U] 
        = (1U & (~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu)));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel) 
                       == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel) 
                          == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel) 
                          == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel) 
                          == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__Op2 = vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out;
    vlSelf->Op1_debug = vlSelf->ysyx_24120009_core__DOT__Op1;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[0U] 
        = (0xa00000000ULL | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__Op1)));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_24120009_core__DOT__Op1;
    vlSelf->dmem_rdata_from_MEM_to_WBU_debug = vlSelf->ysyx_24120009_core__DOT__dmem_rdata_from_MEM_to_WBU;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out 
        = (((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                   >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
            [0U]) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                      >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
               [1U]) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                      >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
               [2U]) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                      >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
               [3U]) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                      >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
               [4U]) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                      >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
               [5U]) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__branch_taken 
        = vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out;
    vlSelf->Op2_debug = vlSelf->ysyx_24120009_core__DOT__Op2;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x900000000ULL | (QData)((IData)(((0x1fU 
                                              >= (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                              ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24120009_core__DOT__Op1, 
                                                               (0x1fU 
                                                                & vlSelf->ysyx_24120009_core__DOT__Op2))
                                              : (- 
                                                 (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                  >> 0x1fU))))));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x800000000ULL | (QData)((IData)(((0x1fU 
                                              >= (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                              ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                              : 0U))));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x700000000ULL | (QData)((IData)(((0x1fU 
                                              >= (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                              ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                              : 0U))));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[4U] 
        = (0x600000000ULL | (QData)((IData)((vlSelf->ysyx_24120009_core__DOT__Op1 
                                             & vlSelf->ysyx_24120009_core__DOT__Op2))));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[5U] 
        = (0x500000000ULL | (QData)((IData)((vlSelf->ysyx_24120009_core__DOT__Op1 
                                             | vlSelf->ysyx_24120009_core__DOT__Op2))));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[6U] 
        = (0x400000000ULL | (QData)((IData)((vlSelf->ysyx_24120009_core__DOT__Op1 
                                             ^ vlSelf->ysyx_24120009_core__DOT__Op2))));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[9U] 
        = (0x100000000ULL | (QData)((IData)((vlSelf->ysyx_24120009_core__DOT__Op1 
                                             - vlSelf->ysyx_24120009_core__DOT__Op2))));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[0xaU] 
        = (QData)((IData)((vlSelf->ysyx_24120009_core__DOT__Op1 
                           + vlSelf->ysyx_24120009_core__DOT__Op2)));
    if ((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))) {
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[1U] 
            = VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24120009_core__DOT__Op1, 
                             (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2));
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[2U] 
            = (vlSelf->ysyx_24120009_core__DOT__Op1 
               >> (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2));
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[3U] 
            = (vlSelf->ysyx_24120009_core__DOT__Op1 
               << (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2));
    } else {
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[1U] 
            = (- (vlSelf->ysyx_24120009_core__DOT__Op1 
                  >> 0x1fU));
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[3U] = 0U;
    }
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[4U] 
        = (vlSelf->ysyx_24120009_core__DOT__Op1 & vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[5U] 
        = (vlSelf->ysyx_24120009_core__DOT__Op1 | vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[6U] 
        = (vlSelf->ysyx_24120009_core__DOT__Op1 ^ vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[9U] 
        = (vlSelf->ysyx_24120009_core__DOT__Op1 - vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0xaU] 
        = (vlSelf->ysyx_24120009_core__DOT__Op1 + vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->__VdfgTmp_h9d12977d__0 = VL_LTS_III(32, vlSelf->ysyx_24120009_core__DOT__Op1, vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->__VdfgTmp_h9d0653ad__0 = (vlSelf->ysyx_24120009_core__DOT__Op1 
                                      < vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->ysyx_24120009_core__DOT__pc_sel = ((IData)(
                                                       (0x67U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)))
                                                ? 1U
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU))
                                                    ? 3U
                                                    : 
                                                   (((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)) 
                                                     & (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__branch_taken))
                                                     ? 2U
                                                     : 0U)));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[8U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h9d12977d__0)));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[8U] 
        = vlSelf->__VdfgTmp_h9d12977d__0;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[7U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h9d0653ad__0)));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[7U] 
        = vlSelf->__VdfgTmp_h9d0653ad__0;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
           == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
              == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
              == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
              == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
              == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
                       == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
                          == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
                          == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
                          == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
                          == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next 
        = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                       == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_24120009_core__DOT__result_from_EXU_to_MEM 
        = vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out;
    vlSelf->result_from_EXU_to_MEM_debug = vlSelf->ysyx_24120009_core__DOT__result_from_EXU_to_MEM;
}

VL_ATTR_COLD void Vysyx_24120009_core___024root___eval_stl(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_24120009_core___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120009_core___024root___dump_triggers__act(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120009_core___024root___dump_triggers__nba(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24120009_core___024root___ctor_var_reset(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->pc_debug = VL_RAND_RESET_I(32);
    vlSelf->inst_debug = VL_RAND_RESET_I(32);
    vlSelf->reg_write_data_debug = VL_RAND_RESET_I(32);
    vlSelf->x2_debug = VL_RAND_RESET_I(32);
    vlSelf->waddr_debug = VL_RAND_RESET_I(5);
    vlSelf->mem_wen_debug = VL_RAND_RESET_I(1);
    vlSelf->mem_en_debug = VL_RAND_RESET_I(1);
    vlSelf->Op1_debug = VL_RAND_RESET_I(32);
    vlSelf->Op2_debug = VL_RAND_RESET_I(32);
    vlSelf->rf_we_debug = VL_RAND_RESET_I(1);
    vlSelf->wbu_active_debug = VL_RAND_RESET_I(1);
    vlSelf->imem_addr_debug = VL_RAND_RESET_I(32);
    vlSelf->pc_plus4_debug = VL_RAND_RESET_I(32);
    vlSelf->wb_sel_debug = VL_RAND_RESET_I(2);
    vlSelf->opcode_debug = VL_RAND_RESET_I(7);
    vlSelf->pc_wen_debug = VL_RAND_RESET_I(1);
    vlSelf->mem_active_debug = VL_RAND_RESET_I(1);
    vlSelf->result_from_EXU_to_MEM_debug = VL_RAND_RESET_I(32);
    vlSelf->result_from_MEM_to_WBU_debug = VL_RAND_RESET_I(32);
    vlSelf->result_from_WB_debug = VL_RAND_RESET_I(32);
    vlSelf->alu_op_debug = VL_RAND_RESET_I(5);
    vlSelf->inst_from_EXU_to_MEM_debug = VL_RAND_RESET_I(32);
    vlSelf->mem_access_done_debug = VL_RAND_RESET_I(1);
    vlSelf->dmem_rdata_from_MEM_to_WBU_debug = VL_RAND_RESET_I(32);
    vlSelf->wt_res_valid_debug = VL_RAND_RESET_I(1);
    vlSelf->ifu_state_debug = VL_RAND_RESET_I(3);
    vlSelf->rd_res_valid_debug = VL_RAND_RESET_I(1);
    vlSelf->mem_ctl_state_debug = VL_RAND_RESET_I(2);
    vlSelf->axi4_mem_state_debug = VL_RAND_RESET_I(2);
    vlSelf->idu_state_debug = VL_RAND_RESET_I(2);
    vlSelf->inst_valid_debug = VL_RAND_RESET_I(1);
    vlSelf->arbiter_state_debug = VL_RAND_RESET_I(2);
    vlSelf->axi4_lite_state_debug = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120009_core__DOT__reg_write_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__alu_op = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24120009_core__DOT__pc_sel = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120009_core__DOT__rf_we = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__mem_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__mem_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120009_core__DOT__Op1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__Op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__pc_plus4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__jump_reg_target = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__br_target = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__jmp_target = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__pc_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__pc_from_IDU_to_EXU = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__pc_from_EXU_to_MEM = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__result_from_EXU_to_MEM = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__rdata2_from_EXU_to_MEM = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__rd_addr_from_EXU_to_MEM = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24120009_core__DOT__dmem_rdata_from_MEM_to_WBU = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__result_from_MEM_to_WBU = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__rd_addr_from_MEM_to_WBU = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24120009_core__DOT__pc_from_MEM_to_WBU = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__inst_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__ifu_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__ifu_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__ifu_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__ifu_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__ifu_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__mem_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__mem_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__mem_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__mem_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__mem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__mem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__mem_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__awvalid_wire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__awready_wire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__awaddr_wire = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__wvalid_wire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__wready_wire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__wdata_wire = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__wstrb_wire = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120009_core__DOT__bvalid_wire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__bready_wire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__arvalid_wire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__arready_wire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__araddr_wire = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__rvalid_wire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__rready_wire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__rdata_wire = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__waddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24120009_core__DOT__rdata1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_data_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_rd_res_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_wt_res_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__addr_reg = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__wdata_reg = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__wstrb_reg = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__rd_req_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__wt_req_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__addr_delayed = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__rd_req_valid_delayed = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__waddr_delayed = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__wdata_delayed = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__wmask_delayed = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__wt_req_valid_delayed = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__bus_arbiter_inst__DOT__mem_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__bus_arbiter_inst__DOT__mem_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__bus_arbiter_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__imem_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s = VL_RAND_RESET_I(12);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__branch_taken = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(37);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key = VL_RAND_RESET_I(10);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(13);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_addr_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__reg_write_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_h9d12977d__0 = 0;
    vlSelf->__VdfgTmp_h9d0653ad__0 = 0;
    vlSelf->__Vfunc_ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__pmem_read__1__Vfuncout = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__Vtableidx4 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
