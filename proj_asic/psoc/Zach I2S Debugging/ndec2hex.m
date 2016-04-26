function [hexstring]=ndec2hex(x)
% x : input decimal number
% n :   number of bits to perform 2's complements
n = 16;
% hexstring : hex representation of two's complement of x 
x=x + (x<0).*2^n; 
hexstring=dec2hex(x, ceil(n/4));