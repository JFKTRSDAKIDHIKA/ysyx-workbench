// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "VCore__pch.h"
#include "VCore__Syms.h"
#include "VCore___024root.h"

extern "C" void simulation_exit();

VL_INLINE_OPT void VCore___024root____Vdpiimwrap_Core__DOT__ifu__DOT__ebreakHandler__DOT__simulation_exit_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root____Vdpiimwrap_Core__DOT__ifu__DOT__ebreakHandler__DOT__simulation_exit_TOP\n"); );
    // Body
    simulation_exit();
}

extern "C" void get_register_values(const svLogicVecVal* rf);

VL_INLINE_OPT void VCore___024root____Vdpiimwrap_Core__DOT__regfile__DOT__get_register_values_TOP(VlUnpacked<IData/*31:0*/, 32> rf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root____Vdpiimwrap_Core__DOT__regfile__DOT__get_register_values_TOP\n"); );
    // Body
    svLogicVecVal rf__Vcvt[32];
    for (size_t rf__Vidx = 0; rf__Vidx < 32; ++rf__Vidx) VL_SET_SVLV_I(32, rf__Vcvt + 1 * rf__Vidx, (&rf[0])[rf__Vidx]);
    get_register_values(rf__Vcvt);
}

extern "C" int pmem_read(int raddr);

VL_INLINE_OPT void VCore___024root____Vdpiimwrap_Core__DOT__sram__DOT__sram__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root____Vdpiimwrap_Core__DOT__sram__DOT__sram__DOT__pmem_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

extern "C" void pmem_write(int waddr, int wdata, char wmask);

VL_INLINE_OPT void VCore___024root____Vdpiimwrap_Core__DOT__sram__DOT__sram__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root____Vdpiimwrap_Core__DOT__sram__DOT__sram__DOT__pmem_write_TOP\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__ico(VCore___024root* vlSelf);
#endif  // VL_DEBUG

void VCore___024root___eval_triggers__ico(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCore___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__act(VCore___024root* vlSelf);
#endif  // VL_DEBUG

void VCore___024root___eval_triggers__act(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))) 
                                     | ((~ (IData)(vlSelf->reset)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0))));
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCore___024root___dump_triggers__act(vlSelf);
    }
#endif
}
