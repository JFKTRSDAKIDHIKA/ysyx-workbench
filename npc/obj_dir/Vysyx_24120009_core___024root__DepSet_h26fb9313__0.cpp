// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120009_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24120009_core__Syms.h"
#include "Vysyx_24120009_core___024root.h"

extern "C" void simulation_exit();

VL_INLINE_OPT void Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__simulation_exit_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__simulation_exit_TOP\n"); );
    // Body
    simulation_exit();
}

extern "C" void get_register_values(const svLogicVecVal* rf);

VL_INLINE_OPT void Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__u_RegisterFile__DOT__get_register_values_TOP(VlUnpacked<IData/*31:0*/, 32> rf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__u_RegisterFile__DOT__get_register_values_TOP\n"); );
    // Body
    svLogicVecVal rf__Vcvt[32];
    for (size_t rf__Vidx = 0; rf__Vidx < 32; ++rf__Vidx) VL_SET_SVLV_I(32, rf__Vcvt + 1 * rf__Vidx, (&rf[0])[rf__Vidx]);
    get_register_values(rf__Vcvt);
}

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
