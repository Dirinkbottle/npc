// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMINIRV__SYMS_H_
#define VERILATED_VMINIRV__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vminirv.h"

// INCLUDE MODULE CLASSES
#include "Vminirv___024root.h"
#include "Vminirv___024unit.h"
#include "Vminirv_cla_16.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vminirv__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vminirv* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vminirv___024root              TOP;
    Vminirv___024unit              TOP____024unit;
    Vminirv_cla_16                 TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16;
    Vminirv_cla_16                 TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2;
    Vminirv_cla_16                 TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3;
    Vminirv_cla_16                 TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4;

    // CONSTRUCTORS
    Vminirv__Syms(VerilatedContext* contextp, const char* namep, Vminirv* modelp);
    ~Vminirv__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
