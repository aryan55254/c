//integer division issue 
#include <stdio.h>
void division (){
    int a = 5 , b = 2;
    float result = (float)a / b ;
    printf("correct result %.2f \n" , result);
}
int main () {
    int a = 5 , b = 2;
    float result = a / b ;
    printf("wrong result %.2f \n" , result);
    division();
    return 0;
}
//since both a and b are integers divison result in int 