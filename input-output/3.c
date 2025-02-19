//multiple i/o with scanf();
#include <stdio.h>

int main() {
    int age;
    float height;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);  // Reads string (without spaces)

    printf("Enter your age and height: ");
    scanf("%d %f", &age, &height);

    printf("Name: %s, Age: %d, Height: %.2f feet\n", name, age, height);

    return 0;
}
//Unlike many modern languages, C does not have built-in type safety in printf() and scanf(). These functions operate in a generic way, meaning they do not automatically detect variable types.
//Different data types are stored differently in memory. If we don't specify the correct format specifier, the function may misinterpret the data.
// C functions do not know the types of arguments passed to them at runtime.
