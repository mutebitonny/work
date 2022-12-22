#include<stdio.h>
int main(){
    int a,b;
    a = b =2;
    sum1 = a + (++b);
    printf(" sum1 = %d", sum1);
    sum2 = a + (b++);

    printf(" sum1 = %d", sum1);


    }