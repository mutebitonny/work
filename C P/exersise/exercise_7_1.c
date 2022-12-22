/*This program deals with swapping*/

#include<stdio.h>
void swap1(int x, int y);
void swap2(int x);
int a;

int main(){

    int b,c;
    a = 5; 
    b = 10;
    c = 15;
    printf("\nValue before 1st function a = %d, b = %d, c = %d", a, b, c);
    swap1(b,c);

    printf("\nValue after 1st function a = %d, b = %d, c = %d", a, b, c);
    swap2(b);

    printf("\nValue before 2nd function a = %d, b = %d, c = %d", a, b, c);
    printf("\nTest");
    return 0;

}

void swap1(int x, int y){
    int z;
    z = x;
    x = y;
    y = z;
}

void swap2(int x){
    int z;
    z = x;
    x = a;
    a = z;

}