//&& logical and 
// || logical or 
// ! logical not 
//logical opertors are used for bool logic
#include <stdio.h>

int main() {
    int a = 10, b = 5;
    printf("AND (a > 5 && b < 10): %d\n", (a > 5 && b < 10));
    printf("OR (a < 5 || b < 10): %d\n", (a < 5 || b < 10));
    printf("NOT !(a > 5): %d\n", !(a > 5));

    return 0;
}
