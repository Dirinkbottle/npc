module cla_64 (
    input wire[63:0] a,
    input wire[63:0] b,
    input wire cin,

    output wire[63:0] sum,
    output wire[1:0] cout,
    // 减法时是否借位.  不是减法时默认为0
    output wire sub_carry,
    // 输出0标志位
    output wire zero
);
    wire [63:0] P;
    wire [63:0] G;
    assign P = a ^b;
    assign G = a &b;
    wire [4:0] tmp_cin;
    wire [63:0] tmp_cout;

    wire [3:0] PG;
    wire [3:0] GG;

    wire [15:0] TMP_PG;
    wire [15:0] TMP_GG;

    assign tmp_cin[0] = cin;


    assign PG[0] = TMP_PG[0] & TMP_PG[1] & TMP_PG[2]& TMP_PG[3];    
    assign PG[1] = TMP_PG[4] & TMP_PG[5] & TMP_PG[6]& TMP_PG[7];
    assign PG[2] = TMP_PG[8] & TMP_PG[9] & TMP_PG[10]& TMP_PG[11];
    assign PG[3] = TMP_PG[12] & TMP_PG[13] & TMP_PG[14]& TMP_PG[15];

    assign GG[0] = TMP_GG[3] |( (TMP_GG[2] & TMP_PG[3]) | (TMP_GG[1]& TMP_PG[2] & TMP_PG[3])| (TMP_GG[0]& TMP_PG[1]& TMP_PG[2] & TMP_PG[3]) );
    assign GG[1] = TMP_GG[7] |( (TMP_GG[6] & TMP_PG[7]) | (TMP_GG[5]& TMP_PG[6] & TMP_PG[7])| (TMP_GG[4]& TMP_PG[5]& TMP_PG[6] & TMP_PG[7]) ); 
    assign GG[2] = TMP_GG[11] |( (TMP_GG[10] & TMP_PG[11]) | (TMP_GG[9]& TMP_PG[10] & TMP_PG[11])| (TMP_GG[8]& TMP_PG[9]& TMP_PG[10] & TMP_PG[11]) ); 
    assign GG[3] = TMP_GG[15] |( (TMP_GG[14] & TMP_PG[15]) | (TMP_GG[13]& TMP_PG[14] & TMP_PG[15])| (TMP_GG[12]& TMP_PG[13]& TMP_PG[14] & TMP_PG[15]) ); 

    assign tmp_cin[1] = GG[0] | (tmp_cin[0] & PG[0]);
    assign tmp_cin[2] = GG[1] | ((GG[0] | (tmp_cin[0] & PG[0])) & PG[1]);
    assign tmp_cin[3] = GG[2] | ((GG[1] | ((GG[0] | (tmp_cin[0] & PG[0])) & PG[1])) & PG[2]);
    assign tmp_cin[4] = GG[3] | ((GG[2] | ((GG[1] | ((GG[0] | (tmp_cin[0] & PG[0])) & PG[1])) & PG[2])) & PG[3]);


    cla_16 u_cla_16(
        .a    (a[15:0]    ),
        .b    (b[15:0]    ),
        .cin  ( tmp_cin[0] ),
        .sum  (sum[15:0]  ),
        .cout ( tmp_cout[15:0]),
        .OPG    (   TMP_PG[3:0] ),
        .OGG    (   TMP_GG[3:0] )
    );
    cla_16 u_cla_16_2(
        .a    (a[31:16]    ),
        .b    (b[31:16]    ),
        .cin  ( tmp_cin[1] ),
        .sum  (sum[31:16]  ),
        .cout (tmp_cout[31:16]),
        .OPG    (   TMP_PG[7:4] ),
        .OGG    (   TMP_GG[7:4] )
    );cla_16 u_cla_16_3(
        .a    (a[47:32]    ),
        .b    (b[47:32]    ),
        .cin  ( tmp_cin[2] ),
        .sum  (sum[47:32]  ),
        .cout ( tmp_cout[47:32]),
        .OPG    (   TMP_PG[11:8] ),
        .OGG    (   TMP_GG[11:8] )
    );cla_16 u_cla_16_4(
        .a    (a[63:48]    ),
        .b    (b[63:48]    ),
        .cin  (tmp_cin[3] ),
        .sum  (sum[63:48]  ),
        .cout ( tmp_cout[63:48]),
        .OPG    (   TMP_PG[15:12] ),
        .OGG    (   TMP_GG[15:12] )
    );
    // 正最大值 < -1：overflow=1；和=10000000000000...；错误符号=1
    // 1 < -1 得 2：overflow=0；错误符号=0（正确）
    // -1<1 得 -2：真符号=1（正确）
    assign zero = ~(|sum);
    assign cout = tmp_cout[63 -:2];

    // A-B（低 n 位）=(2^n + (A-B)) 取低 N 位。A>B 时 Cout_last=1 无借位；A<B 时 cout_last=1 有借位。翻译过来：不够减必然小于 2^n；如果 a>b 必然 >2^n 就必然有进位，cout=1 -> borrow=0 -> a 不小于 b
    // 减法是否借位；外部用 cin 表示是否做减法
    assign sub_carry = cin &  ~tmp_cout[63];
    
