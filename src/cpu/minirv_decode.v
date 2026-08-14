module minirv_decode (
    input  wire [31:0] inst,
    output wire [2:0]  inst_type,
    output wire [4:0]  rd,
    output wire [4:0]  rs1,
    output wire [4:0]  rs2,
    output wire [31:0] imm_extend,
    output reg  [3:0]  i_type_inst_result,
    output reg  [3:0]  r_type_inst_result,
    output reg  [3:0]  u_type_inst_result,
    output reg  [3:0]  s_type_inst_result,
    output wire mem_enable, //内存使能
    output wire inv,//非法指令
    output wire mem_write_enable, //内存写使能
    output wire [7:0] mem_write_mask, //内存写掩码.(读操作不管掩码)
    output wire [7:0] mem_read_mask //内存读掩码: lb/lbu=0b1, lw=0b1111
);
    // 非法指令
    assign inv = ~(r_enc_found | i_enc_found | u_enc_found | s_enc_found | selfinst_enc_found);

    wire selfinst_enc_found = (inst == 32'h00100073);//自定义的trap指令

    //写内存指令的编码结果. 使用优先级编码器规则编码,然后用这个选字节掩码 规定 sb:0 sw:2
    wire [7:0] write_memory_inst_type={{5{1'b0}}, {s_type_inst_table[2]}, 1'b0, {s_type_inst_table[1]}};
    // 内存使能: load(lb/lbu/lw) 或 store(sb/sw) 时有效
    assign mem_enable = (i_type_inst_table[3] | i_type_inst_table[4] | i_type_inst_table[5]) |
                        (s_type_inst_table[1] | s_type_inst_table[2]);
    // 内存写使能: 仅store
    assign mem_write_enable = s_type_inst_table[1] | s_type_inst_table[2];
    // 读内存字节掩码: lb/lbu=0b1, lw=0b1111, 非load=0
    assign mem_read_mask = i_type_inst_table[5] ? 8'b0000_1111 :
                           (i_type_inst_table[3] | i_type_inst_table[4]) ? 8'b0000_0001 : 8'b0;
    // 字节掩码mux
    MuxWithDefault #(
        .NR        (2),
        .KEY_LEN   (8),
        .VALUE_LEN (8)
    ) mem_write_mask_MuxWithDefault(
        .default_out (8'b0),
        .key         (write_memory_inst_type),
        .lut         ({
            8'd1, 8'b0000_0001,  // sb 写最低1字节
            8'd4, 8'b0000_1111   // sw 写最低4字节
        }),
        .out         (mem_write_mask)
    );
    


    wire [6:0] opcode;
    wire [2:0] funct3;
    wire [6:0] funct7;


    wire pc_branch;// 分支指令pc_branch信号,1表示分支跳转,0表示不跳转

    assign opcode = inst[6:0];
    assign rd     = inst[11:7];
    assign funct3 = inst[14:12];
    assign rs1    = inst[19:15];
    assign rs2    = inst[24:20];
    assign funct7 = inst[31:25];

    // 指令类型 R=1 I=2 S=3 U=4 B=5 J=6, 0为非法指令
    MuxWithDefault #(
        .NR        (9       ),
        .KEY_LEN   (7       ),
        .VALUE_LEN (3       )
    ) inst_type_MuxWithDefault(
        .default_out (3'b000  ),
        .key         (opcode  ),
        .lut         ({
            7'b1101111, 3'b110,  // JAL    -> J=6
            7'b1100011, 3'b101,  // BRANCH -> B=5
            7'b0110111, 3'b100,  // LUI    -> U=4
            7'b0010111, 3'b100,  // AUIPC  -> U=4
            7'b0100011, 3'b011,  // STORE  -> S=3
            7'b1100111, 3'b010,  // JALR   -> I=2
            7'b0000011, 3'b010,  // LOAD   -> I=2
            7'b0010011, 3'b010,  // OP-IMM -> I=2
            7'b0110011, 3'b001   // OP     -> R=1
        }),
        .out         (inst_type )
    );

    // I指令的立即数
    wire [31:0] i_type_imm={{20{inst[31]}}, inst[31:20]};
    // U指令的立即数
    wire [31:0] u_type_imm = {{12{1'b0}},inst[12+:20]};
    // S指令的立即数
    wire [31:0] s_type_imm = {{20{inst[31]}}, {inst[25+:7]}, {inst[7+:5]}};

    // 指令类型选立即数
    MuxWithDefault #(
        .NR        (3),
        .KEY_LEN   (3),
        .VALUE_LEN (32))
     imm_MuxWithDefault(
        .default_out (32'b0         ),
        .key         (inst_type     ),
        .lut         ({
            3'b010, i_type_imm,
            3'b011,s_type_imm,
            3'b100,u_type_imm
        }),
        .out         (imm_extend    )
    );

    // r_type指令编码表  add=1
    wire [15:0] r_type_inst_table;
    assign r_type_inst_table[1] = (opcode == 7'b0110011) &&  (funct3 == 3'b000 && funct7 == 7'b0000000) ? 1'b1 : 1'b0; // add
    // r_type指令优先编码器
    integer r_enc_i;
    reg r_enc_found;
    always @(*) begin
        r_type_inst_result = 4'b0;
        r_enc_found = 1'b0;
        for (r_enc_i = 15; r_enc_i >= 0; r_enc_i = r_enc_i - 1) begin
            if (!r_enc_found && r_type_inst_table[r_enc_i]) begin
                r_type_inst_result = r_enc_i[3:0];
                r_enc_found = 1'b1;
            end
        end
    end

    // i_type指令编码表  addi=1 jalr=2
    wire [15:0] i_type_inst_table;
    assign i_type_inst_table[1] = (opcode==7'b0010011) && (funct3 == 3'b000) ? 1'b1:1'b0; //addi
    assign i_type_inst_table[2] = (opcode==7'b1100111) && (funct3 == 3'b000) ? 1'b1 : 1'b0; // jalr
    assign i_type_inst_table[3] = (opcode==7'b0000011) && (funct3 == 3'b000) ? 1'b1 : 1'b0; // lb
    assign i_type_inst_table[4] = (opcode==7'b0000011) && (funct3 == 3'b100) ? 1'b1 : 1'b0; // lbu
    assign i_type_inst_table[5] = (opcode==7'b0000011) && (funct3 == 3'b010) ? 1'b1 : 1'b0; // lw
    // i_type指令优先编码器
    integer i_enc_i;
    reg i_enc_found;
    always @(*) begin
        i_type_inst_result = 4'b0;
        i_enc_found = 1'b0;
        for (i_enc_i = 15; i_enc_i >= 0; i_enc_i = i_enc_i - 1) begin
            if (!i_enc_found && i_type_inst_table[i_enc_i]) begin
                i_type_inst_result = i_enc_i[3:0];
                i_enc_found = 1'b1;
            end
        end
    end

    // u_type指令编码表 
    wire [15:0] u_type_inst_table;
    assign u_type_inst_table[1] =  (opcode ==7'b0110111); // lui
    // u_type指令优先编码器
    integer u_enc_i;
    reg u_enc_found;
    always @(*) begin
        u_type_inst_result = 4'b0;
        u_enc_found = 1'b0;
        for (u_enc_i = 15; u_enc_i >= 0; u_enc_i = u_enc_i - 1) begin
            if (!u_enc_found && u_type_inst_table[u_enc_i]) begin
                u_type_inst_result = u_enc_i[3:0];
                u_enc_found = 1'b1;
            end
        end
    end
    // s_type指令编码表
    wire [15:0] s_type_inst_table;
    assign s_type_inst_table[1] = (opcode == 7'b0100011) && (funct3==3'b000); // sb 
    assign s_type_inst_table[2] = (opcode == 7'b0100011) && (funct3==3'b010); // sw
    // s_type指令优先编码器
    integer s_enc_i;
    reg s_enc_found;
    always @(*) begin
        s_type_inst_result = 4'b0;
        s_enc_found = 1'b0;
        for (s_enc_i = 15; s_enc_i >= 0; s_enc_i = s_enc_i - 1) begin
            if (!s_enc_found && s_type_inst_table[s_enc_i]) begin
                s_type_inst_result = s_enc_i[3:0];
                s_enc_found = 1'b1;
            end
        end
    end

endmodule
