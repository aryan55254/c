// auto have garbage values by default very unnecesaary its like any other variable its just older 
#include <stdio.h>
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
int printvalue(){
    auto int a = 10;
    printf("%d\n",a);//%d is a format specifier for integers %sfor strungs 
    return 0;
}
int sum(int x, int y) {
  int sum;
  sum = x + y;
  return sum;
}

int main(){
    printvalue();
    enum week day;
  day = Wed;
  printf("%d\n", day);
  int num1 = 10;
  int num2 = 20;
  printf("Sum: %d", 
          sum(num1, num2));
    return 0;
}
//continue and break break ends the loop continue takes it to the next iteration 
//switch case default this si bascially alternative if else switch allows us do check or do multiple operations which same variables with case 1 ,2 3 and default is that if none of the case are opted u do this 
// char to declare ch variable in single qoutes
// double is 15 decimal digits
//float has 7
//enum enumumeration is just list inside {} 
//extern used for file k bahar ka variable 
//goto used to trafer to a label snywhere to anywhere jump 
//short int = -32000 - 32000
//unsigned short int = 0 - 65000
//unsigned int = just +ve vaues 
//long = very long
//register tells compiled to store values in cpu instead of memory 
//static used for variables that can be accesed throughout the program 
//struct for structure , structure is a list of variables 
//type def changes the name of a datatype 
//union also stores user defined stuff 
//void means null 