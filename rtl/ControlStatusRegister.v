module ControlStatusRegister(
    input wire clk,
    input wire rst,
    input wire [11:0] csr_addr,
    input wire [4:0] rs1,
    input wire [31:0] rs1_val,//csrrw csrrs csrrc需要
    input wire [31:0] trap_pc,//当前pc值
    input wire [4:0] zimm,//后续零扩展
    input wire [7:0]  csr_op,
    output wire csr_change_pc,
    output wire [31:0] change_pc_value,
    // 给外部读出来的csr值
    output wire [31:0] csr_data
);




    localparam CSRRW = 8'd1;
    localparam CSRRS = 8'd2;
    localparam CSRRC = 8'd3;

    localparam CSRRWI = 8'd4;
    localparam CSRRSI = 8'd5;
    localparam CSRRCI = 8'd6;
    
    localparam MRET = 8'd7;
    localparam ECALL = 8'd8;

    wire [31:0] csr_old = csr_register[csr_addr];
    assign csr_change_pc = (csr_op==MRET)?1'b1:
                            (csr_op==ECALL)?1'b1:
                            1'b0;
    assign csr_data = csr_old;
    wire [31:0] csr_zimm_zx = {{27'b0},zimm};
    reg [31:0] csr_register [0:4095];

    // 预制值（只读别名，用连续赋值跟随寄存器内容）
    wire [31:0] mstatus   = csr_register[768];
    wire [31:0] mie       = csr_register[772];
    wire [31:0] mtvec     = csr_register[773];
    wire [31:0] mscratch  = csr_register[832];
    wire [31:0] mepc      = csr_register[833];
    wire [31:0] mcause    = csr_register[834];
    wire [31:0] mtval     = csr_register[835];
    wire [31:0] mip       = csr_register[836];

    wire is_ecall = (csr_op == ECALL);
    // assign change_pc_value = (csr_op == ECALL) ? mtvec :
    //                          (csr_op == MRET)  ? mepc  :
    //                                               32'b0;
    assign change_pc_value = is_ecall ? mtvec :
                             (csr_op == MRET)  ? mepc  :
                                                  32'b0;

    // mstatus中的分割字段
    wire MSTATUS_MIE  = mstatus[3];
    wire MSTATUS_MPIE = mstatus[7];
    wire [1:0] MSTATUS_MPP = mstatus[12:11];
    
    wire csr_write_enable = rs1!=0 & (csr_op==CSRRW)?1'b1:
                            (csr_op==CSRRS)?1'b1:
                            (csr_op==CSRRC)?1'b1:
                            (csr_op==CSRRWI)?1'b1:
                            (csr_op==CSRRSI)?1'b1:
                            (csr_op==CSRRCI)?1'b1:
                            (csr_op==MRET)?1'b1:
                            (csr_op==ECALL)?1'b1:
                            1'b0;
    wire system_csr_write_enable = (csr_op==MRET)?1'b1:
                                   (csr_op==ECALL)?1'b1:
                                   1'b0;
    wire general_csr_write_enable = rs1!=0 & (csr_op==CSRRW)?1'b1:
                                    (csr_op==CSRRS)?1'b1:
                                    (csr_op==CSRRC)?1'b1:
                                    (csr_op==CSRRWI)?1'b1:
                                    (csr_op==CSRRSI)?1'b1:
                                    (csr_op==CSRRCI)?1'b1:
                                    1'b0;

    reg [31:0] general_csr_write_data;
    MuxWithDefault #(
        .NR        (6),
        .KEY_LEN   (8),
        .VALUE_LEN (32)
    ) csr_general_writedata_MuxWithDefault(
        .default_out (32'b0),
        .key         (csr_op),
        .lut         ({
            CSRRW,   rs1_val,
            CSRRS,   rs1_val | csr_old,
            CSRRC,   csr_old & (~rs1_val),
            CSRRWI,   csr_zimm_zx,
            CSRRSI,   csr_zimm_zx | csr_old,
            CSRRCI,   csr_old & (~csr_zimm_zx)
        }),
        .out         (general_csr_write_data)
    );
    // assign  csr_register[3857] = 32'h79737978;
    // assign  csr_register[3858] = 32'd26080230;
    always @(posedge clk) begin
        if (rst) begin
            integer i;
            for ( i= 0;i<4096 ;i=i+1 ) begin
                csr_register[i] <= 32'b0;
                    // mvendorid - 从中读出ysyx的ASCII码,
                    // marchid - 从中读出学号数字部分的十进制表示, 
                    csr_register[3857] <= 32'h79737978;
                    csr_register[3858] <= 32'd26080230;
            end
        end else begin
            csr_register[3857] <= 32'h79737978;
            csr_register[3858] <= 32'd26080230;
                // mcycle   = 0xB00
                // mcycleh  = 0xB80
            {csr_register[2944],csr_register[2816]} <= {{csr_register[2944],csr_register[2816]}+64'b1}; 


            if (general_csr_write_enable) begin
                if (csr_write_enable) begin
                    csr_register[csr_addr] <= general_csr_write_data;
                end   
            end
            
            if (system_csr_write_enable) begin
                if (csr_op == ECALL) begin
                    csr_register[833] <= trap_pc;
                    // mstatus: MPP <= 2'b11, MPIE <= MIE, MIE <= 0
                    csr_register[768] <= {csr_register[768][31:13], 2'b11,
                                            csr_register[768][10:8],
                                            csr_register[768][3],
                                            csr_register[768][6:4],
                                            1'b0,
                                            csr_register[768][2:0]};
                    // mcause
                    csr_register[834] <= 32'd11;
                end

                if (csr_op == MRET) begin
                    // mstatus: MIE <= MPIE, MPIE <= 1, MPP <= 2'b00
                    csr_register[768] <= {csr_register[768][31:13], 2'b00,
                                            csr_register[768][10:8],
                                            1'b1,
                                            csr_register[768][6:4],
                                            csr_register[768][7],
                                            csr_register[768][2:0]};
                end
            end

        end

        
    
    end
    
endmodule
