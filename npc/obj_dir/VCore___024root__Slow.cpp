// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "VCore__pch.h"
#include "VCore__Syms.h"
#include "VCore___024root.h"

void VCore___024root___ctor_var_reset(VCore___024root* vlSelf);

VCore___024root::VCore___024root(VCore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCore___024root___ctor_var_reset(this);
}

void VCore___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VCore___024root::~VCore___024root() {
}
