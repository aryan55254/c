//printf is used to display output n the screen 
//printf()
#include <stdio.h>

int main() {
    int age = 25;
    float height = 5.8;
    
    printf("Age: %d years\n", age);       // %d for integers
    printf("Height: %.1f feet\n", height); // %f for floats (1 decimal place)
    
    return 0;
}
