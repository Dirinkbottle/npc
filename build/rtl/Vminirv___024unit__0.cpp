// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminirv.h for the primary calling header

#include "Vminirv__pch.h"

extern "C" void ebreak();

void Vminirv___024unit____Vdpiimwrap_ebreak_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vminirv___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    ebreak();
}

extern "C" unsigned int pmem_read(unsigned int raddr, char rmask, svBit skip_difftest_one);

void Vminirv___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, CData/*7:0*/ rmask, CData/*0:0*/ skip_difftest_one, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vminirv___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    unsigned int raddr__Vcvt;
    raddr__Vcvt = raddr;
    char rmask__Vcvt;
    rmask__Vcvt = rmask;
    svBit skip_difftest_one__Vcvt;
    skip_difftest_one__Vcvt = skip_difftest_one;
    unsigned int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt, rmask__Vcvt, skip_difftest_one__Vcvt);
    pmem_read__Vfuncrtn = (pmem_read__Vfuncrtn__Vcvt);
}

extern "C" unsigned int prom_read(unsigned int raddr);

void Vminirv___024unit____Vdpiimwrap_prom_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &prom_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vminirv___024unit____Vdpiimwrap_prom_read_TOP____024unit\n"); );
    // Body
    unsigned int raddr__Vcvt;
    raddr__Vcvt = raddr;
    unsigned int prom_read__Vfuncrtn__Vcvt;
    prom_read__Vfuncrtn__Vcvt = prom_read(raddr__Vcvt);
    prom_read__Vfuncrtn = (prom_read__Vfuncrtn__Vcvt);
}

extern "C" void pmem_write(unsigned int waddr, int wdata, char wmask, svBit skip_difftest_one);

void Vminirv___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask, CData/*0:0*/ skip_difftest_one) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vminirv___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    unsigned int waddr__Vcvt;
    waddr__Vcvt = waddr;
    int wdata__Vcvt;
    wdata__Vcvt = wdata;
    char wmask__Vcvt;
    wmask__Vcvt = wmask;
    svBit skip_difftest_one__Vcvt;
    skip_difftest_one__Vcvt = skip_difftest_one;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt, skip_difftest_one__Vcvt);
}
