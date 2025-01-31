//scope in c 
//in c all identifiers are lexically/statically scoped which means that where your variables can be accesed is determined at compile time not at run time 
//declare outside a function then global scope
//it can eb used in diff files using extern 
// filename: main.c
#include <stdio.h>

// Declare the external variable and function
extern int a;
void myfun();

int main(void)
{
    // Initialize the global variable
    a = 2;

    // Call the function to print the value of 'a'
    myfun();

    return 0;
}
//local scope means only inside {}
