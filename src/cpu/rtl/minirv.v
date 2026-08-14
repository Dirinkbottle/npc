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
    localparam INST_TYPE_INVALID = 3'b000; // 非法
    localparam INST_TYPE_R = 3'b001;  // R
    localparam INST_TYPE_I = 3'b010;  // I
    localparam INST_TYPE_S = 3'b011;  // S
    localparam INST_TYPE_U = 3'b100;  // U
    localparam INST_TYPE_B = 3'b101;  // B
    localparam INST_TYPE_J = 3'b110;  // J

    // ---- i_type指令编码 (i_type_inst_result) ----
    localparam I_ADDI = 4'd1, I_JALR = 4'd2, I_LB = 4'd3, I_LBU = 4'd4, I_LW = 4'd5;
    // ---- r_type指令编码 (r_type_inst_result) ----
    localparam R_ADD = 4'd1;

    // ---- ALU操作码 ----
    localparam ALU_ADD     = 8'd0, ALU_SUB     = 8'd1;
    localparam ALU_SHIFT   = 8'd2, ALU_COMPARE = 8'd3;
    localparam ALU_XOR_OP  = 8'd4, ALU_OR_OP   = 8'd5;
    localparam ALU_AND_OP  = 8'd6, ALU_REVERSE = 8'd7;

    // ---- 其他 ----
    localparam PC_RESET    = 32'h80000000;      // 复位PC
    localparam PC_STEP     = 32'd4;      // 指令步长
    localparam INST_EBREAK = 32'h00100073;
    localparam ROM_SIZE_WORD = 3'b100;   // rom 32位指令 4byte
    localparam JALR_ALIGN_MASK = ~32'd1; // jalr 地址对齐

    // 程序计数器
    reg [31:0] pc;
    wire [31:0] pc_static = pc + PC_STEP;
    wire [31:0] jalr_pc = (i_type_inst_result==4'd2) ? alu_outdata[31:0]&JALR_ALIGN_MASK : 32'b0;
    always @(posedge clk) begin
        // 复位信号处理
        if (rst) begin
            pc <= PC_RESET;
        end else begin
            pc <= pc_branch ? jalr_pc : pc_static;
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
    wire [2:0] inst_type;
    wire [4:0] rd;
    wire [4:0] rs1;
    wire [4:0] rs2;
    wire [31:0] imm_extend;
    wire [3:0] i_type_inst_result;
    wire [3:0] r_type_inst_result;
    wire [3:0] u_type_inst_result;
    wire [3:0] s_type_inst_result;
    // pc跳转信号
    wire pc_branch=i_type_inst_result==I_JALR; //pc跳转分支 jalr

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

    // 寄存器rd选择器: R/I/U型写rd, 其余默认0
    MuxWithDefault #(
        .NR        (3),
        .KEY_LEN   (3),
        .VALUE_LEN (5)
    ) registerfile_writerd_MuxWithDefault(
        .default_out (5'b0),
        .key         (inst_type),
        .lut         ({
            INST_TYPE_R, rd,  // R
            INST_TYPE_I, rd,  // I
            INST_TYPE_U, rd   // U
        }),
        .out         (registerfile_write_rd)
    );

    // 寄存器rs1选择器: R/I/S/B型读rs1
    MuxWithDefault #(
        .NR        (4),
        .KEY_LEN   (3),
        .VALUE_LEN (5)
    ) registerfile_readrs1_MuxWithDefault(
        .default_out (5'b0),
        .key         (inst_type),
        .lut         ({
            INST_TYPE_R, rs1,  // R
            INST_TYPE_I, rs1,  // I
            INST_TYPE_S, rs1,  // S
            INST_TYPE_B, rs1   // B
        }),
        .out         (registerfile_read_rs1)
    );

    // 寄存器rs2选择器: R/S/B型读rs2
    MuxWithDefault #(
        .NR        (3),
        .KEY_LEN   (3),
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

    // 寄存器写使能选择器: R/I/U型写寄存器
    MuxWithDefault #(
        .NR        (3),
        .KEY_LEN   (3),
        .VALUE_LEN (1)
    ) registerfile_writeenable_MuxWithDefault(
        .default_out (1'b0),
        .key         (inst_type),
        .lut         ({
            INST_TYPE_R, 1'b1,  // R
            INST_TYPE_I, 1'b1,  // I
            INST_TYPE_U, 1'b1   // U
        }),
        .out         (registerfile_write_enable)
    );

    // r_type指令写入寄存器的数据
    wire [31:0] r_type_write_data;
    wire [31:0] i_type_write_data;
    wire [31:0] u_type_write_data;

    // u_type的写入寄存器的数据选择器: lui -> {imm[31:12], 12'b0}
    MuxWithDefault #(
        .NR        (1),
        .KEY_LEN   (3),
        .VALUE_LEN (32)
    ) u_type_inst_registerfile_writedata_MuxWithDefault(
        .default_out (32'b0),
        .key         (inst_type),
        .lut         ({
            INST_TYPE_U, {inst[31:12], 12'b0}   // lui
        }),
        .out         (u_type_write_data)
    );

    // r_type的写入寄存器的数据选择器
    MuxWithDefault #(
        .NR        (1),
        .KEY_LEN   (4),
        .VALUE_LEN (32)
    ) r_type_inst_registerfile_writedata_MuxWithDefault(
        .default_out (32'b0),
        .key         (r_type_inst_result),
        .lut         ({
            R_ADD, alu_outdata[31:0]   // add
        }),
        .out         (r_type_write_data)
    );

    // i_type的写入寄存器的数据选择器
    MuxWithDefault #(
        .NR        (5),
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
            I_LW,   mem_read_data                         // lw
        }),
        .out         (i_type_write_data)
    );

    // 总的写入寄存器的数据选择器
    MuxWithDefault #(
        .NR        (3),
        .KEY_LEN   (3),
        .VALUE_LEN (32)
    ) registerfile_writedata_MuxWithDefault(
        .default_out (32'b0),
        .key         (inst_type),
        .lut         ({
            INST_TYPE_R, r_type_write_data,  // R
            INST_TYPE_I, i_type_write_data,  // I
            INST_TYPE_U, u_type_write_data   // U
        }),
        .out         (registerfile_write_data)
    );

    // ALU操作选择: 按指令类型选R/I/S型操作, 再按具体指令选ALU操作
    wire [7:0] r_alu_op;
    wire [7:0] i_alu_op;
    wire [7:0] alu_op;
    // ADD=0 SUB=1 SHIFT=2 COMPARE=3 XOR_OP=4 OR_OP=5 AND_OP=6 REVERSE=7
    MuxWithDefault #(
        .NR        (1),
        .KEY_LEN   (4),
        .VALUE_LEN (8)
    ) r_type_alu_op_MuxWithDefault(
        .default_out (ALU_ADD),
        .key         (r_type_inst_result),
        .lut         ({
            R_ADD, ALU_ADD           // add -> ADD
        }),
        .out         (r_alu_op)
    );

    MuxWithDefault #(
        .NR        (2),
        .KEY_LEN   (4),
        .VALUE_LEN (8)
    ) i_type_alu_op_MuxWithDefault(
        .default_out (ALU_ADD),
        .key         (i_type_inst_result),
        .lut         ({
            I_ADDI, ALU_ADD,         // addi -> ADD
            I_JALR, ALU_ADD          // jalr -> ADD
        }),
        .out         (i_alu_op)
    );

    MuxWithDefault #(
        .NR        (3),
        .KEY_LEN   (3),
        .VALUE_LEN (8)
    ) alu_op_MuxWithDefault(
        .default_out (ALU_ADD),
        .key         (inst_type),
        .lut         ({
            INST_TYPE_R, r_alu_op,        // R
            INST_TYPE_I, i_alu_op,        // I
            INST_TYPE_S, ALU_ADD          // S -> ADD (算地址)
        }),
        .out         (alu_op)
    );

    // ALU操作数
    wire [63:0] alu_data1;
    wire [63:0] alu_data2;
    assign alu_data1 = {{32{registerfile_read_data1[31]}}, registerfile_read_data1}; //符号扩展

    // ALU操作数2: R型用寄存器rs2, I/S型用符号扩展立即数
    MuxWithDefault #(
        .NR        (3),
        .KEY_LEN   (3),
        .VALUE_LEN (64)
    ) alu_data2_MuxWithDefault(
        .default_out (64'b0),
        .key         (inst_type),
        .lut         ({
            INST_TYPE_R, {{32{registerfile_read_data2[31]}}, registerfile_read_data2},    // R
            INST_TYPE_I, {{32{imm_extend[31]}}, imm_extend},   // I
            INST_TYPE_S, {{32{imm_extend[31]}}, imm_extend}    // S
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
        .shifter_op  (2'b00         ),
        .compare_op  (2'b00         ),
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
