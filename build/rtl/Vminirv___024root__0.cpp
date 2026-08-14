// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminirv.h for the primary calling header

#include "Vminirv__pch.h"

bool Vminirv___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vminirv___024unit____Vdpiimwrap_prom_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &prom_read__Vfuncrtn);
extern const VlUnpacked<CData/*2:0*/, 128> Vminirv__ConstPool__TABLE_h986f6810_0;

void Vminirv___024root___ico_sequent__TOP__0(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___ico_sequent__TOP__0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

extern const VlUnpacked<CData/*0:0*/, 512> Vminirv__ConstPool__TABLE_h4b06d23f_0;

void Vminirv___024root___ico_sequent__TOP__2(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___ico_sequent__TOP__2\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alu_overflow = (1U & VL_REDXOR_32((3U 
                                                 & ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_4__DOT__tmp_cout) 
                                                    >> 3U))));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum 
        = (((QData)((IData)(((((((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_4__DOT__sum) 
                                 << 0x0000000cU) | 
                                (0x00000f00U & ((((
                                                   ((2U 
                                                     & (((IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                  >> 0x0000003aU)) 
                                                         | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42) 
                                                            & (IData)(
                                                                      (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                       >> 0x0000003aU)))) 
                                                        << 1U)) 
                                                    | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42)) 
                                                   << 2U) 
                                                  | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_47) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_3__DOT__cin))) 
                                                 ^ (IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                            >> 0x00000038U))) 
                                                << 8U))) 
                               | ((0x000000f0U & ((
                                                   ((((2U 
                                                       & (((IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                    >> 0x00000036U)) 
                                                           | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40) 
                                                              & (IData)(
                                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                         >> 0x00000036U)))) 
                                                          << 1U)) 
                                                      | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40)) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_48) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_2__DOT__cin))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x00000034U))) 
                                                  << 4U)) 
                                  | (0x0000000fU & 
                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23) 
                                      ^ (IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                 >> 0x00000030U)))))) 
                              << 0x00000010U) | (((
                                                   (0x000000f0U 
                                                    & ((((((2U 
                                                            & (((IData)(
                                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                         >> 0x0000002eU)) 
                                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58) 
                                                                   & (IData)(
                                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                              >> 0x0000002eU)))) 
                                                               << 1U)) 
                                                           | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58)) 
                                                          << 2U) 
                                                         | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_57) 
                                                             << 1U) 
                                                            | Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                            [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_16])) 
                                                        ^ (IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                   >> 0x0000002cU))) 
                                                       << 4U)) 
                                                   | (0x0000000fU 
                                                      & (((((2U 
                                                             & (((IData)(
                                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                          >> 0x0000002aU)) 
                                                                 | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55) 
                                                                    & (IData)(
                                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                               >> 0x0000002aU)))) 
                                                                << 1U)) 
                                                            | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55)) 
                                                           << 2U) 
                                                          | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_60) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__PVT__u_cla_4_3__DOT__cin))) 
                                                         ^ (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x00000028U))))) 
                                                  << 8U) 
                                                 | ((0x000000f0U 
                                                     & ((((((2U 
                                                             & (((IData)(
                                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                          >> 0x00000026U)) 
                                                                 | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53) 
                                                                    & (IData)(
                                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                               >> 0x00000026U)))) 
                                                                << 1U)) 
                                                            | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53)) 
                                                           << 2U) 
                                                          | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_61) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__PVT__u_cla_4_2__DOT__cin))) 
                                                         ^ (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x00000024U))) 
                                                        << 4U)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26) 
                                                          ^ (IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 0x00000020U))))))))) 
            << 0x00000020U) | (QData)((IData)((((((0x000000f0U 
                                                   & ((((((2U 
                                                           & (((IData)(
                                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                        >> 0x0000001eU)) 
                                                               | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71) 
                                                                  & (IData)(
                                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                             >> 0x0000001eU)))) 
                                                              << 1U)) 
                                                          | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71)) 
                                                         << 2U) 
                                                        | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_70) 
                                                            << 1U) 
                                                           | Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                           [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_15])) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                  >> 0x0000001cU))) 
                                                      << 4U)) 
                                                  | (0x0000000fU 
                                                     & (((((2U 
                                                            & (((IData)(
                                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                         >> 0x0000001aU)) 
                                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68) 
                                                                   & (IData)(
                                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                              >> 0x0000001aU)))) 
                                                               << 1U)) 
                                                           | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68)) 
                                                          << 2U) 
                                                         | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_73) 
                                                             << 1U) 
                                                            | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__PVT__u_cla_4_3__DOT__cin))) 
                                                        ^ (IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                   >> 0x00000018U))))) 
                                                 << 0x00000018U) 
                                                | (((0x000000f0U 
                                                     & ((((((2U 
                                                             & (((IData)(
                                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                          >> 0x00000016U)) 
                                                                 | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66) 
                                                                    & (IData)(
                                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                               >> 0x00000016U)))) 
                                                                << 1U)) 
                                                            | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66)) 
                                                           << 2U) 
                                                          | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_74) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__PVT__u_cla_4_2__DOT__cin))) 
                                                         ^ (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x00000014U))) 
                                                        << 4U)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30) 
                                                          ^ (IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 0x00000010U))))) 
                                                   << 0x00000010U)) 
                                               | ((((0x000000f0U 
                                                     & ((((((2U 
                                                             & (((IData)(
                                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                          >> 0x0000000eU)) 
                                                                 | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85) 
                                                                    & (IData)(
                                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                               >> 0x0000000eU)))) 
                                                                << 1U)) 
                                                            | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85)) 
                                                           << 2U) 
                                                          | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_84) 
                                                              << 1U) 
                                                             | Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                             [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_14])) 
                                                         ^ (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x0000000cU))) 
                                                        << 4U)) 
                                                    | (0x0000000fU 
                                                       & (((((2U 
                                                              & (((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 0x0000000aU)) 
                                                                  | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82) 
                                                                     & (IData)(
                                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x0000000aU)))) 
                                                                 << 1U)) 
                                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82)) 
                                                            << 2U) 
                                                           | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_87) 
                                                               << 1U) 
                                                              | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__PVT__u_cla_4_3__DOT__cin))) 
                                                          ^ (IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 8U))))) 
                                                   << 8U) 
                                                  | ((0x000000f0U 
                                                      & ((((((2U 
                                                              & (((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 6U)) 
                                                                  | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80) 
                                                                     & (IData)(
                                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 6U)))) 
                                                                 << 1U)) 
                                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80)) 
                                                            << 2U) 
                                                           | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_88) 
                                                               << 1U) 
                                                              | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__PVT__u_cla_4_2__DOT__cin))) 
                                                          ^ (IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 4U))) 
                                                         << 4U)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37) 
                                                           ^ (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)))))))));
    vlSelfRef.alu_zero = (1U & (~ (0U != vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum)));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[0U] 
        = (IData)((~ vlSelfRef.minirv__DOT__alu_data1));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[1U] 
        = (IData)(((~ vlSelfRef.minirv__DOT__alu_data1) 
                   >> 0x00000020U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[2U] 
        = (7U | ((IData)((vlSelfRef.minirv__DOT__alu_data2 
                          & vlSelfRef.minirv__DOT__alu_data1)) 
                 << 8U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[3U] 
        = (((IData)((vlSelfRef.minirv__DOT__alu_data2 
                     & vlSelfRef.minirv__DOT__alu_data1)) 
            >> 0x00000018U) | ((IData)(((vlSelfRef.minirv__DOT__alu_data2 
                                         & vlSelfRef.minirv__DOT__alu_data1) 
                                        >> 0x00000020U)) 
                               << 8U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[4U] 
        = ((0xffffff00U & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[4U]) 
           | ((IData)(((vlSelfRef.minirv__DOT__alu_data2 
                        & vlSelfRef.minirv__DOT__alu_data1) 
                       >> 0x00000020U)) >> 0x00000018U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[4U] 
        = (0x00000600U | ((0x000000ffU & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[4U]) 
                          | ((IData)((vlSelfRef.minirv__DOT__alu_data2 
                                      | vlSelfRef.minirv__DOT__alu_data1)) 
                             << 0x00000010U)));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[5U] 
        = ((0x000000ffU & ((IData)((vlSelfRef.minirv__DOT__alu_data2 
                                    | vlSelfRef.minirv__DOT__alu_data1)) 
                           >> 0x00000010U)) | ((0x0000ff00U 
                                                & ((IData)(
                                                           (vlSelfRef.minirv__DOT__alu_data2 
                                                            | vlSelfRef.minirv__DOT__alu_data1)) 
                                                   >> 0x00000010U)) 
                                               | ((IData)(
                                                          ((vlSelfRef.minirv__DOT__alu_data2 
                                                            | vlSelfRef.minirv__DOT__alu_data1) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000010U)));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[6U] 
        = (0x00050000U | ((0xff000000U & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[6U]) 
                          | ((0x000000ffU & ((IData)(
                                                     ((vlSelfRef.minirv__DOT__alu_data2 
                                                       | vlSelfRef.minirv__DOT__alu_data1) 
                                                      >> 0x00000020U)) 
                                             >> 0x00000010U)) 
                             | (0x0000ff00U & ((IData)(
                                                       ((vlSelfRef.minirv__DOT__alu_data2 
                                                         | vlSelfRef.minirv__DOT__alu_data1) 
                                                        >> 0x00000020U)) 
                                               >> 0x00000010U)))));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[6U] 
        = ((0x00ffffffU & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[6U]) 
           | ((IData)((vlSelfRef.minirv__DOT__alu_data2 
                       ^ vlSelfRef.minirv__DOT__alu_data1)) 
              << 0x00000018U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[7U] 
        = (((IData)((vlSelfRef.minirv__DOT__alu_data2 
                     ^ vlSelfRef.minirv__DOT__alu_data1)) 
            >> 8U) | ((IData)(((vlSelfRef.minirv__DOT__alu_data2 
                                ^ vlSelfRef.minirv__DOT__alu_data1) 
                               >> 0x00000020U)) << 0x00000018U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[8U] 
        = (0x04000000U | ((IData)(((vlSelfRef.minirv__DOT__alu_data2 
                                    ^ vlSelfRef.minirv__DOT__alu_data1) 
                                   >> 0x00000020U)) 
                          >> 8U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[9U] = 0U;
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[10U] = 0U;
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[11U] 
        = (3U | ((0x00ffff00U & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__outdata) 
                                 << 8U)) | (0xff000000U 
                                            & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__outdata) 
                                               << 8U))));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[12U] 
        = ((((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__outdata) 
             >> 0x00000018U) | (0x00ffff00U & ((IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__outdata 
                                                        >> 0x00000020U)) 
                                               << 8U))) 
           | (0xff000000U & ((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__outdata 
                                      >> 0x00000020U)) 
                             << 8U)));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[13U] 
        = ((0xffffff00U & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[13U]) 
           | ((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__outdata 
                       >> 0x00000020U)) >> 0x00000018U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[13U] 
        = (0x00000200U | ((0x000000ffU & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[13U]) 
                          | ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum) 
                             << 0x00000010U)));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[14U] 
        = ((0x000000ffU & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum) 
                           >> 0x00000010U)) | ((0x0000ff00U 
                                                & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum) 
                                                   >> 0x00000010U)) 
                                               | ((IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum 
                                                           >> 0x00000020U)) 
                                                  << 0x00000010U)));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[15U] 
        = (0x00010000U | ((0x000000ffU & ((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum 
                                                   >> 0x00000020U)) 
                                          >> 0x00000010U)) 
                          | (((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum) 
                              << 0x00000018U) | (0x0000ff00U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum 
                                                             >> 0x00000020U)) 
                                                    >> 0x00000010U)))));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[16U] 
        = ((0x000000ffU & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum) 
                           >> 8U)) | ((0x00ffff00U 
                                       & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum) 
                                          >> 8U)) | 
                                      ((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum 
                                                >> 0x00000020U)) 
                                       << 0x00000018U)));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[17U] 
        = ((0xff000000U & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[17U]) 
           | ((0x000000ffU & ((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum 
                                       >> 0x00000020U)) 
                              >> 8U)) | (0x00ffff00U 
                                         & ((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum 
                                                     >> 0x00000020U)) 
                                            >> 8U))));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[17U] 
        = (0x00ffffffU & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[17U]);
    vlSelfRef.alu_outdata = 0ULL;
    if (((0x000000ffU & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[2U]) 
         == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.alu_outdata = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[1U])) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[0U])));
    }
    if (((0x000000ffU & (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[4U] 
                         >> 8U)) == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.alu_outdata = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[4U])) 
                                  << 0x00000038U) | 
                                 (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[3U])) 
                                   << 0x00000018U) 
                                  | ((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[2U])) 
                                     >> 8U)));
    }
    if (((0x000000ffU & (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[6U] 
                         >> 0x00000010U)) == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.alu_outdata = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[6U])) 
                                  << 0x00000030U) | 
                                 (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[5U])) 
                                   << 0x00000010U) 
                                  | ((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[4U])) 
                                     >> 0x00000010U)));
    }
    if (((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[8U] 
          >> 0x00000018U) == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.alu_outdata = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[8U])) 
                                  << 0x00000028U) | 
                                 (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[7U])) 
                                   << 8U) | ((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[6U])) 
                                             >> 0x00000018U)));
    }
    if (((0x000000ffU & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[11U]) 
         == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.alu_outdata = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[10U])) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[9U])));
    }
    if (((0x000000ffU & (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[13U] 
                         >> 8U)) == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.alu_outdata = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[13U])) 
                                  << 0x00000038U) | 
                                 (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[12U])) 
                                   << 0x00000018U) 
                                  | ((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[11U])) 
                                     >> 8U)));
    }
    if (((0x000000ffU & (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[15U] 
                         >> 0x00000010U)) == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.alu_outdata = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[15U])) 
                                  << 0x00000030U) | 
                                 (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[14U])) 
                                   << 0x00000010U) 
                                  | ((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[13U])) 
                                     >> 0x00000010U)));
    }
    if (((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[17U] 
          >> 0x00000018U) == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.alu_outdata = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[17U])) 
                                  << 0x00000028U) | 
                                 (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[16U])) 
                                   << 8U) | ((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[15U])) 
                                             >> 0x00000018U)));
    }
}

