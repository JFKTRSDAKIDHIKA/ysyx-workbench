// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/perip/flash/flash.v:97:30
    extern void flash_read(int addr, int* data);
    // DPI import at vsrc/generated/Core.sv:1401:34
    extern void get_register_values(const svLogicVecVal* rf);
    // DPI import at ../ysyxSoC/build/ysyxSoCFull.v:4714:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at vsrc/generated/Core.sv:1364:30
    extern void simulation_exit();

#ifdef __cplusplus
}
#endif

#endif  // guard
