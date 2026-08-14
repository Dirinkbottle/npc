module MuxWithDefault #(
    parameter   NR = 2,
    parameter   KEY_LEN = 2 ,
    parameter   VALUE_LEN = 32
)
(
    input wire [VALUE_LEN-1:0] default_out,
    input wire [KEY_LEN-1:0] key,
    input wire [NR*(KEY_LEN+VALUE_LEN)-1:0]lut,
    output reg [VALUE_LEN-1:0] out
);
    localparam PAIRLENS = KEY_LEN+VALUE_LEN ;
    integer i;
    always @(*) begin
        out = default_out;
        for ( i= 0;i<NR ;i=i+1 ) begin
            if (lut[i*PAIRLENS + VALUE_LEN+:KEY_LEN]==key) begin
                out = lut[i*PAIRLENS+:VALUE_LEN];
            end
        end
    end
endmodule
