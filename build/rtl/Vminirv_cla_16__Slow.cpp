// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminirv.h for the primary calling header

#include "Vminirv__pch.h"

void Vminirv_cla_16___ctor_var_reset(Vminirv_cla_16* vlSelf);

Vminirv_cla_16::Vminirv_cla_16() = default;
Vminirv_cla_16::~Vminirv_cla_16() = default;

void Vminirv_cla_16::ctor(Vminirv__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vminirv_cla_16___ctor_var_reset(this);
}

void Vminirv_cla_16::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vminirv_cla_16::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
