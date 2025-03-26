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
    // DPI import at vsrc/perip/flash/flash.v:96:30
    extern void flash_read(int addr, int* data);
    // DPI import at vsrc/generated/Core.sv:1625:34
    extern void get_register_values(const svLogicVecVal* rf);
    // DPI import at ../ysyxSoC/build/ysyxSoCFull.v:4714:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at vsrc/perip/sdram/sdram.v:22:29
    extern int read_mem(int bank, int row, int col);
    // DPI import at vsrc/generated/Core.sv:1588:30
    extern void simulation_exit();
    // DPI import at vsrc/perip/sdram/sdram.v:21:30
    extern void write_mem(int bank, int row, int col, int data);

#ifdef __cplusplus
}
#endif

#endif  // guard
