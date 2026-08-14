// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminirv.h for the primary calling header

#include "Vminirv__pch.h"

extern const VlUnpacked<CData/*0:0*/, 512> Vminirv__ConstPool__TABLE_h4b06d23f_0;

void Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16__0(Vminirv_cla_16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16__0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14 = (((
                                                   (((0x0000000fU 
                                                      == 
                                                      (0x0000000fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                  >> 0x0000000cU)))) 
                                                     << 4U) 
                                                    | (((0x0000000fU 
                                                         == 
                                                         (0x0000000fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 8U)))) 
                                                        << 3U) 
                                                       | ((0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                       >> 4U)))) 
                                                          << 2U))) 
                                                   | (((0x0000000fU 
                                                        == 
                                                        (0x0000000fU 
                                                         & (IData)(vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__adder_do_sub))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_90) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_89) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_8) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_7))));
    vlSelfRef.__PVT__u_cla_4_2__DOT__cin = (((IData)(vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__adder_do_sub) 
                                             & (0x0000000fU 
                                                == 
                                                (0x0000000fU 
                                                 & (IData)(vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)))) 
                                            | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_7));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_84 = (1U 
                                                 & ((Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                     [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14] 
                                                     & (IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x0000000cU))) 
                                                    | (IData)(
                                                              (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                               >> 0x0000000cU))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 4U)) 
                                                    | ((IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 4U)) 
                                                       & (IData)(vlSelfRef.__PVT__u_cla_4_2__DOT__cin))));
    vlSelfRef.__PVT__u_cla_4_3__DOT__cin = (((IData)(vlSelfRef.__PVT__u_cla_4_2__DOT__cin) 
                                             & (0x00000000000000f0ULL 
                                                == 
                                                (0x00000000000000f0ULL 
                                                 & vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
                                            | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_8));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x0000000dU)) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_84) 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                  >> 0x0000000dU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 5U)) 
                                                    | ((IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 5U)) 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 8U)) 
                                                    | ((IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 8U)) 
                                                       & (IData)(vlSelfRef.__PVT__u_cla_4_3__DOT__cin))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 9U)) 
                                                    | ((IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 9U)) 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87))));
}

void Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2__0(Vminirv_cla_16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2__0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 = (((
                                                   (((0x0000000fU 
                                                      == 
                                                      (0x0000000fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                  >> 0x0000001cU)))) 
                                                     << 4U) 
                                                    | (((0x0000000fU 
                                                         == 
                                                         (0x0000000fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 0x00000018U)))) 
                                                        << 3U) 
                                                       | ((0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                       >> 0x00000014U)))) 
                                                          << 2U))) 
                                                   | (((0x0000000fU 
                                                        == 
                                                        (0x0000000fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x00000010U)))) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__1__KET__))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_76) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_75) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_6) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_5))));
    vlSelfRef.__PVT__u_cla_4_2__DOT__cin = (((IData)(vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__1__KET__) 
                                             & (0x00000000000f0000ULL 
                                                == 
                                                (0x00000000000f0000ULL 
                                                 & vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
                                            | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_5));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70 = (1U 
                                                 & ((Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                     [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15] 
                                                     & (IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x0000001cU))) 
                                                    | (IData)(
                                                              (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                               >> 0x0000001cU))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000014U)) 
                                                    | ((IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x00000014U)) 
                                                       & (IData)(vlSelfRef.__PVT__u_cla_4_2__DOT__cin))));
    vlSelfRef.__PVT__u_cla_4_3__DOT__cin = (((IData)(vlSelfRef.__PVT__u_cla_4_2__DOT__cin) 
                                             & (0x0000000000f00000ULL 
                                                == 
                                                (0x0000000000f00000ULL 
                                                 & vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
                                            | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_6));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x0000001dU)) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70) 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                  >> 0x0000001dU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000015U)) 
                                                    | ((IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x00000015U)) 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000018U)) 
                                                    | ((IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x00000018U)) 
                                                       & (IData)(vlSelfRef.__PVT__u_cla_4_3__DOT__cin))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000019U)) 
                                                    | ((IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x00000019U)) 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73))));
}

void Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3__0(Vminirv_cla_16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3__0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 = (((
                                                   (((0x0000000fU 
                                                      == 
                                                      (0x0000000fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                  >> 0x0000002cU)))) 
                                                     << 4U) 
                                                    | (((0x0000000fU 
                                                         == 
                                                         (0x0000000fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 0x00000028U)))) 
                                                        << 3U) 
                                                       | ((0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                       >> 0x00000024U)))) 
                                                          << 2U))) 
                                                   | (((0x0000000fU 
                                                        == 
                                                        (0x0000000fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x00000020U)))) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__2__KET__))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_63) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_62) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_4) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3))));
    vlSelfRef.__PVT__u_cla_4_2__DOT__cin = (((IData)(vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__2__KET__) 
                                             & (0x0000000f00000000ULL 
                                                == 
                                                (0x0000000f00000000ULL 
                                                 & vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
                                            | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57 = (1U 
                                                 & ((Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                     [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16] 
                                                     & (IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x0000002cU))) 
                                                    | (IData)(
                                                              (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                               >> 0x0000002cU))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000024U)) 
                                                    | ((IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x00000024U)) 
                                                       & (IData)(vlSelfRef.__PVT__u_cla_4_2__DOT__cin))));
    vlSelfRef.__PVT__u_cla_4_3__DOT__cin = (((IData)(vlSelfRef.__PVT__u_cla_4_2__DOT__cin) 
                                             & (0x000000f000000000ULL 
                                                == 
                                                (0x000000f000000000ULL 
                                                 & vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
                                            | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_4));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x0000002dU)) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57) 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                  >> 0x0000002dU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000025U)) 
                                                    | ((IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x00000025U)) 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000028U)) 
                                                    | ((IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x00000028U)) 
                                                       & (IData)(vlSelfRef.__PVT__u_cla_4_3__DOT__cin))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000029U)) 
                                                    | ((IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x00000029U)) 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60))));
}

void Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__0(Vminirv_cla_16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17 = (((
                                                   (((0x0000000fU 
                                                      == 
                                                      (0x0000000fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                  >> 0x0000003cU)))) 
                                                     << 4U) 
                                                    | (((0x0000000fU 
                                                         == 
                                                         (0x0000000fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 0x00000038U)))) 
                                                        << 3U) 
                                                       | ((0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                       >> 0x00000034U)))) 
                                                          << 2U))) 
                                                   | (((0x0000000fU 
                                                        == 
                                                        (0x0000000fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x00000030U)))) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__3__KET__))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_50) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_49) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1))));
    vlSelfRef.__PVT__u_cla_4_2__DOT__cin = (((IData)(vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__3__KET__) 
                                             & (0x000f000000000000ULL 
                                                == 
                                                (0x000f000000000000ULL 
                                                 & vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
                                            | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44 = (1U 
                                                 & ((Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                     [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17] 
                                                     & (IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x0000003cU))) 
                                                    | (IData)(
                                                              (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                               >> 0x0000003cU))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000034U)) 
                                                    | ((IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x00000034U)) 
                                                       & (IData)(vlSelfRef.__PVT__u_cla_4_2__DOT__cin))));
    vlSelfRef.__PVT__u_cla_4_3__DOT__cin = (((IData)(vlSelfRef.__PVT__u_cla_4_2__DOT__cin) 
                                             & (0x00f0000000000000ULL 
                                                == 
                                                (0x00f0000000000000ULL 
                                                 & vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
                                            | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x0000003dU)) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44) 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                  >> 0x0000003dU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000035U)) 
                                                    | ((IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x00000035U)) 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000038U)) 
                                                    | ((IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x00000038U)) 
                                                       & (IData)(vlSelfRef.__PVT__u_cla_4_3__DOT__cin))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42 = (1U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                             >> 0x00000039U)) 
                                                    | ((IData)(
                                                               (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x00000039U)) 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47))));
}

void Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__1(Vminirv_cla_16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__1\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_22;
    __VdfgRegularize_h6e95ff9d_0_22 = 0;
    // Body
    __VdfgRegularize_h6e95ff9d_0_22 = ((((IData)(vlSymsp->TOP.alu_cout) 
                                         << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45) 
                                                   << 2U)) 
                                       | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44) 
                                           << 1U) | Vminirv__ConstPool__TABLE_h4b06d23f_0
                                          [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17]));
    vlSelfRef.__PVT__u_cla_4_4__DOT__tmp_cout = (((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_46) 
                                                  << 4U) 
                                                 | (IData)(__VdfgRegularize_h6e95ff9d_0_22));
    vlSelfRef.__PVT__u_cla_4_4__DOT__sum = (0x0000000fU 
                                            & ((IData)(__VdfgRegularize_h6e95ff9d_0_22) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x0000003cU))));
}

void Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__2(Vminirv_cla_16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vminirv_cla_16___ico_sequent__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__2\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 = (IData)(
                                                        (((IData)(vlSelfRef.__PVT__u_cla_4_4__DOT__sum) 
                                                          >> 3U) 
                                                         ^ (IData)(vlSymsp->TOP.alu_overflow)));
}
