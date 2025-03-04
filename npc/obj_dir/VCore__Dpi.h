// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VCORE__DPI_H_
#define VERILATED_VCORE__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at npc-chisel/generated/Core.sv:1283:34
    extern void get_register_values(const svLogicVecVal* rf);
    // DPI import at npc-chisel/generated/Core.sv:1340:31
    extern int pmem_read(int raddr);
    // DPI import at npc-chisel/generated/Core.sv:1341:32
    extern void pmem_write(int waddr, int wdata, char wmask);
    // DPI import at npc-chisel/generated/Core.sv:1253:30
    extern void simulation_exit();

#ifdef __cplusplus
}
#endif

#endif  // guard
