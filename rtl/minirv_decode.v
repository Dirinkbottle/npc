import "DPI-C" function void ebreak();

// RV32I 指令译码器 + 执行级控制生成。
//
// 本模块完成指令识别、操作数字段提取，以及执行/写回级所需的控制信号生成。
// 把这些逻辑集中在一处后，顶层模块只需要放置数据通路模块实例，
// 也消除了重复的译码 localparam 定义。
module minirv_decode (
    input  wire [31:0] inst,
    input wire clk,
    // 生成写回/ALU/分支控制所需的数据通路反馈信号。
    input  wire [31:0] pc,
    input  wire [63:0] alu_result,
    input  wire        alu_zero,
    input  wire        alu_zero_set,
    input  wire [31:0] registerfile_read_data1,
    input  wire [31:0] registerfile_read_data2,
    input  wire [31:0] mem_read_data_nomask,
    input  wire [31:0] csr_read_data,
    input  wire        csr_pc_change_request,
    input  wire [31:0] csr_target_pc,
    input wire [1:0] mem_addr_byte_slack,
    // 数据通路使用的输出信号。
    output wire [31:0] pc_plus4,
    output wire [4:0]  rs1,
    output wire [11:0] csr_addr,
    output wire [4:0]  csr_zimm,
    output wire        mem_read_enable,       // 访存请求
    output wire        invalid_inst,              // 1：不支持或非法编码
    output wire        mem_write_enable, // 1：存储请求
    output wire        is_load_inst,
    output wire        is_store_inst,
    output wire [3:0]  mem_write_mask,   // 存储写入的字节通道
    output wire        mem_addr_read_unalign,
    output wire        mem_addr_write_unalign,

    // 执行级使用的控制信号。
    output wire [7:0]  csr_op,
    output wire [4:0]  registerfile_write_rd,
    output wire        registerfile_write_enable,
    output wire [4:0]  registerfile_read_rs1,
    output wire [4:0]  registerfile_read_rs2,
    output wire [31:0] registerfile_write_data,
    output wire [7:0]  alu_op,
    output wire [1:0]  alu_shifter_op,
    output wire [1:0]  alu_compare_op,
    output wire [63:0] alu_data1,
    output wire [63:0] alu_data2,
    output reg         pc_branch,
    output reg  [31:0] pc_branch_target
);
    assign is_load_inst = is_load;
    assign is_store_inst = is_store;

    // ------------------------------------------------------------------------
    // 公开的指令类型编码。保持 R/I/S/U/B/J 与顶层执行级兼容；
    // SYSTEM 保留给非 CSR 的特权/陷阱指令，ZICSR 是 CSR 指令的独立类型。
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

    // 执行级使用的编码结果约定。前五个 I 型值以及前 R/S/U 型值已被执行级使用，
    // 因此这些编号不能变动。
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

    // B 型/J/SYSTEM 编码结果。0 表示该格式没有匹配到指令；
    // 非零编码由下面的译码逻辑直接选择。
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

    // ---- ControlStatusRegister CSR 操作码 ----
    localparam [7:0] CSR_OP_NONE   = 8'd0;
    localparam [7:0] CSR_OP_CSRRW  = 8'd1;
    localparam [7:0] CSR_OP_CSRRS  = 8'd2;
    localparam [7:0] CSR_OP_CSRRC  = 8'd3;
    localparam [7:0] CSR_OP_CSRRWI = 8'd4;
    localparam [7:0] CSR_OP_CSRRSI = 8'd5;
    localparam [7:0] CSR_OP_CSRRCI = 8'd6;
    localparam [7:0] CSR_OP_MRET   = 8'd7;
    localparam [7:0] CSR_OP_ECALL  = 8'd8;

    // ---- ALU操作码 ----
    localparam [7:0] ALU_ADD     = 8'd0, ALU_SUB     = 8'd1;
    localparam [7:0] ALU_SHIFT   = 8'd2, ALU_COMPARE = 8'd3;
    localparam [7:0] ALU_XOR_OP  = 8'd4, ALU_OR_OP   = 8'd5;
    localparam [7:0] ALU_AND_OP  = 8'd6;

    // ---- ALU子单元控制码 ----
    localparam [1:0] SHIFTER_SLL = 2'd0, SHIFTER_SRL = 2'd1, SHIFTER_SRA = 2'd2;
    localparam [1:0] COMPARE_SLT = 2'd0, COMPARE_SLTU = 2'd2;

    // ---- PC/branch helpers ----
    localparam [31:0] PC_STEP        = 32'd4;
    localparam [31:0] JALR_ALIGN_MASK = ~32'd1;

    // 内部译码字段。
    wire [3:0] inst_type;
    wire [4:0] rd;
    wire [4:0] rs2;
    wire [31:0] imm_extend;
    reg  [3:0]  i_type_encode_result;
    reg  [3:0]  r_type_encode_result;
    reg  [3:0]  u_type_encode_result;
    reg  [3:0]  s_type_encode_result;
    reg  [3:0]  b_type_encode_result;
    reg  [3:0]  j_type_encode_result;
    reg  [3:0]  system_type_encode_result;
    reg  [3:0]  zicsr_type_encode_result;
    reg         b_branch_will_change_pc;

    assign pc_plus4 = pc + PC_STEP;

    // 通用指令字段。
    wire [6:0] opcode = inst[6:0];
    wire [2:0] funct3 = inst[14:12];
    wire [6:0] funct7 = inst[31:25];

    assign rd  = inst[11:7];
    assign rs1 = inst[19:15];
    assign rs2 = inst[24:20];
    assign csr_addr = inst[31:20];
    assign csr_zimm = inst[19:15];

    // ------------------------------------------------------------------------
    // RV32I 指令识别
    // ------------------------------------------------------------------------
    // R 型：OP（opcode 0110011）。
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

    // I 型：OP-IMM、LOAD、JALR。
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

    // U 型。
    wire is_u_lui   = (opcode == 7'b0110111);
    wire is_u_auipc = (opcode == 7'b0010111);
    wire is_u_instruction = is_u_lui || is_u_auipc;

    // S 型：存储指令。
    wire is_s_sb = (opcode == 7'b0100011) && (funct3 == 3'b000);
    wire is_s_sh = (opcode == 7'b0100011) && (funct3 == 3'b001);
    wire is_s_sw = (opcode == 7'b0100011) && (funct3 == 3'b010);
    wire is_s_instruction = is_s_sb || is_s_sh || is_s_sw;

    // B 型：条件分支指令。
    wire is_b_beq  = (opcode == 7'b1100011) && (funct3 == 3'b000);
    wire is_b_bne  = (opcode == 7'b1100011) && (funct3 == 3'b001);
    wire is_b_blt  = (opcode == 7'b1100011) && (funct3 == 3'b100);
    wire is_b_bge  = (opcode == 7'b1100011) && (funct3 == 3'b101);
    wire is_b_bltu = (opcode == 7'b1100011) && (funct3 == 3'b110);
    wire is_b_bgeu = (opcode == 7'b1100011) && (funct3 == 3'b111);

    // B 型编码结果：BEQ=1, ..., BGEU=6。
    always @(*) begin
        b_type_encode_result = B_NONE;
        if      (is_b_beq)  b_type_encode_result = B_BEQ;
        else if (is_b_bne)  b_type_encode_result = B_BNE;
        else if (is_b_blt)  b_type_encode_result = B_BLT;
        else if (is_b_bge)  b_type_encode_result = B_BGE;
        else if (is_b_bltu) b_type_encode_result = B_BLTU;
        else if (is_b_bgeu) b_type_encode_result = B_BGEU;
    end
    wire is_b_instruction = is_b_beq || is_b_bne || is_b_blt ||
                            is_b_bge || is_b_bltu || is_b_bgeu;

    // J 型：JAL 没有 funct3/funct7 限制。
    wire is_j_jal = (opcode == 7'b1101111);

    // JAL 是 RV32I 中唯一的 J 型指令。JALR 属于 I 型译码，
    // 因此这里故意不处理 JALR。
    always @(*) begin
        j_type_encode_result = J_NONE;
        if (is_j_jal) j_type_encode_result = J_JAL;
    end
    wire is_j_instruction = is_j_jal;

    // todo.md 中要求的 SYSTEM/MISC 指令。其他 SYSTEM 编码（包括 FENCE.I）
    // 在支持之前仍视为非法指令。
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

    // SYSTEM/MISC 编码结果：FENCE=1、ECALL=2、EBREAK=3、MRET=4。
    always @(*) begin
        system_type_encode_result = SYSTEM_NONE;
        if      (is_fence)   system_type_encode_result = SYSTEM_FENCE;
        else if (is_ecall)   system_type_encode_result = SYSTEM_ECALL;
        else if (is_ebreak)  system_type_encode_result = SYSTEM_EBREAK;
        else if (is_mret)    system_type_encode_result = SYSTEM_MRET;
    end

    // ZICSR 编码结果。数值沿用旧译码器的编号，
    // 使 CSR 操作码选择器只有一个唯一的选择键。
    always @(*) begin
        zicsr_type_encode_result = ZICSR_NONE;
        if      (is_csrrw)  zicsr_type_encode_result = ZICSR_CSRRW;
        else if (is_csrrs)  zicsr_type_encode_result = ZICSR_CSRRS;
        else if (is_csrrc)  zicsr_type_encode_result = ZICSR_CSRRC;
        else if (is_csrrwi) zicsr_type_encode_result = ZICSR_CSRRWI;
        else if (is_csrrsi) zicsr_type_encode_result = ZICSR_CSRRSI;
        else if (is_csrrci) zicsr_type_encode_result = ZICSR_CSRRCI;
    end

    // 合法性由指令是否完整匹配决定，而不是只看 opcode。
    // 这样可以阻止保留的 funct3/funct7 变体进入执行路径。
    wire instruction_valid = is_r_instruction || is_i_instruction ||
                             is_u_instruction || is_s_instruction ||
                             is_b_instruction || is_j_instruction ||
                             is_system_instruction || is_zicsr_instruction;
    assign invalid_inst = !instruction_valid;

    // 合法的 SYSTEM/MISC 指令有独立类型，这样顶层模块的
    // “type == INVALID”调试信号不会把 ECALL/EBREAK 误报为非法。
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
    // 立即数提取。所有分支/跳转偏移都是字节偏移，
    // 因此最低位固定补 0。
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
    // 执行级使用的各格式编码结果。
    // ------------------------------------------------------------------------
    always @(*) begin
        r_type_encode_result = R_NONE;
        if      (is_r_add)  r_type_encode_result = R_ADD;
        else if (is_r_sub)  r_type_encode_result = R_SUB;
        else if (is_r_sll)  r_type_encode_result = R_SLL;
        else if (is_r_slt)  r_type_encode_result = R_SLT;
        else if (is_r_sltu) r_type_encode_result = R_SLTU;
        else if (is_r_xor)  r_type_encode_result = R_XOR;
        else if (is_r_srl)  r_type_encode_result = R_SRL;
        else if (is_r_sra)  r_type_encode_result = R_SRA;
        else if (is_r_or)   r_type_encode_result = R_OR;
        else if (is_r_and)  r_type_encode_result = R_AND;
    end

    always @(*) begin
        i_type_encode_result = I_NONE;
        if      (is_i_addi)  i_type_encode_result = I_ADDI;
        else if (is_i_jalr)  i_type_encode_result = I_JALR;
        else if (is_i_lb)    i_type_encode_result = I_LB;
        else if (is_i_lbu)   i_type_encode_result = I_LBU;
        else if (is_i_lw)    i_type_encode_result = I_LW;
        else if (is_i_slti)  i_type_encode_result = I_SLTI;
        else if (is_i_sltiu) i_type_encode_result = I_SLTIU;
        else if (is_i_xori)  i_type_encode_result = I_XORI;
        else if (is_i_ori)   i_type_encode_result = I_ORI;
        else if (is_i_andi)  i_type_encode_result = I_ANDI;
        else if (is_i_slli)  i_type_encode_result = I_SLLI;
        else if (is_i_srli)  i_type_encode_result = I_SRLI;
        else if (is_i_srai)  i_type_encode_result = I_SRAI;
        else if (is_i_lh)    i_type_encode_result = I_LH;
        else if (is_i_lhu)   i_type_encode_result = I_LHU;
    end

    always @(*) begin
        u_type_encode_result = U_NONE;
        if      (is_u_lui)   u_type_encode_result = U_LUI;
        else if (is_u_auipc) u_type_encode_result = U_AUIPC;
    end

    always @(*) begin
        s_type_encode_result = S_NONE;
        if      (is_s_sb) s_type_encode_result = S_SB;
        else if (is_s_sh) s_type_encode_result = S_SH;
        else if (is_s_sw) s_type_encode_result = S_SW;
    end

    // ------------------------------------------------------------------------
    // 存储接口。掩码的第 n 位使能字节通道 n。对齐和字节通道移位
    // 留给访存阶段处理；这里只编码指令要求的访问宽度。
    // ------------------------------------------------------------------------
    wire is_load  = is_i_lb || is_i_lh || is_i_lw || is_i_lbu || is_i_lhu;
    wire is_store = is_s_sb || is_s_sh || is_s_sw;
    wire [3:0] mem_read_mask;
    wire [31:0] mem_read_data;

    assign mem_read_enable       = is_load;
    assign mem_write_enable = is_store;
    // 读/写掩码按 4bit（4 字节通道）处理，只支持 32bit 数据通路。
    assign mem_write_mask   = is_s_sb ? 4'b0001 << mem_addr_byte_slack :
                              is_s_sh ? 4'b0011 << mem_addr_byte_slack :
                              is_s_sw ? 4'b1111:
                                        4'b0000;

    assign mem_read_mask    = is_i_lb || is_i_lbu ? 4'b0001 << mem_addr_byte_slack :
                              is_i_lh || is_i_lhu ? 4'b0011 << mem_addr_byte_slack :
                              is_i_lw             ? 4'b1111 << mem_addr_byte_slack :
                                                    4'b0000;

    // 32bit 数据通路：sw/lw 必须 4 字节对齐。
    assign mem_addr_read_unalign  = (is_i_lh || is_i_lhu) ? (mem_addr_byte_slack[0] != 1'b0) :
                                    is_i_lw               ? (mem_addr_byte_slack != 2'b00) :
                                                            1'b0;
    assign mem_addr_write_unalign = is_s_sh ? (mem_addr_byte_slack[0] != 1'b0) :
                                    is_s_sw ? (mem_addr_byte_slack[1:0] != 2'b00) :
                                               1'b0;



    // 内部按读掩码屏蔽不需要的字节，外部只需提供完整的 32 位读数据。
    assign mem_read_data = {mem_read_data_nomask >> {mem_addr_byte_slack, 3'b000}};

    // ------------------------------------------------------------------------
    // 执行级控制生成。
    // ------------------------------------------------------------------------

    // ---- CSR op: SYSTEM and ZICSR share one key, mapped to CSR opcode ----
    wire [3:0] csr_op_select;
    assign csr_op_select = is_system_instruction ? system_type_encode_result :
                           is_zicsr_instruction  ? zicsr_type_encode_result :
                                       4'd0;

    MuxWithDefault #(
        .NR        (8),
        .KEY_LEN   (4),
        .VALUE_LEN (8)
    ) csr_op_MuxWithDefault(
        .default_out (CSR_OP_NONE),
        .key         (csr_op_select),
        .lut         ({
            SYSTEM_ECALL,  CSR_OP_ECALL,
            SYSTEM_MRET,   CSR_OP_MRET,
            ZICSR_CSRRW,   CSR_OP_CSRRW,
            ZICSR_CSRRS,   CSR_OP_CSRRS,
            ZICSR_CSRRC,   CSR_OP_CSRRC,
            ZICSR_CSRRWI,  CSR_OP_CSRRWI,
            ZICSR_CSRRSI,  CSR_OP_CSRRSI,
            ZICSR_CSRRCI,  CSR_OP_CSRRCI
        }),
        .out         (csr_op)
    );

    // ---- Register-file port control ----
    MuxWithDefault #(
        .NR        (5),
        .KEY_LEN   (4),
        .VALUE_LEN (5)
    ) registerfile_writerd_MuxWithDefault(
        .default_out (5'b0),
        .key         (inst_type),
        .lut         ({
            INST_TYPE_R, rd,  // R 型
            INST_TYPE_I, rd,  // I 型
            INST_TYPE_U, rd,  // U 型
            INST_TYPE_J, rd,   // JAL 指令
            INST_TYPE_ZICSR, rd // CSR 指令
        }),
        .out         (registerfile_write_rd)
    );

    // 寄存器rs1选择器: R/I/S/B/ZICSR型读rs1
    MuxWithDefault #(
        .NR        (5),
        .KEY_LEN   (4),
        .VALUE_LEN (5)
    ) registerfile_readrs1_MuxWithDefault(
        .default_out (5'b0),
        .key         (inst_type),
        .lut         ({
            INST_TYPE_R, rs1,  // R 型
            INST_TYPE_I, rs1,  // I 型
            INST_TYPE_S, rs1,  // S 型
            INST_TYPE_B, rs1,   // B 型
            INST_TYPE_ZICSR, rs1 // CSR 指令
        }),
        .out         (registerfile_read_rs1)
    );

    // 寄存器rs2选择器: R/S/B型读rs2
    MuxWithDefault #(
        .NR        (3),
        .KEY_LEN   (4),
        .VALUE_LEN (5)
    ) registerfile_readrs2_MuxWithDefault(
        .default_out (5'b0),
        .key         (inst_type),
        .lut         ({
            INST_TYPE_R, rs2,  // R 型
            INST_TYPE_S, rs2,  // S 型
            INST_TYPE_B, rs2   // B 型
        }),
        .out         (registerfile_read_rs2)
    );

    // 寄存器写使能选择器: R/I/U/J/ZICSR型写寄存器
    MuxWithDefault #(
        .NR        (5),
        .KEY_LEN   (4),
        .VALUE_LEN (1)
    ) registerfile_writeenable_MuxWithDefault(
        .default_out (1'b0),
        .key         (inst_type),
        .lut         ({
            INST_TYPE_R, 1'b1,  // R 型
            INST_TYPE_I, 1'b1,  // I 型
            INST_TYPE_U, 1'b1,  // U 型
            INST_TYPE_J, 1'b1,   // JAL 指令
            INST_TYPE_ZICSR, 1'b1 // CSR 指令
        }),
        .out         (registerfile_write_enable)
    );

    // ---- Register writeback data selection ----
    wire [31:0] r_type_write_data;
    wire [31:0] i_type_write_data;
    wire [31:0] u_type_write_data;
    wire [31:0] j_type_write_data;

    // U 型写回选择：LUI直接写立即数；AUIPC写回ALU计算出的 pc + imm。
    MuxWithDefault #(
        .NR        (2),
        .KEY_LEN   (4),
        .VALUE_LEN (32)
    ) u_type_inst_registerfile_writedata_MuxWithDefault(
        .default_out (32'b0),
        .key         (u_type_encode_result),
        .lut         ({
            U_LUI,   imm_extend,          // LUI：立即数写入高 20 位
            U_AUIPC, alu_result[31:0]    // AUIPC：pc + 立即数
        }),
        .out         (u_type_write_data)
    );

    // JAL 把当前指令的顺序下一条地址写入rd。
    MuxWithDefault #(
        .NR        (1),
        .KEY_LEN   (4),
        .VALUE_LEN (32)
    ) j_type_inst_registerfile_writedata_MuxWithDefault(
        .default_out (32'b0),
        .key         (j_type_encode_result),
        .lut         ({
            J_JAL, pc_plus4
        }),
        .out         (j_type_write_data)
    );

    // R 型所有算术/逻辑/移位/比较指令都把ALU低32位写回rd。
    MuxWithDefault #(
        .NR        (10),
        .KEY_LEN   (4),
        .VALUE_LEN (32)
    ) r_type_inst_registerfile_writedata_MuxWithDefault(
        .default_out (32'b0),
        .key         (r_type_encode_result),
        .lut         ({
            R_ADD,  alu_result[31:0], // 加法
            R_SUB,  alu_result[31:0], // 减法
            R_SLL,  alu_result[31:0], // 逻辑左移
            R_SLT,  alu_result[31:0], // 有符号小于
            R_SLTU, alu_result[31:0], // 无符号小于
            R_XOR,  alu_result[31:0], // 异或
            R_SRL,  alu_result[31:0], // 逻辑右移
            R_SRA,  alu_result[31:0], // 算术右移
            R_OR,   alu_result[31:0], // 或
            R_AND,  alu_result[31:0]  // 与
        }),
        .out         (r_type_write_data)
    );

    // i_type的写入寄存器的数据选择器
    MuxWithDefault #(
        .NR        (15),
        .KEY_LEN   (4),
        .VALUE_LEN (32)
    ) i_type_inst_registerfile_writedata_MuxWithDefault(
        .default_out (32'b0),
        .key         (i_type_encode_result),
        .lut         ({
            I_ADDI, alu_result[31:0],                    // 立即数加法
            I_JALR, pc_plus4,                    // JALR 写回
            I_LB,   {{24{mem_read_data[7]}}, mem_read_data[7:0]}, // lb 符号扩展
            I_LBU,  {{24{1'b0}}, mem_read_data[7:0]}, // LBU 结果
            I_LW,   mem_read_data,                        // LW 加载字
            I_SLTI, alu_result[31:0],                    // 立即数有符号小于
            I_SLTIU, alu_result[31:0],                   // 立即数无符号小于
            I_XORI, alu_result[31:0],                    // 立即数异或
            I_ORI,  alu_result[31:0],                    // 立即数或
            I_ANDI, alu_result[31:0],                    // 立即数与
            I_SLLI, alu_result[31:0],                    // 立即数逻辑左移
            I_SRLI, alu_result[31:0],                    // 立即数逻辑右移
            I_SRAI, alu_result[31:0],                    // 立即数算术右移
            I_LH,   {{16{mem_read_data[15]}}, mem_read_data[15:0]}, // LH 加载半字
            I_LHU,  {16'b0, mem_read_data[15:0]}          // LHU 加载无符号半字
        }),
        .out         (i_type_write_data)
    );

    // 总的写入寄存器的数据选择器
    MuxWithDefault #(
        .NR        (5),
        .KEY_LEN   (4),
        .VALUE_LEN (32)
    ) registerfile_writedata_MuxWithDefault(
        .default_out (32'b0),
        .key         (inst_type),
        .lut         ({
            INST_TYPE_R, r_type_write_data,  // R 型
            INST_TYPE_I, i_type_write_data,  // I 型
            INST_TYPE_U, u_type_write_data,  // U 型
            INST_TYPE_J, j_type_write_data,   // JAL 指令
            INST_TYPE_ZICSR, csr_read_data         // CSR 旧值
        }),
        .out         (registerfile_write_data)
    );

    // ---- ALU operation selection ----
    wire [7:0] r_alu_op;
    wire [7:0] i_alu_op;
    wire [7:0] s_alu_op;
    wire [1:0] r_shifter_op;
    wire [1:0] i_shifter_op;
    wire [1:0] r_compare_op;
    wire [1:0] b_compare_op;
    wire [1:0] i_compare_op;

    // ALU 操作码：ADD=0 SUB=1 SHIFT=2 COMPARE=3 XOR_OP=4 OR_OP=5 AND_OP=6 REVERSE=7
    MuxWithDefault #(
        .NR        (10),
        .KEY_LEN   (4),
        .VALUE_LEN (8)
    ) r_type_alu_op_MuxWithDefault(
        .default_out (ALU_ADD),
        .key         (r_type_encode_result),
        .lut         ({
            R_ADD,  ALU_ADD,     // 加法
            R_SUB,  ALU_SUB,     // 减法
            R_SLL,  ALU_SHIFT,   // 逻辑左移
            R_SLT,  ALU_COMPARE, // 有符号小于
            R_SLTU, ALU_COMPARE, // 无符号小于
            R_XOR,  ALU_XOR_OP,  // 异或
            R_SRL,  ALU_SHIFT,   // 逻辑右移
            R_SRA,  ALU_SHIFT,   // 算术右移
            R_OR,   ALU_OR_OP,   // 或
            R_AND,  ALU_AND_OP   // 与
        }),
        .out         (r_alu_op)
    );

    // 仅移位类R指令会使用该控制，默认值对其他指令无影响。
    MuxWithDefault #(
        .NR        (3),
        .KEY_LEN   (4),
        .VALUE_LEN (2)
    ) r_type_shifter_op_MuxWithDefault(
        .default_out (SHIFTER_SLL),
        .key         (r_type_encode_result),
        .lut         ({
            R_SLL, SHIFTER_SLL,
            R_SRL, SHIFTER_SRL,
            R_SRA, SHIFTER_SRA
        }),
        .out         (r_shifter_op)
    );

    // 仅比较类R指令会使用该控制，分别选择有符号/无符号比较。
    MuxWithDefault #(
        .NR        (2),
        .KEY_LEN   (4),
        .VALUE_LEN (2)
    ) r_type_compare_op_MuxWithDefault(
        .default_out (COMPARE_SLT),
        .key         (r_type_encode_result),
        .lut         ({
            R_SLT,  COMPARE_SLT,
            R_SLTU, COMPARE_SLTU
        }),
        .out         (r_compare_op)
    );

    // BGE/BLT使用有符号比较，BGEU/BLTU使用无符号比较；EQ/NE不关心比较模式。
    MuxWithDefault #(
        .NR        (4),
        .KEY_LEN   (4),
        .VALUE_LEN (2)
    ) b_type_compare_op_MuxWithDefault(
        .default_out (COMPARE_SLT),
        .key         (b_type_encode_result),
        .lut         ({
            B_BLT,  COMPARE_SLT,
            B_BGE,  COMPARE_SLT,
            B_BLTU, COMPARE_SLTU,
            B_BGEU, COMPARE_SLTU
        }),
        .out         (b_compare_op)
    );
    // I 型立即数比较：SLTI有符号，SLTIU无符号。
    MuxWithDefault #(
        .NR        (2),
        .KEY_LEN   (4),
        .VALUE_LEN (2)
    ) i_type_compare_op_MuxWithDefault(
        .default_out (COMPARE_SLT),
        .key         (i_type_encode_result),
        .lut         ({
            I_SLTI,  COMPARE_SLT,
            I_SLTIU, COMPARE_SLTU
        }),
        .out         (i_compare_op)
    );

    // 比较器控制由R型、I型立即数比较和B型大小比较共同使用。
    MuxWithDefault #(
        .NR        (3),
        .KEY_LEN   (4),
        .VALUE_LEN (2)
    ) alu_compare_op_MuxWithDefault(
        .default_out (COMPARE_SLT),
        .key         (inst_type),
        .lut         ({
            INST_TYPE_R, r_compare_op,
            INST_TYPE_B, b_compare_op,
            INST_TYPE_I, i_compare_op
        }),
        .out         (alu_compare_op)
    );

    MuxWithDefault #(
        .NR        (10),
        .KEY_LEN   (4),
        .VALUE_LEN (8)
    ) i_type_alu_op_MuxWithDefault(
        .default_out (ALU_ADD),
        .key         (i_type_encode_result),
        .lut         ({
            I_ADDI, ALU_ADD,         // 立即数加法 -> 加法
            I_JALR, ALU_ADD,          // JALR -> 加法
            I_SLTI, ALU_COMPARE,      // 立即数有符号小于 -> 比较
            I_SLTIU, ALU_COMPARE,     // 立即数无符号小于 -> 比较
            I_XORI, ALU_XOR_OP,       // 立即数异或
            I_ORI,  ALU_OR_OP,        // 立即数或
            I_ANDI, ALU_AND_OP,       // 立即数与
            I_SLLI, ALU_SHIFT,        // 立即数逻辑左移
            I_SRLI, ALU_SHIFT,        // 立即数逻辑右移
            I_SRAI, ALU_SHIFT         // 立即数算术右移
        }),
        .out         (i_alu_op)
    );

    // I 型移位指令的移位方向/符号扩展控制。
    MuxWithDefault #(
        .NR        (3),
        .KEY_LEN   (4),
        .VALUE_LEN (2)
    ) i_type_shifter_op_MuxWithDefault(
        .default_out (SHIFTER_SLL),
        .key         (i_type_encode_result),
        .lut         ({
            I_SLLI, SHIFTER_SLL,
            I_SRLI, SHIFTER_SRL,
            I_SRAI, SHIFTER_SRA
        }),
        .out         (i_shifter_op)
    );

    // 移位器控制由R型寄存器移位或I型立即数移位提供。
    MuxWithDefault #(
        .NR        (2),
        .KEY_LEN   (4),
        .VALUE_LEN (2)
    ) alu_shifter_op_MuxWithDefault(
        .default_out (SHIFTER_SLL),
        .key         (inst_type),
        .lut         ({
            INST_TYPE_R, r_shifter_op,
            INST_TYPE_I, i_shifter_op
        }),
        .out         (alu_shifter_op)
    );

    // S 型三种存储均用rs1 + S-imm计算访存地址。
    MuxWithDefault #(
        .NR        (3),
        .KEY_LEN   (4),
        .VALUE_LEN (8)
    ) s_type_alu_op_MuxWithDefault(
        .default_out (ALU_ADD),
        .key         (s_type_encode_result),
        .lut         ({
            S_SB, ALU_ADD,
            S_SH, ALU_ADD,
            S_SW, ALU_ADD
        }),
        .out         (s_alu_op)
    );

    MuxWithDefault #(
        .NR        (6),
        .KEY_LEN   (4),
        .VALUE_LEN (8)
    ) alu_op_MuxWithDefault(
        .default_out (ALU_ADD),
        .key         (inst_type),
        .lut         ({
            INST_TYPE_R, r_alu_op,        // R 型
            INST_TYPE_I, i_alu_op,        // I 型
            INST_TYPE_S, s_alu_op,        // S 型 -> 加法（计算地址）
            INST_TYPE_U, ALU_ADD,         // U 型 -> AUIPC 计算 pc + 立即数
            INST_TYPE_B, ALU_SUB,         // B 型 -> rs1-rs2，产生比较标志
            INST_TYPE_J, ALU_ADD          // J 型 -> JAL 计算 pc + 立即数
        }),
        .out         (alu_op)
    );

    // ---- ALU operand generation ----
    // R 型/I型逻辑移位使用零扩展的32位源操作数，避免64位SRL把符号扩展位移入低32位。
    wire [63:0] r_type_alu_data1;
    wire [63:0] i_type_alu_data1;
    MuxWithDefault #(
        .NR        (2),
        .KEY_LEN   (4),
        .VALUE_LEN (64)
    ) r_type_alu_data1_MuxWithDefault(
        .default_out ({{32{registerfile_read_data1[31]}}, registerfile_read_data1}),
        .key         (r_type_encode_result),
        .lut         ({
            R_SLL, {32'b0, registerfile_read_data1},
            R_SRL, {32'b0, registerfile_read_data1}
        }),
        .out         (r_type_alu_data1)
    );

    MuxWithDefault #(
        .NR        (2),
        .KEY_LEN   (4),
        .VALUE_LEN (64)
    ) i_type_alu_data1_MuxWithDefault(
        .default_out ({{32{registerfile_read_data1[31]}}, registerfile_read_data1}),
        .key         (i_type_encode_result),
        .lut         ({
            I_SLLI, {32'b0, registerfile_read_data1},
            I_SRLI, {32'b0, registerfile_read_data1}
        }),
        .out         (i_type_alu_data1)
    );

    // ALU操作数1：R/I/S/B使用rs1；U/J型（AUIPC/JAL）使用当前PC。
    MuxWithDefault #(
        .NR        (6),
        .KEY_LEN   (4),
        .VALUE_LEN (64)
    ) alu_data1_MuxWithDefault(
        .default_out (64'b0),
        .key         (inst_type),
        .lut         ({
            INST_TYPE_R, r_type_alu_data1,                                                // R 型
            INST_TYPE_I, i_type_alu_data1,                                               // I 型
            INST_TYPE_S, {{32{registerfile_read_data1[31]}}, registerfile_read_data1}, // S 型
            INST_TYPE_B, {{32{registerfile_read_data1[31]}}, registerfile_read_data1}, // B 型
            INST_TYPE_U, {32'b0, pc},                                                   // U 型：AUIPC 基址
            INST_TYPE_J, {32'b0, pc}                                                    // J 型：JAL 基址
        }),
        .out         (alu_data1)
    );

    // ALU操作数2: R/B型用rs2，I/S/U/J型用符号扩展立即数。
    MuxWithDefault #(
        .NR        (6),
        .KEY_LEN   (4),
        .VALUE_LEN (64)
    ) alu_data2_MuxWithDefault(
        .default_out (64'b0),
        .key         (inst_type),
        .lut         ({
            INST_TYPE_R, {{32{registerfile_read_data2[31]}}, registerfile_read_data2},    // R 型
            INST_TYPE_I, {{32{imm_extend[31]}}, imm_extend},   // I 型
            INST_TYPE_S, {{32{imm_extend[31]}}, imm_extend},   // S 型
            INST_TYPE_B, {{32{registerfile_read_data2[31]}}, registerfile_read_data2}, // B 型
            INST_TYPE_U, {{32{imm_extend[31]}}, imm_extend},   // U 型：AUIPC 立即数
            INST_TYPE_J, {{32{imm_extend[31]}}, imm_extend}    // J 型：JAL 立即数
        }),
        .out         (alu_data2)
    );

    // ---- Branch / next-PC control ----
    // B 型分支条件：ALU对rs1-rs2求差，zero用于EQ/NE，zero_set 用于 LT。
    always @(*) begin
        b_branch_will_change_pc = 1'b0;
        if      (b_type_encode_result == B_BEQ)  b_branch_will_change_pc =  alu_zero;
        else if (b_type_encode_result == B_BNE)  b_branch_will_change_pc = !alu_zero;
        else if (b_type_encode_result == B_BLT)  b_branch_will_change_pc =  alu_zero_set;
        else if (b_type_encode_result == B_BGE)  b_branch_will_change_pc = !alu_zero_set;
        else if (b_type_encode_result == B_BLTU) b_branch_will_change_pc =  alu_zero_set;
        else if (b_type_encode_result == B_BGEU) b_branch_will_change_pc = !alu_zero_set;
    end

    // B 型ALU用于比较（rs1-rs2），所以跳转地址由独立加法器计算pc + B-imm。
    wire [31:0] b_branch_target = pc + imm_extend;

    // PC跳转选择树：JALR/JAL复用ALU结果，B型选独立的pc + B-imm目标。
    always @(*) begin
        pc_branch = 1'b0;
        pc_branch_target = pc_plus4;
        if (i_type_encode_result == I_JALR) begin
            pc_branch = 1'b1;
            pc_branch_target = alu_result[31:0] & JALR_ALIGN_MASK;
        end else if (j_type_encode_result == J_JAL) begin
            pc_branch = 1'b1;
            pc_branch_target = alu_result[31:0];
        end else if (b_branch_will_change_pc) begin
            pc_branch = 1'b1;
            pc_branch_target = b_branch_target;
        end else if (csr_pc_change_request) begin
            pc_branch = 1'b1;
            pc_branch_target = csr_target_pc;
        end
    end

    // EBREAK 指令：在时钟上升沿通知 C 侧执行 ebreak()。
    always @(posedge clk) begin
        if (is_ebreak) begin
            ebreak();
        end
    end
    

endmodule