void Vminirv___024root___ico_sequent__TOP__3(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___ico_sequent__TOP__3\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_compare__DOT__u_MuxWithDefault_compare__DOT__lut 
        = (0x000000a6U | ((((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_12) 
                            << 9U) | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_12) 
                                      << 6U)) | (((IData)(vlSelfRef.alu_sub_carry) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.alu_sub_carry))));
    vlSelfRef.alu_sz = 0U;
    if ((0U == (3U & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_compare__DOT__u_MuxWithDefault_compare__DOT__lut) 
                      >> 1U)))) {
        vlSelfRef.alu_sz = (1U & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_compare__DOT__u_MuxWithDefault_compare__DOT__lut));
    }
    if ((0U == (3U & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_compare__DOT__u_MuxWithDefault_compare__DOT__lut) 
                      >> 4U)))) {
        vlSelfRef.alu_sz = (1U & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_compare__DOT__u_MuxWithDefault_compare__DOT__lut) 
                                  >> 3U));
    }
    if ((0U == (3U & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_compare__DOT__u_MuxWithDefault_compare__DOT__lut) 
                      >> 7U)))) {
        vlSelfRef.alu_sz = (1U & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_compare__DOT__u_MuxWithDefault_compare__DOT__lut) 
                                  >> 6U));
    }
    if ((0U == (3U & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_compare__DOT__u_MuxWithDefault_compare__DOT__lut) 
                      >> 0x0aU)))) {
        vlSelfRef.alu_sz = (1U & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_compare__DOT__u_MuxWithDefault_compare__DOT__lut) 
                                  >> 9U));
    }
}

