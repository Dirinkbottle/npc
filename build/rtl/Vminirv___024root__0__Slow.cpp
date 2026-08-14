// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminirv.h for the primary calling header

#include "Vminirv__pch.h"

VL_ATTR_COLD void Vminirv___024root___eval_static(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_static\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2588992875692952171ull);
    }
    {
        // Inlined CFunc: __Vm_traceActivitySetAll
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vminirv___024root___eval_initial(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_initial\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vminirv___024root___eval_final(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_final\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminirv___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vminirv___024root___eval_phase__stl(Vminirv___024root* vlSelf);

VL_ATTR_COLD void Vminirv___024root___eval_settle(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_settle\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vminirv___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rtl/minirv.v", 20, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vminirv___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vminirv___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminirv___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vminirv___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vminirv___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vminirv___024unit____Vdpiimwrap_prom_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &prom_read__Vfuncrtn);
extern const VlUnpacked<CData/*2:0*/, 128> Vminirv__ConstPool__TABLE_h986f6810_0;

VL_ATTR_COLD void Vminirv___024root___stl_sequent__TOP__0(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___stl_sequent__TOP__0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.minirv__DOT__pc_static = ((IData)(4U) 
                                        + vlSelfRef.minirv__DOT__pc);
    if (vlSelfRef.rst) {
        vlSelfRef.minirv__DOT__inst = 0U;
    } else {
        Vminirv___024unit____Vdpiimwrap_prom_read_TOP____024unit(vlSelfRef.minirv__DOT__pc, vlSelfRef.__Vfunc_prom_read__2__Vfuncout);
        vlSelfRef.minirv__DOT__inst = vlSelfRef.__Vfunc_prom_read__2__Vfuncout;
    }
    vlSelfRef.minirv__DOT__registerfile_write_enable = 0U;
    if ((4U == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__registerfile_write_enable = 1U;
    }
    if ((2U == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__registerfile_write_enable = 1U;
    }
    vlSelfRef.develop_put = (0U == Vminirv__ConstPool__TABLE_h986f6810_0
                             [(0x0000007fU & vlSelfRef.minirv__DOT__inst)]);
    vlSelfRef.minirv__DOT__registerfile_writerd_MuxWithDefault__DOT__lut 
        = (0x00204080U | ((0x001f0000U & (vlSelfRef.minirv__DOT__inst 
                                          << 9U)) | 
                          ((0x00001f00U & (vlSelfRef.minirv__DOT__inst 
                                           << 1U)) 
                           | (0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                             >> 7U)))));
    vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table 
        = ((0xfffdU & (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table)) 
           | ((0x37U == (0x0000007fU & vlSelfRef.minirv__DOT__inst)) 
              << 1U));
    vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table 
        = ((0xfffdU & (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table)) 
           | ((IData)((0x00000033U == (0xfe00707fU 
                                       & vlSelfRef.minirv__DOT__inst))) 
              << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = (IData)(
                                                       (0x00002023U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 = (IData)(
                                                        (0x00000023U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 = (((- (QData)((IData)(
                                                                     (vlSelfRef.minirv__DOT__inst 
                                                                      >> 0x0000001fU)))) 
                                                  << 0x0000000cU) 
                                                 | (QData)((IData)(
                                                                   (vlSelfRef.minirv__DOT__inst 
                                                                    >> 0x00000014U))));
    vlSelfRef.minirv__DOT__registerfile_readrs1_MuxWithDefault__DOT__lut 
        = (0x204060a0U | ((((0x00001f00U & (vlSelfRef.minirv__DOT__inst 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                              >> 0x0000000fU))) 
                           << 0x00000010U) | ((0x00001f00U 
                                               & (vlSelfRef.minirv__DOT__inst 
                                                  >> 7U)) 
                                              | (0x0000001fU 
                                                 & (vlSelfRef.minirv__DOT__inst 
                                                    >> 0x0000000fU)))));
    vlSelfRef.minirv__DOT__registerfile_readrs2_MuxWithDefault__DOT__lut 
        = (0x002060a0U | ((0x001f0000U & (vlSelfRef.minirv__DOT__inst 
                                          >> 4U)) | 
                          ((0x00001f00U & (vlSelfRef.minirv__DOT__inst 
                                           >> 0x0000000cU)) 
                           | (0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                             >> 0x00000014U)))));
    vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut[0U] 
        = (IData)((0x0000000400000000ULL | (((QData)((IData)(
                                                             ((0x00000fe0U 
                                                               & (vlSelfRef.minirv__DOT__inst 
                                                                  >> 0x00000014U)) 
                                                              | (0x0000001fU 
                                                                 & (vlSelfRef.minirv__DOT__inst 
                                                                    >> 7U))))) 
                                             << 0x00000023U) 
                                            | (QData)((IData)(
                                                              (vlSelfRef.minirv__DOT__inst 
                                                               >> 0x0000000cU))))));
    vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut[1U] 
        = ((0xffff8000U & vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut[1U]) 
           | (IData)(((0x0000000400000000ULL | (((QData)((IData)(
                                                                 ((0x00000fe0U 
                                                                   & (vlSelfRef.minirv__DOT__inst 
                                                                      >> 0x00000014U)) 
                                                                  | (0x0000001fU 
                                                                     & (vlSelfRef.minirv__DOT__inst 
                                                                        >> 7U))))) 
                                                 << 0x00000023U) 
                                                | (QData)((IData)(
                                                                  (vlSelfRef.minirv__DOT__inst 
                                                                   >> 0x0000000cU))))) 
                      >> 0x00000020U)));
    vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut[1U] 
        = ((0x00007fffU & vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut[1U]) 
           | ((IData)((((QData)((IData)((vlSelfRef.minirv__DOT__inst 
                                         >> 0x00000014U))) 
                        << 0x00000017U) | (QData)((IData)(
                                                          (0x00300000U 
                                                           | (0x000fffffU 
                                                              & (- (IData)(
                                                                           (vlSelfRef.minirv__DOT__inst 
                                                                            >> 0x0000001fU))))))))) 
              << 0x0000000fU));
    vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut[2U] 
        = ((0xfffc0000U & vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut[2U]) 
           | (((IData)((((QData)((IData)((vlSelfRef.minirv__DOT__inst 
                                          >> 0x00000014U))) 
                         << 0x00000017U) | (QData)((IData)(
                                                           (0x00300000U 
                                                            | (0x000fffffU 
                                                               & (- (IData)(
                                                                            (vlSelfRef.minirv__DOT__inst 
                                                                             >> 0x0000001fU))))))))) 
               >> 0x00000011U) | ((IData)(((((QData)((IData)(
                                                             (vlSelfRef.minirv__DOT__inst 
                                                              >> 0x00000014U))) 
                                             << 0x00000017U) 
                                            | (QData)((IData)(
                                                              (0x00300000U 
                                                               | (0x000fffffU 
                                                                  & (- (IData)(
                                                                               (vlSelfRef.minirv__DOT__inst 
                                                                                >> 0x0000001fU)))))))) 
                                           >> 0x00000020U)) 
                                  << 0x0000000fU)));
    vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut[2U] 
        = ((0x0003ffffU & vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut[2U]) 
           | ((- (IData)((vlSelfRef.minirv__DOT__inst 
                          >> 0x0000001fU))) << 0x00000012U));
    vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut[3U] 
        = (0x000001ffU & (0x00000080U | (0x0000003fU 
                                         & ((- (IData)(
                                                       (vlSelfRef.minirv__DOT__inst 
                                                        >> 0x0000001fU))) 
                                            >> 0x0000000eU))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (IData)(
                                                       (0x00002003U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__registerfile_write_rd = 0U;
    if (((7U & (vlSelfRef.minirv__DOT__registerfile_writerd_MuxWithDefault__DOT__lut 
                >> 5U)) == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__registerfile_write_rd 
            = (0x0000001fU & vlSelfRef.minirv__DOT__registerfile_writerd_MuxWithDefault__DOT__lut);
    }
    if (((7U & (vlSelfRef.minirv__DOT__registerfile_writerd_MuxWithDefault__DOT__lut 
                >> 0x0dU)) == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__registerfile_write_rd 
            = (0x0000001fU & (vlSelfRef.minirv__DOT__registerfile_writerd_MuxWithDefault__DOT__lut 
                              >> 8U));
    }
    if (((7U & (vlSelfRef.minirv__DOT__registerfile_writerd_MuxWithDefault__DOT__lut 
                >> 0x15U)) == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__registerfile_write_rd 
            = (0x0000001fU & (vlSelfRef.minirv__DOT__registerfile_writerd_MuxWithDefault__DOT__lut 
                              >> 0x10U));
    }
    vlSelfRef.minirv__DOT__u_type_inst_result = 0U;
    vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found = 0U;
    if ((0x00008000U & (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table))) {
        vlSelfRef.minirv__DOT__u_type_inst_result = 0x0fU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table) 
                  >> 0x0eU)))) {
        vlSelfRef.minirv__DOT__u_type_inst_result = 0x0eU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table) 
                  >> 0x0dU)))) {
        vlSelfRef.minirv__DOT__u_type_inst_result = 0x0dU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table) 
                  >> 0x0cU)))) {
        vlSelfRef.minirv__DOT__u_type_inst_result = 0x0cU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table) 
                  >> 0x0bU)))) {
        vlSelfRef.minirv__DOT__u_type_inst_result = 0x0bU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table) 
                  >> 0x0aU)))) {
        vlSelfRef.minirv__DOT__u_type_inst_result = 0x0aU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table) 
                  >> 9U)))) {
        vlSelfRef.minirv__DOT__u_type_inst_result = 9U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table) 
                  >> 8U)))) {
        vlSelfRef.minirv__DOT__u_type_inst_result = 8U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table) 
                  >> 7U)))) {
        vlSelfRef.minirv__DOT__u_type_inst_result = 7U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table) 
                  >> 6U)))) {
        vlSelfRef.minirv__DOT__u_type_inst_result = 6U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table) 
                  >> 5U)))) {
        vlSelfRef.minirv__DOT__u_type_inst_result = 5U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table) 
                  >> 4U)))) {
        vlSelfRef.minirv__DOT__u_type_inst_result = 4U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table) 
                  >> 3U)))) {
        vlSelfRef.minirv__DOT__u_type_inst_result = 3U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table) 
                  >> 2U)))) {
        vlSelfRef.minirv__DOT__u_type_inst_result = 2U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table) 
                  >> 1U)))) {
        vlSelfRef.minirv__DOT__u_type_inst_result = 1U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found)) 
               & (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table)))) {
        vlSelfRef.minirv__DOT__u_type_inst_result = 0U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found = 1U;
    }
    vlSelfRef.minirv__DOT__r_type_inst_result = 0U;
    vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found = 0U;
    if ((0x00008000U & (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table))) {
        vlSelfRef.minirv__DOT__r_type_inst_result = 0x0fU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table) 
                  >> 0x0eU)))) {
        vlSelfRef.minirv__DOT__r_type_inst_result = 0x0eU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table) 
                  >> 0x0dU)))) {
        vlSelfRef.minirv__DOT__r_type_inst_result = 0x0dU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table) 
                  >> 0x0cU)))) {
        vlSelfRef.minirv__DOT__r_type_inst_result = 0x0cU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table) 
                  >> 0x0bU)))) {
        vlSelfRef.minirv__DOT__r_type_inst_result = 0x0bU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table) 
                  >> 0x0aU)))) {
        vlSelfRef.minirv__DOT__r_type_inst_result = 0x0aU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table) 
                  >> 9U)))) {
        vlSelfRef.minirv__DOT__r_type_inst_result = 9U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table) 
                  >> 8U)))) {
        vlSelfRef.minirv__DOT__r_type_inst_result = 8U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table) 
                  >> 7U)))) {
        vlSelfRef.minirv__DOT__r_type_inst_result = 7U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table) 
                  >> 6U)))) {
        vlSelfRef.minirv__DOT__r_type_inst_result = 6U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table) 
                  >> 5U)))) {
        vlSelfRef.minirv__DOT__r_type_inst_result = 5U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table) 
                  >> 4U)))) {
        vlSelfRef.minirv__DOT__r_type_inst_result = 4U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table) 
                  >> 3U)))) {
        vlSelfRef.minirv__DOT__r_type_inst_result = 3U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table) 
                  >> 2U)))) {
        vlSelfRef.minirv__DOT__r_type_inst_result = 2U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table) 
                  >> 1U)))) {
        vlSelfRef.minirv__DOT__r_type_inst_result = 1U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found)) 
               & (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table)))) {
        vlSelfRef.minirv__DOT__r_type_inst_result = 0U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found = 1U;
    }
    vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__mem_write_mask_MuxWithDefault__DOT__key 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
            << 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10));
    vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table 
        = ((0xfff9U & (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table)) 
           | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
               << 2U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10) 
                         << 1U)));
    vlSelfRef.minirv__DOT__mem_write_enable = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10));
    vlSelfRef.minirv__DOT__registerfile_read_rs1 = 0U;
    if (((7U & (vlSelfRef.minirv__DOT__registerfile_readrs1_MuxWithDefault__DOT__lut 
                >> 5U)) == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__registerfile_read_rs1 
            = (0x0000001fU & vlSelfRef.minirv__DOT__registerfile_readrs1_MuxWithDefault__DOT__lut);
    }
    if (((7U & (vlSelfRef.minirv__DOT__registerfile_readrs1_MuxWithDefault__DOT__lut 
                >> 0x0dU)) == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__registerfile_read_rs1 
            = (0x0000001fU & (vlSelfRef.minirv__DOT__registerfile_readrs1_MuxWithDefault__DOT__lut 
                              >> 8U));
    }
    if (((7U & (vlSelfRef.minirv__DOT__registerfile_readrs1_MuxWithDefault__DOT__lut 
                >> 0x15U)) == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__registerfile_read_rs1 
            = (0x0000001fU & (vlSelfRef.minirv__DOT__registerfile_readrs1_MuxWithDefault__DOT__lut 
                              >> 0x10U));
    }
    if (((vlSelfRef.minirv__DOT__registerfile_readrs1_MuxWithDefault__DOT__lut 
          >> 0x1dU) == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__registerfile_read_rs1 
            = (0x0000001fU & (vlSelfRef.minirv__DOT__registerfile_readrs1_MuxWithDefault__DOT__lut 
                              >> 0x18U));
    }
    vlSelfRef.minirv__DOT__registerfile_read_rs2 = 0U;
    if (((7U & (vlSelfRef.minirv__DOT__registerfile_readrs2_MuxWithDefault__DOT__lut 
                >> 5U)) == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__registerfile_read_rs2 
            = (0x0000001fU & vlSelfRef.minirv__DOT__registerfile_readrs2_MuxWithDefault__DOT__lut);
    }
    if (((7U & (vlSelfRef.minirv__DOT__registerfile_readrs2_MuxWithDefault__DOT__lut 
                >> 0x0dU)) == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__registerfile_read_rs2 
            = (0x0000001fU & (vlSelfRef.minirv__DOT__registerfile_readrs2_MuxWithDefault__DOT__lut 
                              >> 8U));
    }
    if (((7U & (vlSelfRef.minirv__DOT__registerfile_readrs2_MuxWithDefault__DOT__lut 
                >> 0x15U)) == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__registerfile_read_rs2 
            = (0x0000001fU & (vlSelfRef.minirv__DOT__registerfile_readrs2_MuxWithDefault__DOT__lut 
                              >> 0x10U));
    }
    vlSelfRef.minirv__DOT__imm_extend = 0U;
    if (((7U & vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut[1U]) 
         == Vminirv__ConstPool__TABLE_h986f6810_0[(0x0000007fU 
                                                   & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__imm_extend = vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut[0U];
    }
    if (((7U & (vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut[2U] 
                >> 3U)) == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__imm_extend = ((vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut[2U] 
                                              << 0x0000001dU) 
                                             | (vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut[1U] 
                                                >> 3U));
    }
    if (((7U & (vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut[3U] 
                >> 6U)) == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__imm_extend = ((vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut[3U] 
                                              << 0x0000001aU) 
                                             | (vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut[2U] 
                                                >> 6U));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                   << 4U) 
                                                  | (((IData)(
                                                              (0x00004003U 
                                                               == 
                                                               (0x0000707fU 
                                                                & vlSelfRef.minirv__DOT__inst))) 
                                                      << 3U) 
                                                     | ((IData)(
                                                                (3U 
                                                                 == 
                                                                 (0x0000707fU 
                                                                  & vlSelfRef.minirv__DOT__inst))) 
                                                        << 2U))) 
                                                 | (((IData)(
                                                             (0x00000067U 
                                                              == 
                                                              (0x0000707fU 
                                                               & vlSelfRef.minirv__DOT__inst))) 
                                                     << 1U) 
                                                    | (IData)(
                                                              (0x00000013U 
                                                               == 
                                                               (0x0000707fU 
                                                                & vlSelfRef.minirv__DOT__inst)))));
    vlSelfRef.minirv__DOT__mem_mask = 0U;
    if ((4U == (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__mem_write_mask_MuxWithDefault__DOT__key))) {
        vlSelfRef.minirv__DOT__mem_mask = 0x0fU;
    }
    if ((1U == (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__mem_write_mask_MuxWithDefault__DOT__key))) {
        vlSelfRef.minirv__DOT__mem_mask = 1U;
    }
    vlSelfRef.minirv__DOT__s_type_inst_result = 0U;
    vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found = 0U;
    if ((0x00008000U & (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table))) {
        vlSelfRef.minirv__DOT__s_type_inst_result = 0x0fU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table) 
                  >> 0x0eU)))) {
        vlSelfRef.minirv__DOT__s_type_inst_result = 0x0eU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table) 
                  >> 0x0dU)))) {
        vlSelfRef.minirv__DOT__s_type_inst_result = 0x0dU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table) 
                  >> 0x0cU)))) {
        vlSelfRef.minirv__DOT__s_type_inst_result = 0x0cU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table) 
                  >> 0x0bU)))) {
        vlSelfRef.minirv__DOT__s_type_inst_result = 0x0bU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table) 
                  >> 0x0aU)))) {
        vlSelfRef.minirv__DOT__s_type_inst_result = 0x0aU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table) 
                  >> 9U)))) {
        vlSelfRef.minirv__DOT__s_type_inst_result = 9U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table) 
                  >> 8U)))) {
        vlSelfRef.minirv__DOT__s_type_inst_result = 8U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table) 
                  >> 7U)))) {
        vlSelfRef.minirv__DOT__s_type_inst_result = 7U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table) 
                  >> 6U)))) {
        vlSelfRef.minirv__DOT__s_type_inst_result = 6U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table) 
                  >> 5U)))) {
        vlSelfRef.minirv__DOT__s_type_inst_result = 5U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table) 
                  >> 4U)))) {
        vlSelfRef.minirv__DOT__s_type_inst_result = 4U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table) 
                  >> 3U)))) {
        vlSelfRef.minirv__DOT__s_type_inst_result = 3U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table) 
                  >> 2U)))) {
        vlSelfRef.minirv__DOT__s_type_inst_result = 2U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table) 
                  >> 1U)))) {
        vlSelfRef.minirv__DOT__s_type_inst_result = 1U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found)) 
               & (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table)))) {
        vlSelfRef.minirv__DOT__s_type_inst_result = 0U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found = 1U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 = (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                 [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                 >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19 = (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSelfRef.minirv__DOT__imm_extend 
                                                                              >> 0x0000001fU))))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.minirv__DOT__imm_extend)));
    vlSelfRef.minirv__DOT__mem_valid = (IData)((((0U 
                                                  != 
                                                  (0x0cU 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21))) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                                | (IData)(vlSelfRef.minirv__DOT__mem_write_enable)));
    vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table 
        = ((0xffc1U & (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table)) 
           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21) 
              << 1U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__real_shit_source 
        = (((QData)((IData)((((((((2U & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                         [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                         << 1U)) | 
                                  (1U & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                         [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                         >> 1U))) << 6U) 
                                | (((2U & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                           [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                           >> 1U)) 
                                    | (1U & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                             [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                             >> 3U))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                    [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                      [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                      >> 5U))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                     [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                     >> 5U)) 
                                                 | (1U 
                                                    & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                       [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                       >> 7U))))) 
                              << 8U) | (((((2U & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                  [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                  >> 7U)) 
                                           | (1U & 
                                              (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                               [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                               >> 9U))) 
                                          << 6U) | 
                                         (((2U & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                  [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                  >> 9U)) 
                                           | (1U & 
                                              (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                               [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                               >> 0x0000000bU))) 
                                          << 4U)) | 
                                        ((((2U & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                  [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                  >> 0x0000000bU)) 
                                           | (1U & 
                                              (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                               [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                               >> 0x0000000dU))) 
                                          << 2U) | 
                                         ((2U & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                 [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                 >> 0x0000000dU)) 
                                          | (1U & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                   [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                   >> 0x0000000fU)))))))) 
            << 0x00000030U) | (((QData)((IData)((((
                                                   ((2U 
                                                     & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                        [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                        >> 0x0000000fU)) 
                                                    | (1U 
                                                       & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                          [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                          >> 0x00000011U))) 
                                                   << 6U) 
                                                  | (((2U 
                                                       & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                          [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                          >> 0x00000011U)) 
                                                      | (1U 
                                                         & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                            [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                            >> 0x00000013U))) 
                                                     << 4U)) 
                                                 | ((((2U 
                                                       & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                          [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                          >> 0x00000013U)) 
                                                      | (1U 
                                                         & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                            [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                            >> 0x00000015U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                           [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                           >> 0x00000015U)) 
                                                       | (1U 
                                                          & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                             [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                             >> 0x00000017U))))))) 
                                << 0x00000028U) | (
                                                   ((QData)((IData)(
                                                                    ((((2U 
                                                                        & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                                           [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                                           >> 0x00000017U)) 
                                                                       | (1U 
                                                                          & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                                             [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                                             >> 0x00000019U))) 
                                                                      << 2U) 
                                                                     | ((2U 
                                                                         & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                                            [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                                            >> 0x00000019U)) 
                                                                        | (1U 
                                                                           & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                                              [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                                              >> 0x0000001bU)))))) 
                                                    << 0x00000024U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                                           [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                                           >> 0x0000001cU)))) 
                                                       << 0x00000023U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                                              [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                                              >> 0x0000001dU)))) 
                                                          << 0x00000022U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                                                [vlSelfRef.minirv__DOT__registerfile_read_rs1] 
                                                                                >> 0x0000001eU)))) 
                                                             << 0x00000021U) 
                                                            | (0x00000001ffffffffULL 
                                                               & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11))))))))));
    vlSelfRef.minirv__DOT__alu_data1 = (((QData)((IData)(
                                                         (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11))))) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                          [vlSelfRef.minirv__DOT__registerfile_read_rs1])));
    vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[0U] 
        = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19);
    vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[1U] 
        = (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19 
                   >> 0x00000020U));
    vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[2U] 
        = (3U | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19) 
                 << 3U));
    vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[3U] 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19) 
            >> 0x0000001dU) | ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19 
                                        >> 0x00000020U)) 
                               << 3U));
    vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[4U] 
        = (0x00000010U | ((0xffffffc0U & vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[4U]) 
                          | ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19 
                                      >> 0x00000020U)) 
                             >> 0x0000001dU)));
    vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[4U] 
        = ((0x0000003fU & vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[4U]) 
           | (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
              [vlSelfRef.minirv__DOT__registerfile_read_rs2] 
              << 6U));
    vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[5U] 
        = ((0xffffffc0U & vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[5U]) 
           | (vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
              [vlSelfRef.minirv__DOT__registerfile_read_rs2] 
              >> 0x0000001aU));
    vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[5U] 
        = ((0x0000003fU & vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[5U]) 
           | ((- (IData)((vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                          [vlSelfRef.minirv__DOT__registerfile_read_rs2] 
                          >> 0x0000001fU))) << 6U));
    vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[6U] 
        = ((0x000001c0U & vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[6U]) 
           | (0x000001ffU & ((- (IData)((vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                         [vlSelfRef.minirv__DOT__registerfile_read_rs2] 
                                         >> 0x0000001fU))) 
                             >> 0x0000001aU)));
    vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[6U] 
        = (0x00000040U | (0x0000003fU & vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[6U]));
    vlSelfRef.minirv__DOT__i_type_inst_result = 0U;
    vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found = 0U;
    if ((0x00008000U & (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table))) {
        vlSelfRef.minirv__DOT__i_type_inst_result = 0x0fU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table) 
                  >> 0x0eU)))) {
        vlSelfRef.minirv__DOT__i_type_inst_result = 0x0eU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table) 
                  >> 0x0dU)))) {
        vlSelfRef.minirv__DOT__i_type_inst_result = 0x0dU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table) 
                  >> 0x0cU)))) {
        vlSelfRef.minirv__DOT__i_type_inst_result = 0x0cU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table) 
                  >> 0x0bU)))) {
        vlSelfRef.minirv__DOT__i_type_inst_result = 0x0bU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table) 
                  >> 0x0aU)))) {
        vlSelfRef.minirv__DOT__i_type_inst_result = 0x0aU;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table) 
                  >> 9U)))) {
        vlSelfRef.minirv__DOT__i_type_inst_result = 9U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table) 
                  >> 8U)))) {
        vlSelfRef.minirv__DOT__i_type_inst_result = 8U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table) 
                  >> 7U)))) {
        vlSelfRef.minirv__DOT__i_type_inst_result = 7U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table) 
                  >> 6U)))) {
        vlSelfRef.minirv__DOT__i_type_inst_result = 6U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table) 
                  >> 5U)))) {
        vlSelfRef.minirv__DOT__i_type_inst_result = 5U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table) 
                  >> 4U)))) {
        vlSelfRef.minirv__DOT__i_type_inst_result = 4U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table) 
                  >> 3U)))) {
        vlSelfRef.minirv__DOT__i_type_inst_result = 3U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table) 
                  >> 2U)))) {
        vlSelfRef.minirv__DOT__i_type_inst_result = 2U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found)) 
               & ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table) 
                  >> 1U)))) {
        vlSelfRef.minirv__DOT__i_type_inst_result = 1U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found)) 
               & (IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table)))) {
        vlSelfRef.minirv__DOT__i_type_inst_result = 0U;
        vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found = 1U;
    }
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[0U] 
        = (IData)(vlSelfRef.minirv__DOT__alu_data1);
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[1U] 
        = (IData)((vlSelfRef.minirv__DOT__alu_data1 
                   >> 0x00000020U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[2U] 
        = (3U | ((IData)(vlSelfRef.minirv__DOT__alu_data1) 
                 << 8U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[3U] 
        = (((IData)(vlSelfRef.minirv__DOT__alu_data1) 
            >> 0x00000018U) | ((IData)((vlSelfRef.minirv__DOT__alu_data1 
                                        >> 0x00000020U)) 
                               << 8U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[4U] 
        = (0x00000100U | ((0xffff0000U & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[4U]) 
                          | ((IData)((vlSelfRef.minirv__DOT__alu_data1 
                                      >> 0x00000020U)) 
                             >> 0x00000018U)));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[4U] 
        = ((0x0000ffffU & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[4U]) 
           | ((IData)(vlSelfRef.minirv__DOT__alu_data1) 
              << 0x00000010U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[5U] 
        = (((IData)(vlSelfRef.minirv__DOT__alu_data1) 
            >> 0x00000010U) | ((IData)((vlSelfRef.minirv__DOT__alu_data1 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[6U] 
        = (0x00ffffffU & ((IData)((vlSelfRef.minirv__DOT__alu_data1 
                                   >> 0x00000020U)) 
                          >> 0x00000010U));
    vlSelfRef.minirv__DOT__alu_data2 = 0ULL;
    if (((7U & vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[2U]) 
         == Vminirv__ConstPool__TABLE_h986f6810_0[(0x0000007fU 
                                                   & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__alu_data2 = (((QData)((IData)(vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[0U])));
    }
    if (((7U & (vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[4U] 
                >> 3U)) == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__alu_data2 = (((QData)((IData)(vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[4U])) 
                                             << 0x0000003dU) 
                                            | (((QData)((IData)(vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[3U])) 
                                                << 0x0000001dU) 
                                               | ((QData)((IData)(vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[2U])) 
                                                  >> 3U)));
    }
    if (((7U & (vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[6U] 
                >> 6U)) == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__alu_data2 = (((QData)((IData)(vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[6U])) 
                                             << 0x0000003aU) 
                                            | (((QData)((IData)(vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[5U])) 
                                                << 0x0000001aU) 
                                               | ((QData)((IData)(vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut[4U])) 
                                                  >> 6U)));
    }
    vlSelfRef.inv = (1U & (~ ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found) 
                              | ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found) 
                                 | ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found) 
                                    | ((IData)(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found) 
                                       | (0x00100073U 
                                          == vlSelfRef.minirv__DOT__inst)))))));
    vlSelfRef.minirv__DOT__i_alu_op = 0U;
    if ((2U == (IData)(vlSelfRef.minirv__DOT__i_type_inst_result))) {
        vlSelfRef.minirv__DOT__i_alu_op = 0U;
    }
    if ((1U == (IData)(vlSelfRef.minirv__DOT__i_type_inst_result))) {
        vlSelfRef.minirv__DOT__i_alu_op = 0U;
    }
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s0 
        = ((1U & (IData)(vlSelfRef.minirv__DOT__alu_data2))
            ? (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__real_shit_source 
               >> 1U) : vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__real_shit_source);
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[0U] 
        = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18);
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[1U] 
        = (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 
                   >> 0x00000020U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[2U] 
        = (3U | ((IData)(vlSelfRef.minirv__DOT__alu_data2) 
                 << 2U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[3U] 
        = (((IData)(vlSelfRef.minirv__DOT__alu_data2) 
            >> 0x0000001eU) | ((IData)((vlSelfRef.minirv__DOT__alu_data2 
                                        >> 0x00000020U)) 
                               << 2U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[4U] 
        = (8U | ((0xfffffff0U & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[4U]) 
                 | ((IData)((vlSelfRef.minirv__DOT__alu_data2 
                             >> 0x00000020U)) >> 0x0000001eU)));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[4U] 
        = ((0x0000000fU & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[4U]) 
           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18) 
              << 4U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[5U] 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18) 
            >> 0x0000001cU) | ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 
                                        >> 0x00000020U)) 
                               << 4U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[6U] 
        = (0x00000010U | (((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 
                                    >> 0x00000020U)) 
                           >> 0x0000001cU) | ((IData)(vlSelfRef.minirv__DOT__alu_data2) 
                                              << 6U)));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[7U] 
        = ((0x0000000fU & ((IData)(vlSelfRef.minirv__DOT__alu_data2) 
                           >> 0x0000001aU)) | ((0x00000030U 
                                                & ((IData)(vlSelfRef.minirv__DOT__alu_data2) 
                                                   >> 0x0000001aU)) 
                                               | ((IData)(
                                                          (vlSelfRef.minirv__DOT__alu_data2 
                                                           >> 0x00000020U)) 
                                                  << 6U)));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[8U] 
        = (0x000000ffU & ((0x0000000fU & ((IData)((vlSelfRef.minirv__DOT__alu_data2 
                                                   >> 0x00000020U)) 
                                          >> 0x0000001aU)) 
                          | (0x00000030U & ((IData)(
                                                    (vlSelfRef.minirv__DOT__alu_data2 
                                                     >> 0x00000020U)) 
                                            >> 0x0000001aU))));
    vlSelfRef.minirv__DOT__alu_op = 0U;
    if ((3U == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__alu_op = 0U;
    }
    if ((2U == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__alu_op = vlSelfRef.minirv__DOT__i_alu_op;
    }
    if ((1U == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__registerfile_write_enable = 1U;
        vlSelfRef.minirv__DOT__alu_op = 0U;
    }
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s1 
        = ((1U & (IData)((vlSelfRef.minirv__DOT__alu_data2 
                          >> 1U))) ? (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s0 
                                      >> 2U) : vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s0);
    vlSelfRef.minirv__DOT__minirv_alu__DOT__compare_real_data2 = 0ULL;
    if ((0U == (3U & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[2U]))) {
        vlSelfRef.minirv__DOT__minirv_alu__DOT__compare_real_data2 
            = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[1U])) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[0U])));
    }
    if ((0U == (3U & (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[4U] 
                      >> 2U)))) {
        vlSelfRef.minirv__DOT__minirv_alu__DOT__compare_real_data2 
            = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[4U])) 
                << 0x0000003eU) | (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[3U])) 
                                    << 0x0000001eU) 
                                   | ((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[2U])) 
                                      >> 2U)));
    }
    if ((0U == (3U & (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[6U] 
                      >> 4U)))) {
        vlSelfRef.minirv__DOT__minirv_alu__DOT__compare_real_data2 
            = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[6U])) 
                << 0x0000003cU) | (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[5U])) 
                                    << 0x0000001cU) 
                                   | ((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[4U])) 
                                      >> 4U)));
    }
    if ((0U == (3U & (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[8U] 
                      >> 6U)))) {
        vlSelfRef.minirv__DOT__minirv_alu__DOT__compare_real_data2 
            = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[8U])) 
                << 0x0000003aU) | (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[7U])) 
                                    << 0x0000001aU) 
                                   | ((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut[6U])) 
                                      >> 6U)));
    }
    vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 = 0ULL;
    if (((0x000000ffU & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[2U]) 
         == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
            = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[1U])) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[0U])));
    }
    if (((0x000000ffU & (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[4U] 
                         >> 8U)) == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
            = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[4U])) 
                << 0x00000038U) | (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[3U])) 
                                    << 0x00000018U) 
                                   | ((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[2U])) 
                                      >> 8U)));
    }
    if (((0x000000ffU & (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[6U] 
                         >> 0x00000010U)) == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
            = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[6U])) 
                << 0x00000030U) | (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[5U])) 
                                    << 0x00000010U) 
                                   | ((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut[4U])) 
                                      >> 0x00000010U)));
    }
    vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_do_sub = 0U;
    if ((3U == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_do_sub = 1U;
    }
    if ((1U == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_do_sub = 1U;
    }
    if ((0U == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_do_sub = 0U;
    }
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s2 
        = ((1U & (IData)((vlSelfRef.minirv__DOT__alu_data2 
                          >> 2U))) ? (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s1 
                                      >> 4U) : vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s1);
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[0U] 
        = (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__compare_real_data2);
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[1U] 
        = (IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__compare_real_data2 
                   >> 0x00000020U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[2U] 
        = (3U | ((IData)(vlSelfRef.minirv__DOT__alu_data2) 
                 << 8U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[3U] 
        = (((IData)(vlSelfRef.minirv__DOT__alu_data2) 
            >> 0x00000018U) | ((IData)((vlSelfRef.minirv__DOT__alu_data2 
                                        >> 0x00000020U)) 
                               << 8U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[4U] 
        = (0x00000100U | ((0xffff0000U & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[4U]) 
                          | ((IData)((vlSelfRef.minirv__DOT__alu_data2 
                                      >> 0x00000020U)) 
                             >> 0x00000018U)));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[4U] 
        = ((0x0000ffffU & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[4U]) 
           | ((IData)(vlSelfRef.minirv__DOT__alu_data2) 
              << 0x00000010U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[5U] 
        = (((IData)(vlSelfRef.minirv__DOT__alu_data2) 
            >> 0x00000010U) | ((IData)((vlSelfRef.minirv__DOT__alu_data2 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[6U] 
        = (0x00ffffffU & ((IData)((vlSelfRef.minirv__DOT__alu_data2 
                                   >> 0x00000020U)) 
                          >> 0x00000010U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s3 
        = ((1U & (IData)((vlSelfRef.minirv__DOT__alu_data2 
                          >> 3U))) ? (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s2 
                                      >> 8U) : vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s2);
    vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data2 = 0ULL;
    if (((0x000000ffU & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[2U]) 
         == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data2 
            = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[1U])) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[0U])));
    }
    if (((0x000000ffU & (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[4U] 
                         >> 8U)) == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data2 
            = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[4U])) 
                << 0x00000038U) | (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[3U])) 
                                    << 0x00000018U) 
                                   | ((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[2U])) 
                                      >> 8U)));
    }
    if (((0x000000ffU & (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[6U] 
                         >> 0x00000010U)) == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data2 
            = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[6U])) 
                << 0x00000030U) | (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[5U])) 
                                    << 0x00000010U) 
                                   | ((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut[4U])) 
                                      >> 0x00000010U)));
    }
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s4 
        = ((1U & (IData)((vlSelfRef.minirv__DOT__alu_data2 
                          >> 4U))) ? (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s3 
                                      >> 0x00000010U)
            : vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s3);
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
        = ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_do_sub)
            ? (~ vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data2)
            : vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data2);
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
        = ((1U & (IData)((vlSelfRef.minirv__DOT__alu_data2 
                          >> 5U))) ? (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s4 
                                      >> 0x00000020U)
            : vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s4);
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
        = (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
           & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b);
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
        = (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
           ^ vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b);
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__outdata 
        = (((QData)((IData)(((((((((2U & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                  >> 1U)))) 
                                  << 6U) | (((2U & 
                                              ((IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                        >> 2U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                           >> 3U)))) 
                                            << 4U)) 
                                | ((((2U & ((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                     >> 4U)) 
                                            << 1U)) 
                                     | (1U & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                      >> 5U)))) 
                                    << 2U) | ((2U & 
                                               ((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                         >> 6U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                            >> 7U)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & ((IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                   >> 8U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                    >> 9U)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                     >> 0x0000000aU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                      >> 0x0000000bU)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                     >> 0x0000000cU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                      >> 0x0000000dU)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                      >> 0x0000000eU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                       >> 0x0000000fU)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & ((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                     >> 0x00000010U)) 
                                            << 1U)) 
                                     | (1U & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                      >> 0x00000011U)))) 
                                    << 6U) | (((2U 
                                                & ((IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                            >> 0x00000012U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                             >> 0x00000013U)))) 
                                              << 4U)) 
                                  | ((((2U & ((IData)(
                                                      (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                       >> 0x00000014U)) 
                                              << 1U)) 
                                       | (1U & (IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                        >> 0x00000015U)))) 
                                      << 2U) | ((2U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                             >> 0x00000016U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                              >> 0x00000017U)))))) 
                                 << 8U) | (((((2U & 
                                               ((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                         >> 0x00000018U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                            >> 0x00000019U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                             >> 0x0000001aU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                              >> 0x0000001bU)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                             >> 0x0000001cU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                              >> 0x0000001dU)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                              >> 0x0000001eU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                               >> 0x0000001fU)))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((2U 
                                                      & ((IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                  >> 0x00000020U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                   >> 0x00000021U)))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                    >> 0x00000022U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                     >> 0x00000023U)))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                    >> 0x00000024U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                     >> 0x00000025U)))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                     >> 0x00000026U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                      >> 0x00000027U)))))) 
                                                 << 0x00000018U) 
                                                | ((((((2U 
                                                        & ((IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                    >> 0x00000028U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                     >> 0x00000029U)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                      >> 0x0000002aU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                       >> 0x0000002bU)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                      >> 0x0000002cU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                       >> 0x0000002dU)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((IData)(
                                                                      (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                       >> 0x0000002eU)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                        >> 0x0000002fU)))))) 
                                                   << 0x00000010U)) 
                                               | (((((((2U 
                                                        & ((IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                    >> 0x00000030U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                     >> 0x00000031U)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                      >> 0x00000032U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                       >> 0x00000033U)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                      >> 0x00000034U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                       >> 0x00000035U)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((IData)(
                                                                      (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                       >> 0x00000036U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                        >> 0x00000037U)))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & ((IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                     >> 0x00000038U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                      >> 0x00000039U)))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & ((IData)(
                                                                      (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                       >> 0x0000003aU)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                        >> 0x0000003bU)))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & ((IData)(
                                                                      (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                       >> 0x0000003cU)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                        >> 0x0000003dU)))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((IData)(
                                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                        >> 0x0000003eU)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 
                                                                         >> 0x0000003fU)))))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77 = (1U 
                                                 & (((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_do_sub) 
                                                     & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)) 
                                                    | (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x0000003bU)) 
                                                    | ((IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x0000003bU)) 
                                                       & ((IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                   >> 0x0000003aU)) 
                                                          | ((IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 0x0000003aU)) 
                                                             & ((IData)(
                                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                         >> 0x00000039U)) 
                                                                | ((IData)(
                                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                            >> 0x00000038U)) 
                                                                   & (IData)(
                                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                              >> 0x00000039U)))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x0000003fU)) 
                                                    | ((IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x0000003fU)) 
                                                       & ((IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                   >> 0x0000003eU)) 
                                                          | ((IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 0x0000003eU)) 
                                                             & ((IData)(
                                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                         >> 0x0000003dU)) 
                                                                | ((IData)(
                                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                            >> 0x0000003cU)) 
                                                                   & (IData)(
                                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                              >> 0x0000003dU)))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = (1U 
                                                & ((IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                            >> 0x00000037U)) 
                                                   | ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                               >> 0x00000037U)) 
                                                      & ((IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                  >> 0x00000036U)) 
                                                         | ((IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 0x00000036U)) 
                                                            & ((IData)(
                                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                        >> 0x00000035U)) 
                                                               | ((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 0x00000034U)) 
                                                                  & (IData)(
                                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                             >> 0x00000035U)))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = (1U 
                                                & ((IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                            >> 0x00000033U)) 
                                                   | ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                               >> 0x00000033U)) 
                                                      & ((IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                  >> 0x00000032U)) 
                                                         | ((IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 0x00000032U)) 
                                                            & ((IData)(
                                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                        >> 0x00000031U)) 
                                                               | ((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 0x00000030U)) 
                                                                  & (IData)(
                                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                             >> 0x00000031U)))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x0000002bU)) 
                                                    | ((IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x0000002bU)) 
                                                       & ((IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                   >> 0x0000002aU)) 
                                                          | ((IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 0x0000002aU)) 
                                                             & ((IData)(
                                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                         >> 0x00000029U)) 
                                                                | ((IData)(
                                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                            >> 0x00000028U)) 
                                                                   & (IData)(
                                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                              >> 0x00000029U)))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x0000002fU)) 
                                                    | ((IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x0000002fU)) 
                                                       & ((IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                   >> 0x0000002eU)) 
                                                          | ((IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 0x0000002eU)) 
                                                             & ((IData)(
                                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                         >> 0x0000002dU)) 
                                                                | ((IData)(
                                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                            >> 0x0000002cU)) 
                                                                   & (IData)(
                                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                              >> 0x0000002dU)))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = (1U 
                                                & ((IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                            >> 0x00000027U)) 
                                                   | ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                               >> 0x00000027U)) 
                                                      & ((IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                  >> 0x00000026U)) 
                                                         | ((IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 0x00000026U)) 
                                                            & ((IData)(
                                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                        >> 0x00000025U)) 
                                                               | ((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 0x00000024U)) 
                                                                  & (IData)(
                                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                             >> 0x00000025U)))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (1U 
                                                & ((IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                            >> 0x00000023U)) 
                                                   | ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                               >> 0x00000023U)) 
                                                      & ((IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                  >> 0x00000022U)) 
                                                         | ((IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 0x00000022U)) 
                                                            & ((IData)(
                                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                        >> 0x00000021U)) 
                                                               | ((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 0x00000020U)) 
                                                                  & (IData)(
                                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                             >> 0x00000021U)))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x0000001bU)) 
                                                    | ((IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x0000001bU)) 
                                                       & ((IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                   >> 0x0000001aU)) 
                                                          | ((IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 0x0000001aU)) 
                                                             & ((IData)(
                                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                         >> 0x00000019U)) 
                                                                | ((IData)(
                                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                            >> 0x00000018U)) 
                                                                   & (IData)(
                                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                              >> 0x00000019U)))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x0000001fU)) 
                                                    | ((IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x0000001fU)) 
                                                       & ((IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                   >> 0x0000001eU)) 
                                                          | ((IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 0x0000001eU)) 
                                                             & ((IData)(
                                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                         >> 0x0000001dU)) 
                                                                | ((IData)(
                                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                            >> 0x0000001cU)) 
                                                                   & (IData)(
                                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                              >> 0x0000001dU)))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = (1U 
                                                & ((IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                            >> 0x00000017U)) 
                                                   | ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                               >> 0x00000017U)) 
                                                      & ((IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                  >> 0x00000016U)) 
                                                         | ((IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 0x00000016U)) 
                                                            & ((IData)(
                                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                        >> 0x00000015U)) 
                                                               | ((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 0x00000014U)) 
                                                                  & (IData)(
                                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                             >> 0x00000015U)))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = (1U 
                                                & ((IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                            >> 0x00000013U)) 
                                                   | ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                               >> 0x00000013U)) 
                                                      & ((IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                  >> 0x00000012U)) 
                                                         | ((IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 0x00000012U)) 
                                                            & ((IData)(
                                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                        >> 0x00000011U)) 
                                                               | ((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 0x00000010U)) 
                                                                  & (IData)(
                                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                             >> 0x00000011U)))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x0000000bU)) 
                                                    | ((IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x0000000bU)) 
                                                       & ((IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                   >> 0x0000000aU)) 
                                                          | ((IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 0x0000000aU)) 
                                                             & ((IData)(
                                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                         >> 9U)) 
                                                                | ((IData)(
                                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                            >> 8U)) 
                                                                   & (IData)(
                                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                              >> 9U)))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x0000000fU)) 
                                                    | ((IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x0000000fU)) 
                                                       & ((IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                   >> 0x0000000eU)) 
                                                          | ((IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 0x0000000eU)) 
                                                             & ((IData)(
                                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                         >> 0x0000000dU)) 
                                                                | ((IData)(
                                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                            >> 0x0000000cU)) 
                                                                   & (IData)(
                                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                              >> 0x0000000dU)))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = (1U 
                                                & ((IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                            >> 7U)) 
                                                   | ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                               >> 7U)) 
                                                      & ((IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                  >> 6U)) 
                                                         | ((IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 6U)) 
                                                            & ((IData)(
                                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                        >> 5U)) 
                                                               | ((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 4U)) 
                                                                  & (IData)(
                                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                             >> 5U)))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = (1U 
                                                & ((IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                            >> 3U)) 
                                                   | ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                               >> 3U)) 
                                                      & ((IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                  >> 2U)) 
                                                         | ((IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 2U)) 
                                                            & ((IData)(
                                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                        >> 1U)) 
                                                               | ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G) 
                                                                  & (IData)(
                                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                             >> 1U)))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 1U)) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                                       & (IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                  >> 1U)))));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__1__KET__ 
        = (((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_do_sub) 
            & (0x0000ffffU == (0x0000ffffU & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)))) 
           | ((IData)(((0x000000000000f000ULL == (0x000000000000f000ULL 
                                                  & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)) 
                       & ((IData)(((0x0000000000000f00ULL 
                                    == (0x0000000000000f00ULL 
                                        & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)) 
                                   & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                       & (0x00000000000000f0ULL 
                                          == (0x00000000000000f0ULL 
                                              & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))) 
                          | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89)))) 
              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 2U)) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78) 
                                                       & (IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                  >> 2U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000010U)) 
                                                    | ((IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x00000010U)) 
                                                       & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__1__KET__))));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__2__KET__ 
        = (((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__1__KET__) 
            & (0x00000000ffff0000ULL == (0x00000000ffff0000ULL 
                                         & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
           | ((IData)(((0x00000000f0000000ULL == (0x00000000f0000000ULL 
                                                  & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)) 
                       & ((IData)(((0x000000000f000000ULL 
                                    == (0x000000000f000000ULL 
                                        & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)) 
                                   & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                       & (0x0000000000f00000ULL 
                                          == (0x0000000000f00000ULL 
                                              & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)))) 
                          | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75)))) 
              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37 = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_do_sub)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000011U)) 
                                                    | ((IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x00000011U)) 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000020U)) 
                                                    | ((IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x00000020U)) 
                                                       & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__2__KET__))));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__3__KET__ 
        = (((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__2__KET__) 
            & (0x0000ffff00000000ULL == (0x0000ffff00000000ULL 
                                         & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
           | ((IData)(((0x0000f00000000000ULL == (0x0000f00000000000ULL 
                                                  & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)) 
                       & ((IData)(((0x00000f0000000000ULL 
                                    == (0x00000f0000000000ULL 
                                        & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)) 
                                   & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                       & (0x000000f000000000ULL 
                                          == (0x000000f000000000ULL 
                                              & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))) 
                          | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62)))) 
              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000012U)) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64) 
                                                       & (IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                  >> 0x00000012U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000021U)) 
                                                    | ((IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x00000021U)) 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_91 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000030U)) 
                                                    | ((IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x00000030U)) 
                                                       & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__3__KET__))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30 = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__1__KET__)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000022U)) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51) 
                                                       & (IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                  >> 0x00000022U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000031U)) 
                                                    | ((IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x00000031U)) 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_91))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26 = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__2__KET__)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000032U)) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38) 
                                                       & (IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                  >> 0x00000032U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_91) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__3__KET__)));
}

void Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16__0(Vminirv_cla_16* vlSelf);
void Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2__0(Vminirv_cla_16* vlSelf);
void Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3__0(Vminirv_cla_16* vlSelf);
void Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__0(Vminirv_cla_16* vlSelf);
void Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__1(Vminirv_cla_16* vlSelf);
void Vminirv___024root___nba_sequent__TOP__2(Vminirv___024root* vlSelf);
void Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__2(Vminirv_cla_16* vlSelf);
void Vminirv___024root___ico_sequent__TOP__3(Vminirv___024root* vlSelf);

VL_ATTR_COLD bool Vminirv___024root___eval_phase__stl(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_phase__stl\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vminirv___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vminirv___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vminirv___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                }
                Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16__0((&vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16));
                Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2__0((&vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2));
                Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3__0((&vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3));
                Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__0((&vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4));
                {
                    // Inlined CFunc: _ico_sequent__TOP__1
                    vlSelfRef.alu_cout = (1U & ((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000003eU)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_45) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x0000003eU)))));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46 
                        = (1U & ((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                          >> 0x0000003fU)) 
                                 | ((IData)(vlSelfRef.alu_cout) 
                                    & (IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                               >> 0x0000003fU)))));
                    vlSelfRef.alu_sub_carry = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46)) 
                                               & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_do_sub));
                }
                Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__1((&vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4));
                Vminirv___024root___nba_sequent__TOP__2(vlSelf);
                Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__2((&vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4));
                Vminirv___024root___ico_sequent__TOP__3(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vminirv___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminirv___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vminirv___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( rst)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vminirv___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminirv___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vminirv___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vminirv___024root___ctor_var_reset(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___ctor_var_reset\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->develop_put = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2989599914964026746ull);
    vlSelf->alu_outdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10723798452935832898ull);
    vlSelf->alu_sub_carry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15240915554364210863ull);
    vlSelf->alu_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 391625454724976043ull);
    vlSelf->alu_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6877900235479524133ull);
    vlSelf->alu_sz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1047222613326096876ull);
    vlSelf->alu_cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6004022822832253850ull);
    vlSelf->inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1048193178933859186ull);
    vlSelf->minirv__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13130012410628472097ull);
    vlSelf->minirv__DOT__pc_static = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17268335889730440504ull);
    vlSelf->minirv__DOT__mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16165983494840916791ull);
    vlSelf->minirv__DOT__mem_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9564459800499168836ull);
    vlSelf->minirv__DOT__mem_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10981312316729726895ull);
    vlSelf->minirv__DOT__mem_mask = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16225464937754958694ull);
    vlSelf->minirv__DOT__inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9986465157862672572ull);
    vlSelf->minirv__DOT__imm_extend = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5720236789722605743ull);
    vlSelf->minirv__DOT__i_type_inst_result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14764718942416032887ull);
    vlSelf->minirv__DOT__r_type_inst_result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1009479172417813799ull);
    vlSelf->minirv__DOT__u_type_inst_result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10244009974883349728ull);
    vlSelf->minirv__DOT__s_type_inst_result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17087667409131557094ull);
    vlSelf->minirv__DOT__registerfile_write_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1788277021856497717ull);
    vlSelf->minirv__DOT__registerfile_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6735152862921692453ull);
    vlSelf->minirv__DOT__registerfile_read_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 719153981382456654ull);
    vlSelf->minirv__DOT__registerfile_read_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 812645082672461741ull);
    vlSelf->minirv__DOT__registerfile_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5139515628400027021ull);
    vlSelf->minirv__DOT__i_type_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 818067119729471039ull);
    vlSelf->minirv__DOT__i_alu_op = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5662493959553959859ull);
    vlSelf->minirv__DOT__alu_op = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7820372130165500761ull);
    vlSelf->minirv__DOT__alu_data1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3612443742189962365ull);
    vlSelf->minirv__DOT__alu_data2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12177510947096126829ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__adder_input_data1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5070468805032783145ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__adder_input_data2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5346329019581999213ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__adder_do_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7739963714424064914ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__compare_real_data2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16576030024319104011ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3555508529313566579ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10584119634075795294ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2744069455819602865ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16290258678710833599ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 412351592265446373ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9387114630941034501ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12308558478742577043ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__u_compare__DOT__u_MuxWithDefault_compare__DOT__lut = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17578854747376124690ull);
    VL_SCOPED_RAND_RESET_W(216, vlSelf->minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut, __VscopeHash, 15452010540231390993ull);
    VL_SCOPED_RAND_RESET_W(216, vlSelf->minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut, __VscopeHash, 4589607417868233554ull);
    VL_SCOPED_RAND_RESET_W(576, vlSelf->minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut, __VscopeHash, 10481945252484300675ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__u_shifter__DOT__outdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4072346187803769934ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__u_shifter__DOT__real_shit_source = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11383052634321333247ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6245371092279032161ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2749956022818152941ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 467499839724735395ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s3 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7342896123428630085ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5384326877329938201ull);
    vlSelf->minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18420889034576218833ull);
    VL_SCOPED_RAND_RESET_W(264, vlSelf->minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut, __VscopeHash, 4744470228702749417ull);
    vlSelf->minirv__DOT__minirv_decode_inst__DOT__pc_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16116565004154185529ull);
    vlSelf->minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9004507631740759130ull);
    vlSelf->minirv__DOT__minirv_decode_inst__DOT__r_enc_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 795048573237038129ull);
    vlSelf->minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7634764102919057023ull);
    vlSelf->minirv__DOT__minirv_decode_inst__DOT__i_enc_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6409180784166954624ull);
    vlSelf->minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4405080766331842497ull);
    vlSelf->minirv__DOT__minirv_decode_inst__DOT__u_enc_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9699674313107626913ull);
    vlSelf->minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4420308134328150305ull);
    vlSelf->minirv__DOT__minirv_decode_inst__DOT__s_enc_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11694497276675047283ull);
    VL_SCOPED_RAND_RESET_W(105, vlSelf->minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut, __VscopeHash, 10632121852954277453ull);
    vlSelf->minirv__DOT__minirv_decode_inst__DOT__mem_write_mask_MuxWithDefault__DOT__key = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17913911780753481518ull);
    VL_SCOPED_RAND_RESET_W(105, vlSelf->minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut, __VscopeHash, 9185742278550499317ull);
    vlSelf->minirv__DOT__registerfile_readrs2_MuxWithDefault__DOT__lut = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15893735327384653423ull);
    vlSelf->minirv__DOT__registerfile_writerd_MuxWithDefault__DOT__lut = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9938872060434302378ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->minirv__DOT__minirv_registerfile__DOT__registersfile[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12302422318374575023ull);
    }
    VL_SCOPED_RAND_RESET_W(201, vlSelf->minirv__DOT__alu_data2_MuxWithDefault__DOT__lut, __VscopeHash, 4718831885727623029ull);
    VL_SCOPED_RAND_RESET_W(180, vlSelf->minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut, __VscopeHash, 13287215810223887415ull);
    vlSelf->minirv__DOT__registerfile_readrs1_MuxWithDefault__DOT__lut = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15541151349470552545ull);
    vlSelf->__Vfunc_prom_read__2__Vfuncout = 0;
    vlSelf->__Vfunc_pmem_read__3__Vfuncout = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_9 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_10 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_11 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_18 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_19 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_21 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_23 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_26 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_30 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_37 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_38 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_39 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_46 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_49 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_50 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_51 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_52 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_62 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_63 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_64 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_65 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_75 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_76 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_77 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_78 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_79 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_89 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_90 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_91 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_92 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_93 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
