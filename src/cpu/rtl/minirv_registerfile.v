module registerfile (
    input wire clk,
    input wire rst,
    input wire [4:0] write_rd,
    input wire write_enable,
    input wire [4:0] read_rs1,
    input wire [4:0] read_rs2,
    input wire [31:0] write_data,
    output wire [31:0] read_data1,
    output wire [31:0] read_data2
);

    // 32个寄存器
    reg [31:0] registersfile [31:0];

    // 读寄存器
    assign read_data1 = registersfile[read_rs1];
    assign read_data2 = registersfile[read_rs2];

    always @(posedge clk) begin

        if (rst) begin
            // 寄存器重置
            integer i;
            for (i = 0; i < 32; i = i + 1) begin
                registersfile[i] <= 32'b0;
            end
        end else begin
            // 写寄存器
            if (write_enable) begin
                registersfile[write_rd] <= write_data;
            end
        end
        registersfile[0] <= 32'b0; // x0寄存器始终为0
    end


    
endmodule
