// C Program to demonstrate use of bitwise operators
#include <stdio.h>
int main()
{       
    // a = 5(00000101), b = 9(00001001)
    unsigned char a = 5, b = 9;
    
    // Bitwise AND :The result is 00000001
    printf("a = %d, b = %d\n", a, b);
    printf("a&b = %d\n", a & b);
 
    // Bitwise OR :The result is 00001101
    printf("a|b = %d\n", a | b);
 
    // Bitwise XOR The result is 00001100
    printf("a^b = %d\n", a ^ b);
 
    // Bitwise NOT The result is 11111010
    printf("~a = %d\n", a = ~a);
 
    //Left Shift The result is 00010010
    printf("b<<1 = %d\n", b << 1);
 
    //Right Shift The result is 00000100
    printf("b>>1 = %d\n", b >> 1);
 
    return 0;
}
/*
The & (bitwise AND) in C  takes two numbers as operands and does 
AND on every bit of two numbers. The result of AND is 1 only if both bits are 1. 
 
The | (bitwise OR) in C  takes two numbers as operands and does 
OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1. 
 
The ^ (bitwise XOR) in C  takes two numbers as operands and does 
XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different. 
 
The << (left shift) in C  takes two numbers, 
left shifts the bits of the first operand, the second operand decides 
the number of places to shift. 
 
The >> (right shift) in C  takes two numbers, 
right shifts the bits of the first operand, the second operand decides 
the number of places to shift. 
 
The ~ (bitwise NOT) in C  takes one number and inverts all bits of it 

*/
