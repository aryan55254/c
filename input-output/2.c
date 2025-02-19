//scanf takes input from the user 
#include <stdio.h>
int main(){
    int age;
    float height;

    printf("enter your age:");
    scanf("%d",&age);

    printf("enter your height: ");
    scanf("%f" , &height);

    printf("your age is %d and height is %.1f feet.\n",age , height);
    return 0;
}