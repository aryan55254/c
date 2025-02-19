//operators in c are symbols that perform operations on variables and values 
//no built in bool in c so 0 = false non 0 = true
//arithmetic operator 
//used for basic maths stuff 
// + add , - sub , * multiplication , / div % modulus gives remainder
#include <stdio.h>

int main() {
    int a = 10, b = 5;
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);

    return 0;
}
