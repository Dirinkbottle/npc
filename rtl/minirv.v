import "DPI-C" function void ebreak();

import "DPI-C" function int unsigned pmem_read(
    input int unsigned raddr,
    input byte rmask,
    input bit skip_difftest_one
);
import "DPI-C" function int unsigned prom_read(input int unsigned raddr);
import "DPI-C" function void pmem_write(
    input int unsigned waddr,
    input int wdata,
    input byte wmask,
    input bit skip_difftest_one
);





module minirv (
    input wire clk,
    input wire rst,
    output wire [31:0] develop_put,
    // alu调试输出(目前用不到的线,引出到顶级悬空口)
    output wire [63:0] alu_outdata,
    output wire alu_sub_carry,
    output wire alu_overflow,
    output wire alu_zero,
    output wire alu_sz,
    output wire alu_cout,
    output wire inv //非法指令
);

    // 32'h00100073 ebreak

    // ---- 指令类型编码 (inst_type) ----
    localparam INST_TYPE_INVALID = 4'd0; // 非法
    localparam INST_TYPE_R = 4'd1;  // R
    localparam INST_TYPE_I = 4'd2;  // I
    localparam INST_TYPE_S = 4'd3;  // S
    localparam INST_TYPE_U = 4'd4;  // U
    localparam INST_TYPE_B = 4'd5;  // B
    localparam INST_TYPE_J = 4'd6;  // J
    localparam INST_TYPE_SYSTEM = 4'd7; // SYSTEM/MISC
    localparam INST_TYPE_ZICSR  = 4'd8; // CSR

    // ---- i_type指令编码 (i_type_inst_result) ----
    localparam I_ADDI = 4'd1, I_JALR = 4'd2, I_LB = 4'd3, I_LBU = 4'd4, I_LW = 4'd5;
    localparam I_SLTI = 4'd6, I_SLTIU = 4'd7;
    localparam I_XORI = 4'd8, I_ORI = 4'd9, I_ANDI = 4'd10;
    localparam I_SLLI = 4'd11, I_SRLI = 4'd12, I_SRAI = 4'd13;
    localparam I_LH = 4'd14, I_LHU = 4'd15;
    // ---- r_type指令编码 (r_type_inst_result) ----
    localparam R_ADD  = 4'd1,  R_SUB  = 4'd2,  R_SLL  = 4'd3;
    localparam R_SLT  = 4'd4,  R_SLTU = 4'd5,  R_XOR  = 4'd6;
    localparam R_SRL  = 4'd7,  R_SRA  = 4'd8,  R_OR   = 4'd9;
    localparam R_AND  = 4'd10;
    // ---- u_type指令编码 (u_type_inst_result) ----
    localparam U_LUI = 4'd1, U_AUIPC = 4'd2;
    // ---- s_type指令编码 (s_type_inst_result) ----
    localparam S_SB = 4'd1, S_SH = 4'd2, S_SW = 4'd3;
    // ---- b_type指令编码 (b_type_inst_result) ----
    localparam B_BEQ = 4'd1, B_BNE = 4'd2, B_BLT = 4'd3;
    localparam B_BGE = 4'd4, B_BLTU = 4'd5, B_BGEU = 4'd6;
    // ---- j_type指令编码 (j_type_inst_result) ----
    localparam J_JAL = 4'd1;

    // ---- SYSTEM/ZICSR 译码结果编码 ----
    localparam SYSTEM_NONE = 4'd0;
    localparam SYSTEM_FENCE = 4'd1;
    localparam SYSTEM_ECALL = 4'd2;
    localparam SYSTEM_EBREAK = 4'd3;
    localparam SYSTEM_MRET = 4'd4;

    localparam ZICSR_NONE = 4'd0;
    localparam ZICSR_CSRRW = 4'd5;
    localparam ZICSR_CSRRS = 4'd6;
    localparam ZICSR_CSRRC = 4'd7;
    localparam ZICSR_CSRRWI = 4'd8;
    localparam ZICSR_CSRRSI = 4'd9;
    localparam ZICSR_CSRRCI = 4'd10;

    // ---- ControlStatusRegister CSR 操作码 ----
    localparam CSR_OP_NONE   = 8'd0;
    localparam CSR_OP_CSRRW  = 8'd1;
    localparam CSR_OP_CSRRS  = 8'd2;
    localparam CSR_OP_CSRRC  = 8'd3;
    localparam CSR_OP_CSRRWI = 8'd4;
    localparam CSR_OP_CSRRSI = 8'd5;
    localparam CSR_OP_CSRRCI = 8'd6;
    localparam CSR_OP_MRET   = 8'd7;
    localparam CSR_OP_ECALL  = 8'd8;

    // ---- ALU操作码 ----
    localparam ALU_ADD     = 8'd0, ALU_SUB     = 8'd1;
    localparam ALU_SHIFT   = 8'd2, ALU_COMPARE = 8'd3;
    localparam ALU_XOR_OP  = 8'd4, ALU_OR_OP   = 8'd5;
    localparam ALU_AND_OP  = 8'd6, ALU_REVERSE = 8'd7;

    // ---- ALU子单元控制码 ----
    localparam SHIFTER_SLL = 2'd0, SHIFTER_SRL = 2'd1, SHIFTER_SRA = 2'd2;
    localparam COMPARE_SLT = 2'd0, COMPARE_SLTU = 2'd2;

    // ---- 其他 ----
    localparam PC_RESET    = 32'h80000000;      // 复位PC
    localparam PC_STEP     = 32'd4;      // 指令步长
    localparam INST_EBREAK = 32'h00100073;
    localparam ROM_SIZE_WORD = 3'b100;   // rom 32位指令 4byte
    localparam JALR_ALIGN_MASK = ~32'd1; // jalr 地址对齐

    // 程序计数器
    reg [31:0] pc;
    wire [31:0] pc_static = pc + PC_STEP;
    always @(posedge clk) begin
        // 复位信号处理
        if (rst) begin
            pc <= PC_RESET;
        end else begin
            pc <= pc_branch ? pc_branch_target : pc_static;
        end

        if (inst==INST_EBREAK) begin
            ebreak();
        end
        // 同步写
        if (mem_valid) begin
            if (mem_write_enable) begin
                // 写
                pmem_write(mem_addr, mem_write_data, mem_mask, 1'b1);
            end
        end
    end

    always @(*) begin
       if (~rst) begin
            inst = prom_read(pc);
       end else begin
            inst = 32'b0;
       end
    end

    // 异步读  mem_valid且非写 并且clk为低才读
    always_latch begin
        if (mem_valid && !mem_write_enable && !clk) begin
            // 异步读
            mem_read_data = pmem_read(mem_addr, mem_read_mask, 1'b1);
        end
        // else: 保持上次的值
    end
    // cpu 模拟内存
    wire mem_valid; //内存读写请求
    wire mem_write_enable;//内存写
    wire [31:0] mem_addr;//内存地址选择线
    wire [31:0] mem_write_data;//内存写数据
    reg [31:0] mem_read_data;//内存读数据
    wire [7:0] mem_mask; //字节写掩码
    wire [7:0] mem_read_mask; //字节读掩码

    reg [31:0] inst;

    // 译码
    wire [3:0] inst_type;
    wire [4:0] rd;
    wire [4:0] rs1;
    wire [4:0] rs2;
    wire [11:0] csr_addr;
    wire [4:0] uimm;
    wire [31:0] imm_extend;
    wire [3:0] i_type_inst_result;
    wire [3:0] r_type_inst_result;
    wire [3:0] u_type_inst_result;
    wire [3:0] s_type_inst_result;
    // B/J/SYSTEM have dedicated result codes for the next-PC/trap control
    // path.  B and J are consumed below; SYSTEM is reserved for trap control.
    wire [3:0] b_type_inst_result;
    wire [3:0] j_type_inst_result;
    wire [3:0] system_type_inst_result;
    wire [3:0] zicsr_type_inst_result;
    wire       is_system;
    wire       is_zicsr;
    // B型分支条件：ALU对rs1-rs2求差，zero用于EQ/NE，sz用于LT。
    reg b_branch_taken;
    always @(*) begin
        b_branch_taken = 1'b0;
        if      (b_type_inst_result == B_BEQ)  b_branch_taken =  alu_zero;
        else if (b_type_inst_result == B_BNE)  b_branch_taken = !alu_zero;
        else if (b_type_inst_result == B_BLT)  b_branch_taken =  alu_sz;
        else if (b_type_inst_result == B_BGE)  b_branch_taken = !alu_sz;
        else if (b_type_inst_result == B_BLTU) b_branch_taken =  alu_sz;
        else if (b_type_inst_result == B_BGEU) b_branch_taken = !alu_sz;
    end

    // B型ALU用于比较（rs1-rs2），所以跳转地址由独立加法器计算pc + B-imm。
    wire [31:0] b_branch_target = pc + imm_extend;

    // PC跳转选择树：JALR/JAL复用ALU结果，B型选独立的pc + B-imm目标。
    reg        pc_branch;
    reg [31:0] pc_branch_target;
    always @(*) begin
        pc_branch = 1'b0;
        pc_branch_target = pc_static;
        if (i_type_inst_result == I_JALR) begin
            pc_branch = 1'b1;
            pc_branch_target = alu_outdata[31:0] & JALR_ALIGN_MASK;
        end else if (j_type_inst_result == J_JAL) begin
            pc_branch = 1'b1;
            pc_branch_target = alu_outdata[31:0];
        end else if (b_branch_taken) begin
            pc_branch = 1'b1;
            pc_branch_target = b_branch_target;
        end else if (csr_change_pc) begin
            pc_branch = 1'b1;
            pc_branch_target = change_pc_value;
        end
    end
    // CSR寄存器

    wire [7:0] csr_op;
    wire [3:0] csr_op_select;
    wire       csr_change_pc;
    wire [31:0] change_pc_value;
    wire [31:0] csr_data;

    // SYSTEM 和 ZICSR 分别输出一套译码结果，先根据 inst_type 选出一套
    // 唯一的 csr_op_select，再把它映射到 ControlStatusRegister 的操作码。
    assign csr_op_select = is_system ? system_type_inst_result :
                           is_zicsr  ? zicsr_type_inst_result :
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

    ControlStatusRegister u_ControlStatusRegister(
        .clk             (clk             ),
        .rst             (rst             ),
        .csr_addr        (csr_addr        ),
        .rs1_val         (registerfile_read_data1         ),
        .trap_pc         (pc         ),
        .rs1             (rs1        ),
        .zimm            (uimm            ),
        .csr_op          (csr_op          ),
        .csr_change_pc   (csr_change_pc   ),
        .change_pc_value (change_pc_value ),
        .csr_data        (csr_data        )
    );
    

    minirv_decode minirv_decode_inst(
        .inst               (inst               ),
        .inst_type          (inst_type          ),
        .rd                 (rd                 ),
        .rs1                (rs1                ),
        .rs2                (rs2                ),
        .imm_extend         (imm_extend         ),
        .i_type_inst_result (i_type_inst_result ),
        .r_type_inst_result (r_type_inst_result ),
        .u_type_inst_result (u_type_inst_result ),
        .s_type_inst_result (s_type_inst_result ),
        .b_type_inst_result (b_type_inst_result ),
        .j_type_inst_result (j_type_inst_result ),
        .csr_addr           (csr_addr),
        .uimm               (uimm),
        .system_type_inst_result (system_type_inst_result ),
        .zicsr_type_inst_result (zicsr_type_inst_result ),
        .is_system             (is_system             ),
        .is_zicsr              (is_zicsr              ),
        .mem_enable         (mem_valid          ),
        .mem_write_enable   (mem_write_enable   ),
        .mem_write_mask     (mem_mask           ),
        .mem_read_mask      (mem_read_mask      ),
        .inv                (inv                )
    );


    // 非法指令
    wire invalid_inst;
    assign invalid_inst = (inst_type == INST_TYPE_INVALID) ? 1'b1 : 1'b0;
    assign develop_put = {31'b0, invalid_inst};

    // 寄存器信号
    wire [4:0] registerfile_write_rd;
    wire registerfile_write_enable;
    wire [4:0] registerfile_read_rs1;
    wire [4:0] registerfile_read_rs2;
    wire [31:0] registerfile_write_data;
    wire [31:0] registerfile_read_data1;
    wire [31:0] registerfile_read_data2;

    // 寄存器rd选择器: R/I/U/J/ZICSR型写rd, 其余默认0
    MuxWithDefault #(
        .NR        (5),
        .KEY_LEN   (4),
        .VALUE_LEN (5)
    ) registerfile_writerd_MuxWithDefault(
        .default_out (5'b0),
        .key         (inst_type),
        .lut         ({
            INST_TYPE_R, rd,  // R
            INST_TYPE_I, rd,  // I
            INST_TYPE_U, rd,  // U
            INST_TYPE_J, rd,   // JAL
            INST_TYPE_ZICSR, rd // CSR
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
            INST_TYPE_R, rs1,  // R
            INST_TYPE_I, rs1,  // I
            INST_TYPE_S, rs1,  // S
            INST_TYPE_B, rs1,   // B
            INST_TYPE_ZICSR, rs1 // CSR
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
            INST_TYPE_R, rs2,  // R
            INST_TYPE_S, rs2,  // S
            INST_TYPE_B, rs2   // B
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
            INST_TYPE_R, 1'b1,  // R
            INST_TYPE_I, 1'b1,  // I
            INST_TYPE_U, 1'b1,  // U
            INST_TYPE_J, 1'b1,   // JAL
            INST_TYPE_ZICSR, 1'b1 // CSR
        }),
        .out         (registerfile_write_enable)
    );

    // r_type指令写入寄存器的数据
    wire [31:0] r_type_write_data;
    wire [31:0] i_type_write_data;
    wire [31:0] u_type_write_data;
    wire [31:0] j_type_write_data;

    // U型写回选择：LUI直接写立即数；AUIPC写回ALU计算出的 pc + imm。
    MuxWithDefault #(
        .NR        (2),
        .KEY_LEN   (4),
        .VALUE_LEN (32)
    ) u_type_inst_registerfile_writedata_MuxWithDefault(
        .default_out (32'b0),
        .key         (u_type_inst_result),
        .lut         ({
            U_LUI,   imm_extend,          // lui: imm[31:12] << 12
            U_AUIPC, alu_outdata[31:0]    // auipc: pc + imm
        }),
        .out         (u_type_write_data)
    );

    // JAL把当前指令的顺序下一条地址写入rd。
    MuxWithDefault #(
        .NR        (1),
        .KEY_LEN   (4),
        .VALUE_LEN (32)
    ) j_type_inst_registerfile_writedata_MuxWithDefault(
        .default_out (32'b0),
        .key         (j_type_inst_result),
        .lut         ({
            J_JAL, pc_static
        }),
        .out         (j_type_write_data)
    );

    // R型所有算术/逻辑/移位/比较指令都把ALU低32位写回rd。
    MuxWithDefault #(
        .NR        (10),
        .KEY_LEN   (4),
        .VALUE_LEN (32)
    ) r_type_inst_registerfile_writedata_MuxWithDefault(
        .default_out (32'b0),
        .key         (r_type_inst_result),
        .lut         ({
            R_ADD,  alu_outdata[31:0], // add
            R_SUB,  alu_outdata[31:0], // sub
            R_SLL,  alu_outdata[31:0], // sll
            R_SLT,  alu_outdata[31:0], // slt
            R_SLTU, alu_outdata[31:0], // sltu
            R_XOR,  alu_outdata[31:0], // xor
            R_SRL,  alu_outdata[31:0], // srl
            R_SRA,  alu_outdata[31:0], // sra
            R_OR,   alu_outdata[31:0], // or
            R_AND,  alu_outdata[31:0]  // and
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
        .key         (i_type_inst_result),
        .lut         ({
            I_ADDI, alu_outdata[31:0],                    // addi
            I_JALR, pc_static,                    // jalr writeback
            I_LB,   {{24{mem_read_data[7]}}, mem_read_data[7:0]}, // lb 符号扩展
            I_LBU,  {{24{1'b0}}, mem_read_data[7:0]}, // lbu result
            I_LW,   mem_read_data,                        // lw
            I_SLTI, alu_outdata[31:0],                    // slti
            I_SLTIU, alu_outdata[31:0],                   // sltiu
            I_XORI, alu_outdata[31:0],                    // xori
            I_ORI,  alu_outdata[31:0],                    // ori
            I_ANDI, alu_outdata[31:0],                    // andi
            I_SLLI, alu_outdata[31:0],                    // slli
            I_SRLI, alu_outdata[31:0],                    // srli
            I_SRAI, alu_outdata[31:0],                    // srai
            I_LH,   {{16{mem_read_data[15]}}, mem_read_data[15:0]}, // lh
            I_LHU,  {16'b0, mem_read_data[15:0]}          // lhu
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
            INST_TYPE_R, r_type_write_data,  // R
            INST_TYPE_I, i_type_write_data,  // I
            INST_TYPE_U, u_type_write_data,  // U
            INST_TYPE_J, j_type_write_data,   // JAL
            INST_TYPE_ZICSR, csr_data         // CSR old value
        }),
        .out         (registerfile_write_data)
    );

    // ALU操作选择: 按指令类型选操作，再按具体指令选ALU子单元控制。
    wire [7:0] r_alu_op;
    wire [7:0] i_alu_op;
    wire [7:0] s_alu_op;
    wire [7:0] alu_op;
    wire [1:0] r_shifter_op;
    wire [1:0] i_shifter_op;
    wire [1:0] alu_shifter_op;
    wire [1:0] r_compare_op;
    wire [1:0] b_compare_op;
    wire [1:0] i_compare_op;
    wire [1:0] alu_compare_op;
    // ADD=0 SUB=1 SHIFT=2 COMPARE=3 XOR_OP=4 OR_OP=5 AND_OP=6 REVERSE=7
    MuxWithDefault #(
        .NR        (10),
        .KEY_LEN   (4),
        .VALUE_LEN (8)
    ) r_type_alu_op_MuxWithDefault(
        .default_out (ALU_ADD),
        .key         (r_type_inst_result),
        .lut         ({
            R_ADD,  ALU_ADD,     // add
            R_SUB,  ALU_SUB,     // sub
            R_SLL,  ALU_SHIFT,   // sll
            R_SLT,  ALU_COMPARE, // slt
            R_SLTU, ALU_COMPARE, // sltu
            R_XOR,  ALU_XOR_OP,  // xor
            R_SRL,  ALU_SHIFT,   // srl
            R_SRA,  ALU_SHIFT,   // sra
            R_OR,   ALU_OR_OP,   // or
            R_AND,  ALU_AND_OP   // and
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
        .key         (r_type_inst_result),
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
        .key         (r_type_inst_result),
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
        .key         (b_type_inst_result),
        .lut         ({
            B_BLT,  COMPARE_SLT,
            B_BGE,  COMPARE_SLT,
            B_BLTU, COMPARE_SLTU,
            B_BGEU, COMPARE_SLTU
        }),
        .out         (b_compare_op)
    );
    // I型立即数比较：SLTI有符号，SLTIU无符号。
    MuxWithDefault #(
        .NR        (2),
        .KEY_LEN   (4),
        .VALUE_LEN (2)
    ) i_type_compare_op_MuxWithDefault(
        .default_out (COMPARE_SLT),
        .key         (i_type_inst_result),
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
        .key         (i_type_inst_result),
        .lut         ({
            I_ADDI, ALU_ADD,         // addi -> ADD
            I_JALR, ALU_ADD,          // jalr -> ADD
            I_SLTI, ALU_COMPARE,      // slti -> COMPARE
            I_SLTIU, ALU_COMPARE,     // sltiu -> COMPARE
            I_XORI, ALU_XOR_OP,       // xori
            I_ORI,  ALU_OR_OP,        // ori
            I_ANDI, ALU_AND_OP,       // andi
            I_SLLI, ALU_SHIFT,        // slli
            I_SRLI, ALU_SHIFT,        // srli
            I_SRAI, ALU_SHIFT         // srai
        }),
        .out         (i_alu_op)
    );

    // I型移位指令的移位方向/符号扩展控制。
    MuxWithDefault #(
        .NR        (3),
        .KEY_LEN   (4),
        .VALUE_LEN (2)
    ) i_type_shifter_op_MuxWithDefault(
        .default_out (SHIFTER_SLL),
        .key         (i_type_inst_result),
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

    // S型三种存储均用rs1 + S-imm计算访存地址。
    MuxWithDefault #(
        .NR        (3),
        .KEY_LEN   (4),
        .VALUE_LEN (8)
    ) s_type_alu_op_MuxWithDefault(
        .default_out (ALU_ADD),
        .key         (s_type_inst_result),
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
            INST_TYPE_R, r_alu_op,        // R
            INST_TYPE_I, i_alu_op,        // I
            INST_TYPE_S, s_alu_op,        // S -> ADD (算地址)
            INST_TYPE_U, ALU_ADD,         // U -> AUIPC计算pc + imm
            INST_TYPE_B, ALU_SUB,         // B -> rs1-rs2，产生比较标志
            INST_TYPE_J, ALU_ADD          // J -> JAL计算pc + imm
        }),
        .out         (alu_op)
    );

    // R/I型逻辑移位使用零扩展的32位源操作数，避免64位SRL把符号扩展位移入低32位。
    wire [63:0] alu_data1;
    wire [63:0] alu_data2;
    wire [63:0] r_type_alu_data1;
    wire [63:0] i_type_alu_data1;
    MuxWithDefault #(
        .NR        (2),
        .KEY_LEN   (4),
        .VALUE_LEN (64)
    ) r_type_alu_data1_MuxWithDefault(
        .default_out ({{32{registerfile_read_data1[31]}}, registerfile_read_data1}),
        .key         (r_type_inst_result),
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
        .key         (i_type_inst_result),
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
            INST_TYPE_R, r_type_alu_data1,                                                // R
            INST_TYPE_I, i_type_alu_data1,                                               // I
            INST_TYPE_S, {{32{registerfile_read_data1[31]}}, registerfile_read_data1}, // S
            INST_TYPE_B, {{32{registerfile_read_data1[31]}}, registerfile_read_data1}, // B
            INST_TYPE_U, {32'b0, pc},                                                   // U: AUIPC基址
            INST_TYPE_J, {32'b0, pc}                                                    // J: JAL基址
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
            INST_TYPE_R, {{32{registerfile_read_data2[31]}}, registerfile_read_data2},    // R
            INST_TYPE_I, {{32{imm_extend[31]}}, imm_extend},   // I
            INST_TYPE_S, {{32{imm_extend[31]}}, imm_extend},   // S
            INST_TYPE_B, {{32{registerfile_read_data2[31]}}, registerfile_read_data2}, // B
            INST_TYPE_U, {{32{imm_extend[31]}}, imm_extend},   // U: AUIPC立即数
            INST_TYPE_J, {{32{imm_extend[31]}}, imm_extend}    // J: JAL立即数
        }),
        .out         (alu_data2)
    );

    // 内存地址: rs1+imm (I/S型经ALU计算)
    assign mem_addr = alu_outdata[31:0];
    // 内存写数据: S型写rs2
    assign mem_write_data = registerfile_read_data2;

    alu minirv_alu(
        .opcode      (alu_op        ),
        .data1       (alu_data1     ),
        .data2       (alu_data2     ),
        .imm         (inst[31:20]   ),
        .shifter_op  (alu_shifter_op),
        .compare_op  (alu_compare_op),
        .outdata     (alu_outdata   ),
        .sub_carry   (alu_sub_carry ),
        .overflow    (alu_overflow  ),
        .zero        (alu_zero      ),
        .sz          (alu_sz        ),
        .cout        (alu_cout      )
    );

    registerfile minirv_registerfile(
        .clk          (clk                      ),
        .rst          (rst                      ),
        .write_rd     (registerfile_write_rd    ),
        .write_enable (registerfile_write_enable),
        .read_rs1     (registerfile_read_rs1    ),
        .read_rs2     (registerfile_read_rs2    ),
        .write_data   (registerfile_write_data  ),
        .read_data1   (registerfile_read_data1  ),
        .read_data2   (registerfile_read_data2  )
    );

endmodule
