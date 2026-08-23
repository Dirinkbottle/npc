// NPC CPU 顶层模块。
//
// 这里只放置数据通路模块实例；指令译码和执行级控制生成都集中在 minirv_decode.v 中。
module minirv (
    input wire clk,
    input wire rst,
    input wire axi_ram_arready,
    input wire axi_ram_rvalid,
    input wire [31:0]axi_ram_rdata,
    input wire axi_ram_bvalid,
    input wire axi_ram_wready,
    input wire axi_ram_awready,
    output wire [31:0] axi_ram_awaddr,
    output wire axi_ram_awvalid,
    output wire axi_cpu_ram_arvalid,
    output wire axi_cpu_ram_rready,
    output wire [31:0]axi_cpu_ram_araddr,
    output wire [31:0]axi_ram_wdata,
    output wire [3:0]axi_ram_wstrb,
    output wire axi_ram_wvalid,
    output wire axi_ram_bready,
    output wire mem_addr_read_unalign,
    output wire mem_addr_write_unalign,
    output wire [31:0] develop_put,
    output wire [63:0] alu_result,
    output wire alu_sub_carry,
    output wire alu_overflow,
    output wire alu_zero,
    output wire alu_zero_set,
    output wire alu_cout,
    output wire invalid_inst
);

    localparam CPU_IDLE = 8'd0;
    localparam CPU_WAIT_AR=8'd1 ;
    localparam CPU_WAIT_RDATA=8'd2 ;
    localparam CPU_RAM_LOAD_IDLE=8'd3 ;
    localparam CPU_WAIT_RAM_LOAD_AR=8'd4 ;
    localparam CPU_WAIT_RAM_LOAD_RDATA=8'd5 ;
    localparam CPU_RAM_STORE_IDLE =8'd6 ;
    localparam CPU_WAIT_RAM_STORE_W =8'd7 ;
    localparam CPU_WAIT_RAM_STORE_B =8'd8 ;
    localparam CPU_FETCHINST = 8'd9;
    localparam CPU_EXCUTE = 8'd10;
    localparam CPU_DECODE = 8'd11;
    localparam CPU_WAIT_RAM_STORE_AW =8'd12 ;
    localparam CPU_RAM_FETCHEDINST_IDLE =8'd13 ;

    reg [7:0] cpu_state;
    localparam PC_RESET = 32'h80000000;

    reg [31:0] pc;
    reg [31:0] inst;
    wire [31:0] pc_plus4;
    
    localparam BUS_NOTAKE = 8'd0;
    localparam BUS_TAKEBY_IFU = 8'd1 ;
    localparam BUS_TAKEBY_LSU = 8'd2 ;
    wire [31:0] ram_araddr_arbitrate;
    reg [7:0] axibus_take;
    assign ram_araddr_arbitrate = (axibus_take == BUS_NOTAKE) ? 32'b0 :
                                  (axibus_take == BUS_TAKEBY_IFU) ? pc :
                                  (axibus_take == BUS_TAKEBY_LSU) ? mem_addr_word_aligned:32'b0;

    wire [31:0]ram_araddr; assign axi_cpu_ram_araddr = ram_araddr; assign ram_araddr = ram_araddr_arbitrate;
    reg ram_arvalid; assign axi_cpu_ram_arvalid = ram_arvalid;
    wire ram_arready; assign ram_arready = axi_ram_arready;
    wire ram_rvalid; assign ram_rvalid = axi_ram_rvalid;
    wire [31:0]ram_rdata; assign ram_rdata = axi_ram_rdata;
    reg ram_rready; assign axi_cpu_ram_rready = ram_rready;

    wire [31:0] ram_wdata; assign axi_ram_wdata = ram_wdata; assign ram_wdata = mem_write_data;
    wire [3:0] ram_wstrb; assign axi_ram_wstrb = ram_wstrb; assign ram_wstrb = mem_write_mask;
    reg ram_wvalid; assign axi_ram_wvalid = ram_wvalid;
    wire ram_wready; assign ram_wready = axi_ram_wready;
    wire ram_bvalid; assign ram_bvalid = axi_ram_bvalid;
    reg ram_bready; assign axi_ram_bready = ram_bready;
    wire [31:0]ram_awaddr; assign axi_ram_awaddr = ram_awaddr; assign ram_awaddr = ram_araddr_arbitrate;
    reg ram_awvalid; assign axi_ram_awvalid = ram_awvalid;
    wire ram_awready; assign ram_awready = axi_ram_awready;
    reg global_en;


    always @(posedge clk) begin
        if (rst) begin
            cpu_state <= CPU_IDLE;
            pc <= PC_RESET;
            inst <= 32'b0;
            ram_arvalid<=1'b0;
            ram_rready<=1'b0;
            mem_read_data_nomask<=32'b0;
            global_en <=1'b0;
            ram_wvalid<=1'b0;
            ram_bready<=1'b0;
            ram_awvalid<=1'b0;
            axibus_take <= BUS_NOTAKE; //初始总线空闲
        end else begin
            if (cpu_state==CPU_IDLE) begin
                global_en<=1'b0;
                cpu_state<=CPU_FETCHINST;
                axibus_take<=BUS_TAKEBY_IFU; // ifu控制总线
                ram_bready<=1'b0;
            end else if(cpu_state==CPU_FETCHINST)begin
                global_en<=1'b0;
                cpu_state<=CPU_WAIT_AR;
                ram_arvalid<=1'b1;
                ram_rready <=1'b0;
            end else if(cpu_state==CPU_DECODE) begin
                if (is_load) begin
                    cpu_state<=CPU_RAM_LOAD_IDLE;
                    axibus_take<=BUS_TAKEBY_LSU;
                end else if (is_store) begin
                    cpu_state <= CPU_RAM_STORE_IDLE;
                    axibus_take<=BUS_TAKEBY_LSU;
                end else begin
                    cpu_state<=CPU_EXCUTE;
                    global_en<=1'b1;
                end
            end else if (cpu_state==CPU_EXCUTE) begin
                inst<=32'b0;
                global_en<=1'b0; 
                cpu_state <= CPU_IDLE;
            end else if(cpu_state==CPU_WAIT_AR) begin
                global_en<=1'b0;
                if (ram_arvalid & ram_arready) begin
                    cpu_state <= CPU_WAIT_RDATA;
                    ram_arvalid<=1'b0;
                    ram_rready <=1'b0;
                end
            end else if(cpu_state==CPU_WAIT_RDATA) begin
                global_en<=1'b0;
                if (ram_rvalid) begin
                    inst<=ram_rdata;
                    ram_arvalid<=1'b0;
                    ram_rready<=1'b1;
                    cpu_state<=CPU_RAM_FETCHEDINST_IDLE;
                end
            end else if(cpu_state==CPU_RAM_FETCHEDINST_IDLE) begin
                if (ram_rready) begin
                    ram_rready<=1'b0;
                    cpu_state<=CPU_DECODE;
                    axibus_take<=BUS_NOTAKE;
                end
            end else if(cpu_state==CPU_RAM_LOAD_IDLE) begin
                if (ram_rready) begin
                    ram_rready<=1'b0;
                    global_en<=1'b1;
                    cpu_state<=CPU_EXCUTE;
                    axibus_take<=BUS_NOTAKE;
                end else begin
                    global_en<=1'b0;
                    ram_arvalid <=1'b1;
                    ram_rready<=1'b0;
                    cpu_state<=CPU_WAIT_RAM_LOAD_AR;
                end
            end else if (cpu_state == CPU_WAIT_RAM_LOAD_AR) begin
                global_en<=1'b0;
                if (ram_arready & ram_arvalid) begin
                    cpu_state<=CPU_WAIT_RAM_LOAD_RDATA;
                    ram_rready<=1'b0;
                    ram_arvalid<=1'b0;
                end
            end else if (cpu_state==CPU_WAIT_RAM_LOAD_RDATA) begin
                if (ram_rvalid) begin
                    ram_rready<=1'b1;
                    ram_arvalid<=1'b0;
                    mem_read_data_nomask<=ram_rdata;
                    cpu_state<=CPU_RAM_LOAD_IDLE;
                end
            end else if (cpu_state==CPU_RAM_STORE_IDLE) begin
                if (ram_bready) begin
                    ram_bready<=1'b0;
                    axibus_take<=BUS_NOTAKE; //释放总线
                    cpu_state<=CPU_EXCUTE;
                    global_en<=1'b1;
                end else begin
                    global_en<=1'b0;
                    ram_awvalid <=1'b1;
                    cpu_state<=CPU_WAIT_RAM_STORE_AW;
                end
            end else if (cpu_state==CPU_WAIT_RAM_STORE_AW) begin
                if (ram_awready & ram_awvalid) begin
                    ram_awvalid<=1'b0;
                    ram_wvalid<=1'b1;
                    cpu_state <= CPU_WAIT_RAM_STORE_W;
                end
            end else if (cpu_state==CPU_WAIT_RAM_STORE_W) begin
                if (ram_wvalid & ram_wready) begin
                    ram_wvalid<=1'b0;
                    cpu_state<=CPU_WAIT_RAM_STORE_B;
                end
            end else if (cpu_state == CPU_WAIT_RAM_STORE_B) begin
                if (ram_bvalid) begin
                    ram_bready<=1'b1; //确保握手成功. slave可能很快,不能被它抢跑
                    cpu_state<=CPU_RAM_STORE_IDLE;
                end
            end

            if (global_en) begin
                pc <= pc_branch ? pc_branch_target : pc_plus4;
            end
        end
    end

    wire       mem_read_enable;
    wire       mem_write_enable;
    wire [31:0] mem_addr_nowordalign;
    wire [31:0] mem_addr_word_aligned;
    wire [1:0] mem_addr_byte_slack;
    wire [31:0] mem_write_data;
    reg  [31:0] mem_read_data_nomask;
    wire [3:0]  mem_write_mask;

    wire [4:0]  rs1;
    wire [11:0] csr_addr;
    wire [4:0]  csr_zimm;
    wire [7:0]  csr_op;
    wire        csr_pc_change_request;
    wire [31:0] csr_target_pc;
    wire [31:0] csr_read_data;

    wire        pc_branch;
    wire [31:0] pc_branch_target;

    wire [4:0]  registerfile_write_rd;
    wire        registerfile_write_enable;
    wire [4:0]  registerfile_read_rs1;
    wire [4:0]  registerfile_read_rs2;
    wire [31:0] registerfile_write_data;
    wire [31:0] registerfile_read_data1;
    wire [31:0] registerfile_read_data2;

    wire [7:0]  alu_op;
    wire [1:0]  alu_shifter_op;
    wire [1:0]  alu_compare_op;
    wire [63:0] alu_data1;
    wire [63:0] alu_data2;

    wire is_load;
    wire is_store;

    minirv_decode minirv_decode_inst(
        .is_load_inst           (is_load),
        .is_store_inst          (is_store),
        .mem_addr_byte_slack    (mem_addr_byte_slack),
        .inst                   (inst),
        .clk                    (clk),
        .pc                     (pc),
        .alu_result             (alu_result),
        .alu_zero               (alu_zero),
        .alu_zero_set           (alu_zero_set),
        .registerfile_read_data1(registerfile_read_data1),
        .registerfile_read_data2(registerfile_read_data2),
        .mem_read_data_nomask   (mem_read_data_nomask),
        .csr_read_data          (csr_read_data),
        .csr_pc_change_request  (csr_pc_change_request),
        .csr_target_pc          (csr_target_pc),
        .pc_plus4               (pc_plus4),
        .rs1                    (rs1),
        .csr_addr               (csr_addr),
        .csr_zimm               (csr_zimm),
        .mem_read_enable        (mem_read_enable),
        .invalid_inst           (invalid_inst),
        .mem_write_enable       (mem_write_enable),
        .mem_write_mask         (mem_write_mask),
        .mem_addr_read_unalign  (mem_addr_read_unalign),
        .mem_addr_write_unalign (mem_addr_write_unalign),
        .csr_op                 (csr_op),
        .registerfile_write_rd  (registerfile_write_rd),
        .registerfile_write_enable(registerfile_write_enable),
        .registerfile_read_rs1  (registerfile_read_rs1),
        .registerfile_read_rs2  (registerfile_read_rs2),
        .registerfile_write_data(registerfile_write_data),
        .alu_op                 (alu_op),
        .alu_shifter_op         (alu_shifter_op),
        .alu_compare_op         (alu_compare_op),
        .alu_data1              (alu_data1),
        .alu_data2              (alu_data2),
        .pc_branch              (pc_branch),
        .pc_branch_target       (pc_branch_target)
    );

    ControlStatusRegister u_ControlStatusRegister(
        .clk                   (clk),
        .rst                   (rst),
        .en                    (global_en),
        .csr_addr              (csr_addr),
        .rs1_value             (registerfile_read_data1),
        .trap_pc               (pc),
        .rs1                   (rs1),
        .csr_zimm              (csr_zimm),
        .csr_op                (csr_op),
        .csr_pc_change_request (csr_pc_change_request),
        .csr_target_pc         (csr_target_pc),
        .csr_read_data         (csr_read_data)
    );

    assign develop_put = {31'b0, invalid_inst};
    assign mem_addr_nowordalign = alu_result[31:0];
    assign mem_addr_word_aligned = mem_addr_nowordalign & (~32'd3);
    assign mem_addr_byte_slack = mem_addr_nowordalign[1:0];
    // AXI WDATA follows the same byte lane selected by WSTRB.
    assign mem_write_data = registerfile_read_data2 << {mem_addr_byte_slack, 3'b000};

    alu minirv_alu(
        .opcode      (alu_op),
        .data1       (alu_data1),
        .data2       (alu_data2),
        .imm         (inst[31:20]),
        .shifter_op  (alu_shifter_op),
        .compare_op  (alu_compare_op),
        .result      (alu_result),
        .sub_carry   (alu_sub_carry),
        .overflow    (alu_overflow),
        .zero        (alu_zero),
        .zero_set    (alu_zero_set),
        .cout        (alu_cout)
    );

    registerfile minirv_registerfile(
        .clk          (clk),
        .rst          (rst),
        .en           (global_en),
        .write_rd     (registerfile_write_rd),
        .write_enable (registerfile_write_enable),
        .read_rs1     (registerfile_read_rs1),
        .read_rs2     (registerfile_read_rs2),
        .write_data   (registerfile_write_data),
        .read_data1   (registerfile_read_data1),
        .read_data2   (registerfile_read_data2)
    );

endmodule
