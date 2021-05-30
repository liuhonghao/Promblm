`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2021/05/30 16:47:24
// Design Name: 
// Module Name: a1_top
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


module a1_top(
    input [2:0] sw,
    output  ld
    );
    a1 G2(.a(sw[2]),.b(sw[1]),.c(sw[0]),.z(ld));
endmodule
