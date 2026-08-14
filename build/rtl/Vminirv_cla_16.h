// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vminirv.h for the primary calling header

#ifndef VERILATED_VMINIRV_CLA_16_H_
#define VERILATED_VMINIRV_CLA_16_H_  // guard

#include "verilated.h"


class Vminirv__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vminirv_cla_16 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ cin;
    CData/*3:0*/ OPG;
    CData/*3:0*/ OGG;
    CData/*3:0*/ __PVT__u_cla_4_4__DOT__sum;
    CData/*4:0*/ __PVT__u_cla_4_4__DOT__tmp_cout;
    CData/*0:0*/ __PVT__u_cla_4_3__DOT__cin;
    CData/*0:0*/ __PVT__u_cla_4_2__DOT__cin;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_12;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_40;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_42;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_44;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_45;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_47;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_48;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_53;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_55;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_57;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_58;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_60;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_61;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_66;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_68;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_70;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_71;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_73;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_74;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_80;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_82;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_84;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_85;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_87;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_88;
    SData/*15:0*/ a;
    SData/*15:0*/ b;
    SData/*15:0*/ sum;
    SData/*15:0*/ cout;
    SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_14;
    SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_15;
    SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_16;
    SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_17;

    // INTERNAL VARIABLES
    Vminirv__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vminirv_cla_16();
    ~Vminirv_cla_16();
    void ctor(Vminirv__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vminirv_cla_16);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
