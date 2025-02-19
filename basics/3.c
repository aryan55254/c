//compilation and execution process of c 
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
//the programmer writes source code 
//it goes to preprocessor it handles files like #include etc before actual compilation 
//it expands macros and stuff like #inlucde <stdio> are replaced with thier actual content 
//removes comment from code 
//output file is .i
//it goes to compiler then it converts it to assembly .s file 
//goes to assembler and it changes it to machine code to a .o file 
//goes to linker , linker takes one or more .o files links then to create executable file 
//output is given
//Preprocessing → Compilation → Assembly → Linking → Execution