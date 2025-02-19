//in c variables store data in memory 
//The way we declare, initialize, and manage variables affects memory efficiency, program speed, and correctness
// declaration = > int num;  here int is data type and num is identifuer it only reserves memory doesn't give value 
//int num = 10;  // Declaration + Initialization
//multiple int a = 5, b = 10, c = 15;
//const variable cannot be modified after initiazation 
#include <stdio.h>

int main() {
    const float PI = 3.14159;  
    printf("Value of PI: %f\n", PI);

    PI = 3.14;  // ❌ ERROR! Cannot modify a constant
    return 0;
}
