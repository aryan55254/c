//ways to make const variables in cother than const keyword 
//macros 
//these are handled by preprocessors 
// C program to demonstrate the problems
// in 'Macros'
#include <stdio.h>

#define var 5
int main()
{
    printf("%d ", var);

#ifdef var
#undef var

// redefine var as 10
#define var 10
#endif

    printf("%d", var);
    return 0;
}
//not effective 
//enum can be used but it is for only for int datatype