void Vminirv___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, CData/*7:0*/ rmask, CData/*0:0*/ skip_difftest_one, IData/*31:0*/ &pmem_read__Vfuncrtn);

void Vminirv___024root___ico_comb__TOP__0(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___ico_comb__TOP__0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((IData)(vlSelfRef.minirv__DOT__mem_valid) 
          & (~ (IData)(vlSelfRef.minirv__DOT__mem_write_enable))) 
         & (~ (IData)(vlSelfRef.clk)))) {
        Vminirv___024unit____Vdpiimwrap_pmem_read_TOP____024unit((IData)(vlSelfRef.alu_outdata), 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                                                   ? 0x0fU
                                                                   : 
                                                                  (1U 
                                                                   & (- (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21) 
                                                                                >> 2U))))))), 1U, vlSelfRef.__Vfunc_pmem_read__3__Vfuncout);
        vlSelfRef.minirv__DOT__mem_read_data = vlSelfRef.__Vfunc_pmem_read__3__Vfuncout;
    }
    vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[0U] 
        = (IData)((0x0000000500000000ULL | (((QData)((IData)(
                                                             (0x000000ffU 
                                                              & vlSelfRef.minirv__DOT__mem_read_data))) 
                                             << 0x00000024U) 
                                            | (QData)((IData)(vlSelfRef.minirv__DOT__mem_read_data)))));
    vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[1U] 
        = (IData)(((0x0000000500000000ULL | (((QData)((IData)(
                                                              (0x000000ffU 
                                                               & vlSelfRef.minirv__DOT__mem_read_data))) 
                                              << 0x00000024U) 
                                             | (QData)((IData)(vlSelfRef.minirv__DOT__mem_read_data)))) 
                   >> 0x00000020U));
    vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
        = (0x00000040U | (0xffffff00U & vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[2U]));
    vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
        = ((0x000000ffU & vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[2U]) 
           | (((- (IData)((1U & (vlSelfRef.minirv__DOT__mem_read_data 
                                 >> 7U)))) << 0x00000010U) 
              | (0x0000ff00U & (vlSelfRef.minirv__DOT__mem_read_data 
                                << 8U))));
    vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[3U] 
        = ((0xffffff00U & vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[3U]) 
           | (0x000000ffU & ((- (IData)((1U & (vlSelfRef.minirv__DOT__mem_read_data 
                                               >> 7U)))) 
                             >> 0x00000010U)));
    vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[3U] 
        = ((0x000000ffU & vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[3U]) 
           | ((IData)((0x0000002000000003ULL | ((QData)((IData)(
                                                                ((IData)(4U) 
                                                                 + vlSelfRef.minirv__DOT__pc))) 
                                                << 4U))) 
              << 8U));
    vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[4U] 
        = ((0xffff0000U & vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[4U]) 
           | (((IData)((0x0000002000000003ULL | ((QData)((IData)(
                                                                 ((IData)(4U) 
                                                                  + vlSelfRef.minirv__DOT__pc))) 
                                                 << 4U))) 
               >> 0x00000018U) | ((IData)(((0x0000002000000003ULL 
                                            | ((QData)((IData)(
                                                               ((IData)(4U) 
                                                                + vlSelfRef.minirv__DOT__pc))) 
                                               << 4U)) 
                                           >> 0x00000020U)) 
                                  << 8U)));
    vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[4U] 
        = ((0x0000ffffU & vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[4U]) 
           | ((IData)((0x0000000100000000ULL | (QData)((IData)(vlSelfRef.alu_outdata)))) 
              << 0x00000010U));
    vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[5U] 
        = (0x000fffffU & (((IData)((0x0000000100000000ULL 
                                    | (QData)((IData)(vlSelfRef.alu_outdata)))) 
                           >> 0x00000010U) | ((IData)(
                                                      ((0x0000000100000000ULL 
                                                        | (QData)((IData)(vlSelfRef.alu_outdata))) 
                                                       >> 0x00000020U)) 
                                              << 0x00000010U)));
    vlSelfRef.minirv__DOT__i_type_write_data = 0U;
    if (((0x0000000fU & vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[1U]) 
         == (IData)(vlSelfRef.minirv__DOT__i_type_inst_result))) {
        vlSelfRef.minirv__DOT__i_type_write_data = vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[0U];
    }
    if (((0x0000000fU & (vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
                         >> 4U)) == (IData)(vlSelfRef.minirv__DOT__i_type_inst_result))) {
        vlSelfRef.minirv__DOT__i_type_write_data = 
            ((vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
              << 0x0000001cU) | (vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[1U] 
                                 >> 4U));
    }
    if (((0x0000000fU & (vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[3U] 
                         >> 8U)) == (IData)(vlSelfRef.minirv__DOT__i_type_inst_result))) {
        vlSelfRef.minirv__DOT__i_type_write_data = 
            ((vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[3U] 
              << 0x00000018U) | (vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
                                 >> 8U));
    }
    if (((0x0000000fU & (vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[4U] 
                         >> 0x0000000cU)) == (IData)(vlSelfRef.minirv__DOT__i_type_inst_result))) {
        vlSelfRef.minirv__DOT__i_type_write_data = 
            ((vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[4U] 
              << 0x00000014U) | (vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[3U] 
                                 >> 0x0000000cU));
    }
    if (((0x0000000fU & (vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[5U] 
                         >> 0x00000010U)) == (IData)(vlSelfRef.minirv__DOT__i_type_inst_result))) {
        vlSelfRef.minirv__DOT__i_type_write_data = 
            ((vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[5U] 
              << 0x00000010U) | (vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[4U] 
                                 >> 0x00000010U));
    }
    vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[0U] 
        = (0xfffff000U & (vlSelfRef.minirv__DOT__inst 
                          & (- (IData)((4U == Vminirv__ConstPool__TABLE_h986f6810_0
                                        [(0x0000007fU 
                                          & vlSelfRef.minirv__DOT__inst)])))));
    vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[1U] 
        = (IData)((0x0000001000000004ULL | ((QData)((IData)(vlSelfRef.minirv__DOT__i_type_write_data)) 
                                            << 3U)));
    vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
        = ((0xffffffc0U & vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[2U]) 
           | (IData)(((0x0000001000000004ULL | ((QData)((IData)(vlSelfRef.minirv__DOT__i_type_write_data)) 
                                                << 3U)) 
                      >> 0x00000020U)));
    vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
        = ((0x0000003fU & vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[2U]) 
           | (((IData)(vlSelfRef.alu_outdata) & (- (IData)(
                                                           (1U 
                                                            == (IData)(vlSelfRef.minirv__DOT__r_type_inst_result))))) 
              << 6U));
    vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[3U] 
        = ((0x000001c0U & vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[3U]) 
           | (0x000001ffU & (((IData)(vlSelfRef.alu_outdata) 
                              & (- (IData)((1U == (IData)(vlSelfRef.minirv__DOT__r_type_inst_result))))) 
                             >> 0x0000001aU)));
    vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[3U] 
        = (0x00000040U | (0x0000003fU & vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[3U]));
    vlSelfRef.minirv__DOT__registerfile_write_data = 0U;
    if (((7U & vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[1U]) 
         == Vminirv__ConstPool__TABLE_h986f6810_0[(0x0000007fU 
                                                   & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__registerfile_write_data 
            = vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[0U];
    }
    if (((7U & (vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
                >> 3U)) == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__registerfile_write_data 
            = ((vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
                << 0x0000001dU) | (vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[1U] 
                                   >> 3U));
    }
    if (((7U & (vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[3U] 
                >> 6U)) == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__registerfile_write_data 
            = ((vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[3U] 
                << 0x0000001aU) | (vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
                                   >> 6U));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminirv___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16__0(Vminirv_cla_16* vlSelf);
void Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2__0(Vminirv_cla_16* vlSelf);
void Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3__0(Vminirv_cla_16* vlSelf);
void Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__0(Vminirv_cla_16* vlSelf);
void Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__1(Vminirv_cla_16* vlSelf);
void Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__2(Vminirv_cla_16* vlSelf);

bool Vminirv___024root___eval_phase__ico(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_phase__ico\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.rst) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.clk) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vminirv___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vminirv___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((2ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vminirv___024root___ico_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
                Vminirv___024root___ico_sequent__TOP__2(vlSelf);
                Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__2((&vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4));
                Vminirv___024root___ico_sequent__TOP__3(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vminirv___024root___ico_comb__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
        }
    }
    return (__VicoExecute);
}

bool Vminirv___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___trigger_anySet__act\n"); );
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

void Vminirv___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void Vminirv___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask, CData/*0:0*/ skip_difftest_one);

void Vminirv___024root___nba_sequent__TOP__0(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___nba_sequent__TOP__0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__minirv__DOT__minirv_registerfile__DOT__registersfile__v0;
    __VdlySet__minirv__DOT__minirv_registerfile__DOT__registersfile__v0 = 0;
    IData/*31:0*/ __VdlyVal__minirv__DOT__minirv_registerfile__DOT__registersfile__v32;
    __VdlyVal__minirv__DOT__minirv_registerfile__DOT__registersfile__v32 = 0;
    CData/*4:0*/ __VdlyDim0__minirv__DOT__minirv_registerfile__DOT__registersfile__v32;
    __VdlyDim0__minirv__DOT__minirv_registerfile__DOT__registersfile__v32 = 0;
    CData/*0:0*/ __VdlySet__minirv__DOT__minirv_registerfile__DOT__registersfile__v32;
    __VdlySet__minirv__DOT__minirv_registerfile__DOT__registersfile__v32 = 0;
    // Body
    __VdlySet__minirv__DOT__minirv_registerfile__DOT__registersfile__v0 = 0U;
    __VdlySet__minirv__DOT__minirv_registerfile__DOT__registersfile__v32 = 0U;
    if ((0x00100073U == vlSelfRef.minirv__DOT__inst)) {
        Vminirv___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    if (vlSelfRef.minirv__DOT__mem_valid) {
        if (vlSelfRef.minirv__DOT__mem_write_enable) {
            Vminirv___024unit____Vdpiimwrap_pmem_write_TOP____024unit((IData)(vlSelfRef.alu_outdata), vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                                                      [vlSelfRef.minirv__DOT__registerfile_read_rs2], vlSelfRef.minirv__DOT__mem_mask, 1U);
        }
    }
    if (vlSelfRef.rst) {
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__unnamedblk1__DOT__i = 0x00000020U;
        __VdlySet__minirv__DOT__minirv_registerfile__DOT__registersfile__v0 = 1U;
        vlSelfRef.minirv__DOT__pc = 0x80000000U;
    } else {
        if (vlSelfRef.minirv__DOT__registerfile_write_enable) {
            __VdlyVal__minirv__DOT__minirv_registerfile__DOT__registersfile__v32 
                = vlSelfRef.minirv__DOT__registerfile_write_data;
            __VdlyDim0__minirv__DOT__minirv_registerfile__DOT__registersfile__v32 
                = vlSelfRef.minirv__DOT__registerfile_write_rd;
            __VdlySet__minirv__DOT__minirv_registerfile__DOT__registersfile__v32 = 1U;
        }
        vlSelfRef.minirv__DOT__pc = ((2U == (IData)(vlSelfRef.minirv__DOT__i_type_inst_result))
                                      ? (0xfffffffeU 
                                         & ((- (IData)(
                                                       (2U 
                                                        == (IData)(vlSelfRef.minirv__DOT__i_type_inst_result)))) 
                                            & (IData)(vlSelfRef.alu_outdata)))
                                      : vlSelfRef.minirv__DOT__pc_static);
    }
    if (vlSelfRef.rst) {
        vlSelfRef.minirv__DOT__inst = 0U;
    } else {
        Vminirv___024unit____Vdpiimwrap_prom_read_TOP____024unit(vlSelfRef.minirv__DOT__pc, vlSelfRef.__Vfunc_prom_read__2__Vfuncout);
        vlSelfRef.minirv__DOT__inst = vlSelfRef.__Vfunc_prom_read__2__Vfuncout;
    }
    if (__VdlySet__minirv__DOT__minirv_registerfile__DOT__registersfile__v0) {
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[0U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[1U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[2U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[3U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[4U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[5U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[6U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[7U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[8U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[9U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[10U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[11U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[12U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[13U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[14U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[15U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[16U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[17U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[18U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[19U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[20U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[21U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[22U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[23U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[24U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[25U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[26U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[27U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[28U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[29U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[30U] = 0U;
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[31U] = 0U;
    }
    if (__VdlySet__minirv__DOT__minirv_registerfile__DOT__registersfile__v32) {
        vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[__VdlyDim0__minirv__DOT__minirv_registerfile__DOT__registersfile__v32] 
            = __VdlyVal__minirv__DOT__minirv_registerfile__DOT__registersfile__v32;
    }
    vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile[0U] = 0U;
    vlSelfRef.minirv__DOT__pc_static = ((IData)(4U) 
                                        + vlSelfRef.minirv__DOT__pc);
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

void Vminirv___024root___nba_sequent__TOP__2(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___nba_sequent__TOP__2\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alu_overflow = (1U & VL_REDXOR_32((3U 
                                                 & ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_4__DOT__tmp_cout) 
                                                    >> 3U))));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum 
        = (((QData)((IData)(((((((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_4__DOT__sum) 
                                 << 0x0000000cU) | 
                                (0x00000f00U & ((((
                                                   ((2U 
                                                     & (((IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                  >> 0x0000003aU)) 
                                                         | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42) 
                                                            & (IData)(
                                                                      (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                       >> 0x0000003aU)))) 
                                                        << 1U)) 
                                                    | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42)) 
                                                   << 2U) 
                                                  | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_47) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_3__DOT__cin))) 
                                                 ^ (IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                            >> 0x00000038U))) 
                                                << 8U))) 
                               | ((0x000000f0U & ((
                                                   ((((2U 
                                                       & (((IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                    >> 0x00000036U)) 
                                                           | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40) 
                                                              & (IData)(
                                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                         >> 0x00000036U)))) 
                                                          << 1U)) 
                                                      | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40)) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_48) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_2__DOT__cin))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x00000034U))) 
                                                  << 4U)) 
                                  | (0x0000000fU & 
                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23) 
                                      ^ (IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                 >> 0x00000030U)))))) 
                              << 0x00000010U) | (((
                                                   (0x000000f0U 
                                                    & ((((((2U 
                                                            & (((IData)(
                                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                         >> 0x0000002eU)) 
                                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58) 
                                                                   & (IData)(
                                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                              >> 0x0000002eU)))) 
                                                               << 1U)) 
                                                           | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58)) 
                                                          << 2U) 
                                                         | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_57) 
                                                             << 1U) 
                                                            | Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                            [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_16])) 
                                                        ^ (IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                   >> 0x0000002cU))) 
                                                       << 4U)) 
                                                   | (0x0000000fU 
                                                      & (((((2U 
                                                             & (((IData)(
                                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                          >> 0x0000002aU)) 
                                                                 | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55) 
                                                                    & (IData)(
                                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                               >> 0x0000002aU)))) 
                                                                << 1U)) 
                                                            | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55)) 
                                                           << 2U) 
                                                          | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_60) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__PVT__u_cla_4_3__DOT__cin))) 
                                                         ^ (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x00000028U))))) 
                                                  << 8U) 
                                                 | ((0x000000f0U 
                                                     & ((((((2U 
                                                             & (((IData)(
                                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                          >> 0x00000026U)) 
                                                                 | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53) 
                                                                    & (IData)(
                                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                               >> 0x00000026U)))) 
                                                                << 1U)) 
                                                            | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53)) 
                                                           << 2U) 
                                                          | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_61) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__PVT__u_cla_4_2__DOT__cin))) 
                                                         ^ (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x00000024U))) 
                                                        << 4U)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26) 
                                                          ^ (IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 0x00000020U))))))))) 
            << 0x00000020U) | (QData)((IData)((((((0x000000f0U 
                                                   & ((((((2U 
                                                           & (((IData)(
                                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                        >> 0x0000001eU)) 
                                                               | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71) 
                                                                  & (IData)(
                                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                             >> 0x0000001eU)))) 
                                                              << 1U)) 
                                                          | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71)) 
                                                         << 2U) 
                                                        | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_70) 
                                                            << 1U) 
                                                           | Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                           [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_15])) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                  >> 0x0000001cU))) 
                                                      << 4U)) 
                                                  | (0x0000000fU 
                                                     & (((((2U 
                                                            & (((IData)(
                                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                         >> 0x0000001aU)) 
                                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68) 
                                                                   & (IData)(
                                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                              >> 0x0000001aU)))) 
                                                               << 1U)) 
                                                           | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68)) 
                                                          << 2U) 
                                                         | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_73) 
                                                             << 1U) 
                                                            | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__PVT__u_cla_4_3__DOT__cin))) 
                                                        ^ (IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                   >> 0x00000018U))))) 
                                                 << 0x00000018U) 
                                                | (((0x000000f0U 
                                                     & ((((((2U 
                                                             & (((IData)(
                                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                          >> 0x00000016U)) 
                                                                 | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66) 
                                                                    & (IData)(
                                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                               >> 0x00000016U)))) 
                                                                << 1U)) 
                                                            | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66)) 
                                                           << 2U) 
                                                          | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_74) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__PVT__u_cla_4_2__DOT__cin))) 
                                                         ^ (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x00000014U))) 
                                                        << 4U)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30) 
                                                          ^ (IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 0x00000010U))))) 
                                                   << 0x00000010U)) 
                                               | ((((0x000000f0U 
                                                     & ((((((2U 
                                                             & (((IData)(
                                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                          >> 0x0000000eU)) 
                                                                 | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85) 
                                                                    & (IData)(
                                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                               >> 0x0000000eU)))) 
                                                                << 1U)) 
                                                            | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85)) 
                                                           << 2U) 
                                                          | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_84) 
                                                              << 1U) 
                                                             | Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                             [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_14])) 
                                                         ^ (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x0000000cU))) 
                                                        << 4U)) 
                                                    | (0x0000000fU 
                                                       & (((((2U 
                                                              & (((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 0x0000000aU)) 
                                                                  | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82) 
                                                                     & (IData)(
                                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x0000000aU)))) 
                                                                 << 1U)) 
                                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82)) 
                                                            << 2U) 
                                                           | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_87) 
                                                               << 1U) 
                                                              | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__PVT__u_cla_4_3__DOT__cin))) 
                                                          ^ (IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 8U))))) 
                                                   << 8U) 
                                                  | ((0x000000f0U 
                                                      & ((((((2U 
                                                              & (((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 6U)) 
                                                                  | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80) 
                                                                     & (IData)(
                                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 6U)))) 
                                                                 << 1U)) 
                                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80)) 
                                                            << 2U) 
                                                           | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_88) 
                                                               << 1U) 
                                                              | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__PVT__u_cla_4_2__DOT__cin))) 
                                                          ^ (IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 4U))) 
                                                         << 4U)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37) 
                                                           ^ (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)))))))));
    vlSelfRef.alu_zero = (1U & (~ (0U != vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum)));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[0U] 
        = (IData)((~ vlSelfRef.minirv__DOT__alu_data1));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[1U] 
        = (IData)(((~ vlSelfRef.minirv__DOT__alu_data1) 
                   >> 0x00000020U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[2U] 
        = (7U | ((IData)((vlSelfRef.minirv__DOT__alu_data2 
                          & vlSelfRef.minirv__DOT__alu_data1)) 
                 << 8U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[3U] 
        = (((IData)((vlSelfRef.minirv__DOT__alu_data2 
                     & vlSelfRef.minirv__DOT__alu_data1)) 
            >> 0x00000018U) | ((IData)(((vlSelfRef.minirv__DOT__alu_data2 
                                         & vlSelfRef.minirv__DOT__alu_data1) 
                                        >> 0x00000020U)) 
                               << 8U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[4U] 
        = ((0xffffff00U & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[4U]) 
           | ((IData)(((vlSelfRef.minirv__DOT__alu_data2 
                        & vlSelfRef.minirv__DOT__alu_data1) 
                       >> 0x00000020U)) >> 0x00000018U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[4U] 
        = (0x00000600U | ((0x000000ffU & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[4U]) 
                          | ((IData)((vlSelfRef.minirv__DOT__alu_data2 
                                      | vlSelfRef.minirv__DOT__alu_data1)) 
                             << 0x00000010U)));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[5U] 
        = ((0x000000ffU & ((IData)((vlSelfRef.minirv__DOT__alu_data2 
                                    | vlSelfRef.minirv__DOT__alu_data1)) 
                           >> 0x00000010U)) | ((0x0000ff00U 
                                                & ((IData)(
                                                           (vlSelfRef.minirv__DOT__alu_data2 
                                                            | vlSelfRef.minirv__DOT__alu_data1)) 
                                                   >> 0x00000010U)) 
                                               | ((IData)(
                                                          ((vlSelfRef.minirv__DOT__alu_data2 
                                                            | vlSelfRef.minirv__DOT__alu_data1) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000010U)));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[6U] 
        = (0x00050000U | ((0xff000000U & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[6U]) 
                          | ((0x000000ffU & ((IData)(
                                                     ((vlSelfRef.minirv__DOT__alu_data2 
                                                       | vlSelfRef.minirv__DOT__alu_data1) 
                                                      >> 0x00000020U)) 
                                             >> 0x00000010U)) 
                             | (0x0000ff00U & ((IData)(
                                                       ((vlSelfRef.minirv__DOT__alu_data2 
                                                         | vlSelfRef.minirv__DOT__alu_data1) 
                                                        >> 0x00000020U)) 
                                               >> 0x00000010U)))));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[6U] 
        = ((0x00ffffffU & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[6U]) 
           | ((IData)((vlSelfRef.minirv__DOT__alu_data2 
                       ^ vlSelfRef.minirv__DOT__alu_data1)) 
              << 0x00000018U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[7U] 
        = (((IData)((vlSelfRef.minirv__DOT__alu_data2 
                     ^ vlSelfRef.minirv__DOT__alu_data1)) 
            >> 8U) | ((IData)(((vlSelfRef.minirv__DOT__alu_data2 
                                ^ vlSelfRef.minirv__DOT__alu_data1) 
                               >> 0x00000020U)) << 0x00000018U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[8U] 
        = (0x04000000U | ((IData)(((vlSelfRef.minirv__DOT__alu_data2 
                                    ^ vlSelfRef.minirv__DOT__alu_data1) 
                                   >> 0x00000020U)) 
                          >> 8U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[9U] = 0U;
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[10U] = 0U;
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[11U] 
        = (3U | ((0x00ffff00U & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__outdata) 
                                 << 8U)) | (0xff000000U 
                                            & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__outdata) 
                                               << 8U))));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[12U] 
        = ((((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__outdata) 
             >> 0x00000018U) | (0x00ffff00U & ((IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__outdata 
                                                        >> 0x00000020U)) 
                                               << 8U))) 
           | (0xff000000U & ((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__outdata 
                                      >> 0x00000020U)) 
                             << 8U)));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[13U] 
        = ((0xffffff00U & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[13U]) 
           | ((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__outdata 
                       >> 0x00000020U)) >> 0x00000018U));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[13U] 
        = (0x00000200U | ((0x000000ffU & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[13U]) 
                          | ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum) 
                             << 0x00000010U)));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[14U] 
        = ((0x000000ffU & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum) 
                           >> 0x00000010U)) | ((0x0000ff00U 
                                                & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum) 
                                                   >> 0x00000010U)) 
                                               | ((IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum 
                                                           >> 0x00000020U)) 
                                                  << 0x00000010U)));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[15U] 
        = (0x00010000U | ((0x000000ffU & ((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum 
                                                   >> 0x00000020U)) 
                                          >> 0x00000010U)) 
                          | (((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum) 
                              << 0x00000018U) | (0x0000ff00U 
                                                 & ((IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum 
                                                             >> 0x00000020U)) 
                                                    >> 0x00000010U)))));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[16U] 
        = ((0x000000ffU & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum) 
                           >> 8U)) | ((0x00ffff00U 
                                       & ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum) 
                                          >> 8U)) | 
                                      ((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum 
                                                >> 0x00000020U)) 
                                       << 0x00000018U)));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[17U] 
        = ((0xff000000U & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[17U]) 
           | ((0x000000ffU & ((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum 
                                       >> 0x00000020U)) 
                              >> 8U)) | (0x00ffff00U 
                                         & ((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum 
                                                     >> 0x00000020U)) 
                                            >> 8U))));
    vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[17U] 
        = (0x00ffffffU & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[17U]);
    vlSelfRef.alu_outdata = 0ULL;
    if (((0x000000ffU & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[2U]) 
         == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.alu_outdata = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[1U])) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[0U])));
    }
    if (((0x000000ffU & (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[4U] 
                         >> 8U)) == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.alu_outdata = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[4U])) 
                                  << 0x00000038U) | 
                                 (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[3U])) 
                                   << 0x00000018U) 
                                  | ((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[2U])) 
                                     >> 8U)));
    }
    if (((0x000000ffU & (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[6U] 
                         >> 0x00000010U)) == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.alu_outdata = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[6U])) 
                                  << 0x00000030U) | 
                                 (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[5U])) 
                                   << 0x00000010U) 
                                  | ((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[4U])) 
                                     >> 0x00000010U)));
    }
    if (((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[8U] 
          >> 0x00000018U) == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.alu_outdata = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[8U])) 
                                  << 0x00000028U) | 
                                 (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[7U])) 
                                   << 8U) | ((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[6U])) 
                                             >> 0x00000018U)));
    }
    if (((0x000000ffU & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[11U]) 
         == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.alu_outdata = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[10U])) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[9U])));
    }
    if (((0x000000ffU & (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[13U] 
                         >> 8U)) == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.alu_outdata = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[13U])) 
                                  << 0x00000038U) | 
                                 (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[12U])) 
                                   << 0x00000018U) 
                                  | ((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[11U])) 
                                     >> 8U)));
    }
    if (((0x000000ffU & (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[15U] 
                         >> 0x00000010U)) == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.alu_outdata = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[15U])) 
                                  << 0x00000030U) | 
                                 (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[14U])) 
                                   << 0x00000010U) 
                                  | ((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[13U])) 
                                     >> 0x00000010U)));
    }
    if (((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[17U] 
          >> 0x00000018U) == (IData)(vlSelfRef.minirv__DOT__alu_op))) {
        vlSelfRef.alu_outdata = (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[17U])) 
                                  << 0x00000028U) | 
                                 (((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[16U])) 
                                   << 8U) | ((QData)((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut[15U])) 
                                             >> 0x00000018U)));
    }
    if ((((IData)(vlSelfRef.minirv__DOT__mem_valid) 
          & (~ (IData)(vlSelfRef.minirv__DOT__mem_write_enable))) 
         & (~ (IData)(vlSelfRef.clk)))) {
        Vminirv___024unit____Vdpiimwrap_pmem_read_TOP____024unit((IData)(vlSelfRef.alu_outdata), 
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                                                   ? 0x0fU
                                                                   : 
                                                                  (1U 
                                                                   & (- (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21) 
                                                                                >> 2U))))))), 1U, vlSelfRef.__Vfunc_pmem_read__3__Vfuncout);
        vlSelfRef.minirv__DOT__mem_read_data = vlSelfRef.__Vfunc_pmem_read__3__Vfuncout;
    }
    vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[0U] 
        = (IData)((0x0000000500000000ULL | (((QData)((IData)(
                                                             (0x000000ffU 
                                                              & vlSelfRef.minirv__DOT__mem_read_data))) 
                                             << 0x00000024U) 
                                            | (QData)((IData)(vlSelfRef.minirv__DOT__mem_read_data)))));
    vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[1U] 
        = (IData)(((0x0000000500000000ULL | (((QData)((IData)(
                                                              (0x000000ffU 
                                                               & vlSelfRef.minirv__DOT__mem_read_data))) 
                                              << 0x00000024U) 
                                             | (QData)((IData)(vlSelfRef.minirv__DOT__mem_read_data)))) 
                   >> 0x00000020U));
    vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
        = (0x00000040U | (0xffffff00U & vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[2U]));
    vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
        = ((0x000000ffU & vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[2U]) 
           | (((- (IData)((1U & (vlSelfRef.minirv__DOT__mem_read_data 
                                 >> 7U)))) << 0x00000010U) 
              | (0x0000ff00U & (vlSelfRef.minirv__DOT__mem_read_data 
                                << 8U))));
    vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[3U] 
        = ((0xffffff00U & vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[3U]) 
           | (0x000000ffU & ((- (IData)((1U & (vlSelfRef.minirv__DOT__mem_read_data 
                                               >> 7U)))) 
                             >> 0x00000010U)));
    vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[3U] 
        = ((0x000000ffU & vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[3U]) 
           | ((IData)((0x0000002000000003ULL | ((QData)((IData)(
                                                                ((IData)(4U) 
                                                                 + vlSelfRef.minirv__DOT__pc))) 
                                                << 4U))) 
              << 8U));
    vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[4U] 
        = ((0xffff0000U & vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[4U]) 
           | (((IData)((0x0000002000000003ULL | ((QData)((IData)(
                                                                 ((IData)(4U) 
                                                                  + vlSelfRef.minirv__DOT__pc))) 
                                                 << 4U))) 
               >> 0x00000018U) | ((IData)(((0x0000002000000003ULL 
                                            | ((QData)((IData)(
                                                               ((IData)(4U) 
                                                                + vlSelfRef.minirv__DOT__pc))) 
                                               << 4U)) 
                                           >> 0x00000020U)) 
                                  << 8U)));
    vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[4U] 
        = ((0x0000ffffU & vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[4U]) 
           | ((IData)((0x0000000100000000ULL | (QData)((IData)(vlSelfRef.alu_outdata)))) 
              << 0x00000010U));
    vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[5U] 
        = (0x000fffffU & (((IData)((0x0000000100000000ULL 
                                    | (QData)((IData)(vlSelfRef.alu_outdata)))) 
                           >> 0x00000010U) | ((IData)(
                                                      ((0x0000000100000000ULL 
                                                        | (QData)((IData)(vlSelfRef.alu_outdata))) 
                                                       >> 0x00000020U)) 
                                              << 0x00000010U)));
    vlSelfRef.minirv__DOT__i_type_write_data = 0U;
    if (((0x0000000fU & vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[1U]) 
         == (IData)(vlSelfRef.minirv__DOT__i_type_inst_result))) {
        vlSelfRef.minirv__DOT__i_type_write_data = vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[0U];
    }
    if (((0x0000000fU & (vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
                         >> 4U)) == (IData)(vlSelfRef.minirv__DOT__i_type_inst_result))) {
        vlSelfRef.minirv__DOT__i_type_write_data = 
            ((vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
              << 0x0000001cU) | (vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[1U] 
                                 >> 4U));
    }
    if (((0x0000000fU & (vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[3U] 
                         >> 8U)) == (IData)(vlSelfRef.minirv__DOT__i_type_inst_result))) {
        vlSelfRef.minirv__DOT__i_type_write_data = 
            ((vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[3U] 
              << 0x00000018U) | (vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
                                 >> 8U));
    }
    if (((0x0000000fU & (vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[4U] 
                         >> 0x0000000cU)) == (IData)(vlSelfRef.minirv__DOT__i_type_inst_result))) {
        vlSelfRef.minirv__DOT__i_type_write_data = 
            ((vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[4U] 
              << 0x00000014U) | (vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[3U] 
                                 >> 0x0000000cU));
    }
    if (((0x0000000fU & (vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[5U] 
                         >> 0x00000010U)) == (IData)(vlSelfRef.minirv__DOT__i_type_inst_result))) {
        vlSelfRef.minirv__DOT__i_type_write_data = 
            ((vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[5U] 
              << 0x00000010U) | (vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut[4U] 
                                 >> 0x00000010U));
    }
    vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[0U] 
        = (0xfffff000U & (vlSelfRef.minirv__DOT__inst 
                          & (- (IData)((4U == Vminirv__ConstPool__TABLE_h986f6810_0
                                        [(0x0000007fU 
                                          & vlSelfRef.minirv__DOT__inst)])))));
    vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[1U] 
        = (IData)((0x0000001000000004ULL | ((QData)((IData)(vlSelfRef.minirv__DOT__i_type_write_data)) 
                                            << 3U)));
    vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
        = ((0xffffffc0U & vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[2U]) 
           | (IData)(((0x0000001000000004ULL | ((QData)((IData)(vlSelfRef.minirv__DOT__i_type_write_data)) 
                                                << 3U)) 
                      >> 0x00000020U)));
    vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
        = ((0x0000003fU & vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[2U]) 
           | (((IData)(vlSelfRef.alu_outdata) & (- (IData)(
                                                           (1U 
                                                            == (IData)(vlSelfRef.minirv__DOT__r_type_inst_result))))) 
              << 6U));
    vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[3U] 
        = ((0x000001c0U & vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[3U]) 
           | (0x000001ffU & (((IData)(vlSelfRef.alu_outdata) 
                              & (- (IData)((1U == (IData)(vlSelfRef.minirv__DOT__r_type_inst_result))))) 
                             >> 0x0000001aU)));
    vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[3U] 
        = (0x00000040U | (0x0000003fU & vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[3U]));
    vlSelfRef.minirv__DOT__registerfile_write_data = 0U;
    if (((7U & vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[1U]) 
         == Vminirv__ConstPool__TABLE_h986f6810_0[(0x0000007fU 
                                                   & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__registerfile_write_data 
            = vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[0U];
    }
    if (((7U & (vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
                >> 3U)) == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__registerfile_write_data 
            = ((vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
                << 0x0000001dU) | (vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[1U] 
                                   >> 3U));
    }
    if (((7U & (vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[3U] 
                >> 6U)) == Vminirv__ConstPool__TABLE_h986f6810_0
         [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])) {
        vlSelfRef.minirv__DOT__registerfile_write_data 
            = ((vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[3U] 
                << 0x0000001aU) | (vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut[2U] 
                                   >> 6U));
    }
}

void Vminirv___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminirv___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vminirv___024root___eval_phase__act(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_phase__act\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((IData)(vlSelfRef.clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vminirv___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vminirv___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vminirv___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vminirv___024root___eval_phase__nba(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_phase__nba\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vminirv___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vminirv___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
        Vminirv___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vminirv___024root___eval(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vminirv___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("rtl/minirv.v", 20, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vminirv___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vminirv___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("rtl/minirv.v", 20, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vminirv___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("rtl/minirv.v", 20, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vminirv___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vminirv___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vminirv___024root___eval_debug_assertions(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_debug_assertions\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
}
#endif  // VL_DEBUG
