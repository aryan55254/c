//macros issue
#define SQUARE(x) x * x

int main() {
    printf("%d\n", SQUARE(5 + 1));  // Output: 11 (WRONG!)
    return 0;
}
//why => 5 + 1 * 5 + 1  // = 5 + 5 + 1 = 11 (wrong)
//fic #define SQUARE(x) ((x) * (x))
