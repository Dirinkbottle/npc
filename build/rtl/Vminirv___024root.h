// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vminirv.h for the primary calling header

#ifndef VERILATED_VMINIRV___024ROOT_H_
#define VERILATED_VMINIRV___024ROOT_H_  // guard

#include "verilated.h"
class Vminirv___024unit;
class Vminirv_cla_16;


class Vminirv__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vminirv___024root final {
  public:
    // CELLS
    Vminirv___024unit* __PVT____024unit;
    Vminirv_cla_16* __PVT__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16;
    Vminirv_cla_16* __PVT__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2;
    Vminirv_cla_16* __PVT__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3;
    Vminirv_cla_16* __PVT__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(alu_sub_carry,0,0);
        VL_OUT8(alu_overflow,0,0);
        VL_OUT8(alu_zero,0,0);
        VL_OUT8(alu_sz,0,0);
        VL_OUT8(alu_cout,0,0);
        VL_OUT8(inv,0,0);
        CData/*0:0*/ minirv__DOT__mem_valid;
        CData/*0:0*/ minirv__DOT__mem_write_enable;
        CData/*7:0*/ minirv__DOT__mem_mask;
        CData/*3:0*/ minirv__DOT__i_type_inst_result;
        CData/*3:0*/ minirv__DOT__r_type_inst_result;
        CData/*3:0*/ minirv__DOT__u_type_inst_result;
        CData/*3:0*/ minirv__DOT__s_type_inst_result;
        CData/*4:0*/ minirv__DOT__registerfile_write_rd;
        CData/*0:0*/ minirv__DOT__registerfile_write_enable;
        CData/*4:0*/ minirv__DOT__registerfile_read_rs1;
        CData/*4:0*/ minirv__DOT__registerfile_read_rs2;
        CData/*7:0*/ minirv__DOT__i_alu_op;
        CData/*7:0*/ minirv__DOT__alu_op;
        CData/*0:0*/ minirv__DOT__minirv_alu__DOT__adder_do_sub;
        CData/*0:0*/ minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__3__KET__;
        CData/*0:0*/ minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__2__KET__;
        CData/*0:0*/ minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__1__KET__;
        CData/*0:0*/ minirv__DOT__minirv_decode_inst__DOT__pc_branch;
        CData/*0:0*/ minirv__DOT__minirv_decode_inst__DOT__r_enc_found;
        CData/*0:0*/ minirv__DOT__minirv_decode_inst__DOT__i_enc_found;
        CData/*0:0*/ minirv__DOT__minirv_decode_inst__DOT__u_enc_found;
        CData/*0:0*/ minirv__DOT__minirv_decode_inst__DOT__s_enc_found;
        CData/*7:0*/ minirv__DOT__minirv_decode_inst__DOT__mem_write_mask_MuxWithDefault__DOT__key;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_0;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_4;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_5;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_8;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_9;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_10;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_11;
        CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_21;
        CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_23;
        CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_26;
        CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_30;
        CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_37;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_38;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_39;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_46;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_49;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_50;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_51;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_52;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_62;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_63;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_64;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_65;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_75;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_76;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_77;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_78;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_79;
    };
    struct {
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_89;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_90;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_91;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_92;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_93;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*11:0*/ minirv__DOT__minirv_alu__DOT__u_compare__DOT__u_MuxWithDefault_compare__DOT__lut;
        SData/*15:0*/ minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table;
        SData/*15:0*/ minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table;
        SData/*15:0*/ minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table;
        SData/*15:0*/ minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table;
        VL_OUT(develop_put,31,0);
        IData/*31:0*/ minirv__DOT__pc;
        IData/*31:0*/ minirv__DOT__pc_static;
        IData/*31:0*/ minirv__DOT__mem_read_data;
        IData/*31:0*/ minirv__DOT__inst;
        IData/*31:0*/ minirv__DOT__imm_extend;
        IData/*31:0*/ minirv__DOT__registerfile_write_data;
        IData/*31:0*/ minirv__DOT__i_type_write_data;
        VlWide<7>/*215:0*/ minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut;
        VlWide<7>/*215:0*/ minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut;
        VlWide<18>/*575:0*/ minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut;
        VlWide<9>/*263:0*/ minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut;
        VlWide<4>/*104:0*/ minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut;
        VlWide<4>/*104:0*/ minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut;
        IData/*23:0*/ minirv__DOT__registerfile_readrs2_MuxWithDefault__DOT__lut;
        IData/*23:0*/ minirv__DOT__registerfile_writerd_MuxWithDefault__DOT__lut;
        IData/*31:0*/ minirv__DOT__minirv_registerfile__DOT__unnamedblk1__DOT__i;
        VlWide<7>/*200:0*/ minirv__DOT__alu_data2_MuxWithDefault__DOT__lut;
        VlWide<6>/*179:0*/ minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut;
        IData/*31:0*/ minirv__DOT__registerfile_readrs1_MuxWithDefault__DOT__lut;
        IData/*31:0*/ __Vfunc_prom_read__2__Vfuncout;
        IData/*31:0*/ __Vfunc_pmem_read__3__Vfuncout;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(alu_outdata,63,0);
        QData/*63:0*/ minirv__DOT__alu_data1;
        QData/*63:0*/ minirv__DOT__alu_data2;
        QData/*63:0*/ minirv__DOT__minirv_alu__DOT__adder_input_data1;
        QData/*63:0*/ minirv__DOT__minirv_alu__DOT__adder_input_data2;
        QData/*63:0*/ minirv__DOT__minirv_alu__DOT__compare_real_data2;
        QData/*63:0*/ minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b;
        QData/*63:0*/ minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum;
        QData/*63:0*/ minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P;
        QData/*63:0*/ minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G;
        QData/*63:0*/ minirv__DOT__minirv_alu__DOT__u_shifter__DOT__outdata;
        QData/*63:0*/ minirv__DOT__minirv_alu__DOT__u_shifter__DOT__real_shit_source;
        QData/*63:0*/ minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s0;
        QData/*63:0*/ minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s1;
        QData/*63:0*/ minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s2;
        QData/*63:0*/ minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s3;
        QData/*63:0*/ minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s4;
        QData/*63:0*/ minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_18;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_19;
        VlUnpacked<IData/*31:0*/, 32> minirv__DOT__minirv_registerfile__DOT__registersfile;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vminirv__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vminirv___024root(Vminirv__Syms* symsp, const char* namep);
    ~Vminirv___024root();
    VL_UNCOPYABLE(Vminirv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
