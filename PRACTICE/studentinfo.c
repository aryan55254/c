#include <stdio.h>
int main () {
    printf("Welcome To Student Info Center \n");
    printf("Enter Your Name (max letters : 20) :");
    char Student [20] = "";
    scanf(" %[^\n]", Student);//this reads a line until enter is pressed , ^ means not so this reads read everything except a new line 
    printf("Enter Your Age :");
    int Age ;
    scanf ("%d" , &Age);//& needed for non string stuff
    printf("Enter Your GPA (upto 2 decimal places) :");
    float GPA ;
    scanf ("%f" , &GPA);//decimal space will be specified in printf not scan f 
    printf ("Name:%s\n" , Student);
    printf ("Age:%d\n" , Age);
    printf ("GPA: %.2f\n" , GPA);
    return 0;
}