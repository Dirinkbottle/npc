
module adder_64 (
    input wire [63:0] add1,
    input wire [63:0] add2,
    input wire is_sub,
    output wire [63:0] sum,
    // 做减法时是否借位
    output wire sub_carry,
    // 溢出语义为超出 数据位宽的有符号补码所能表示的最大范围 这里为64位 [-2^63  2^63-1]
    output wire overflow,
    // 输出0标志位
    output wire zero,
    output wire cout
);
    wire [63:0] real_add1;
    wire [63:0] real_add2;
    assign real_add1 = add1;
    assign real_add2 = is_sub ? ~add2 : add2;

    wire [1:0] cout_pair;


    cla_64 u_cla_64(
        .a    (real_add1    ),
        .b    (real_add2    ),
        .cin  (/*补码+1*/is_sub  ),
        .sum  (sum  ),
        .cout (cout_pair ),
        .sub_carry(sub_carry),
        .zero(zero)
    );

    // 计算补码加法溢出
    // 溢出 = 最高位进位 ^ 次高位进位
    // 次高位进位
    assign overflow = cout_pair[1] ^ cout_pair[0];
    // 向最高位进位
    assign cout = cout_pair[0];
endmodule

module compare (
    input wire [63:0] adder_sum_compare,
    input wire [1:0] compare_op,
    input wire sub_carry_compare,
    input wire overflow_compare,
    output wire result
);
    localparam SLT = 2'd0 ;
    localparam SLTI = 2'd1 ;
    localparam SLTU = 2'd2 ;
    localparam SLTIU = 2'd3 ;
    MuxWithDefault 
    #(
        .NR(4),
        .KEY_LEN(2) ,
        .VALUE_LEN(1)
    ) u_MuxWithDefault_compare (
        .key (compare_op ),
        .lut ({
            SLT,adder_sum_compare[63] ^ overflow_compare,
            SLTI,adder_sum_compare[63] ^ overflow_compare,
            SLTU,sub_carry_compare,
            SLTIU,sub_carry_compare
        } ),
        .out (result ),
        .default_out(1'b0)
    );



endmodule

module shifter (
    input wire [63:0] source_data,
    input wire [5:0] shift,
    input wire [1:0] op,
    output wire [63:0] result
);
// sllu/sll/srlu/srl 移位指令

    reg [63:0] real_shift_source;
    wire [63:0] s0;
    wire [63:0] s1;
    wire [63:0] s2;
    wire [63:0] s3;
    wire [63:0] s4;
    wire [63:0] s5;

    localparam SLL = 2'd0;
    localparam SRL = 2'd1;
    localparam SRA = 2'd2;


    wire sign_extention;
    wire padding;
    assign padding = source_data[63] & sign_extention;
    
    assign sign_extention = op == SRA;


    wire right_direction;
    assign right_direction = (op==SRA) || (op==SRL);

    integer i;
    always @(*) begin
        if (~right_direction) begin
            for ( i= 0;i<64 ; i=i+1) begin
            real_shift_source[63-i] = source_data[i];
            end
        end else begin
            real_shift_source = source_data;
        end
    end

    assign s0 = shift[0] ? {{1{padding}},real_shift_source[63:1] } : real_shift_source;
    assign s1 = shift[1] ? {{2{padding}},s0[63:2] } : s0;
    assign s2 = shift[2] ? {{4{padding}},s1[63:4] } : s1;
    assign s3 = shift[3] ? {{8{padding}},s2[63:8] } : s2;
    assign s4 = shift[4] ? {{16{padding}},s3[63:16] } : s3;
    assign s5 = shift[5] ? {{32{padding}},s4[63:32] } : s4;

    reg [63:0] tmp_shift_result;
    integer j;
    always @(*) begin
        if (~right_direction) begin
            for ( j= 0;j<64 ; j=j+1) begin
              tmp_shift_result[63-j] = s5[j];
            end
        end else begin
            tmp_shift_result= s5;
        end
    end

    assign result = tmp_shift_result;
endmodule


module bitwise_xor (
    input wire [63:0] data1,
    input wire [63:0] data2,
    output wire [63:0] out
);
    assign out = data1 ^ data2;
endmodule
module bitwise_or (
    input wire [63:0] data1,
    input wire [63:0] data2,
    output wire [63:0] out
);
    assign out = data1 | data2;
endmodule
module bitwise_and (
    input wire [63:0] data1,
    input wire [63:0] data2,
    output wire [63:0] out
);
    assign out = data1 & data2;
endmodule
module bitwise_reverse (
    input wire [63:0] data1,
    output wire [63:0] out
);
    assign out = ~data1;
endmodule


module alu (
    input wire [7:0] opcode,
    input wire [63:0] data1,
    input wire [63:0] data2,
    input wire [11:0] imm,
    // 后期把op合并
    input wire [1:0] shifter_op,
    input wire [1:0] compare_op,
    output wire [63:0] result,
    output wire sub_carry,
    output wire overflow,
    // 目前仅代表adder的结果
    output wire zero,
    // 比较结果置位：比较条件成立时为 1，供 SLT/BLT/BGE 等使用
    output wire zero_set,
    // 表示最高位是否进位 
    output wire cout
);


    wire do_sub;
    wire [63:0] adder_sum;
    wire [63:0] shifter_out;
    wire [63:0] xor_out;
    wire [63:0] or_out;
    wire [63:0] and_out;
    wire [63:0] reverse_out;

    localparam ADD = 8'd0;
    localparam SUB = 8'd1;
    localparam SHIFT = 8'd2;
    localparam COMPARE =8'd3 ;
    localparam XOR_OP = 8'd4;
    localparam OR_OP = 8'd5;
    localparam AND_OP = 8'd6;
    localparam REVERSE = 8'd7;

    localparam ADD_SUB_ZERO = 2'b0;


    // 比较器操作数op
    localparam SLT = 2'd0 ;
    localparam SLTI = 2'd1 ;
    localparam SLTU = 2'd2 ;
    localparam SLTIU = 2'd3 ;


    assign do_sub = (opcode == SUB);

    wire [63:0] adder_input_data1;
    wire [63:0] adder_input_data2;
    wire adder_do_sub;
    wire adder_overflow;

    assign overflow = adder_overflow;

    // 加法器操作数1
    MuxWithDefault 
    #(
        .NR(3),
        .KEY_LEN(8) ,
        .VALUE_LEN(64)
    ) u_MuxWithDefault_adder_input1_mux (
        .key (opcode ),
        .lut ({
            ADD,data1,
            SUB,data1,
            COMPARE,data1
        } ),
        .out (adder_input_data1 ),
        .default_out(64'b0)
    );

    wire [63:0] compare_real_data2;
 
 
    // 比较器的真实第二个操作数选择
    MuxWithDefault 
    #(
        .NR(4),
        .KEY_LEN(2) ,
        .VALUE_LEN(64)
    ) u_MuxWithDefault_compare2 (
        .key (compare_op ),
        .lut ({
            SLT,data2,
            SLTI,{{52{imm[11]}},imm},
            SLTU,data2,
            SLTIU,{{52{imm[11]}},imm}
        } ),
        .out (compare_real_data2 ),
        .default_out(64'b0)
    );

    // 加法器操作数2
    MuxWithDefault 
    #(
        .NR(3),
        .KEY_LEN(8) ,
        .VALUE_LEN(64)
    ) u_MuxWithDefault_adder_input2_mux (
        .key (opcode ),
        .lut ({
            ADD,data2,
            SUB,data2,
            COMPARE,compare_real_data2
        } ),
        .out (adder_input_data2 ),
        .default_out(64'b0)
    );

    // 加法器是否做减法
    MuxWithDefault 
    #(
        .NR(3),
        .KEY_LEN(8) ,
        .VALUE_LEN(1)
    ) u_MuxWithDefault_adder_do_sub (
        .key (opcode ),
        .lut ({
            ADD,1'b0,
            SUB,1'b1,
            COMPARE,1'b1
        } ),
        .out (adder_do_sub ),
        .default_out(1'b0)
    );


    adder_64 u_adder_64(
        .add1     (adder_input_data1     ),
        .add2     (adder_input_data2     ),
        .is_sub   (adder_do_sub   ),
        .sum      (adder_sum      ),
        .overflow (adder_overflow ),
        .sub_carry(sub_carry),
        .zero(zero),
        .cout(cout)
    );


    shifter u_shifter(
        .source_data (data1 ),
        // RV32I寄存器移位只使用rs2的低5位；最高位补0以适配64位移位器接口。
        .shift       ({1'b0, data2[4:0]}),
        .op          (shifter_op          ),
        .result     (shifter_out     )
    );

    bitwise_xor u_bitwise_xor(
        .data1(data1),
        .data2(data2),
        .out(xor_out)
    );

    bitwise_or u_bitwise_or(
        .data1(data1),
        .data2(data2),
        .out(or_out)
    );

    bitwise_and u_bitwise_and(
        .data1(data1),
        .data2(data2),
        .out(and_out)
    );

    bitwise_reverse u_bitwise_reverse(
        .data1(data1),
        .out(reverse_out)
    );
        
    compare u_compare(
        .adder_sum_compare (adder_sum ),
        .compare_op        (compare_op        ),
        .sub_carry_compare (sub_carry ),
        .overflow_compare  (adder_overflow  ),
        .result            (zero_set            )
    );

    

    MuxWithDefault 
    #(
        .NR(8),
        .KEY_LEN(8) ,
        .VALUE_LEN(64)
    ) u_MuxWithDefault (
        .key (opcode ),
        .lut ({
            ADD,adder_sum,
            SUB,adder_sum,
            SHIFT,shifter_out,
            // 比较器结果写入bit 0，供SLT/SLTU写回rd。
            COMPARE,{{63{1'b0}}, zero_set},
            XOR_OP,xor_out,
            OR_OP,or_out,
            AND_OP,and_out,
            REVERSE,reverse_out
        } ),
        .out (result ),
        .default_out(64'b0)
    );
    
    
    
endmodule
