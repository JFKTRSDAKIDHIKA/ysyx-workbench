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

void Vysyx_24120009_core___024unit____Vdpiimwrap_simulation_exit_TOP____024unit();

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
    if (VL_UNLIKELY((0x100073U == vlSelf->imem_rdata))) {
        VL_WRITEF("EBREAK: Simulation exiting...\n");
        Vysyx_24120009_core___024unit____Vdpiimwrap_simulation_exit_TOP____024unit();
    }
    __Vdlyvset__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0 = 0U;
    if (((vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
          >> 6U) & (0U != (0x1fU & (vlSelf->imem_rdata 
                                    >> 7U))))) {
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
        vlSelf->ysyx_24120009_core__DOT__rdata1 = 0U;
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1U] = 0U;
    } else {
        vlSelf->ysyx_24120009_core__DOT__rdata1 = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
            [(0x1fU & (vlSelf->imem_rdata >> 0xfU))];
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1U] 
            = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
            [(0x1fU & (vlSelf->imem_rdata >> 0xfU))];
    }
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0U] 
        = ((0U == (0x1fU & (vlSelf->imem_rdata >> 0x14U)))
            ? 0U : vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
           [(0x1fU & (vlSelf->imem_rdata >> 0x14U))]);
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
    vlSelf->pc_debug = vlSelf->imem_addr;
}
