// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminirv.h for the primary calling header

#include "Vminirv__pch.h"


Vminirv___024unit::Vminirv___024unit() = default;
Vminirv___024unit::~Vminirv___024unit() = default;

void Vminirv___024unit::ctor(Vminirv__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vminirv___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vminirv___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
