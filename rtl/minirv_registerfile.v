module registerfile (
    input wire clk,
    input wire rst,
    input wire en,//总使能,不影响复位
    input wire [4:0] write_rd,
    input wire write_enable,
    input wire [4:0] read_rs1,
    input wire [4:0] read_rs2,
    input wire [31:0] write_data,
    output reg [31:0] read_data1,
    output reg [31:0] read_data2
);

    // 32个寄存器
    reg [31:0] register_file [31:0];

    // 读寄存器
    always @(*) begin
        read_data1 = register_file[read_rs1];
        read_data2 = register_file[read_rs2];
    end

    always @(posedge clk) begin

        if (rst) begin
            // 寄存器重置
            integer i;
            for (i = 0; i < 32; i = i + 1) begin
                register_file[i] <= 32'b0;
            end
        end else begin
            // 写寄存器
            if (write_enable & en) begin
                register_file[write_rd] <= write_data;
            end
        end
        register_file[0] <= 32'b0; // x0寄存器始终为0
    end


    
endmodule
