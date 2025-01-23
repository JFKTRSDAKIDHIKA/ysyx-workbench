// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_24120009_CORE__DPI_H_
#define VERILATED_VYSYX_24120009_CORE__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/common/ysyx_24120009_RegisterFile.v:35:34
    extern void get_register_values(const svLogicVecVal* rf);
    // DPI import at vsrc/cpu/ysyx_24120009_core.v:68:33
    extern int pmem_read(int raddr);
    // DPI import at vsrc/cpu/ysyx_24120009_core.v:79:34
    extern void pmem_write(int waddr, int wdata, char wmask);
    // DPI import at vsrc/cpu/ysyx_24120009_core.v:114:34
    extern void simulation_exit();

#ifdef __cplusplus
}
#endif

#endif  // guard
