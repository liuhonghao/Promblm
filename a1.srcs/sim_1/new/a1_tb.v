`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2021/05/30 16:41:17
// Design Name: 
// Module Name: a1_tb
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////
`timescale 1 ns /1 ns
module a1_tb(
    );
    reg a,b,c;
    wire  z;
    a1 G2(.a(a),.b(b),.c(c),.z(z));
    initial begin
    a = 0;
    b = 0;
    c = 0;
    #100;
    end
    always begin
    #100 a = 0;
    #200 b = 0;
    #300 c = 0;
    #100 a = 1;
    #200 b = 1;
    #300 c = 1;
    end
endmodule
