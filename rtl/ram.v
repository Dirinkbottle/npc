module ram (
    input wire clk,
    input wire rst,
    input wire [7:0] addr,
    input wire [7:0] byte_mask,
    input wire write_enable,
    input wire [31:0] write_data,
    output wire [31:0] read_data1
);
    reg [31:0] storage_file [256];
    wire [31:0] real_mask = {{4{byte_mask[7]}},
                            {4{byte_mask[6]}},
                            {4{byte_mask[5]}},
                            {4{byte_mask[4]}},
                            {4{byte_mask[3]}},
                            {4{byte_mask[2]}},
                            {4{byte_mask[1]}},
                            {4{byte_mask[0]}}
                            };

    always @(posedge clk) begin
        if (rst) begin
            integer i;
            for (i = 0;i<256 ;i=i+1 ) begin
                storage_file[i]<=32'b0;
            end
        end else begin
            if (write_enable) begin
                storage_file[addr] <= (storage_file[addr] & (~real_mask)) 
                                      | (write_data & real_mask);
            end
        end
    end


    assign read_data1 = storage_file[addr];


endmodule