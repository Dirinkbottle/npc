// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminirv.h for the primary calling header

#include "Vminirv__pch.h"

VL_ATTR_COLD void Vminirv_cla_16___ctor_var_reset(Vminirv_cla_16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vminirv_cla_16___ctor_var_reset\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 510903276987443985ull);
    vlSelf->b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16900879642891266615ull);
    vlSelf->cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8404852791380219477ull);
    vlSelf->sum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17823321413984766096ull);
    vlSelf->cout = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3402043879796434022ull);
    vlSelf->OPG = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14422475879848257587ull);
    vlSelf->OGG = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2572155862355899897ull);
    vlSelf->__PVT__u_cla_4_4__DOT__sum = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7123506197491516698ull);
    vlSelf->__PVT__u_cla_4_4__DOT__tmp_cout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2285508462346415514ull);
    vlSelf->__PVT__u_cla_4_3__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7709925689421639656ull);
    vlSelf->__PVT__u_cla_4_2__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6673595875234108888ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_12 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_14 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_15 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_16 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_17 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_40 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_42 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_44 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_45 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_47 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_48 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_53 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_55 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_57 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_58 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_60 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_61 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_66 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_68 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_70 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_71 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_73 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_74 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_80 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_82 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_84 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_85 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_87 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_88 = 0;
}
