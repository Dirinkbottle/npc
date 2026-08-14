// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vminirv.h for the primary calling header

#ifndef VERILATED_VMINIRV___024UNIT_H_
#define VERILATED_VMINIRV___024UNIT_H_  // guard

#include "verilated.h"


class Vminirv__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vminirv___024unit final {
  public:

    // INTERNAL VARIABLES
    Vminirv__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vminirv___024unit();
    ~Vminirv___024unit();
    void ctor(Vminirv__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vminirv___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
