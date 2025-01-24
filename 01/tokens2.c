#include <stdio.h>
int main(){
    printf("hello world ");
    printf("hello world \n");//\n indicates a new line its a punctuator  
    printf("hello world ");
    int x = 5;//keyword int
    printf("%d",x);
    char str[]="hello world"; //string
    printf("%s" , str);
    int sum = 4 + 5 ;//operator and sum is a identifier
    printf("%d" , sum);
    const int x = 100;//constant 
    return 0;
}