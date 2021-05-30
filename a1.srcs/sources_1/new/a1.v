`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2021/05/30 16:38:57
// Design Name: 
// Module Name: a1
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


module a1(
    input a,
    input b,
    input c,
    output z
    );
    assign z = a^b^c;
    //assign z[4] = a^b^c;
    //assign z[3] = a^b^c;
   // assign z[2] = a^b^c;
   // assign z[1] = a^b^c;
    //assign z[0] = a^b^c;
endmodule
