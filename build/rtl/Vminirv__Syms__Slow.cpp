// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vminirv__pch.h"

Vminirv__Syms::Vminirv__Syms(VerilatedContext* contextp, const char* namep, Vminirv* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(510);
    // Setup sub module instances
    TOP____024unit.ctor(this, "$unit");
    TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.ctor(this, "minirv.minirv_alu.u_adder_64.u_cla_64.u_cla_16");
    TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.ctor(this, "minirv.minirv_alu.u_adder_64.u_cla_64.u_cla_16_2");
    TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.ctor(this, "minirv.minirv_alu.u_adder_64.u_cla_64.u_cla_16_3");
    TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.ctor(this, "minirv.minirv_alu.u_adder_64.u_cla_64.u_cla_16_4");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16 = &TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16;
    TOP.__PVT__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2 = &TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2;
    TOP.__PVT__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3 = &TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3;
    TOP.__PVT__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4 = &TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__Vconfigure(true);
    TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__Vconfigure(false);
    TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__Vconfigure(false);
    TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__Vconfigure(false);
    // Setup scopes
    // Setup export functions - final: 0
    // Setup export functions - final: 1
}

Vminirv__Syms::~Vminirv__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.dtor();
    TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.dtor();
    TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.dtor();
    TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.dtor();
    TOP____024unit.dtor();
}