endmodule

module cla_4 (
    input wire[3:0] a,
    input wire[3:0] b,
    input wire cin,

    output wire[3:0] sum,
    output wire[3:0] cout,
    output wire[3:0] P,
    output wire[3:0] G
);
        assign P = a ^b;
        assign G = a &b;
        wire [4:0] tmp_cout;

        assign tmp_cout[0] = cin;

        assign tmp_cout[1] = G[0] | (tmp_cout[0] & P[0]);
        assign tmp_cout[2] = G[1] | ((G[0] | (tmp_cout[0] & P[0])) & P[1]);
        assign tmp_cout[3] = G[2] | ((G[1] | ((G[0] | (tmp_cout[0] & P[0])) & P[1])) & P[2]);
        assign tmp_cout[4] = G[3] | ((G[2] | ((G[1] | ((G[0] | (tmp_cout[0] & P[0])) & P[1])) & P[2])) & P[3]);

        assign sum = P ^ tmp_cout[3:0];
        assign cout = tmp_cout[4:1];
endmodule

module cla_16 (
    input wire[15:0] a,
    input wire[15:0] b,
    input wire cin,

    output wire[15:0] sum,
    output wire [15:0] cout,
    output wire[3:0] OPG,
    output wire[3:0] OGG
);
    wire [15:0] P;
    wire [15:0] G;
    assign P = a ^ b;
    assign G = a & b;


    wire[15:0] TMP_P;
    wire[15:0] TMP_G;

    wire [3:0] GG;
    wire [3:0] PG;

    // 名字叫cout吧
    wire [4:0] tmp_cout;
    wire [15:0] cla_tmp_cout;
    assign tmp_cout[0] = cin;
    // 第一个cla的进位
    assign PG[0] = TMP_P[0] & TMP_P[1] & TMP_P[2]& TMP_P[3];
    assign PG[1] = TMP_P[4] & TMP_P[5] & TMP_P[6]& TMP_P[7];
    assign PG[2] = TMP_P[8] & TMP_P[9] & TMP_P[10]& TMP_P[11];
    assign PG[3] = TMP_P[12] & TMP_P[13] & TMP_P[14]& TMP_P[15];

    assign GG[0] = G[3] |( (G[2] & P[3]) | (G[1]& P[2] & P[3])| (G[0]& P[1]& P[2] & P[3]) );
    assign GG[1] = G[7] |( (G[6] & P[7]) | (G[5]& P[6] & P[7])| (G[4]& P[5]& P[6] & P[7]) ); 
    assign GG[2] = G[11] |( (G[10] & P[11]) | (G[9]& P[10] & P[11])| (G[8]& P[9]& P[10] & P[11]) ); 
    assign GG[3] = G[15] |( (G[14] & P[15]) | (G[13]& P[14] & P[15])| (G[12]& P[13]& P[14] & P[15]) ); 

    assign tmp_cout[1] = GG[0] | ((tmp_cout[0]) & PG[0]);
    assign tmp_cout[2] = GG[1] | ( (GG[0] | ((tmp_cout[0]) & PG[0])) & PG[1]);
    assign tmp_cout[3] = GG[2] | ((GG[1] | ( (GG[0] | ((tmp_cout[0]) & PG[0])) & PG[1])) & PG[2]);
    assign tmp_cout[4] = GG[3] | ((GG[2] | ((GG[1] | ( (GG[0] | ((tmp_cout[0]) & PG[0])) & PG[1])) & PG[2])) & PG[3]);




    cla_4 u_cla_4(
        .a    (a[3:0]    ),
        .b    (b[3:0]    ),
        .cin  (tmp_cout[0]  ),
        .sum  (sum[3:0]  ),
        .cout (cla_tmp_cout[3:0] ),
        .P    (TMP_P[3:0]    ),
        .G    (TMP_G[3:0]    )
    );

    cla_4 u_cla_4_2(
        .a    (a[7:4]    ),
        .b    (b[7:4]    ),
        .cin  (tmp_cout[1]  ),
        .sum  (sum[7:4]  ),
        .cout (cla_tmp_cout[7:4] ),
        .P    (TMP_P[7:4]    ),
        .G    (TMP_G[7:4]    )
    );
    cla_4 u_cla_4_3(
        .a    (a[11:8]    ),
        .b    (b[11:8]    ),
        .cin  (tmp_cout[2]  ),
        .sum  (sum[11:8]  ),
        .cout (cla_tmp_cout[11:8] ),
        .P    (TMP_P[11:8]    ),
        .G    (TMP_G[11:8]    )
    );
    cla_4 u_cla_4_4(
        .a    (a[15:12]    ),
        .b    (b[15:12]    ),
        .cin  (tmp_cout[3]  ),
        .sum  (sum[15:12]  ),
        .cout (cla_tmp_cout[15:12] ),
        .P    (TMP_P[15:12]    ),
        .G    (TMP_G[15:12]    )
    );
    assign OPG = PG;
    assign OGG = GG;
    assign cout = cla_tmp_cout;
    
endmodule



