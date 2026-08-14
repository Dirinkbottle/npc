// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vminirv__Syms.h"


void Vminirv___024root__trace_chg_0_sub_0(Vminirv___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vminirv___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_chg_0\n"); );
    // Body
    Vminirv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminirv___024root*>(voidSelf);
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vminirv___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlUnpacked<CData/*2:0*/, 128> Vminirv__ConstPool__TABLE_h986f6810_0;
extern const VlUnpacked<IData/*31:0*/, 128> Vminirv__ConstPool__TABLE_h4e427656_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vminirv__ConstPool__TABLE_h4b06d23f_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vminirv__ConstPool__TABLE_h50597f2b_0;
void Vminirv___024root__trace_chg_dtype____0(Vminirv___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);

void Vminirv___024root__trace_chg_0_sub_0(Vminirv___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_chg_0_sub_0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.minirv__DOT__mem_valid));
        bufp->chgBit(oldp+1,(vlSelfRef.minirv__DOT__mem_write_enable));
        bufp->chgIData(oldp+2,(vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                               [vlSelfRef.minirv__DOT__registerfile_read_rs2]),32);
        bufp->chgCData(oldp+3,(vlSelfRef.minirv__DOT__mem_mask),8);
        bufp->chgCData(oldp+4,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                 ? 0x0fU : (1U & (- (IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21) 
                                                                 >> 2U)))))))),8);
        bufp->chgIData(oldp+5,(vlSelfRef.minirv__DOT__inst),32);
        bufp->chgCData(oldp+6,(Vminirv__ConstPool__TABLE_h986f6810_0
                               [(0x0000007fU & vlSelfRef.minirv__DOT__inst)]),3);
        bufp->chgCData(oldp+7,((0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                               >> 7U))),5);
        bufp->chgCData(oldp+8,((0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                               >> 0x0000000fU))),5);
        bufp->chgCData(oldp+9,((0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                               >> 0x00000014U))),5);
        bufp->chgIData(oldp+10,(vlSelfRef.minirv__DOT__imm_extend),32);
        bufp->chgCData(oldp+11,(vlSelfRef.minirv__DOT__i_type_inst_result),4);
        bufp->chgCData(oldp+12,(vlSelfRef.minirv__DOT__r_type_inst_result),4);
        bufp->chgCData(oldp+13,(vlSelfRef.minirv__DOT__u_type_inst_result),4);
        bufp->chgCData(oldp+14,(vlSelfRef.minirv__DOT__s_type_inst_result),4);
        bufp->chgBit(oldp+15,((2U == (IData)(vlSelfRef.minirv__DOT__i_type_inst_result))));
        bufp->chgBit(oldp+16,((0U == Vminirv__ConstPool__TABLE_h986f6810_0
                               [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])));
        bufp->chgCData(oldp+17,(vlSelfRef.minirv__DOT__registerfile_write_rd),5);
        bufp->chgBit(oldp+18,(vlSelfRef.minirv__DOT__registerfile_write_enable));
        bufp->chgCData(oldp+19,(vlSelfRef.minirv__DOT__registerfile_read_rs1),5);
        bufp->chgCData(oldp+20,(vlSelfRef.minirv__DOT__registerfile_read_rs2),5);
        bufp->chgIData(oldp+21,(vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                                [vlSelfRef.minirv__DOT__registerfile_read_rs1]),32);
        bufp->chgIData(oldp+22,((0xfffff000U & (vlSelfRef.minirv__DOT__inst 
                                                & (- (IData)(
                                                             (4U 
                                                              == Vminirv__ConstPool__TABLE_h986f6810_0
                                                              [
                                                              (0x0000007fU 
                                                               & vlSelfRef.minirv__DOT__inst)])))))),32);
        bufp->chgCData(oldp+23,(vlSelfRef.minirv__DOT__i_alu_op),8);
        bufp->chgCData(oldp+24,(vlSelfRef.minirv__DOT__alu_op),8);
        bufp->chgQData(oldp+25,(vlSelfRef.minirv__DOT__alu_data1),64);
        bufp->chgQData(oldp+27,(vlSelfRef.minirv__DOT__alu_data2),64);
        bufp->chgWData(oldp+29,(vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut),201);
        bufp->chgQData(oldp+36,((0x0000000040100000ULL 
                                 | (QData)((IData)(
                                                   (0x0300U 
                                                    | ((IData)(vlSelfRef.minirv__DOT__i_alu_op) 
                                                       << 0x0000000bU)))))),33);
        bufp->chgSData(oldp+38,((vlSelfRef.minirv__DOT__inst 
                                 >> 0x00000014U)),12);
        bufp->chgBit(oldp+39,((1U == (IData)(vlSelfRef.minirv__DOT__alu_op))));
        bufp->chgQData(oldp+40,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum),64);
        bufp->chgQData(oldp+42,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__outdata),64);
        bufp->chgQData(oldp+44,((vlSelfRef.minirv__DOT__alu_data2 
                                 ^ vlSelfRef.minirv__DOT__alu_data1)),64);
        bufp->chgQData(oldp+46,((vlSelfRef.minirv__DOT__alu_data2 
                                 | vlSelfRef.minirv__DOT__alu_data1)),64);
        bufp->chgQData(oldp+48,((vlSelfRef.minirv__DOT__alu_data2 
                                 & vlSelfRef.minirv__DOT__alu_data1)),64);
        bufp->chgQData(oldp+50,((~ vlSelfRef.minirv__DOT__alu_data1)),64);
        bufp->chgQData(oldp+52,(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1),64);
        bufp->chgQData(oldp+54,(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data2),64);
        bufp->chgBit(oldp+56,(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_do_sub));
        bufp->chgQData(oldp+57,(vlSelfRef.minirv__DOT__minirv_alu__DOT__compare_real_data2),64);
        bufp->chgWData(oldp+59,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut),576);
        bufp->chgBit(oldp+77,(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_do_sub));
        bufp->chgWData(oldp+78,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut),216);
        bufp->chgWData(oldp+85,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut),216);
        bufp->chgWData(oldp+92,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut),264);
        bufp->chgQData(oldp+101,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b),64);
        bufp->chgCData(oldp+103,((3U & ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_4__DOT__tmp_cout) 
                                        >> 3U))),2);
        bufp->chgQData(oldp+104,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P),64);
        bufp->chgQData(oldp+106,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G),64);
        bufp->chgCData(oldp+108,(((((((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__3__KET__) 
                                      & (0xffff000000000000ULL 
                                         == (0xffff000000000000ULL 
                                             & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
                                     | ((IData)(((0xf000000000000000ULL 
                                                  == 
                                                  (0xf000000000000000ULL 
                                                   & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)) 
                                                 & ((IData)(
                                                            ((0x0f00000000000000ULL 
                                                              == 
                                                              (0x0f00000000000000ULL 
                                                               & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)) 
                                                             & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                                 & (0x00f0000000000000ULL 
                                                                    == 
                                                                    (0x00f0000000000000ULL 
                                                                     & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
                                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)))) 
                                        | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50))) 
                                    << 4U) | (((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__3__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__2__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__1__KET__) 
                                      << 1U) | (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_do_sub)))),5);
        bufp->chgQData(oldp+109,((((QData)((IData)(
                                                   (((((0x000000f0U 
                                                        & ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_4__DOT__tmp_cout) 
                                                           << 3U)) 
                                                       | ((((2U 
                                                             & (((IData)(
                                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                          >> 0x0000003bU)) 
                                                                 | (((IData)(
                                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                              >> 0x0000003aU)) 
                                                                     | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42) 
                                                                        & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x0000003aU)))) 
                                                                    & (IData)(
                                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                               >> 0x0000003bU)))) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & ((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 0x0000003aU)) 
                                                                  | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42) 
                                                                     & (IData)(
                                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x0000003aU)))))) 
                                                           << 2U) 
                                                          | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_47)))) 
                                                      << 0x00000018U) 
                                                     | ((((((2U 
                                                             & (((IData)(
                                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                          >> 0x00000037U)) 
                                                                 | (((IData)(
                                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                              >> 0x00000036U)) 
                                                                     | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40) 
                                                                        & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x00000036U)))) 
                                                                    & (IData)(
                                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                               >> 0x00000037U)))) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & ((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 0x00000036U)) 
                                                                  | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40) 
                                                                     & (IData)(
                                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x00000036U)))))) 
                                                           << 6U) 
                                                          | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40) 
                                                              << 5U) 
                                                             | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_48) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((IData)(
                                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                          >> 0x00000033U)) 
                                                                 | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39) 
                                                                    & (IData)(
                                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                               >> 0x00000033U)))) 
                                                                << 3U)) 
                                                            | (7U 
                                                               & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23) 
                                                                  >> 1U)))) 
                                                        << 0x00000010U)) 
                                                    | (((((((2U 
                                                             & (((IData)(
                                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                          >> 0x0000002fU)) 
                                                                 | (((IData)(
                                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                              >> 0x0000002eU)) 
                                                                     | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58) 
                                                                        & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x0000002eU)))) 
                                                                    & (IData)(
                                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                               >> 0x0000002fU)))) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & ((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 0x0000002eU)) 
                                                                  | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58) 
                                                                     & (IData)(
                                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x0000002eU)))))) 
                                                           << 6U) 
                                                          | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58) 
                                                              << 5U) 
                                                             | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_57) 
                                                                << 4U))) 
                                                         | ((((2U 
                                                               & (((IData)(
                                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                            >> 0x0000002bU)) 
                                                                   | (((IData)(
                                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                                >> 0x0000002aU)) 
                                                                       | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55) 
                                                                          & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x0000002aU)))) 
                                                                      & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x0000002bU)))) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((IData)(
                                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                             >> 0x0000002aU)) 
                                                                    | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55) 
                                                                       & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x0000002aU)))))) 
                                                             << 2U) 
                                                            | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55) 
                                                                << 1U) 
                                                               | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_60)))) 
                                                        << 8U) 
                                                       | (((((2U 
                                                              & (((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 0x00000027U)) 
                                                                  | (((IData)(
                                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                               >> 0x00000026U)) 
                                                                      | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53) 
                                                                         & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x00000026U)))) 
                                                                     & (IData)(
                                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x00000027U)))) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & ((IData)(
                                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                            >> 0x00000026U)) 
                                                                   | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53) 
                                                                      & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x00000026U)))))) 
                                                            << 6U) 
                                                           | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53) 
                                                               << 5U) 
                                                              | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_61) 
                                                                 << 4U))) 
                                                          | ((8U 
                                                              & (((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 0x00000023U)) 
                                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52) 
                                                                     & (IData)(
                                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x00000023U)))) 
                                                                 << 3U)) 
                                                             | (7U 
                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26) 
                                                                   >> 1U)))))))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    ((((((((2U 
                                                            & (((IData)(
                                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                         >> 0x0000001fU)) 
                                                                | (((IData)(
                                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                             >> 0x0000001eU)) 
                                                                    | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71) 
                                                                       & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x0000001eU)))) 
                                                                   & (IData)(
                                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                              >> 0x0000001fU)))) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & ((IData)(
                                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                          >> 0x0000001eU)) 
                                                                 | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71) 
                                                                    & (IData)(
                                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                               >> 0x0000001eU)))))) 
                                                          << 6U) 
                                                         | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71) 
                                                             << 5U) 
                                                            | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_70) 
                                                               << 4U))) 
                                                        | ((((2U 
                                                              & (((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 0x0000001bU)) 
                                                                  | (((IData)(
                                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                               >> 0x0000001aU)) 
                                                                      | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68) 
                                                                         & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x0000001aU)))) 
                                                                     & (IData)(
                                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x0000001bU)))) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & ((IData)(
                                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                            >> 0x0000001aU)) 
                                                                   | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68) 
                                                                      & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x0000001aU)))))) 
                                                            << 2U) 
                                                           | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68) 
                                                               << 1U) 
                                                              | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_73)))) 
                                                       << 0x00000018U) 
                                                      | ((((((2U 
                                                              & (((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 0x00000017U)) 
                                                                  | (((IData)(
                                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                               >> 0x00000016U)) 
                                                                      | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66) 
                                                                         & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x00000016U)))) 
                                                                     & (IData)(
                                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x00000017U)))) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & ((IData)(
                                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                            >> 0x00000016U)) 
                                                                   | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66) 
                                                                      & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x00000016U)))))) 
                                                            << 6U) 
                                                           | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66) 
                                                               << 5U) 
                                                              | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_74) 
                                                                 << 4U))) 
                                                          | ((8U 
                                                              & (((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 0x00000013U)) 
                                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65) 
                                                                     & (IData)(
                                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x00000013U)))) 
                                                                 << 3U)) 
                                                             | (7U 
                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30) 
                                                                   >> 1U)))) 
                                                         << 0x00000010U)) 
                                                     | (((((((2U 
                                                              & (((IData)(
                                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                           >> 0x0000000fU)) 
                                                                  | (((IData)(
                                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                               >> 0x0000000eU)) 
                                                                      | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85) 
                                                                         & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x0000000eU)))) 
                                                                     & (IData)(
                                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x0000000fU)))) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & ((IData)(
                                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                            >> 0x0000000eU)) 
                                                                   | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85) 
                                                                      & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x0000000eU)))))) 
                                                            << 6U) 
                                                           | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85) 
                                                               << 5U) 
                                                              | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_84) 
                                                                 << 4U))) 
                                                          | ((((2U 
                                                                & (((IData)(
                                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                             >> 0x0000000bU)) 
                                                                    | (((IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                                >> 0x0000000aU)) 
                                                                        | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82) 
                                                                           & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x0000000aU)))) 
                                                                       & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x0000000bU)))) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & ((IData)(
                                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                              >> 0x0000000aU)) 
                                                                     | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82) 
                                                                        & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 0x0000000aU)))))) 
                                                              << 2U) 
                                                             | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82) 
                                                                 << 1U) 
                                                                | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_87)))) 
                                                         << 8U) 
                                                        | (((((2U 
                                                               & (((IData)(
                                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                            >> 7U)) 
                                                                   | (((IData)(
                                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                                >> 6U)) 
                                                                       | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80) 
                                                                          & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 6U)))) 
                                                                      & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 7U)))) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((IData)(
                                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                             >> 6U)) 
                                                                    | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80) 
                                                                       & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 6U)))))) 
                                                             << 6U) 
                                                            | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80) 
                                                                << 5U) 
                                                               | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_88) 
                                                                  << 4U))) 
                                                           | ((8U 
                                                               & (((IData)(
                                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                            >> 3U)) 
                                                                   | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79) 
                                                                      & (IData)(
                                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                                >> 3U)))) 
                                                                  << 3U)) 
                                                              | (7U 
                                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37) 
                                                                    >> 1U)))))))))),64);
        bufp->chgCData(oldp+111,(((((0x0000ffffU == 
                                     (0x0000ffffU & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x00000030U)))) 
                                    << 3U) | ((0x0000ffffU 
                                               == (0x0000ffffU 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x00000020U)))) 
                                              << 2U)) 
                                  | (((0x0000ffffU 
                                       == (0x0000ffffU 
                                           & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x00000010U)))) 
                                      << 1U) | (0x0000ffffU 
                                                == 
                                                (0x0000ffffU 
                                                 & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)))))),4);
        bufp->chgCData(oldp+112,((((((IData)(((0xf000000000000000ULL 
                                               == (0xf000000000000000ULL 
                                                   & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)) 
                                              & ((IData)(
                                                         ((0x0f00000000000000ULL 
                                                           == 
                                                           (0x0f00000000000000ULL 
                                                            & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)) 
                                                          & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                              & (0x00f0000000000000ULL 
                                                                 == 
                                                                 (0x00f0000000000000ULL 
                                                                  & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
                                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)))) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50)) 
                                    << 3U) | (((IData)(
                                                       ((0x0000f00000000000ULL 
                                                         == 
                                                         (0x0000f00000000000ULL 
                                                          & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)) 
                                                        & ((IData)(
                                                                   ((0x00000f0000000000ULL 
                                                                     == 
                                                                     (0x00000f0000000000ULL 
                                                                      & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)) 
                                                                    & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                                        & (0x000000f000000000ULL 
                                                                           == 
                                                                           (0x000000f000000000ULL 
                                                                            & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
                                                                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))) 
                                                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62)))) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63)) 
                                              << 2U)) 
                                  | ((((IData)(((0x00000000f0000000ULL 
                                                 == 
                                                 (0x00000000f0000000ULL 
                                                  & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)) 
                                                & ((IData)(
                                                           ((0x000000000f000000ULL 
                                                             == 
                                                             (0x000000000f000000ULL 
                                                              & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)) 
                                                            & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                                & (0x0000000000f00000ULL 
                                                                   == 
                                                                   (0x0000000000f00000ULL 
                                                                    & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
                                                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)))) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75)))) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76)) 
                                      << 1U) | ((IData)(
                                                        ((0x000000000000f000ULL 
                                                          == 
                                                          (0x000000000000f000ULL 
                                                           & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)) 
                                                         & ((IData)(
                                                                    ((0x0000000000000f00ULL 
                                                                      == 
                                                                      (0x0000000000000f00ULL 
                                                                       & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)) 
                                                                     & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                                                         & (0x00000000000000f0ULL 
                                                                            == 
                                                                            (0x00000000000000f0ULL 
                                                                             & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
                                                                        | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))) 
                                                            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89)))) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90))))),4);
        bufp->chgSData(oldp+113,((((((((0x0000000fU 
                                        == (0x0000000fU 
                                            & (IData)(
                                                      (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                       >> 0x0000003cU)))) 
                                       << 3U) | ((0x0000000fU 
                                                  == 
                                                  (0x0000000fU 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x00000038U)))) 
                                                 << 2U)) 
                                     | (((0x0000000fU 
                                          == (0x0000000fU 
                                              & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x00000034U)))) 
                                         << 1U) | (0x0000000fU 
                                                   == 
                                                   (0x0000000fU 
                                                    & (IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                               >> 0x00000030U)))))) 
                                    << 0x0000000cU) 
                                   | (((((0x0000000fU 
                                          == (0x0000000fU 
                                              & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x0000002cU)))) 
                                         << 3U) | (
                                                   (0x0000000fU 
                                                    == 
                                                    (0x0000000fU 
                                                     & (IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x00000028U)))) 
                                                   << 2U)) 
                                       | (((0x0000000fU 
                                            == (0x0000000fU 
                                                & (IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                           >> 0x00000024U)))) 
                                           << 1U) | 
                                          (0x0000000fU 
                                           == (0x0000000fU 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x00000020U)))))) 
                                      << 8U)) | (((
                                                   (((0x0000000fU 
                                                      == 
                                                      (0x0000000fU 
                                                       & (IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                  >> 0x0000001cU)))) 
                                                     << 3U) 
                                                    | ((0x0000000fU 
                                                        == 
                                                        (0x0000000fU 
                                                         & (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x00000018U)))) 
                                                       << 2U)) 
                                                   | (((0x0000000fU 
                                                        == 
                                                        (0x0000000fU 
                                                         & (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x00000014U)))) 
                                                       << 1U) 
                                                      | (0x0000000fU 
                                                         == 
                                                         (0x0000000fU 
                                                          & (IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 0x00000010U)))))) 
                                                  << 4U) 
                                                 | ((((0x0000000fU 
                                                       == 
                                                       (0x0000000fU 
                                                        & (IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                   >> 0x0000000cU)))) 
                                                      << 3U) 
                                                     | ((0x0000000fU 
                                                         == 
                                                         (0x0000000fU 
                                                          & (IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 8U)))) 
                                                        << 2U)) 
                                                    | (((0x0000000fU 
                                                         == 
                                                         (0x0000000fU 
                                                          & (IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                     >> 4U)))) 
                                                        << 1U) 
                                                       | (0x0000000fU 
                                                          == 
                                                          (0x0000000fU 
                                                           & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)))))))),16);
        bufp->chgSData(oldp+114,((((((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50) 
                                       << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                         << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))) 
                                    << 0x0000000cU) 
                                   | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63) 
                                         << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62) 
                                                   << 2U)) 
                                       | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                           << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))) 
                                      << 8U)) | (((
                                                   (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))))),16);
        bufp->chgSData(oldp+115,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_compare__DOT__u_MuxWithDefault_compare__DOT__lut),12);
        bufp->chgCData(oldp+116,((0x0000003fU & (IData)(vlSelfRef.minirv__DOT__alu_data2))),6);
        bufp->chgQData(oldp+117,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__real_shit_source),64);
        bufp->chgQData(oldp+119,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s0),64);
        bufp->chgQData(oldp+121,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s1),64);
        bufp->chgQData(oldp+123,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s2),64);
        bufp->chgQData(oldp+125,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s3),64);
        bufp->chgQData(oldp+127,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s4),64);
        bufp->chgQData(oldp+129,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5),64);
        bufp->chgBit(oldp+131,((0x00100073U == vlSelfRef.minirv__DOT__inst)));
        bufp->chgCData(oldp+132,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__mem_write_mask_MuxWithDefault__DOT__key),8);
        bufp->chgCData(oldp+133,((0x0000007fU & vlSelfRef.minirv__DOT__inst)),7);
        bufp->chgCData(oldp+134,((7U & (vlSelfRef.minirv__DOT__inst 
                                        >> 0x0000000cU))),3);
        bufp->chgCData(oldp+135,((vlSelfRef.minirv__DOT__inst 
                                  >> 0x00000019U)),7);
        bufp->chgIData(oldp+136,((((- (IData)((vlSelfRef.minirv__DOT__inst 
                                               >> 0x0000001fU))) 
                                   << 0x0000000cU) 
                                  | (vlSelfRef.minirv__DOT__inst 
                                     >> 0x00000014U))),32);
        bufp->chgIData(oldp+137,((vlSelfRef.minirv__DOT__inst 
                                  >> 0x0000000cU)),32);
        bufp->chgIData(oldp+138,((((- (IData)((vlSelfRef.minirv__DOT__inst 
                                               >> 0x0000001fU))) 
                                   << 0x0000000cU) 
                                  | ((0x00000fe0U & 
                                      (vlSelfRef.minirv__DOT__inst 
                                       >> 0x00000014U)) 
                                     | (0x0000001fU 
                                        & (vlSelfRef.minirv__DOT__inst 
                                           >> 7U))))),32);
        bufp->chgSData(oldp+139,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table),16);
        bufp->chgBit(oldp+140,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found));
        bufp->chgSData(oldp+141,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table),16);
        bufp->chgBit(oldp+142,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found));
        bufp->chgSData(oldp+143,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table),16);
        bufp->chgBit(oldp+144,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found));
        bufp->chgSData(oldp+145,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table),16);
        bufp->chgBit(oldp+146,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found));
        bufp->chgWData(oldp+147,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut),105);
        bufp->chgIData(oldp+151,(Vminirv__ConstPool__TABLE_h4e427656_0
                                 [(0x0000007fU & vlSelfRef.minirv__DOT__inst)]),32);
        bufp->chgIData(oldp+152,(vlSelfRef.minirv__DOT__registerfile_readrs1_MuxWithDefault__DOT__lut),32);
        bufp->chgIData(oldp+153,(vlSelfRef.minirv__DOT__registerfile_readrs2_MuxWithDefault__DOT__lut),24);
        bufp->chgBit(oldp+154,(vlSelfRef.minirv__DOT__registerfile_write_enable));
        bufp->chgIData(oldp+155,(vlSelfRef.minirv__DOT__registerfile_writerd_MuxWithDefault__DOT__lut),24);
        bufp->chgQData(oldp+156,((0x0000000400000000ULL 
                                  | (QData)((IData)(
                                                    (0xfffff000U 
                                                     & vlSelfRef.minirv__DOT__inst))))),35);
        bufp->chgSData(oldp+158,((0x0000ffffU & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1))),16);
        bufp->chgSData(oldp+159,((0x0000ffffU & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b))),16);
        bufp->chgSData(oldp+160,(((((0x000000f0U & 
                                     ((((((2U & (((IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                           >> 0x0000000eU)) 
                                                  | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85) 
                                                     & (IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x0000000eU)))) 
                                                 << 1U)) 
                                          | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85)) 
                                         << 2U) | (
                                                   ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_84) 
                                                    << 1U) 
                                                   | Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                   [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_14])) 
                                       ^ (IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                  >> 0x0000000cU))) 
                                      << 4U)) | (0x0000000fU 
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
                                   << 8U) | ((0x000000f0U 
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
                                                   ^ (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)))))),16);
        bufp->chgSData(oldp+161,((((((((2U & (((IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                        >> 0x0000000fU)) 
                                               | (((IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                            >> 0x0000000eU)) 
                                                   | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85) 
                                                      & (IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                 >> 0x0000000eU)))) 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x0000000fU)))) 
                                              << 1U)) 
                                       | (1U & ((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000000eU)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x0000000eU)))))) 
                                      << 6U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_84) 
                                                   << 4U))) 
                                    | ((((2U & (((IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                          >> 0x0000000bU)) 
                                                 | (((IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                              >> 0x0000000aU)) 
                                                     | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82) 
                                                        & (IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                   >> 0x0000000aU)))) 
                                                    & (IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                               >> 0x0000000bU)))) 
                                                << 1U)) 
                                         | (1U & ((IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                           >> 0x0000000aU)) 
                                                  | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82) 
                                                     & (IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x0000000aU)))))) 
                                        << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_87)))) 
                                   << 8U) | (((((2U 
                                                 & (((IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                              >> 7U)) 
                                                     | (((IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                  >> 6U)) 
                                                         | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80) 
                                                            & (IData)(
                                                                      (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                       >> 6U)))) 
                                                        & (IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                   >> 7U)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                               >> 6U)) 
                                                      | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80) 
                                                         & (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 6U)))))) 
                                               << 6U) 
                                              | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80) 
                                                  << 5U) 
                                                 | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_88) 
                                                    << 4U))) 
                                             | ((8U 
                                                 & (((IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                              >> 3U)) 
                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79) 
                                                        & (IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                   >> 3U)))) 
                                                    << 3U)) 
                                                | (7U 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37) 
                                                      >> 1U)))))),16);
        bufp->chgCData(oldp+162,(((((0x0000000fU == 
                                     (0x0000000fU & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x0000000cU)))) 
                                    << 3U) | ((0x0000000fU 
                                               == (0x0000000fU 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 8U)))) 
                                              << 2U)) 
                                  | (((0x0000000fU 
                                       == (0x0000000fU 
                                           & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 4U)))) 
                                      << 1U) | (0x0000000fU 
                                                == 
                                                (0x0000000fU 
                                                 & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)))))),4);
        bufp->chgCData(oldp+163,(((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))),4);
        bufp->chgSData(oldp+164,((0x0000ffffU & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))),16);
        bufp->chgSData(oldp+165,((0x0000ffffU & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G))),16);
        bufp->chgCData(oldp+166,((((((IData)(Vminirv__ConstPool__TABLE_h50597f2b_0
                                             [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_14]) 
                                     << 2U) | (((IData)(Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                        [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_14]) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__PVT__u_cla_4_3__DOT__cin))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__PVT__u_cla_4_2__DOT__cin) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_do_sub)))),5);
        bufp->chgCData(oldp+167,((0x0000000fU & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1))),4);
        bufp->chgCData(oldp+168,((0x0000000fU & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b))),4);
        bufp->chgCData(oldp+169,((0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37) 
                                                 ^ (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)))),4);
        bufp->chgCData(oldp+170,(((8U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                   >> 3U)) 
                                          | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79) 
                                             & (IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                        >> 3U)))) 
                                         << 3U)) | 
                                  (7U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37) 
                                         >> 1U)))),4);
        bufp->chgCData(oldp+171,((0x0000000fU & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))),4);
        bufp->chgCData(oldp+172,((0x0000000fU & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G))),4);
        bufp->chgCData(oldp+173,(((0x00000010U & (((IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                            >> 3U)) 
                                                   | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79) 
                                                      & (IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                 >> 3U)))) 
                                                  << 4U)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37))),5);
        bufp->chgCData(oldp+174,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                         >> 4U)))),4);
        bufp->chgCData(oldp+175,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                         >> 4U)))),4);
        bufp->chgBit(oldp+176,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__PVT__u_cla_4_2__DOT__cin));
        bufp->chgCData(oldp+177,((0x0000000fU & (((
                                                   ((2U 
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
                                                            >> 4U))))),4);
        bufp->chgCData(oldp+178,(((((2U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 7U)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 6U)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 6U)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 7U)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 6U)) 
                                             | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80) 
                                                & (IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                           >> 6U)))))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_88)))),4);
        bufp->chgCData(oldp+179,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 4U)))),4);
        bufp->chgCData(oldp+180,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 4U)))),4);
        bufp->chgCData(oldp+181,(((((4U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 7U)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 6U)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 6U)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 7U)))) 
                                           << 2U)) 
                                    | ((2U & (((IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                        >> 6U)) 
                                               | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80) 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 6U)))) 
                                              << 1U)) 
                                       | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_88) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__PVT__u_cla_4_2__DOT__cin)))),5);
        bufp->chgCData(oldp+182,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                         >> 8U)))),4);
        bufp->chgCData(oldp+183,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                         >> 8U)))),4);
        bufp->chgBit(oldp+184,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__PVT__u_cla_4_3__DOT__cin));
        bufp->chgCData(oldp+185,((0x0000000fU & (((
                                                   ((2U 
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
                                                            >> 8U))))),4);
        bufp->chgCData(oldp+186,(((((2U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x0000000bU)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000000aU)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x0000000aU)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x0000000bU)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x0000000aU)) 
                                             | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82) 
                                                & (IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                           >> 0x0000000aU)))))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_87)))),4);
        bufp->chgCData(oldp+187,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 8U)))),4);
        bufp->chgCData(oldp+188,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 8U)))),4);
        bufp->chgCData(oldp+189,(((((4U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x0000000bU)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000000aU)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x0000000aU)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x0000000bU)))) 
                                           << 2U)) 
                                    | ((2U & (((IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                        >> 0x0000000aU)) 
                                               | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82) 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x0000000aU)))) 
                                              << 1U)) 
                                       | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_87) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__PVT__u_cla_4_3__DOT__cin)))),5);
        bufp->chgCData(oldp+190,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                         >> 0x0000000cU)))),4);
        bufp->chgCData(oldp+191,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                         >> 0x0000000cU)))),4);
        bufp->chgBit(oldp+192,(Vminirv__ConstPool__TABLE_h4b06d23f_0
                               [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_14]));
        bufp->chgCData(oldp+193,((0x0000000fU & (((
                                                   ((2U 
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
                                                            >> 0x0000000cU))))),4);
        bufp->chgCData(oldp+194,(((((2U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x0000000fU)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000000eU)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x0000000eU)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x0000000fU)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x0000000eU)) 
                                             | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85) 
                                                & (IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                           >> 0x0000000eU)))))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_84)))),4);
        bufp->chgCData(oldp+195,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x0000000cU)))),4);
        bufp->chgCData(oldp+196,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000000cU)))),4);
        bufp->chgCData(oldp+197,(((((4U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x0000000fU)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000000eU)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x0000000eU)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x0000000fU)))) 
                                           << 2U)) 
                                    | ((2U & (((IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                        >> 0x0000000eU)) 
                                               | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85) 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x0000000eU)))) 
                                              << 1U)) 
                                       | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_84) 
                                              << 1U) 
                                             | Vminirv__ConstPool__TABLE_h4b06d23f_0
                                             [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_14]))),5);
        bufp->chgSData(oldp+198,((0x0000ffffU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                         >> 0x00000010U)))),16);
        bufp->chgSData(oldp+199,((0x0000ffffU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                         >> 0x00000010U)))),16);
        bufp->chgBit(oldp+200,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__1__KET__));
        bufp->chgSData(oldp+201,(((((0x000000f0U & 
                                     ((((((2U & (((IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                           >> 0x0000001eU)) 
                                                  | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71) 
                                                     & (IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x0000001eU)))) 
                                                 << 1U)) 
                                          | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71)) 
                                         << 2U) | (
                                                   ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_70) 
                                                    << 1U) 
                                                   | Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                   [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_15])) 
                                       ^ (IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                  >> 0x0000001cU))) 
                                      << 4U)) | (0x0000000fU 
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
                                   << 8U) | ((0x000000f0U 
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
                                                              >> 0x00000010U))))))),16);
        bufp->chgSData(oldp+202,((((((((2U & (((IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                        >> 0x0000001fU)) 
                                               | (((IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                            >> 0x0000001eU)) 
                                                   | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71) 
                                                      & (IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                 >> 0x0000001eU)))) 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x0000001fU)))) 
                                              << 1U)) 
                                       | (1U & ((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000001eU)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x0000001eU)))))) 
                                      << 6U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_70) 
                                                   << 4U))) 
                                    | ((((2U & (((IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                          >> 0x0000001bU)) 
                                                 | (((IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                              >> 0x0000001aU)) 
                                                     | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68) 
                                                        & (IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                   >> 0x0000001aU)))) 
                                                    & (IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                               >> 0x0000001bU)))) 
                                                << 1U)) 
                                         | (1U & ((IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                           >> 0x0000001aU)) 
                                                  | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68) 
                                                     & (IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x0000001aU)))))) 
                                        << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_73)))) 
                                   << 8U) | (((((2U 
                                                 & (((IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                              >> 0x00000017U)) 
                                                     | (((IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                  >> 0x00000016U)) 
                                                         | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66) 
                                                            & (IData)(
                                                                      (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                       >> 0x00000016U)))) 
                                                        & (IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                   >> 0x00000017U)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                               >> 0x00000016U)) 
                                                      | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66) 
                                                         & (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x00000016U)))))) 
                                               << 6U) 
                                              | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66) 
                                                  << 5U) 
                                                 | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_74) 
                                                    << 4U))) 
                                             | ((8U 
                                                 & (((IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                              >> 0x00000013U)) 
                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65) 
                                                        & (IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                   >> 0x00000013U)))) 
                                                    << 3U)) 
                                                | (7U 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30) 
                                                      >> 1U)))))),16);
        bufp->chgCData(oldp+203,(((((0x0000000fU == 
                                     (0x0000000fU & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x0000001cU)))) 
                                    << 3U) | ((0x0000000fU 
                                               == (0x0000000fU 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x00000018U)))) 
                                              << 2U)) 
                                  | (((0x0000000fU 
                                       == (0x0000000fU 
                                           & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x00000014U)))) 
                                      << 1U) | (0x0000000fU 
                                                == 
                                                (0x0000000fU 
                                                 & (IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                            >> 0x00000010U))))))),4);
        bufp->chgCData(oldp+204,(((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))),4);
        bufp->chgSData(oldp+205,((0x0000ffffU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x00000010U)))),16);
        bufp->chgSData(oldp+206,((0x0000ffffU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000010U)))),16);
        bufp->chgCData(oldp+207,((((((IData)(Vminirv__ConstPool__TABLE_h50597f2b_0
                                             [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_15]) 
                                     << 2U) | (((IData)(Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                        [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_15]) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__PVT__u_cla_4_3__DOT__cin))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__PVT__u_cla_4_2__DOT__cin) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__1__KET__)))),5);
        bufp->chgCData(oldp+208,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                         >> 0x00000010U)))),4);
        bufp->chgCData(oldp+209,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                         >> 0x00000010U)))),4);
        bufp->chgCData(oldp+210,((0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30) 
                                                 ^ (IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                            >> 0x00000010U))))),4);
        bufp->chgCData(oldp+211,(((8U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                   >> 0x00000013U)) 
                                          | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65) 
                                             & (IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                        >> 0x00000013U)))) 
                                         << 3U)) | 
                                  (7U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30) 
                                         >> 1U)))),4);
        bufp->chgCData(oldp+212,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x00000010U)))),4);
        bufp->chgCData(oldp+213,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000010U)))),4);
        bufp->chgCData(oldp+214,(((0x00000010U & (((IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                            >> 0x00000013U)) 
                                                   | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65) 
                                                      & (IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                 >> 0x00000013U)))) 
                                                  << 4U)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30))),5);
        bufp->chgCData(oldp+215,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                         >> 0x00000014U)))),4);
        bufp->chgCData(oldp+216,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                         >> 0x00000014U)))),4);
        bufp->chgBit(oldp+217,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__PVT__u_cla_4_2__DOT__cin));
        bufp->chgCData(oldp+218,((0x0000000fU & (((
                                                   ((2U 
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
                                                            >> 0x00000014U))))),4);
        bufp->chgCData(oldp+219,(((((2U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x00000017U)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000016U)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x00000016U)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x00000017U)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x00000016U)) 
                                             | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66) 
                                                & (IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                           >> 0x00000016U)))))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_74)))),4);
        bufp->chgCData(oldp+220,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x00000014U)))),4);
        bufp->chgCData(oldp+221,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000014U)))),4);
        bufp->chgCData(oldp+222,(((((4U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x00000017U)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000016U)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x00000016U)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x00000017U)))) 
                                           << 2U)) 
                                    | ((2U & (((IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                        >> 0x00000016U)) 
                                               | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66) 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x00000016U)))) 
                                              << 1U)) 
                                       | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_74) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__PVT__u_cla_4_2__DOT__cin)))),5);
        bufp->chgCData(oldp+223,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                         >> 0x00000018U)))),4);
        bufp->chgCData(oldp+224,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                         >> 0x00000018U)))),4);
        bufp->chgBit(oldp+225,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__PVT__u_cla_4_3__DOT__cin));
        bufp->chgCData(oldp+226,((0x0000000fU & (((
                                                   ((2U 
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
                                                            >> 0x00000018U))))),4);
        bufp->chgCData(oldp+227,(((((2U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x0000001bU)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000001aU)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x0000001aU)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x0000001bU)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x0000001aU)) 
                                             | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68) 
                                                & (IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                           >> 0x0000001aU)))))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_73)))),4);
        bufp->chgCData(oldp+228,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x00000018U)))),4);
        bufp->chgCData(oldp+229,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000018U)))),4);
        bufp->chgCData(oldp+230,(((((4U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x0000001bU)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000001aU)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x0000001aU)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x0000001bU)))) 
                                           << 2U)) 
                                    | ((2U & (((IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                        >> 0x0000001aU)) 
                                               | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68) 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x0000001aU)))) 
                                              << 1U)) 
                                       | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_73) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__PVT__u_cla_4_3__DOT__cin)))),5);
        bufp->chgCData(oldp+231,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                         >> 0x0000001cU)))),4);
        bufp->chgCData(oldp+232,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                         >> 0x0000001cU)))),4);
        bufp->chgBit(oldp+233,(Vminirv__ConstPool__TABLE_h4b06d23f_0
                               [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_15]));
        bufp->chgCData(oldp+234,((0x0000000fU & (((
                                                   ((2U 
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
                                                            >> 0x0000001cU))))),4);
        bufp->chgCData(oldp+235,(((((2U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x0000001fU)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000001eU)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x0000001eU)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x0000001fU)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x0000001eU)) 
                                             | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71) 
                                                & (IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                           >> 0x0000001eU)))))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_70)))),4);
        bufp->chgCData(oldp+236,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x0000001cU)))),4);
        bufp->chgCData(oldp+237,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000001cU)))),4);
        bufp->chgCData(oldp+238,(((((4U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x0000001fU)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000001eU)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x0000001eU)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x0000001fU)))) 
                                           << 2U)) 
                                    | ((2U & (((IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                        >> 0x0000001eU)) 
                                               | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71) 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x0000001eU)))) 
                                              << 1U)) 
                                       | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_70) 
                                              << 1U) 
                                             | Vminirv__ConstPool__TABLE_h4b06d23f_0
                                             [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_15]))),5);
        bufp->chgSData(oldp+239,((0x0000ffffU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                         >> 0x00000020U)))),16);
        bufp->chgSData(oldp+240,((0x0000ffffU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                         >> 0x00000020U)))),16);
        bufp->chgBit(oldp+241,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__2__KET__));
        bufp->chgSData(oldp+242,(((((0x000000f0U & 
                                     ((((((2U & (((IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                           >> 0x0000002eU)) 
                                                  | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58) 
                                                     & (IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x0000002eU)))) 
                                                 << 1U)) 
                                          | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58)) 
                                         << 2U) | (
                                                   ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_57) 
                                                    << 1U) 
                                                   | Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                   [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_16])) 
                                       ^ (IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                  >> 0x0000002cU))) 
                                      << 4U)) | (0x0000000fU 
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
                                   << 8U) | ((0x000000f0U 
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
                                                              >> 0x00000020U))))))),16);
        bufp->chgSData(oldp+243,((((((((2U & (((IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                        >> 0x0000002fU)) 
                                               | (((IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                            >> 0x0000002eU)) 
                                                   | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58) 
                                                      & (IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                 >> 0x0000002eU)))) 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x0000002fU)))) 
                                              << 1U)) 
                                       | (1U & ((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000002eU)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x0000002eU)))))) 
                                      << 6U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58) 
                                                 << 5U) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_57) 
                                                   << 4U))) 
                                    | ((((2U & (((IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                          >> 0x0000002bU)) 
                                                 | (((IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                              >> 0x0000002aU)) 
                                                     | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55) 
                                                        & (IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                   >> 0x0000002aU)))) 
                                                    & (IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                               >> 0x0000002bU)))) 
                                                << 1U)) 
                                         | (1U & ((IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                           >> 0x0000002aU)) 
                                                  | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55) 
                                                     & (IData)(
                                                               (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                >> 0x0000002aU)))))) 
                                        << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_60)))) 
                                   << 8U) | (((((2U 
                                                 & (((IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                              >> 0x00000027U)) 
                                                     | (((IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                  >> 0x00000026U)) 
                                                         | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53) 
                                                            & (IData)(
                                                                      (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                       >> 0x00000026U)))) 
                                                        & (IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                   >> 0x00000027U)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                               >> 0x00000026U)) 
                                                      | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53) 
                                                         & (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x00000026U)))))) 
                                               << 6U) 
                                              | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53) 
                                                  << 5U) 
                                                 | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_61) 
                                                    << 4U))) 
                                             | ((8U 
                                                 & (((IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                              >> 0x00000023U)) 
                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52) 
                                                        & (IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                   >> 0x00000023U)))) 
                                                    << 3U)) 
                                                | (7U 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26) 
                                                      >> 1U)))))),16);
        bufp->chgCData(oldp+244,(((((0x0000000fU == 
                                     (0x0000000fU & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x0000002cU)))) 
                                    << 3U) | ((0x0000000fU 
                                               == (0x0000000fU 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x00000028U)))) 
                                              << 2U)) 
                                  | (((0x0000000fU 
                                       == (0x0000000fU 
                                           & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x00000024U)))) 
                                      << 1U) | (0x0000000fU 
                                                == 
                                                (0x0000000fU 
                                                 & (IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                            >> 0x00000020U))))))),4);
        bufp->chgCData(oldp+245,(((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)))),4);
        bufp->chgSData(oldp+246,((0x0000ffffU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x00000020U)))),16);
        bufp->chgSData(oldp+247,((0x0000ffffU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000020U)))),16);
        bufp->chgCData(oldp+248,((((((IData)(Vminirv__ConstPool__TABLE_h50597f2b_0
                                             [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_16]) 
                                     << 2U) | (((IData)(Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                        [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_16]) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__PVT__u_cla_4_3__DOT__cin))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__PVT__u_cla_4_2__DOT__cin) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__2__KET__)))),5);
        bufp->chgCData(oldp+249,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                         >> 0x00000020U)))),4);
        bufp->chgCData(oldp+250,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                         >> 0x00000020U)))),4);
        bufp->chgCData(oldp+251,((0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26) 
                                                 ^ (IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                            >> 0x00000020U))))),4);
        bufp->chgCData(oldp+252,(((8U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                   >> 0x00000023U)) 
                                          | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52) 
                                             & (IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                        >> 0x00000023U)))) 
                                         << 3U)) | 
                                  (7U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26) 
                                         >> 1U)))),4);
        bufp->chgCData(oldp+253,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x00000020U)))),4);
        bufp->chgCData(oldp+254,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000020U)))),4);
        bufp->chgCData(oldp+255,(((0x00000010U & (((IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                            >> 0x00000023U)) 
                                                   | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52) 
                                                      & (IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                 >> 0x00000023U)))) 
                                                  << 4U)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26))),5);
        bufp->chgCData(oldp+256,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                         >> 0x00000024U)))),4);
        bufp->chgCData(oldp+257,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                         >> 0x00000024U)))),4);
        bufp->chgBit(oldp+258,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__PVT__u_cla_4_2__DOT__cin));
        bufp->chgCData(oldp+259,((0x0000000fU & (((
                                                   ((2U 
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
                                                            >> 0x00000024U))))),4);
        bufp->chgCData(oldp+260,(((((2U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x00000027U)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000026U)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x00000026U)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x00000027U)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x00000026U)) 
                                             | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53) 
                                                & (IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                           >> 0x00000026U)))))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_61)))),4);
        bufp->chgCData(oldp+261,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x00000024U)))),4);
        bufp->chgCData(oldp+262,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000024U)))),4);
        bufp->chgCData(oldp+263,(((((4U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x00000027U)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000026U)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x00000026U)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x00000027U)))) 
                                           << 2U)) 
                                    | ((2U & (((IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                        >> 0x00000026U)) 
                                               | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53) 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x00000026U)))) 
                                              << 1U)) 
                                       | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_61) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__PVT__u_cla_4_2__DOT__cin)))),5);
        bufp->chgCData(oldp+264,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                         >> 0x00000028U)))),4);
        bufp->chgCData(oldp+265,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                         >> 0x00000028U)))),4);
        bufp->chgBit(oldp+266,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__PVT__u_cla_4_3__DOT__cin));
        bufp->chgCData(oldp+267,((0x0000000fU & (((
                                                   ((2U 
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
                                                            >> 0x00000028U))))),4);
        bufp->chgCData(oldp+268,(((((2U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x0000002bU)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000002aU)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x0000002aU)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x0000002bU)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x0000002aU)) 
                                             | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55) 
                                                & (IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                           >> 0x0000002aU)))))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_60)))),4);
        bufp->chgCData(oldp+269,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x00000028U)))),4);
        bufp->chgCData(oldp+270,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000028U)))),4);
        bufp->chgCData(oldp+271,(((((4U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x0000002bU)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000002aU)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x0000002aU)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x0000002bU)))) 
                                           << 2U)) 
                                    | ((2U & (((IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                        >> 0x0000002aU)) 
                                               | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55) 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x0000002aU)))) 
                                              << 1U)) 
                                       | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_60) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__PVT__u_cla_4_3__DOT__cin)))),5);
        bufp->chgCData(oldp+272,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                         >> 0x0000002cU)))),4);
        bufp->chgCData(oldp+273,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                         >> 0x0000002cU)))),4);
        bufp->chgBit(oldp+274,(Vminirv__ConstPool__TABLE_h4b06d23f_0
                               [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_16]));
        bufp->chgCData(oldp+275,((0x0000000fU & (((
                                                   ((2U 
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
                                                            >> 0x0000002cU))))),4);
        bufp->chgCData(oldp+276,(((((2U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x0000002fU)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000002eU)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x0000002eU)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x0000002fU)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x0000002eU)) 
                                             | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58) 
                                                & (IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                           >> 0x0000002eU)))))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_57)))),4);
        bufp->chgCData(oldp+277,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x0000002cU)))),4);
        bufp->chgCData(oldp+278,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000002cU)))),4);
        bufp->chgCData(oldp+279,(((((4U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x0000002fU)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000002eU)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x0000002eU)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x0000002fU)))) 
                                           << 2U)) 
                                    | ((2U & (((IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                        >> 0x0000002eU)) 
                                               | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58) 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x0000002eU)))) 
                                              << 1U)) 
                                       | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_57) 
                                              << 1U) 
                                             | Vminirv__ConstPool__TABLE_h4b06d23f_0
                                             [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_16]))),5);
        bufp->chgSData(oldp+280,((0x0000ffffU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                         >> 0x00000030U)))),16);
        bufp->chgSData(oldp+281,((0x0000ffffU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                         >> 0x00000030U)))),16);
        bufp->chgBit(oldp+282,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__3__KET__));
        bufp->chgSData(oldp+283,(((((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_4__DOT__sum) 
                                    << 0x0000000cU) 
                                   | (0x00000f00U & 
                                      ((((((2U & (((IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                            >> 0x0000003aU)) 
                                                   | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42) 
                                                      & (IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                 >> 0x0000003aU)))) 
                                                  << 1U)) 
                                           | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42)) 
                                          << 2U) | 
                                         (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_47) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_3__DOT__cin))) 
                                        ^ (IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                   >> 0x00000038U))) 
                                       << 8U))) | (
                                                   (0x000000f0U 
                                                    & ((((((2U 
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
                                                   | (0x0000000fU 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23) 
                                                         ^ (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x00000030U))))))),16);
        bufp->chgSData(oldp+284,(((((0x000000f0U & 
                                     ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_4__DOT__tmp_cout) 
                                      << 3U)) | (((
                                                   (2U 
                                                    & (((IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                 >> 0x0000003bU)) 
                                                        | (((IData)(
                                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                     >> 0x0000003aU)) 
                                                            | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42) 
                                                               & (IData)(
                                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                          >> 0x0000003aU)))) 
                                                           & (IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 0x0000003bU)))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                  >> 0x0000003aU)) 
                                                         | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42) 
                                                            & (IData)(
                                                                      (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                       >> 0x0000003aU)))))) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_47)))) 
                                   << 8U) | (((((2U 
                                                 & (((IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                              >> 0x00000037U)) 
                                                     | (((IData)(
                                                                 (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                  >> 0x00000036U)) 
                                                         | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40) 
                                                            & (IData)(
                                                                      (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                       >> 0x00000036U)))) 
                                                        & (IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                   >> 0x00000037U)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                               >> 0x00000036U)) 
                                                      | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40) 
                                                         & (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x00000036U)))))) 
                                               << 6U) 
                                              | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40) 
                                                  << 5U) 
                                                 | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_48) 
                                                    << 4U))) 
                                             | ((8U 
                                                 & (((IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                              >> 0x00000033U)) 
                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39) 
                                                        & (IData)(
                                                                  (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                   >> 0x00000033U)))) 
                                                    << 3U)) 
                                                | (7U 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23) 
                                                      >> 1U)))))),16);
        bufp->chgCData(oldp+285,(((((0x0000000fU == 
                                     (0x0000000fU & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x0000003cU)))) 
                                    << 3U) | ((0x0000000fU 
                                               == (0x0000000fU 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x00000038U)))) 
                                              << 2U)) 
                                  | (((0x0000000fU 
                                       == (0x0000000fU 
                                           & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x00000034U)))) 
                                      << 1U) | (0x0000000fU 
                                                == 
                                                (0x0000000fU 
                                                 & (IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                            >> 0x00000030U))))))),4);
        bufp->chgCData(oldp+286,(((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))),4);
        bufp->chgSData(oldp+287,((0x0000ffffU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x00000030U)))),16);
        bufp->chgSData(oldp+288,((0x0000ffffU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000030U)))),16);
        bufp->chgCData(oldp+289,((((((IData)(Vminirv__ConstPool__TABLE_h50597f2b_0
                                             [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_17]) 
                                     << 2U) | (((IData)(Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                        [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_17]) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_3__DOT__cin))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_2__DOT__cin) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__3__KET__)))),5);
        bufp->chgCData(oldp+290,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                         >> 0x00000030U)))),4);
        bufp->chgCData(oldp+291,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                         >> 0x00000030U)))),4);
        bufp->chgCData(oldp+292,((0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23) 
                                                 ^ (IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                            >> 0x00000030U))))),4);
        bufp->chgCData(oldp+293,(((8U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                   >> 0x00000033U)) 
                                          | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39) 
                                             & (IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                        >> 0x00000033U)))) 
                                         << 3U)) | 
                                  (7U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23) 
                                         >> 1U)))),4);
        bufp->chgCData(oldp+294,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x00000030U)))),4);
        bufp->chgCData(oldp+295,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000030U)))),4);
        bufp->chgCData(oldp+296,(((0x00000010U & (((IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                            >> 0x00000033U)) 
                                                   | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39) 
                                                      & (IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                 >> 0x00000033U)))) 
                                                  << 4U)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23))),5);
        bufp->chgCData(oldp+297,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                         >> 0x00000034U)))),4);
        bufp->chgCData(oldp+298,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                         >> 0x00000034U)))),4);
        bufp->chgBit(oldp+299,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_2__DOT__cin));
        bufp->chgCData(oldp+300,((0x0000000fU & (((
                                                   ((2U 
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
                                                            >> 0x00000034U))))),4);
        bufp->chgCData(oldp+301,(((((2U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x00000037U)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000036U)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x00000036U)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x00000037U)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x00000036U)) 
                                             | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40) 
                                                & (IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                           >> 0x00000036U)))))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_48)))),4);
        bufp->chgCData(oldp+302,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x00000034U)))),4);
        bufp->chgCData(oldp+303,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000034U)))),4);
        bufp->chgCData(oldp+304,(((((4U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x00000037U)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000036U)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x00000036U)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x00000037U)))) 
                                           << 2U)) 
                                    | ((2U & (((IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                        >> 0x00000036U)) 
                                               | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40) 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x00000036U)))) 
                                              << 1U)) 
                                       | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_48) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_2__DOT__cin)))),5);
        bufp->chgCData(oldp+305,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                         >> 0x00000038U)))),4);
        bufp->chgCData(oldp+306,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                         >> 0x00000038U)))),4);
        bufp->chgBit(oldp+307,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_3__DOT__cin));
        bufp->chgCData(oldp+308,((0x0000000fU & (((
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
                                                            >> 0x00000038U))))),4);
        bufp->chgCData(oldp+309,(((((2U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x0000003bU)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000003aU)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x0000003aU)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x0000003bU)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x0000003aU)) 
                                             | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42) 
                                                & (IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                           >> 0x0000003aU)))))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_47)))),4);
        bufp->chgCData(oldp+310,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x00000038U)))),4);
        bufp->chgCData(oldp+311,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000038U)))),4);
        bufp->chgCData(oldp+312,(((((4U & (((IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                     >> 0x0000003bU)) 
                                            | (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000003aU)) 
                                                | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x0000003aU)))) 
                                               & (IData)(
                                                         (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                          >> 0x0000003bU)))) 
                                           << 2U)) 
                                    | ((2U & (((IData)(
                                                       (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                        >> 0x0000003aU)) 
                                               | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42) 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x0000003aU)))) 
                                              << 1U)) 
                                       | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42))) 
                                   << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_47) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_3__DOT__cin)))),5);
        bufp->chgCData(oldp+313,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                         >> 0x0000003cU)))),4);
        bufp->chgCData(oldp+314,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                         >> 0x0000003cU)))),4);
        bufp->chgBit(oldp+315,(Vminirv__ConstPool__TABLE_h4b06d23f_0
                               [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_17]));
        bufp->chgCData(oldp+316,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_4__DOT__sum),4);
        bufp->chgCData(oldp+317,((0x0000000fU & ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_4__DOT__tmp_cout) 
                                                 >> 1U))),4);
        bufp->chgCData(oldp+318,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x0000003cU)))),4);
        bufp->chgCData(oldp+319,((0x0000000fU & (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x0000003cU)))),4);
        bufp->chgCData(oldp+320,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_4__DOT__tmp_cout),5);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgIData(oldp+321,(vlSelfRef.minirv__DOT__mem_read_data),32);
        bufp->chgIData(oldp+322,(vlSelfRef.minirv__DOT__registerfile_write_data),32);
        bufp->chgIData(oldp+323,(vlSelfRef.minirv__DOT__i_type_write_data),32);
        bufp->chgWData(oldp+324,(vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut),180);
        bufp->chgWData(oldp+330,(vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut),105);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+334,(vlSelfRef.minirv__DOT__pc),32);
        bufp->chgIData(oldp+335,(((IData)(4U) + vlSelfRef.minirv__DOT__pc)),32);
        Vminirv___024root__trace_chg_dtype____0(vlSelf, bufp, 336, vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile);
        bufp->chgIData(oldp+368,(vlSelfRef.minirv__DOT__minirv_registerfile__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+369,(vlSelfRef.clk));
    bufp->chgBit(oldp+370,(vlSelfRef.rst));
    bufp->chgIData(oldp+371,(vlSelfRef.develop_put),32);
    bufp->chgQData(oldp+372,(vlSelfRef.alu_outdata),64);
    bufp->chgBit(oldp+374,(vlSelfRef.alu_sub_carry));
    bufp->chgBit(oldp+375,(vlSelfRef.alu_overflow));
    bufp->chgBit(oldp+376,(vlSelfRef.alu_zero));
    bufp->chgBit(oldp+377,(vlSelfRef.alu_sz));
    bufp->chgBit(oldp+378,(vlSelfRef.alu_cout));
    bufp->chgBit(oldp+379,(vlSelfRef.inv));
    bufp->chgIData(oldp+380,((0xfffffffeU & ((- (IData)(
                                                        (2U 
                                                         == (IData)(vlSelfRef.minirv__DOT__i_type_inst_result)))) 
                                             & (IData)(vlSelfRef.alu_outdata)))),32);
    bufp->chgIData(oldp+381,((IData)(vlSelfRef.alu_outdata)),32);
    bufp->chgIData(oldp+382,(((IData)(vlSelfRef.alu_outdata) 
                              & (- (IData)((1U == (IData)(vlSelfRef.minirv__DOT__r_type_inst_result)))))),32);
    bufp->chgBit(oldp+383,(vlSelfRef.alu_sz));
    bufp->chgQData(oldp+384,((0x0000000100000000ULL 
                              | (QData)((IData)(vlSelfRef.alu_outdata)))),36);
}

void Vminirv___024root__trace_chg_dtype____0(Vminirv___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_chg_dtype____0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[31]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[30]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[29]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[28]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[27]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[26]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[25]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[24]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[23]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[22]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[21]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[20]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[19]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[18]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[17]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[16]),32);
    bufp->chgIData(oldp+16,(__VdtypeVar[15]),32);
    bufp->chgIData(oldp+17,(__VdtypeVar[14]),32);
    bufp->chgIData(oldp+18,(__VdtypeVar[13]),32);
    bufp->chgIData(oldp+19,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+20,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+21,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+22,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+23,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+24,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+25,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+26,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+27,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+28,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+29,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+30,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+31,(__VdtypeVar[0]),32);
}

void Vminirv___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_cleanup\n"); );
    // Body
    Vminirv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminirv___024root*>(voidSelf);
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
