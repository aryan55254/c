//explicit type casting 
//(data type) value
#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float result = (float)a / b;  // Explicitly convert a to float

    printf("Correct Result: %.2f\n", result); // Output: 2.50

    return 0;
}
