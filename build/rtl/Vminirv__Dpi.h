// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VMINIRV__DPI_H_
#define VERILATED_VMINIRV__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at rtl/minirv.v:1:30
    extern void ebreak();
    // DPI import at rtl/minirv.v:3:38
    extern unsigned int pmem_read(unsigned int raddr, char rmask, svBit skip_difftest_one);
    // DPI import at rtl/minirv.v:9:30
    extern void pmem_write(unsigned int waddr, int wdata, char wmask, svBit skip_difftest_one);
    // DPI import at rtl/minirv.v:8:38
    extern unsigned int prom_read(unsigned int raddr);

#ifdef __cplusplus
}
#endif

#endif  // guard
