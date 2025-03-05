// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "VCore__pch.h"
#include "VCore__Syms.h"
#include "VCore___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__stl(VCore___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VCore___024root___eval_triggers__stl(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCore___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
