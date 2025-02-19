//#define for macros (preprocessor directives)
// the define derivative is sued to create macros which are constants or code shortcuts that get replaced before compilation 
#include <stdio.h>

#define PI 3.14159
#define MAX_SPEED 120

int main() {
    printf("Value of PI: %f\n", PI);
    printf("Max Speed: %d\n", MAX_SPEED);
    
    // PI = 3.14;  // ❌ ERROR! Macros cannot be changed

    return 0;
}
//#define no memory is allocated just a text replacement 
//no data type needed like const 
//can't be changed during execution 
