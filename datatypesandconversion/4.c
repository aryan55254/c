#include <stdio.h>

int main() {
    float pi = 3.14159;
    int truncatedPi = (int)pi;  // Explicitly convert float to int

    printf("Original Pi: %f\n", pi);       // Output: 3.14159
    printf("Truncated Pi: %d\n", truncatedPi);  // Output: 3

    return 0;
}
