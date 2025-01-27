//A translation unit is a file containing source code, header files and other dependencies. All of these sources are grouped together to form a single translation unit which can then be used by the compiler to produce one single executable object.
//Linkage is a property that describes how variables should be linked by the linker.
//internal linkage is not accesable outside translation unit it is used when u want to restrict access to variables or functions 
//external linkage when u waant to share variables or functions across multiple files 
//external 
#include <stdio.h>
int x = 10 ;
int main(){
    prinf("x in 04.c = %d\n" , x);
}