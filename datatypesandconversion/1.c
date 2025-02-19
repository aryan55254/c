//c is statically typed lang meaning every vairable mush have a declared type 
//primitive 
//char 1 byte -128 to 128 signed - to 255 unsigned 
//int 4bytes 
//float 4bytes 
//double 8 bytes 
//short int 2 bytes 
//long int 4/8 bytes 
//unsigned int 4 bytes starts from 0 
//long double 16 bytes 
//type conversion 
//implicit 
//automatic type promotion by compiler 
//happens when smaller data type is assigned to larger compiler promotes without losing data 
//char -> int -> float -> double
#include <stdio.h>
int main () {
    int num = 10;
    float result = num + 5.5 ;//int is promoted to float automatically
    printf("result %.2f \n", result);
    return 0 ;
}