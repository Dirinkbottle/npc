// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminirv.h for the primary calling header

#include "Vminirv__pch.h"

void Vminirv___024root___ctor_var_reset(Vminirv___024root* vlSelf);

Vminirv___024root::Vminirv___024root(Vminirv__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vminirv___024root___ctor_var_reset(this);
}

void Vminirv___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vminirv___024root::~Vminirv___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
