// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_24120009_core.h for the primary calling header

#ifndef VERILATED_VYSYX_24120009_CORE___024UNIT_H_
#define VERILATED_VYSYX_24120009_CORE___024UNIT_H_  // guard

#include "verilated.h"

class Vysyx_24120009_core__Syms;

class Vysyx_24120009_core___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vysyx_24120009_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_24120009_core___024unit(Vysyx_24120009_core__Syms* symsp, const char* v__name);
    ~Vysyx_24120009_core___024unit();
    VL_UNCOPYABLE(Vysyx_24120009_core___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
