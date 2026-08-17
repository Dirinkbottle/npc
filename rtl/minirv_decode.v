// RV32I instruction decoder.
//
// This module only performs instruction recognition and operand extraction.
// The execution unit chooses the ALU operation / next PC from the decoded
// instruction type and the per-format result code below.
module minirv_decode (
    input  wire [31:0] inst,
    output wire [3:0]  inst_type,
    output wire [4:0]  rd,
    output wire [4:0]  rs1,
    output wire [4:0]  rs2,
    output wire [31:0] imm_extend,
    output reg  [3:0]  i_type_inst_result,
    output reg  [3:0]  r_type_inst_result,
    output reg  [3:0]  u_type_inst_result,
    output reg  [3:0]  s_type_inst_result,
    output reg  [3:0]  b_type_inst_result,
    output reg  [3:0]  j_type_inst_result,
    output reg  [3:0]  system_type_inst_result,
    output reg  [3:0]  zicsr_type_inst_result,
    output wire        is_system,
    output wire        is_zicsr,
    output wire [11:0] csr_addr,
    output wire [4:0] uimm,
    output wire        mem_enable,       // load/store request
    output wire        inv,              // 1: unsupported or illegal encoding
    output wire        mem_write_enable, // 1: store request
    output wire [7:0]  mem_write_mask,   // byte lanes written by a store
    output wire [7:0]  mem_read_mask     // byte lanes read by a load
);

    // ------------------------------------------------------------------------
    // Public instruction-type encoding.  Keep R/I/S/U/B/J compatible with
    // minirv.v; SYSTEM is reserved for non-CSR privileged/trap instructions,
    // and ZICSR is the separate type for CSR instructions.
    // ------------------------------------------------------------------------
    localparam [3:0] INST_TYPE_INVALID = 4'd0;
    localparam [3:0] INST_TYPE_R       = 4'd1;
    localparam [3:0] INST_TYPE_I       = 4'd2;
    localparam [3:0] INST_TYPE_S       = 4'd3;
    localparam [3:0] INST_TYPE_U       = 4'd4;
    localparam [3:0] INST_TYPE_B       = 4'd5;
    localparam [3:0] INST_TYPE_J       = 4'd6;
    localparam [3:0] INST_TYPE_SYSTEM  = 4'd7;
    localparam [3:0] INST_TYPE_ZICSR   = 4'd8;

    // Result-code contract for the execution stage.  The first five I-type
    // values and the first R/S/U values are already consumed by minirv.v, so
    // their numbering must not change.
    localparam [3:0] R_NONE = 4'd0;
    localparam [3:0] R_ADD  = 4'd1;
    localparam [3:0] R_SUB  = 4'd2;
    localparam [3:0] R_SLL  = 4'd3;
    localparam [3:0] R_SLT  = 4'd4;
    localparam [3:0] R_SLTU = 4'd5;
    localparam [3:0] R_XOR  = 4'd6;
    localparam [3:0] R_SRL  = 4'd7;
    localparam [3:0] R_SRA  = 4'd8;
    localparam [3:0] R_OR   = 4'd9;
    localparam [3:0] R_AND  = 4'd10;

    localparam [3:0] I_NONE  = 4'd0;
    localparam [3:0] I_ADDI  = 4'd1;
    localparam [3:0] I_JALR  = 4'd2;
    localparam [3:0] I_LB    = 4'd3;
    localparam [3:0] I_LBU   = 4'd4;
    localparam [3:0] I_LW    = 4'd5;
    localparam [3:0] I_SLTI  = 4'd6;
    localparam [3:0] I_SLTIU = 4'd7;
    localparam [3:0] I_XORI  = 4'd8;
    localparam [3:0] I_ORI   = 4'd9;
    localparam [3:0] I_ANDI  = 4'd10;
    localparam [3:0] I_SLLI  = 4'd11;
    localparam [3:0] I_SRLI  = 4'd12;
    localparam [3:0] I_SRAI  = 4'd13;
    localparam [3:0] I_LH    = 4'd14;
    localparam [3:0] I_LHU   = 4'd15;

    localparam [3:0] U_NONE  = 4'd0;
    localparam [3:0] U_LUI   = 4'd1;
    localparam [3:0] U_AUIPC = 4'd2;

    localparam [3:0] S_NONE = 4'd0;
    localparam [3:0] S_SB   = 4'd1;
    localparam [3:0] S_SH   = 4'd2;
    localparam [3:0] S_SW   = 4'd3;

    // B/J/SYSTEM result codes.  Code 0 means no instruction of that format
    // matched; nonzero codes are selected directly by the decoder below.
    localparam [3:0] B_NONE = 4'd0;
    localparam [3:0] B_BEQ  = 4'd1;
    localparam [3:0] B_BNE  = 4'd2;
    localparam [3:0] B_BLT  = 4'd3;
    localparam [3:0] B_BGE  = 4'd4;
    localparam [3:0] B_BLTU = 4'd5;
    localparam [3:0] B_BGEU = 4'd6;

    localparam [3:0] J_NONE = 4'd0;
    localparam [3:0] J_JAL  = 4'd1;

    localparam [3:0] SYSTEM_NONE   = 4'd0;
    localparam [3:0] SYSTEM_FENCE  = 4'd1;
    localparam [3:0] SYSTEM_ECALL  = 4'd2;
    localparam [3:0] SYSTEM_EBREAK = 4'd3;
    localparam [3:0] SYSTEM_MRET   = 4'd4;

    localparam [3:0] ZICSR_NONE   = 4'd0;
    localparam [3:0] ZICSR_CSRRW  = 4'd5;
    localparam [3:0] ZICSR_CSRRS  = 4'd6;
    localparam [3:0] ZICSR_CSRRC  = 4'd7;
    localparam [3:0] ZICSR_CSRRWI = 4'd8;
    localparam [3:0] ZICSR_CSRRSI = 4'd9;
    localparam [3:0] ZICSR_CSRRCI = 4'd10;

    // Common instruction fields.
    wire [6:0] opcode = inst[6:0];
    wire [2:0] funct3 = inst[14:12];
    wire [6:0] funct7 = inst[31:25];

    assign rd  = inst[11:7];
    assign rs1 = inst[19:15];
    assign rs2 = inst[24:20];
    assign csr_addr = inst[31:20];
    assign uimm = inst[19:15];

    // ------------------------------------------------------------------------
    // RV32I instruction recognition
    // ------------------------------------------------------------------------
    // R type: OP (opcode 0110011).
    wire is_r_add  = (opcode == 7'b0110011) && (funct3 == 3'b000) && (funct7 == 7'b0000000);
    wire is_r_sub  = (opcode == 7'b0110011) && (funct3 == 3'b000) && (funct7 == 7'b0100000);
    wire is_r_sll  = (opcode == 7'b0110011) && (funct3 == 3'b001) && (funct7 == 7'b0000000);
    wire is_r_slt  = (opcode == 7'b0110011) && (funct3 == 3'b010) && (funct7 == 7'b0000000);
    wire is_r_sltu = (opcode == 7'b0110011) && (funct3 == 3'b011) && (funct7 == 7'b0000000);
    wire is_r_xor  = (opcode == 7'b0110011) && (funct3 == 3'b100) && (funct7 == 7'b0000000);
    wire is_r_srl  = (opcode == 7'b0110011) && (funct3 == 3'b101) && (funct7 == 7'b0000000);
    wire is_r_sra  = (opcode == 7'b0110011) && (funct3 == 3'b101) && (funct7 == 7'b0100000);
    wire is_r_or   = (opcode == 7'b0110011) && (funct3 == 3'b110) && (funct7 == 7'b0000000);
    wire is_r_and  = (opcode == 7'b0110011) && (funct3 == 3'b111) && (funct7 == 7'b0000000);
    wire is_r_instruction = is_r_add  || is_r_sub  || is_r_sll || is_r_slt ||
                            is_r_sltu || is_r_xor  || is_r_srl || is_r_sra ||
                            is_r_or   || is_r_and;

    // I type: OP-IMM, LOAD, and JALR.
    wire is_i_addi  = (opcode == 7'b0010011) && (funct3 == 3'b000);
    wire is_i_slti  = (opcode == 7'b0010011) && (funct3 == 3'b010);
    wire is_i_sltiu = (opcode == 7'b0010011) && (funct3 == 3'b011);
    wire is_i_xori  = (opcode == 7'b0010011) && (funct3 == 3'b100);
    wire is_i_ori   = (opcode == 7'b0010011) && (funct3 == 3'b110);
    wire is_i_andi  = (opcode == 7'b0010011) && (funct3 == 3'b111);
    wire is_i_slli  = (opcode == 7'b0010011) && (funct3 == 3'b001) && (funct7 == 7'b0000000);
    wire is_i_srli  = (opcode == 7'b0010011) && (funct3 == 3'b101) && (funct7 == 7'b0000000);
    wire is_i_srai  = (opcode == 7'b0010011) && (funct3 == 3'b101) && (funct7 == 7'b0100000);
    wire is_i_jalr  = (opcode == 7'b1100111) && (funct3 == 3'b000);
    wire is_i_lb    = (opcode == 7'b0000011) && (funct3 == 3'b000);
    wire is_i_lh    = (opcode == 7'b0000011) && (funct3 == 3'b001);
    wire is_i_lw    = (opcode == 7'b0000011) && (funct3 == 3'b010);
    wire is_i_lbu   = (opcode == 7'b0000011) && (funct3 == 3'b100);
    wire is_i_lhu   = (opcode == 7'b0000011) && (funct3 == 3'b101);
    wire is_i_instruction = is_i_addi  || is_i_slti  || is_i_sltiu ||
                            is_i_xori  || is_i_ori   || is_i_andi  ||
                            is_i_slli  || is_i_srli  || is_i_srai  ||
                            is_i_jalr  || is_i_lb    || is_i_lh    ||
                            is_i_lw    || is_i_lbu   || is_i_lhu;

    // U type.
    wire is_u_lui   = (opcode == 7'b0110111);
    wire is_u_auipc = (opcode == 7'b0010111);
    wire is_u_instruction = is_u_lui || is_u_auipc;

    // S type: stores.
    wire is_s_sb = (opcode == 7'b0100011) && (funct3 == 3'b000);
    wire is_s_sh = (opcode == 7'b0100011) && (funct3 == 3'b001);
    wire is_s_sw = (opcode == 7'b0100011) && (funct3 == 3'b010);
    wire is_s_instruction = is_s_sb || is_s_sh || is_s_sw;

    // B type: conditional branches.
    wire is_b_beq  = (opcode == 7'b1100011) && (funct3 == 3'b000);
    wire is_b_bne  = (opcode == 7'b1100011) && (funct3 == 3'b001);
    wire is_b_blt  = (opcode == 7'b1100011) && (funct3 == 3'b100);
    wire is_b_bge  = (opcode == 7'b1100011) && (funct3 == 3'b101);
    wire is_b_bltu = (opcode == 7'b1100011) && (funct3 == 3'b110);
    wire is_b_bgeu = (opcode == 7'b1100011) && (funct3 == 3'b111);

    // B result encoding: BEQ=1, ..., BGEU=6.
    always @(*) begin
        b_type_inst_result = B_NONE;
        if      (is_b_beq)  b_type_inst_result = B_BEQ;
        else if (is_b_bne)  b_type_inst_result = B_BNE;
        else if (is_b_blt)  b_type_inst_result = B_BLT;
        else if (is_b_bge)  b_type_inst_result = B_BGE;
        else if (is_b_bltu) b_type_inst_result = B_BLTU;
        else if (is_b_bgeu) b_type_inst_result = B_BGEU;
    end
    wire is_b_instruction = is_b_beq || is_b_bne || is_b_blt ||
                            is_b_bge || is_b_bltu || is_b_bgeu;

    // J type: JAL has no funct3/funct7 restriction.
    wire is_j_jal = (opcode == 7'b1101111);

    // JAL is the only J-type instruction in RV32I.  JALR belongs to the
    // I-type decoder, so it is deliberately absent here.
    always @(*) begin
        j_type_inst_result = J_NONE;
        if (is_j_jal) j_type_inst_result = J_JAL;
    end
    wire is_j_instruction = is_j_jal;

    // SYSTEM/MISC instructions requested in todo.md.  Other SYSTEM encodings,
    // including FENCE.I, remain illegal until supported.
    wire is_fence  = (opcode == 7'b0001111) && (funct3 == 3'b000);
    wire is_ecall  = (inst == 32'h00000073);
    wire is_ebreak = (inst == 32'h00100073);
    wire is_mret   = (inst == 32'h30200073);
    wire is_csrrw  = (opcode == 7'b1110011) && (funct3 == 3'b001);
    wire is_csrrs  = (opcode == 7'b1110011) && (funct3 == 3'b010);
    wire is_csrrc  = (opcode == 7'b1110011) && (funct3 == 3'b011);
    wire is_csrrwi = (opcode == 7'b1110011) && (funct3 == 3'b101);
    wire is_csrrsi = (opcode == 7'b1110011) && (funct3 == 3'b110);
    wire is_csrrci = (opcode == 7'b1110011) && (funct3 == 3'b111);

    wire is_zicsr_instruction = is_csrrw || is_csrrs || is_csrrc ||
                                is_csrrwi || is_csrrsi || is_csrrci;
    wire is_system_instruction = is_fence || is_ecall || is_ebreak ||
                                 is_mret;

    // SYSTEM/MISC result encoding: FENCE=1, ECALL=2, EBREAK=3, MRET=4.
    always @(*) begin
        system_type_inst_result = SYSTEM_NONE;
        if      (is_fence)   system_type_inst_result = SYSTEM_FENCE;
        else if (is_ecall)   system_type_inst_result = SYSTEM_ECALL;
        else if (is_ebreak)  system_type_inst_result = SYSTEM_EBREAK;
        else if (is_mret)    system_type_inst_result = SYSTEM_MRET;
    end

    // ZICSR result encoding.  The numeric codes continue the old decoder
    // numbering so the minirv-side CSR op mux has one unique selection key.
    always @(*) begin
        zicsr_type_inst_result = ZICSR_NONE;
        if      (is_csrrw)  zicsr_type_inst_result = ZICSR_CSRRW;
        else if (is_csrrs)  zicsr_type_inst_result = ZICSR_CSRRS;
        else if (is_csrrc)  zicsr_type_inst_result = ZICSR_CSRRC;
        else if (is_csrrwi) zicsr_type_inst_result = ZICSR_CSRRWI;
        else if (is_csrrsi) zicsr_type_inst_result = ZICSR_CSRRSI;
        else if (is_csrrci) zicsr_type_inst_result = ZICSR_CSRRCI;
    end

    assign is_system = is_system_instruction;
    assign is_zicsr = is_zicsr_instruction;

    // A decoder match, rather than opcode alone, determines legality.  This
    // prevents reserved funct3/funct7 variants from entering the execute path.
    wire instruction_valid = is_r_instruction || is_i_instruction ||
                             is_u_instruction || is_s_instruction ||
                             is_b_instruction || is_j_instruction ||
                             is_system_instruction || is_zicsr_instruction;
    assign inv = !instruction_valid;

    // Legal SYSTEM/MISC instructions receive their own type so minirv.v's
    // "type == INVALID" debug signal does not report ECALL/EBREAK as illegal.
    assign inst_type = !instruction_valid     ? INST_TYPE_INVALID :
                       is_r_instruction       ? INST_TYPE_R       :
                       is_i_instruction       ? INST_TYPE_I       :
                       is_s_instruction       ? INST_TYPE_S       :
                       is_u_instruction       ? INST_TYPE_U       :
                       is_b_instruction       ? INST_TYPE_B       :
                       is_j_instruction       ? INST_TYPE_J       :
                       is_system_instruction  ? INST_TYPE_SYSTEM  :
                                                INST_TYPE_ZICSR;

    // ------------------------------------------------------------------------
    // Immediate extraction.  All branch/jump offsets are byte offsets and
    // therefore append a hard-wired zero as bit 0.
    // ------------------------------------------------------------------------
    wire [31:0] i_type_imm = {{20{inst[31]}}, inst[31:20]};
    wire [31:0] s_type_imm = {{20{inst[31]}}, inst[31:25], inst[11:7]};
    wire [31:0] b_type_imm = {{19{inst[31]}}, inst[31], inst[7],
                              inst[30:25], inst[11:8], 1'b0};
    wire [31:0] u_type_imm = {inst[31:12], 12'b0};
    wire [31:0] j_type_imm = {{11{inst[31]}}, inst[31], inst[19:12],
                              inst[20], inst[30:21], 1'b0};

    assign imm_extend = is_i_instruction ? i_type_imm :
                        is_s_instruction ? s_type_imm :
                        is_b_instruction ? b_type_imm :
                        is_u_instruction ? u_type_imm :
                        is_j_instruction ? j_type_imm :
                                           32'b0;

    // ------------------------------------------------------------------------
    // Per-format result codes consumed by the execution stage.
    // ------------------------------------------------------------------------
    always @(*) begin
        r_type_inst_result = R_NONE;
        if      (is_r_add)  r_type_inst_result = R_ADD;
        else if (is_r_sub)  r_type_inst_result = R_SUB;
        else if (is_r_sll)  r_type_inst_result = R_SLL;
        else if (is_r_slt)  r_type_inst_result = R_SLT;
        else if (is_r_sltu) r_type_inst_result = R_SLTU;
        else if (is_r_xor)  r_type_inst_result = R_XOR;
        else if (is_r_srl)  r_type_inst_result = R_SRL;
        else if (is_r_sra)  r_type_inst_result = R_SRA;
        else if (is_r_or)   r_type_inst_result = R_OR;
        else if (is_r_and)  r_type_inst_result = R_AND;
    end

    always @(*) begin
        i_type_inst_result = I_NONE;
        if      (is_i_addi)  i_type_inst_result = I_ADDI;
        else if (is_i_jalr)  i_type_inst_result = I_JALR;
        else if (is_i_lb)    i_type_inst_result = I_LB;
        else if (is_i_lbu)   i_type_inst_result = I_LBU;
        else if (is_i_lw)    i_type_inst_result = I_LW;
        else if (is_i_slti)  i_type_inst_result = I_SLTI;
        else if (is_i_sltiu) i_type_inst_result = I_SLTIU;
        else if (is_i_xori)  i_type_inst_result = I_XORI;
        else if (is_i_ori)   i_type_inst_result = I_ORI;
        else if (is_i_andi)  i_type_inst_result = I_ANDI;
        else if (is_i_slli)  i_type_inst_result = I_SLLI;
        else if (is_i_srli)  i_type_inst_result = I_SRLI;
        else if (is_i_srai)  i_type_inst_result = I_SRAI;
        else if (is_i_lh)    i_type_inst_result = I_LH;
        else if (is_i_lhu)   i_type_inst_result = I_LHU;
    end

    always @(*) begin
        u_type_inst_result = U_NONE;
        if      (is_u_lui)   u_type_inst_result = U_LUI;
        else if (is_u_auipc) u_type_inst_result = U_AUIPC;
    end

    always @(*) begin
        s_type_inst_result = S_NONE;
        if      (is_s_sb) s_type_inst_result = S_SB;
        else if (is_s_sh) s_type_inst_result = S_SH;
        else if (is_s_sw) s_type_inst_result = S_SW;
    end

    // ------------------------------------------------------------------------
    // Memory interface.  Bit n of a mask enables byte lane n.  Alignment and
    // lane shifting are intentionally left to the memory-access stage; these
    // masks encode only the access width requested by the instruction.
    // ------------------------------------------------------------------------
    wire is_load  = is_i_lb || is_i_lh || is_i_lw || is_i_lbu || is_i_lhu;
    wire is_store = is_s_sb || is_s_sh || is_s_sw;

    assign mem_enable       = is_load || is_store;
    assign mem_write_enable = is_store;
    assign mem_write_mask   = is_s_sb ? 8'b0000_0001 :
                              is_s_sh ? 8'b0000_0011 :
                              is_s_sw ? 8'b0000_1111 :
                                        8'b0;
    assign mem_read_mask    = is_i_lb || is_i_lbu ? 8'b0000_0001 :
                              is_i_lh || is_i_lhu ? 8'b0000_0011 :
                              is_i_lw             ? 8'b0000_1111 :
                                                    8'b0;

endmodule
