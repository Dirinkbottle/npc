// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vminirv__Syms.h"


VL_ATTR_COLD void Vminirv___024root__trace_init_sub__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16__0(Vminirv___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vminirv___024root__trace_init_sub__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2__0(Vminirv___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vminirv___024root__trace_init_sub__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3__0(Vminirv___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vminirv___024root__trace_init_sub__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__0(Vminirv___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vminirv___024root__trace_init_dtype____0(Vminirv___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vminirv___024root__trace_init_sub__TOP__0(Vminirv___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_init_sub__TOP__0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$rootio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+369,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+370,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+371,0,"develop_put",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+372,0,"alu_outdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+374,0,"alu_sub_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+375,0,"alu_overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+376,0,"alu_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+377,0,"alu_sz",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"alu_cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+379,0,"inv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "minirv", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+369,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+370,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+371,0,"develop_put",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+372,0,"alu_outdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+374,0,"alu_sub_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+375,0,"alu_overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+376,0,"alu_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+377,0,"alu_sz",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"alu_cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+379,0,"inv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+386,0,"INST_TYPE_INVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+387,0,"INST_TYPE_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+388,0,"INST_TYPE_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+389,0,"INST_TYPE_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+390,0,"INST_TYPE_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+391,0,"INST_TYPE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+392,0,"INST_TYPE_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+393,0,"I_ADDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+394,0,"I_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+395,0,"I_LB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+396,0,"I_LBU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+397,0,"I_LW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+393,0,"R_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+398,0,"ALU_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+399,0,"ALU_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"ALU_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+401,0,"ALU_COMPARE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+402,0,"ALU_XOR_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+403,0,"ALU_OR_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+404,0,"ALU_AND_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+405,0,"ALU_REVERSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+406,0,"PC_RESET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+407,0,"PC_STEP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+408,0,"INST_EBREAK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+390,0,"ROM_SIZE_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+409,0,"JALR_ALIGN_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+334,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+335,0,"pc_static",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+380,0,"jalr_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"mem_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+381,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"mem_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"mem_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"mem_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"mem_read_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"inst_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"imm_extend",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"i_type_inst_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"r_type_inst_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"u_type_inst_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"s_type_inst_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+15,0,"pc_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"invalid_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"registerfile_write_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"registerfile_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"registerfile_read_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"registerfile_read_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"registerfile_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"registerfile_read_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"registerfile_read_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+382,0,"r_type_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"i_type_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"u_type_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+410,0,"r_alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"i_alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_QUAD(tracep,c+25,0,"alu_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+27,0,"alu_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_PUSH_PREFIX(tracep, "alu_data2_MuxWithDefault", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+412,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+413,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_WIDE(tracep,c+29,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 200,0);
    VL_TRACE_DECL_QUAD(tracep,c+27,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+415,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "alu_op_MuxWithDefault", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+417,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+398,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_QUAD(tracep,c+36,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+418,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "i_type_alu_op_MuxWithDefault", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+419,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+417,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+398,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+421,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+422,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+423,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "i_type_inst_registerfile_writedata_MuxWithDefault", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+424,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+425,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+426,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_WIDE(tracep,c+324,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 179,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+427,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+428,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "minirv_alu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_QUAD(tracep,c+25,0,"data1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+27,0,"data2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+429,0,"shifter_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+429,0,"compare_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_QUAD(tracep,c+372,0,"outdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+374,0,"sub_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+375,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+376,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+377,0,"sz",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"do_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+40,0,"adder_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+42,0,"shifter_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+44,0,"xor_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+46,0,"or_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+48,0,"and_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+50,0,"reverse_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+398,0,"ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+399,0,"SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+401,0,"COMPARE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+402,0,"XOR_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+403,0,"OR_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+404,0,"AND_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+405,0,"REVERSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+430,0,"ADD_SUB_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+430,0,"SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+431,0,"SLTI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+432,0,"SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+433,0,"SLTIU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_QUAD(tracep,c+52,0,"adder_input_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+54,0,"adder_input_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"adder_do_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+375,0,"adder_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+57,0,"compare_real_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_MuxWithDefault", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+417,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+417,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+412,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+413,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_WIDE(tracep,c+59,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 575,0);
    VL_TRACE_DECL_QUAD(tracep,c+372,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+434,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+435,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_MuxWithDefault_adder_do_sub", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+417,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+436,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+437,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+438,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+439,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_MuxWithDefault_adder_input1_mux", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+417,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+412,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+413,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_WIDE(tracep,c+78,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 215,0);
    VL_TRACE_DECL_QUAD(tracep,c+52,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+434,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_MuxWithDefault_adder_input2_mux", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+417,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+412,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+413,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_WIDE(tracep,c+85,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 215,0);
    VL_TRACE_DECL_QUAD(tracep,c+54,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+434,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_MuxWithDefault_compare2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+419,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+412,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+413,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+429,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+92,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 263,0);
    VL_TRACE_DECL_QUAD(tracep,c+57,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+440,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+441,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_adder_64", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+52,0,"add1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+54,0,"add2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"is_sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+40,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+374,0,"sub_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+375,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+376,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+52,0,"real_add1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+101,0,"real_add2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+103,0,"cout_pair",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_64", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+52,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+101,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+40,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+103,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+374,0,"sub_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+376,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+104,0,"P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+106,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"tmp_cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_QUAD(tracep,c+109,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"PG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+112,0,"GG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"TMP_PG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+114,0,"TMP_GG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_16", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vminirv___024root__trace_init_sub__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_16_2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vminirv___024root__trace_init_sub__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_16_3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vminirv___024root__trace_init_sub__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_16_4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vminirv___024root__trace_init_sub__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_bitwise_and", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+25,0,"data1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+27,0,"data2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+48,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_bitwise_or", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+25,0,"data1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+27,0,"data2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+46,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_bitwise_reverse", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+25,0,"data1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+50,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_bitwise_xor", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+25,0,"data1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+27,0,"data2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+44,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_compare", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+40,0,"adder_sum_compare",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+429,0,"compare_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+374,0,"sub_carry_compare",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+375,0,"overflow_compare",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+377,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+430,0,"SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+431,0,"SLTI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+432,0,"SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+433,0,"SLTIU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_MuxWithDefault_compare", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+419,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+436,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+437,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+429,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+115,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+383,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+441,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_shifter", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+25,0,"source_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+116,0,"shift",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+429,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_QUAD(tracep,c+42,0,"outdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+117,0,"real_shit_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+119,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+121,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+123,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+125,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+127,0,"s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+129,0,"s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+430,0,"SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+431,0,"SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+432,0,"SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+442,0,"sign_extention",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"padding",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+442,0,"right_direction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+444,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+42,0,"tmp_shit_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+444,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "minirv_decode_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"inst_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"imm_extend",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"i_type_inst_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"r_type_inst_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"u_type_inst_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"s_type_inst_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"mem_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+379,0,"inv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"mem_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"mem_write_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"mem_read_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+131,0,"selfinst_enc_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+132,0,"write_memory_inst_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+133,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+135,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BIT(tracep,c+445,0,"pc_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+136,0,"i_type_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+137,0,"u_type_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+138,0,"s_type_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+139,0,"r_type_inst_table",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+446,0,"r_enc_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+140,0,"r_enc_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+141,0,"i_type_inst_table",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+446,0,"i_enc_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+142,0,"i_enc_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+143,0,"u_type_inst_table",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+446,0,"u_enc_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+144,0,"u_enc_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+145,0,"s_type_inst_table",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+446,0,"s_enc_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+146,0,"s_enc_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "imm_MuxWithDefault", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+425,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+426,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_WIDE(tracep,c+147,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 104,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+447,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "inst_type_MuxWithDefault", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+439,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+448,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+449,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+133,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_WIDE(tracep,c+450,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 89,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+453,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+151,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mem_write_mask_MuxWithDefault", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+419,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+417,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+417,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+410,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+132,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+454,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+455,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+423,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "minirv_registerfile", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+369,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+370,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"write_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"read_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"read_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"read_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"read_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);

    Vminirv___024root__trace_init_dtype____0(vlSelf, tracep, "registersfile", 0, c+336, VerilatedTraceSigDirection::NONE);
    VL_TRACE_PUSH_PREFIX(tracep, "unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+368,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "r_type_alu_op_MuxWithDefault", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+436,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+417,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+398,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+456,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+410,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+422,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+457,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "r_type_inst_registerfile_writedata_MuxWithDefault", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+436,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+425,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+426,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_QUAD(tracep,c+384,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_BUS(tracep,c+382,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+427,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+457,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "registerfile_readrs1_MuxWithDefault", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+424,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+152,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+417,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+441,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "registerfile_readrs2_MuxWithDefault", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+424,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+153,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+417,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "registerfile_writedata_MuxWithDefault", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+425,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+426,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_WIDE(tracep,c+330,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 104,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+447,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "registerfile_writeenable_MuxWithDefault", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+436,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+437,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+459,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+154,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "registerfile_writerd_MuxWithDefault", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+424,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+155,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+417,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_type_inst_registerfile_writedata_MuxWithDefault", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+436,0,"NR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+425,0,"VALUE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+426,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_QUAD(tracep,c+156,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 34,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+447,0,"PAIRLENS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+457,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vminirv___024root__trace_init_dtype_sub____0(Vminirv___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vminirv___024root__trace_init_dtype____0(Vminirv___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_init_dtype____0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vminirv___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vminirv___024root__trace_init_dtype_sub____0(Vminirv___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_init_dtype_sub____0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vminirv___024root__trace_init_sub__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16__0(Vminirv___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_init_sub__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16__0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+158,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+159,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+160,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+161,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"OPG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+163,0,"OGG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"TMP_P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"TMP_G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+163,0,"GG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"PG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+166,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+161,0,"cla_tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+167,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+170,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+171,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+172,0,"G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_4_2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+174,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+175,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+176,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+178,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+179,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+180,0,"G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+181,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_4_3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+182,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+183,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+184,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+187,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+188,0,"G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+189,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_4_4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+192,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+194,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+197,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vminirv___024root__trace_init_sub__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2__0(Vminirv___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_init_sub__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2__0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+198,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+201,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+202,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"OPG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+204,0,"OGG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+205,0,"P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+206,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+205,0,"TMP_P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+206,0,"TMP_G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+204,0,"GG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"PG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+207,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+202,0,"cla_tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+208,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+209,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+210,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+211,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+212,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+213,0,"G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+214,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_4_2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+215,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+216,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+217,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+218,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+219,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+220,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+221,0,"G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+222,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_4_3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+223,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+224,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+225,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+226,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+227,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+228,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+229,0,"G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+230,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_4_4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+231,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+232,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+233,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+234,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+235,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+236,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+237,0,"G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+238,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vminirv___024root__trace_init_sub__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3__0(Vminirv___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_init_sub__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3__0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+239,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+240,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+241,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+242,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+243,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+244,0,"OPG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+245,0,"OGG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+246,0,"P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+247,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+246,0,"TMP_P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+247,0,"TMP_G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+245,0,"GG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+244,0,"PG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+248,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+243,0,"cla_tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+249,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+241,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+251,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+252,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+253,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+255,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_4_2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+257,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+258,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+259,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+260,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+261,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+262,0,"G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+263,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_4_3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+264,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+265,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+266,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+267,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+268,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+269,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+270,0,"G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+271,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_4_4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+272,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+273,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+274,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+275,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+276,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+277,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+278,0,"G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+279,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vminirv___024root__trace_init_sub__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__0(Vminirv___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_init_sub__TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4__0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+280,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+281,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+282,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+283,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+284,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+285,0,"OPG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+286,0,"OGG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+287,0,"P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+288,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+287,0,"TMP_P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+288,0,"TMP_G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+286,0,"GG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+285,0,"PG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+289,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+284,0,"cla_tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+290,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+291,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+282,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+292,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+293,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+294,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+295,0,"G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+296,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_4_2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+297,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+298,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+299,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+300,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+301,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+302,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+303,0,"G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+304,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_4_3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+305,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+306,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+307,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+308,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+309,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+310,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+311,0,"G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+312,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_cla_4_4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+313,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+314,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+315,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+316,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+317,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+318,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+319,0,"G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"tmp_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vminirv___024root__trace_init_top(Vminirv___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_init_top\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vminirv___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vminirv___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vminirv___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vminirv___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vminirv___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vminirv___024root__trace_register(Vminirv___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_register\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vminirv___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vminirv___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vminirv___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vminirv___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vminirv___024root__trace_const_0_sub_0(Vminirv___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vminirv___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_const_0\n"); );
    // Body
    Vminirv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminirv___024root*>(voidSelf);
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vminirv___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vminirv___024root__trace_const_0_sub_0(Vminirv___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_const_0_sub_0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+386,(0U),3);
    bufp->fullCData(oldp+387,(1U),3);
    bufp->fullCData(oldp+388,(2U),3);
    bufp->fullCData(oldp+389,(3U),3);
    bufp->fullCData(oldp+390,(4U),3);
    bufp->fullCData(oldp+391,(5U),3);
    bufp->fullCData(oldp+392,(6U),3);
    bufp->fullCData(oldp+393,(1U),4);
    bufp->fullCData(oldp+394,(2U),4);
    bufp->fullCData(oldp+395,(3U),4);
    bufp->fullCData(oldp+396,(4U),4);
    bufp->fullCData(oldp+397,(5U),4);
    bufp->fullCData(oldp+398,(0U),8);
    bufp->fullCData(oldp+399,(1U),8);
    bufp->fullCData(oldp+400,(2U),8);
    bufp->fullCData(oldp+401,(3U),8);
    bufp->fullCData(oldp+402,(4U),8);
    bufp->fullCData(oldp+403,(5U),8);
    bufp->fullCData(oldp+404,(6U),8);
    bufp->fullCData(oldp+405,(7U),8);
    bufp->fullIData(oldp+406,(0x80000000U),32);
    bufp->fullIData(oldp+407,(4U),32);
    bufp->fullIData(oldp+408,(0x00100073U),32);
    bufp->fullIData(oldp+409,(0xfffffffeU),32);
    bufp->fullCData(oldp+410,(0U),8);
    bufp->fullIData(oldp+411,(3U),32);
    bufp->fullIData(oldp+412,(0x00000040U),32);
    bufp->fullQData(oldp+413,(0ULL),64);
    bufp->fullIData(oldp+415,(0x00000043U),32);
    bufp->fullIData(oldp+416,(3U),32);
    bufp->fullIData(oldp+417,(8U),32);
    bufp->fullIData(oldp+418,(0x0000000bU),32);
    bufp->fullIData(oldp+419,(2U),32);
    bufp->fullIData(oldp+420,(4U),32);
    bufp->fullIData(oldp+421,(0x00100200U),24);
    bufp->fullIData(oldp+422,(0x0000000cU),32);
    bufp->fullIData(oldp+423,(2U),32);
    bufp->fullIData(oldp+424,(5U),32);
    bufp->fullIData(oldp+425,(0x00000020U),32);
    bufp->fullIData(oldp+426,(0U),32);
    bufp->fullIData(oldp+427,(0x00000024U),32);
    bufp->fullIData(oldp+428,(5U),32);
    bufp->fullCData(oldp+429,(0U),2);
    bufp->fullCData(oldp+430,(0U),2);
    bufp->fullCData(oldp+431,(1U),2);
    bufp->fullCData(oldp+432,(2U),2);
    bufp->fullCData(oldp+433,(3U),2);
    bufp->fullIData(oldp+434,(0x00000048U),32);
    bufp->fullIData(oldp+435,(8U),32);
    bufp->fullIData(oldp+436,(1U),32);
    bufp->fullBit(oldp+437,(0U));
    bufp->fullIData(oldp+438,(0x00000607U),27);
    bufp->fullIData(oldp+439,(9U),32);
    bufp->fullIData(oldp+440,(0x00000042U),32);
    bufp->fullIData(oldp+441,(4U),32);
    bufp->fullBit(oldp+442,(0U));
    bufp->fullBit(oldp+443,(0U));
    bufp->fullIData(oldp+444,(0x00000040U),32);
    bufp->fullBit(oldp+445,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__pc_branch));
    bufp->fullIData(oldp+446,(0xffffffffU),32);
    bufp->fullIData(oldp+447,(0x00000023U),32);
    bufp->fullIData(oldp+448,(7U),32);
    bufp->fullCData(oldp+449,(0U),3);
    __Vtemp_1[0U] = 0x81a26999U;
    __Vtemp_1[1U] = 0xc2f11bceU;
    __Vtemp_1[2U] = 0x037ec75bU;
    bufp->fullWData(oldp+450,(__Vtemp_1),90);
    bufp->fullIData(oldp+453,(0x0000000aU),32);
    bufp->fullIData(oldp+454,(0x0101040fU),32);
    bufp->fullIData(oldp+455,(0x00000010U),32);
    bufp->fullSData(oldp+456,(0x0100U),12);
    bufp->fullIData(oldp+457,(1U),32);
    bufp->fullCData(oldp+458,(0U),5);
    bufp->fullSData(oldp+459,(0x0359U),12);
}

VL_ATTR_COLD void Vminirv___024root__trace_full_0_sub_0(Vminirv___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vminirv___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_full_0\n"); );
    // Body
    Vminirv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminirv___024root*>(voidSelf);
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vminirv___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlUnpacked<CData/*2:0*/, 128> Vminirv__ConstPool__TABLE_h986f6810_0;
extern const VlUnpacked<IData/*31:0*/, 128> Vminirv__ConstPool__TABLE_h4e427656_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vminirv__ConstPool__TABLE_h4b06d23f_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vminirv__ConstPool__TABLE_h50597f2b_0;
VL_ATTR_COLD void Vminirv___024root__trace_full_dtype____0(Vminirv___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);

VL_ATTR_COLD void Vminirv___024root__trace_full_0_sub_0(Vminirv___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_full_0_sub_0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.minirv__DOT__mem_valid));
    bufp->fullBit(oldp+1,(vlSelfRef.minirv__DOT__mem_write_enable));
    bufp->fullIData(oldp+2,(vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                            [vlSelfRef.minirv__DOT__registerfile_read_rs2]),32);
    bufp->fullCData(oldp+3,(vlSelfRef.minirv__DOT__mem_mask),8);
    bufp->fullCData(oldp+4,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                              ? 0x0fU : (1U & (- (IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21) 
                                                              >> 2U)))))))),8);
    bufp->fullIData(oldp+5,(vlSelfRef.minirv__DOT__inst),32);
    bufp->fullCData(oldp+6,(Vminirv__ConstPool__TABLE_h986f6810_0
                            [(0x0000007fU & vlSelfRef.minirv__DOT__inst)]),3);
    bufp->fullCData(oldp+7,((0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                            >> 7U))),5);
    bufp->fullCData(oldp+8,((0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                            >> 0x0000000fU))),5);
    bufp->fullCData(oldp+9,((0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                            >> 0x00000014U))),5);
    bufp->fullIData(oldp+10,(vlSelfRef.minirv__DOT__imm_extend),32);
    bufp->fullCData(oldp+11,(vlSelfRef.minirv__DOT__i_type_inst_result),4);
    bufp->fullCData(oldp+12,(vlSelfRef.minirv__DOT__r_type_inst_result),4);
    bufp->fullCData(oldp+13,(vlSelfRef.minirv__DOT__u_type_inst_result),4);
    bufp->fullCData(oldp+14,(vlSelfRef.minirv__DOT__s_type_inst_result),4);
    bufp->fullBit(oldp+15,((2U == (IData)(vlSelfRef.minirv__DOT__i_type_inst_result))));
    bufp->fullBit(oldp+16,((0U == Vminirv__ConstPool__TABLE_h986f6810_0
                            [(0x0000007fU & vlSelfRef.minirv__DOT__inst)])));
    bufp->fullCData(oldp+17,(vlSelfRef.minirv__DOT__registerfile_write_rd),5);
    bufp->fullBit(oldp+18,(vlSelfRef.minirv__DOT__registerfile_write_enable));
    bufp->fullCData(oldp+19,(vlSelfRef.minirv__DOT__registerfile_read_rs1),5);
    bufp->fullCData(oldp+20,(vlSelfRef.minirv__DOT__registerfile_read_rs2),5);
    bufp->fullIData(oldp+21,(vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile
                             [vlSelfRef.minirv__DOT__registerfile_read_rs1]),32);
    bufp->fullIData(oldp+22,((0xfffff000U & (vlSelfRef.minirv__DOT__inst 
                                             & (- (IData)(
                                                          (4U 
                                                           == Vminirv__ConstPool__TABLE_h986f6810_0
                                                           [
                                                           (0x0000007fU 
                                                            & vlSelfRef.minirv__DOT__inst)])))))),32);
    bufp->fullCData(oldp+23,(vlSelfRef.minirv__DOT__i_alu_op),8);
    bufp->fullCData(oldp+24,(vlSelfRef.minirv__DOT__alu_op),8);
    bufp->fullQData(oldp+25,(vlSelfRef.minirv__DOT__alu_data1),64);
    bufp->fullQData(oldp+27,(vlSelfRef.minirv__DOT__alu_data2),64);
    bufp->fullWData(oldp+29,(vlSelfRef.minirv__DOT__alu_data2_MuxWithDefault__DOT__lut),201);
    bufp->fullQData(oldp+36,((0x0000000040100000ULL 
                              | (QData)((IData)((0x0300U 
                                                 | ((IData)(vlSelfRef.minirv__DOT__i_alu_op) 
                                                    << 0x0000000bU)))))),33);
    bufp->fullSData(oldp+38,((vlSelfRef.minirv__DOT__inst 
                              >> 0x00000014U)),12);
    bufp->fullBit(oldp+39,((1U == (IData)(vlSelfRef.minirv__DOT__alu_op))));
    bufp->fullQData(oldp+40,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__sum),64);
    bufp->fullQData(oldp+42,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__outdata),64);
    bufp->fullQData(oldp+44,((vlSelfRef.minirv__DOT__alu_data2 
                              ^ vlSelfRef.minirv__DOT__alu_data1)),64);
    bufp->fullQData(oldp+46,((vlSelfRef.minirv__DOT__alu_data2 
                              | vlSelfRef.minirv__DOT__alu_data1)),64);
    bufp->fullQData(oldp+48,((vlSelfRef.minirv__DOT__alu_data2 
                              & vlSelfRef.minirv__DOT__alu_data1)),64);
    bufp->fullQData(oldp+50,((~ vlSelfRef.minirv__DOT__alu_data1)),64);
    bufp->fullQData(oldp+52,(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1),64);
    bufp->fullQData(oldp+54,(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data2),64);
    bufp->fullBit(oldp+56,(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_do_sub));
    bufp->fullQData(oldp+57,(vlSelfRef.minirv__DOT__minirv_alu__DOT__compare_real_data2),64);
    bufp->fullWData(oldp+59,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault__DOT__lut),576);
    bufp->fullBit(oldp+77,(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_do_sub));
    bufp->fullWData(oldp+78,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input1_mux__DOT__lut),216);
    bufp->fullWData(oldp+85,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_adder_input2_mux__DOT__lut),216);
    bufp->fullWData(oldp+92,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_MuxWithDefault_compare2__DOT__lut),264);
    bufp->fullQData(oldp+101,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b),64);
    bufp->fullCData(oldp+103,((3U & ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_4__DOT__tmp_cout) 
                                     >> 3U))),2);
    bufp->fullQData(oldp+104,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P),64);
    bufp->fullQData(oldp+106,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G),64);
    bufp->fullCData(oldp+108,(((((((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__3__KET__) 
                                   & (0xffff000000000000ULL 
                                      == (0xffff000000000000ULL 
                                          & vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))) 
                                  | ((IData)(((0xf000000000000000ULL 
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
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50))) 
                                 << 4U) | (((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__3__KET__) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__2__KET__) 
                                              << 2U))) 
                               | (((IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__1__KET__) 
                                   << 1U) | (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_do_sub)))),5);
    bufp->fullQData(oldp+109,((((QData)((IData)((((
                                                   ((0x000000f0U 
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
                                << 0x00000020U) | (QData)((IData)(
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
    bufp->fullCData(oldp+111,(((((0x0000ffffU == (0x0000ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x00000030U)))) 
                                 << 3U) | ((0x0000ffffU 
                                            == (0x0000ffffU 
                                                & (IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                           >> 0x00000020U)))) 
                                           << 2U)) 
                               | (((0x0000ffffU == 
                                    (0x0000ffffU & (IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                            >> 0x00000010U)))) 
                                   << 1U) | (0x0000ffffU 
                                             == (0x0000ffffU 
                                                 & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)))))),4);
    bufp->fullCData(oldp+112,((((((IData)(((0xf000000000000000ULL 
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
                                              == (0x00000000f0000000ULL 
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
    bufp->fullSData(oldp+113,((((((((0x0000000fU == 
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
                                                            >> 0x00000030U)))))) 
                                 << 0x0000000cU) | 
                                (((((0x0000000fU == 
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
                                                            >> 0x00000020U)))))) 
                                 << 8U)) | ((((((0x0000000fU 
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
    bufp->fullSData(oldp+114,((((((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76) 
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
    bufp->fullSData(oldp+115,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_compare__DOT__u_MuxWithDefault_compare__DOT__lut),12);
    bufp->fullCData(oldp+116,((0x0000003fU & (IData)(vlSelfRef.minirv__DOT__alu_data2))),6);
    bufp->fullQData(oldp+117,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__real_shit_source),64);
    bufp->fullQData(oldp+119,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s0),64);
    bufp->fullQData(oldp+121,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s1),64);
    bufp->fullQData(oldp+123,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s2),64);
    bufp->fullQData(oldp+125,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s3),64);
    bufp->fullQData(oldp+127,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s4),64);
    bufp->fullQData(oldp+129,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_shifter__DOT__s5),64);
    bufp->fullBit(oldp+131,((0x00100073U == vlSelfRef.minirv__DOT__inst)));
    bufp->fullCData(oldp+132,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__mem_write_mask_MuxWithDefault__DOT__key),8);
    bufp->fullCData(oldp+133,((0x0000007fU & vlSelfRef.minirv__DOT__inst)),7);
    bufp->fullCData(oldp+134,((7U & (vlSelfRef.minirv__DOT__inst 
                                     >> 0x0000000cU))),3);
    bufp->fullCData(oldp+135,((vlSelfRef.minirv__DOT__inst 
                               >> 0x00000019U)),7);
    bufp->fullIData(oldp+136,((((- (IData)((vlSelfRef.minirv__DOT__inst 
                                            >> 0x0000001fU))) 
                                << 0x0000000cU) | (vlSelfRef.minirv__DOT__inst 
                                                   >> 0x00000014U))),32);
    bufp->fullIData(oldp+137,((vlSelfRef.minirv__DOT__inst 
                               >> 0x0000000cU)),32);
    bufp->fullIData(oldp+138,((((- (IData)((vlSelfRef.minirv__DOT__inst 
                                            >> 0x0000001fU))) 
                                << 0x0000000cU) | (
                                                   (0x00000fe0U 
                                                    & (vlSelfRef.minirv__DOT__inst 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001fU 
                                                      & (vlSelfRef.minirv__DOT__inst 
                                                         >> 7U))))),32);
    bufp->fullSData(oldp+139,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_type_inst_table),16);
    bufp->fullBit(oldp+140,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__r_enc_found));
    bufp->fullSData(oldp+141,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_type_inst_table),16);
    bufp->fullBit(oldp+142,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__i_enc_found));
    bufp->fullSData(oldp+143,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_type_inst_table),16);
    bufp->fullBit(oldp+144,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__u_enc_found));
    bufp->fullSData(oldp+145,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_type_inst_table),16);
    bufp->fullBit(oldp+146,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__s_enc_found));
    bufp->fullWData(oldp+147,(vlSelfRef.minirv__DOT__minirv_decode_inst__DOT__imm_MuxWithDefault__DOT__lut),105);
    bufp->fullIData(oldp+151,(Vminirv__ConstPool__TABLE_h4e427656_0
                              [(0x0000007fU & vlSelfRef.minirv__DOT__inst)]),32);
    bufp->fullIData(oldp+152,(vlSelfRef.minirv__DOT__registerfile_readrs1_MuxWithDefault__DOT__lut),32);
    bufp->fullIData(oldp+153,(vlSelfRef.minirv__DOT__registerfile_readrs2_MuxWithDefault__DOT__lut),24);
    bufp->fullBit(oldp+154,(vlSelfRef.minirv__DOT__registerfile_write_enable));
    bufp->fullIData(oldp+155,(vlSelfRef.minirv__DOT__registerfile_writerd_MuxWithDefault__DOT__lut),24);
    bufp->fullQData(oldp+156,((0x0000000400000000ULL 
                               | (QData)((IData)((0xfffff000U 
                                                  & vlSelfRef.minirv__DOT__inst))))),35);
    bufp->fullSData(oldp+158,((0x0000ffffU & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1))),16);
    bufp->fullSData(oldp+159,((0x0000ffffU & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b))),16);
    bufp->fullSData(oldp+160,(((((0x000000f0U & (((
                                                   (((2U 
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
                                 | (0x0000000fU & (
                                                   ((((2U 
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
    bufp->fullSData(oldp+161,((((((((2U & (((IData)(
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
                                << 8U) | (((((2U & 
                                              (((IData)(
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
                                          | ((8U & 
                                              (((IData)(
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
    bufp->fullCData(oldp+162,(((((0x0000000fU == (0x0000000fU 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x0000000cU)))) 
                                 << 3U) | ((0x0000000fU 
                                            == (0x0000000fU 
                                                & (IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                           >> 8U)))) 
                                           << 2U)) 
                               | (((0x0000000fU == 
                                    (0x0000000fU & (IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                            >> 4U)))) 
                                   << 1U) | (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)))))),4);
    bufp->fullCData(oldp+163,(((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90) 
                                 << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                   << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))),4);
    bufp->fullSData(oldp+164,((0x0000ffffU & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))),16);
    bufp->fullSData(oldp+165,((0x0000ffffU & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G))),16);
    bufp->fullCData(oldp+166,((((((IData)(Vminirv__ConstPool__TABLE_h50597f2b_0
                                          [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_14]) 
                                  << 2U) | (((IData)(Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                     [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_14]) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__PVT__u_cla_4_3__DOT__cin))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__PVT__u_cla_4_2__DOT__cin) 
                                           << 1U) | (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_do_sub)))),5);
    bufp->fullCData(oldp+167,((0x0000000fU & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1))),4);
    bufp->fullCData(oldp+168,((0x0000000fU & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b))),4);
    bufp->fullCData(oldp+169,((0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37) 
                                              ^ (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P)))),4);
    bufp->fullCData(oldp+170,(((8U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                >> 3U)) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79) 
                                          & (IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                     >> 3U)))) 
                                      << 3U)) | (7U 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37) 
                                                    >> 1U)))),4);
    bufp->fullCData(oldp+171,((0x0000000fU & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P))),4);
    bufp->fullCData(oldp+172,((0x0000000fU & (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G))),4);
    bufp->fullCData(oldp+173,(((0x00000010U & (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 3U)) 
                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 3U)))) 
                                               << 4U)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37))),5);
    bufp->fullCData(oldp+174,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                      >> 4U)))),4);
    bufp->fullCData(oldp+175,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                      >> 4U)))),4);
    bufp->fullBit(oldp+176,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__PVT__u_cla_4_2__DOT__cin));
    bufp->fullCData(oldp+177,((0x0000000fU & (((((2U 
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
    bufp->fullCData(oldp+178,(((((2U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 1U)) | (1U 
                                                   & ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                               >> 6U)) 
                                                      | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80) 
                                                         & (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 6U)))))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_88)))),4);
    bufp->fullCData(oldp+179,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 4U)))),4);
    bufp->fullCData(oldp+180,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 4U)))),4);
    bufp->fullCData(oldp+181,(((((4U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 2U)) | (
                                                   (2U 
                                                    & (((IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                 >> 6U)) 
                                                        | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80) 
                                                           & (IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 6U)))) 
                                                       << 1U)) 
                                                   | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_80))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_88) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__PVT__u_cla_4_2__DOT__cin)))),5);
    bufp->fullCData(oldp+182,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                      >> 8U)))),4);
    bufp->fullCData(oldp+183,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                      >> 8U)))),4);
    bufp->fullBit(oldp+184,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__PVT__u_cla_4_3__DOT__cin));
    bufp->fullCData(oldp+185,((0x0000000fU & (((((2U 
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
    bufp->fullCData(oldp+186,(((((2U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 1U)) | (1U 
                                                   & ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                               >> 0x0000000aU)) 
                                                      | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82) 
                                                         & (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x0000000aU)))))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_87)))),4);
    bufp->fullCData(oldp+187,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 8U)))),4);
    bufp->fullCData(oldp+188,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 8U)))),4);
    bufp->fullCData(oldp+189,(((((4U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 2U)) | (
                                                   (2U 
                                                    & (((IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                 >> 0x0000000aU)) 
                                                        | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82) 
                                                           & (IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 0x0000000aU)))) 
                                                       << 1U)) 
                                                   | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_82))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_87) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__PVT__u_cla_4_3__DOT__cin)))),5);
    bufp->fullCData(oldp+190,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                      >> 0x0000000cU)))),4);
    bufp->fullCData(oldp+191,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                      >> 0x0000000cU)))),4);
    bufp->fullBit(oldp+192,(Vminirv__ConstPool__TABLE_h4b06d23f_0
                            [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_14]));
    bufp->fullCData(oldp+193,((0x0000000fU & (((((2U 
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
    bufp->fullCData(oldp+194,(((((2U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 1U)) | (1U 
                                                   & ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                               >> 0x0000000eU)) 
                                                      | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85) 
                                                         & (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x0000000eU)))))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_84)))),4);
    bufp->fullCData(oldp+195,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x0000000cU)))),4);
    bufp->fullCData(oldp+196,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x0000000cU)))),4);
    bufp->fullCData(oldp+197,(((((4U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 2U)) | (
                                                   (2U 
                                                    & (((IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                 >> 0x0000000eU)) 
                                                        | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85) 
                                                           & (IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 0x0000000eU)))) 
                                                       << 1U)) 
                                                   | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_85))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_84) 
                                           << 1U) | Vminirv__ConstPool__TABLE_h4b06d23f_0
                                          [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16.__VdfgRegularize_h6e95ff9d_0_14]))),5);
    bufp->fullSData(oldp+198,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                      >> 0x00000010U)))),16);
    bufp->fullSData(oldp+199,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                      >> 0x00000010U)))),16);
    bufp->fullBit(oldp+200,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__1__KET__));
    bufp->fullSData(oldp+201,(((((0x000000f0U & (((
                                                   (((2U 
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
                                 | (0x0000000fU & (
                                                   ((((2U 
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
    bufp->fullSData(oldp+202,((((((((2U & (((IData)(
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
                                << 8U) | (((((2U & 
                                              (((IData)(
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
                                          | ((8U & 
                                              (((IData)(
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
    bufp->fullCData(oldp+203,(((((0x0000000fU == (0x0000000fU 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x0000001cU)))) 
                                 << 3U) | ((0x0000000fU 
                                            == (0x0000000fU 
                                                & (IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                           >> 0x00000018U)))) 
                                           << 2U)) 
                               | (((0x0000000fU == 
                                    (0x0000000fU & (IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                            >> 0x00000014U)))) 
                                   << 1U) | (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                            >> 0x00000010U))))))),4);
    bufp->fullCData(oldp+204,(((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76) 
                                 << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                   << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))),4);
    bufp->fullSData(oldp+205,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x00000010U)))),16);
    bufp->fullSData(oldp+206,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x00000010U)))),16);
    bufp->fullCData(oldp+207,((((((IData)(Vminirv__ConstPool__TABLE_h50597f2b_0
                                          [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_15]) 
                                  << 2U) | (((IData)(Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                     [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_15]) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__PVT__u_cla_4_3__DOT__cin))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__PVT__u_cla_4_2__DOT__cin) 
                                           << 1U) | (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__1__KET__)))),5);
    bufp->fullCData(oldp+208,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                      >> 0x00000010U)))),4);
    bufp->fullCData(oldp+209,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                      >> 0x00000010U)))),4);
    bufp->fullCData(oldp+210,((0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30) 
                                              ^ (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x00000010U))))),4);
    bufp->fullCData(oldp+211,(((8U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                >> 0x00000013U)) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65) 
                                          & (IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                     >> 0x00000013U)))) 
                                      << 3U)) | (7U 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30) 
                                                    >> 1U)))),4);
    bufp->fullCData(oldp+212,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x00000010U)))),4);
    bufp->fullCData(oldp+213,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x00000010U)))),4);
    bufp->fullCData(oldp+214,(((0x00000010U & (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000013U)) 
                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x00000013U)))) 
                                               << 4U)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30))),5);
    bufp->fullCData(oldp+215,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                      >> 0x00000014U)))),4);
    bufp->fullCData(oldp+216,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                      >> 0x00000014U)))),4);
    bufp->fullBit(oldp+217,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__PVT__u_cla_4_2__DOT__cin));
    bufp->fullCData(oldp+218,((0x0000000fU & (((((2U 
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
    bufp->fullCData(oldp+219,(((((2U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 1U)) | (1U 
                                                   & ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                               >> 0x00000016U)) 
                                                      | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66) 
                                                         & (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x00000016U)))))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_74)))),4);
    bufp->fullCData(oldp+220,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x00000014U)))),4);
    bufp->fullCData(oldp+221,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x00000014U)))),4);
    bufp->fullCData(oldp+222,(((((4U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 2U)) | (
                                                   (2U 
                                                    & (((IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                 >> 0x00000016U)) 
                                                        | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66) 
                                                           & (IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 0x00000016U)))) 
                                                       << 1U)) 
                                                   | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_66))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_74) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__PVT__u_cla_4_2__DOT__cin)))),5);
    bufp->fullCData(oldp+223,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                      >> 0x00000018U)))),4);
    bufp->fullCData(oldp+224,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                      >> 0x00000018U)))),4);
    bufp->fullBit(oldp+225,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__PVT__u_cla_4_3__DOT__cin));
    bufp->fullCData(oldp+226,((0x0000000fU & (((((2U 
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
    bufp->fullCData(oldp+227,(((((2U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 1U)) | (1U 
                                                   & ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                               >> 0x0000001aU)) 
                                                      | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68) 
                                                         & (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x0000001aU)))))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_73)))),4);
    bufp->fullCData(oldp+228,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x00000018U)))),4);
    bufp->fullCData(oldp+229,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x00000018U)))),4);
    bufp->fullCData(oldp+230,(((((4U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 2U)) | (
                                                   (2U 
                                                    & (((IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                 >> 0x0000001aU)) 
                                                        | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68) 
                                                           & (IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 0x0000001aU)))) 
                                                       << 1U)) 
                                                   | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_68))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_73) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__PVT__u_cla_4_3__DOT__cin)))),5);
    bufp->fullCData(oldp+231,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                      >> 0x0000001cU)))),4);
    bufp->fullCData(oldp+232,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                      >> 0x0000001cU)))),4);
    bufp->fullBit(oldp+233,(Vminirv__ConstPool__TABLE_h4b06d23f_0
                            [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_15]));
    bufp->fullCData(oldp+234,((0x0000000fU & (((((2U 
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
    bufp->fullCData(oldp+235,(((((2U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 1U)) | (1U 
                                                   & ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                               >> 0x0000001eU)) 
                                                      | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71) 
                                                         & (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x0000001eU)))))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_70)))),4);
    bufp->fullCData(oldp+236,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x0000001cU)))),4);
    bufp->fullCData(oldp+237,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x0000001cU)))),4);
    bufp->fullCData(oldp+238,(((((4U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 2U)) | (
                                                   (2U 
                                                    & (((IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                 >> 0x0000001eU)) 
                                                        | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71) 
                                                           & (IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 0x0000001eU)))) 
                                                       << 1U)) 
                                                   | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_71))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_70) 
                                           << 1U) | Vminirv__ConstPool__TABLE_h4b06d23f_0
                                          [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_2.__VdfgRegularize_h6e95ff9d_0_15]))),5);
    bufp->fullSData(oldp+239,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                      >> 0x00000020U)))),16);
    bufp->fullSData(oldp+240,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                      >> 0x00000020U)))),16);
    bufp->fullBit(oldp+241,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__2__KET__));
    bufp->fullSData(oldp+242,(((((0x000000f0U & (((
                                                   (((2U 
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
                                 | (0x0000000fU & (
                                                   ((((2U 
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
    bufp->fullSData(oldp+243,((((((((2U & (((IData)(
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
                                << 8U) | (((((2U & 
                                              (((IData)(
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
                                          | ((8U & 
                                              (((IData)(
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
    bufp->fullCData(oldp+244,(((((0x0000000fU == (0x0000000fU 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x0000002cU)))) 
                                 << 3U) | ((0x0000000fU 
                                            == (0x0000000fU 
                                                & (IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                           >> 0x00000028U)))) 
                                           << 2U)) 
                               | (((0x0000000fU == 
                                    (0x0000000fU & (IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                            >> 0x00000024U)))) 
                                   << 1U) | (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                            >> 0x00000020U))))))),4);
    bufp->fullCData(oldp+245,(((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63) 
                                 << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                   << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)))),4);
    bufp->fullSData(oldp+246,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x00000020U)))),16);
    bufp->fullSData(oldp+247,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x00000020U)))),16);
    bufp->fullCData(oldp+248,((((((IData)(Vminirv__ConstPool__TABLE_h50597f2b_0
                                          [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_16]) 
                                  << 2U) | (((IData)(Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                     [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_16]) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__PVT__u_cla_4_3__DOT__cin))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__PVT__u_cla_4_2__DOT__cin) 
                                           << 1U) | (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__2__KET__)))),5);
    bufp->fullCData(oldp+249,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                      >> 0x00000020U)))),4);
    bufp->fullCData(oldp+250,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                      >> 0x00000020U)))),4);
    bufp->fullCData(oldp+251,((0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26) 
                                              ^ (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x00000020U))))),4);
    bufp->fullCData(oldp+252,(((8U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                >> 0x00000023U)) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52) 
                                          & (IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                     >> 0x00000023U)))) 
                                      << 3U)) | (7U 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26) 
                                                    >> 1U)))),4);
    bufp->fullCData(oldp+253,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x00000020U)))),4);
    bufp->fullCData(oldp+254,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x00000020U)))),4);
    bufp->fullCData(oldp+255,(((0x00000010U & (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000023U)) 
                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x00000023U)))) 
                                               << 4U)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26))),5);
    bufp->fullCData(oldp+256,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                      >> 0x00000024U)))),4);
    bufp->fullCData(oldp+257,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                      >> 0x00000024U)))),4);
    bufp->fullBit(oldp+258,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__PVT__u_cla_4_2__DOT__cin));
    bufp->fullCData(oldp+259,((0x0000000fU & (((((2U 
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
    bufp->fullCData(oldp+260,(((((2U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 1U)) | (1U 
                                                   & ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                               >> 0x00000026U)) 
                                                      | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53) 
                                                         & (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x00000026U)))))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_61)))),4);
    bufp->fullCData(oldp+261,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x00000024U)))),4);
    bufp->fullCData(oldp+262,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x00000024U)))),4);
    bufp->fullCData(oldp+263,(((((4U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 2U)) | (
                                                   (2U 
                                                    & (((IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                 >> 0x00000026U)) 
                                                        | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53) 
                                                           & (IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 0x00000026U)))) 
                                                       << 1U)) 
                                                   | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_53))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_61) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__PVT__u_cla_4_2__DOT__cin)))),5);
    bufp->fullCData(oldp+264,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                      >> 0x00000028U)))),4);
    bufp->fullCData(oldp+265,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                      >> 0x00000028U)))),4);
    bufp->fullBit(oldp+266,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__PVT__u_cla_4_3__DOT__cin));
    bufp->fullCData(oldp+267,((0x0000000fU & (((((2U 
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
    bufp->fullCData(oldp+268,(((((2U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 1U)) | (1U 
                                                   & ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                               >> 0x0000002aU)) 
                                                      | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55) 
                                                         & (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x0000002aU)))))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_60)))),4);
    bufp->fullCData(oldp+269,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x00000028U)))),4);
    bufp->fullCData(oldp+270,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x00000028U)))),4);
    bufp->fullCData(oldp+271,(((((4U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 2U)) | (
                                                   (2U 
                                                    & (((IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                 >> 0x0000002aU)) 
                                                        | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55) 
                                                           & (IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 0x0000002aU)))) 
                                                       << 1U)) 
                                                   | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_55))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_60) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__PVT__u_cla_4_3__DOT__cin)))),5);
    bufp->fullCData(oldp+272,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                      >> 0x0000002cU)))),4);
    bufp->fullCData(oldp+273,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                      >> 0x0000002cU)))),4);
    bufp->fullBit(oldp+274,(Vminirv__ConstPool__TABLE_h4b06d23f_0
                            [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_16]));
    bufp->fullCData(oldp+275,((0x0000000fU & (((((2U 
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
    bufp->fullCData(oldp+276,(((((2U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 1U)) | (1U 
                                                   & ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                               >> 0x0000002eU)) 
                                                      | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58) 
                                                         & (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x0000002eU)))))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_57)))),4);
    bufp->fullCData(oldp+277,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x0000002cU)))),4);
    bufp->fullCData(oldp+278,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x0000002cU)))),4);
    bufp->fullCData(oldp+279,(((((4U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 2U)) | (
                                                   (2U 
                                                    & (((IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                 >> 0x0000002eU)) 
                                                        | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58) 
                                                           & (IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 0x0000002eU)))) 
                                                       << 1U)) 
                                                   | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_58))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_57) 
                                           << 1U) | Vminirv__ConstPool__TABLE_h4b06d23f_0
                                          [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_3.__VdfgRegularize_h6e95ff9d_0_16]))),5);
    bufp->fullSData(oldp+280,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                      >> 0x00000030U)))),16);
    bufp->fullSData(oldp+281,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                      >> 0x00000030U)))),16);
    bufp->fullBit(oldp+282,(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__3__KET__));
    bufp->fullSData(oldp+283,(((((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_4__DOT__sum) 
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
                                                 >> 0x00000030U))))))),16);
    bufp->fullSData(oldp+284,(((((0x000000f0U & ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_4__DOT__tmp_cout) 
                                                 << 3U)) 
                                 | ((((2U & (((IData)(
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
                                               | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_47)))) 
                                << 8U) | (((((2U & 
                                              (((IData)(
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
                                          | ((8U & 
                                              (((IData)(
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
    bufp->fullCData(oldp+285,(((((0x0000000fU == (0x0000000fU 
                                                  & (IData)(
                                                            (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                             >> 0x0000003cU)))) 
                                 << 3U) | ((0x0000000fU 
                                            == (0x0000000fU 
                                                & (IData)(
                                                          (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                           >> 0x00000038U)))) 
                                           << 2U)) 
                               | (((0x0000000fU == 
                                    (0x0000000fU & (IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                            >> 0x00000034U)))) 
                                   << 1U) | (0x0000000fU 
                                             == (0x0000000fU 
                                                 & (IData)(
                                                           (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                            >> 0x00000030U))))))),4);
    bufp->fullCData(oldp+286,(((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50) 
                                 << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                   << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))),4);
    bufp->fullSData(oldp+287,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x00000030U)))),16);
    bufp->fullSData(oldp+288,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x00000030U)))),16);
    bufp->fullCData(oldp+289,((((((IData)(Vminirv__ConstPool__TABLE_h50597f2b_0
                                          [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_17]) 
                                  << 2U) | (((IData)(Vminirv__ConstPool__TABLE_h4b06d23f_0
                                                     [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_17]) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_3__DOT__cin))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_2__DOT__cin) 
                                           << 1U) | (IData)(vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__tmp_cin__BRA__3__KET__)))),5);
    bufp->fullCData(oldp+290,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                      >> 0x00000030U)))),4);
    bufp->fullCData(oldp+291,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                      >> 0x00000030U)))),4);
    bufp->fullCData(oldp+292,((0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23) 
                                              ^ (IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                         >> 0x00000030U))))),4);
    bufp->fullCData(oldp+293,(((8U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                >> 0x00000033U)) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39) 
                                          & (IData)(
                                                    (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                     >> 0x00000033U)))) 
                                      << 3U)) | (7U 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23) 
                                                    >> 1U)))),4);
    bufp->fullCData(oldp+294,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x00000030U)))),4);
    bufp->fullCData(oldp+295,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x00000030U)))),4);
    bufp->fullCData(oldp+296,(((0x00000010U & (((IData)(
                                                        (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                         >> 0x00000033U)) 
                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39) 
                                                   & (IData)(
                                                             (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                              >> 0x00000033U)))) 
                                               << 4U)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23))),5);
    bufp->fullCData(oldp+297,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                      >> 0x00000034U)))),4);
    bufp->fullCData(oldp+298,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                      >> 0x00000034U)))),4);
    bufp->fullBit(oldp+299,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_2__DOT__cin));
    bufp->fullCData(oldp+300,((0x0000000fU & (((((2U 
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
    bufp->fullCData(oldp+301,(((((2U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 1U)) | (1U 
                                                   & ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                               >> 0x00000036U)) 
                                                      | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40) 
                                                         & (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x00000036U)))))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_48)))),4);
    bufp->fullCData(oldp+302,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x00000034U)))),4);
    bufp->fullCData(oldp+303,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x00000034U)))),4);
    bufp->fullCData(oldp+304,(((((4U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 2U)) | (
                                                   (2U 
                                                    & (((IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                 >> 0x00000036U)) 
                                                        | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40) 
                                                           & (IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 0x00000036U)))) 
                                                       << 1U)) 
                                                   | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_40))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_48) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_2__DOT__cin)))),5);
    bufp->fullCData(oldp+305,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                      >> 0x00000038U)))),4);
    bufp->fullCData(oldp+306,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                      >> 0x00000038U)))),4);
    bufp->fullBit(oldp+307,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_3__DOT__cin));
    bufp->fullCData(oldp+308,((0x0000000fU & (((((2U 
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
    bufp->fullCData(oldp+309,(((((2U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 1U)) | (1U 
                                                   & ((IData)(
                                                              (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                               >> 0x0000003aU)) 
                                                      | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42) 
                                                         & (IData)(
                                                                   (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                    >> 0x0000003aU)))))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_47)))),4);
    bufp->fullCData(oldp+310,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x00000038U)))),4);
    bufp->fullCData(oldp+311,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x00000038U)))),4);
    bufp->fullCData(oldp+312,(((((4U & (((IData)((vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
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
                                        << 2U)) | (
                                                   (2U 
                                                    & (((IData)(
                                                                (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                                 >> 0x0000003aU)) 
                                                        | ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42) 
                                                           & (IData)(
                                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                                      >> 0x0000003aU)))) 
                                                       << 1U)) 
                                                   | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_42))) 
                                << 2U) | (((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_47) 
                                           << 1U) | (IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_3__DOT__cin)))),5);
    bufp->fullCData(oldp+313,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__adder_input_data1 
                                                      >> 0x0000003cU)))),4);
    bufp->fullCData(oldp+314,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__b 
                                                      >> 0x0000003cU)))),4);
    bufp->fullBit(oldp+315,(Vminirv__ConstPool__TABLE_h4b06d23f_0
                            [vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__VdfgRegularize_h6e95ff9d_0_17]));
    bufp->fullCData(oldp+316,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_4__DOT__sum),4);
    bufp->fullCData(oldp+317,((0x0000000fU & ((IData)(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_4__DOT__tmp_cout) 
                                              >> 1U))),4);
    bufp->fullCData(oldp+318,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__P 
                                                      >> 0x0000003cU)))),4);
    bufp->fullCData(oldp+319,((0x0000000fU & (IData)(
                                                     (vlSelfRef.minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__G 
                                                      >> 0x0000003cU)))),4);
    bufp->fullCData(oldp+320,(vlSymsp->TOP__minirv__DOT__minirv_alu__DOT__u_adder_64__DOT__u_cla_64__DOT__u_cla_16_4.__PVT__u_cla_4_4__DOT__tmp_cout),5);
    bufp->fullIData(oldp+321,(vlSelfRef.minirv__DOT__mem_read_data),32);
    bufp->fullIData(oldp+322,(vlSelfRef.minirv__DOT__registerfile_write_data),32);
    bufp->fullIData(oldp+323,(vlSelfRef.minirv__DOT__i_type_write_data),32);
    bufp->fullWData(oldp+324,(vlSelfRef.minirv__DOT__i_type_inst_registerfile_writedata_MuxWithDefault__DOT__lut),180);
    bufp->fullWData(oldp+330,(vlSelfRef.minirv__DOT__registerfile_writedata_MuxWithDefault__DOT__lut),105);
    bufp->fullIData(oldp+334,(vlSelfRef.minirv__DOT__pc),32);
    bufp->fullIData(oldp+335,(((IData)(4U) + vlSelfRef.minirv__DOT__pc)),32);
    Vminirv___024root__trace_full_dtype____0(vlSelf, bufp, 336, vlSelfRef.minirv__DOT__minirv_registerfile__DOT__registersfile);
    bufp->fullIData(oldp+368,(vlSelfRef.minirv__DOT__minirv_registerfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+369,(vlSelfRef.clk));
    bufp->fullBit(oldp+370,(vlSelfRef.rst));
    bufp->fullIData(oldp+371,(vlSelfRef.develop_put),32);
    bufp->fullQData(oldp+372,(vlSelfRef.alu_outdata),64);
    bufp->fullBit(oldp+374,(vlSelfRef.alu_sub_carry));
    bufp->fullBit(oldp+375,(vlSelfRef.alu_overflow));
    bufp->fullBit(oldp+376,(vlSelfRef.alu_zero));
    bufp->fullBit(oldp+377,(vlSelfRef.alu_sz));
    bufp->fullBit(oldp+378,(vlSelfRef.alu_cout));
    bufp->fullBit(oldp+379,(vlSelfRef.inv));
    bufp->fullIData(oldp+380,((0xfffffffeU & ((- (IData)(
                                                         (2U 
                                                          == (IData)(vlSelfRef.minirv__DOT__i_type_inst_result)))) 
                                              & (IData)(vlSelfRef.alu_outdata)))),32);
    bufp->fullIData(oldp+381,((IData)(vlSelfRef.alu_outdata)),32);
    bufp->fullIData(oldp+382,(((IData)(vlSelfRef.alu_outdata) 
                               & (- (IData)((1U == (IData)(vlSelfRef.minirv__DOT__r_type_inst_result)))))),32);
    bufp->fullBit(oldp+383,(vlSelfRef.alu_sz));
    bufp->fullQData(oldp+384,((0x0000000100000000ULL 
                               | (QData)((IData)(vlSelfRef.alu_outdata)))),36);
}

VL_ATTR_COLD void Vminirv___024root__trace_full_dtype____0(Vminirv___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_full_dtype____0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[31]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[30]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[29]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[28]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[27]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[26]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[25]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[24]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[23]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[22]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[21]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[20]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[19]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[18]),32);
    bufp->fullIData(oldp+14,(__VdtypeVar[17]),32);
    bufp->fullIData(oldp+15,(__VdtypeVar[16]),32);
    bufp->fullIData(oldp+16,(__VdtypeVar[15]),32);
    bufp->fullIData(oldp+17,(__VdtypeVar[14]),32);
    bufp->fullIData(oldp+18,(__VdtypeVar[13]),32);
    bufp->fullIData(oldp+19,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+20,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+21,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+22,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+23,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+24,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+25,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+26,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+27,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+28,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+29,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+30,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+31,(__VdtypeVar[0]),32);
}
