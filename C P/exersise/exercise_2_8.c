/* This program displays an answer which is correct to 2 decimal places*/

#include<stdio.h>
int main(){

    int a = 3;
    float b = 10.0;
    float c;
    c = b/a;
    printf("A is %d\n",a);
    printf("B is %d\n",b);
    printf("Answer is %.2f\n", c);

    return 0;
}