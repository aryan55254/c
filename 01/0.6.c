#include <stdio.h>
#include <stdbool.h>//for using booleans
int main(){
    int x = 5;
    int y = 8;
    float sum = (float) x/y;//type conversion
    printf("%.12f\n",sum);
    double add = (double) x + y;
    printf("%.0lf",add);
    return 0;
}
//implicit done by compiler automatically like when u assign int value to a float identifier it convt to floata utomatically 
//explicit is one in which we have to use certain stuff like ()
//booleans return as 1/0 so use %d
