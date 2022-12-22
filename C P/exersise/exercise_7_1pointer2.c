/*This program  is about pointer 
refer to execrise 7.1 */

#include<stdio.h>
void swap(int *a, int *b);
int main(){
    int a, b;
     a = 5;
     b = 10;


     printf("\nBefore swapping a = %d: b = %d", a,b);
     swap(&a, &b);
     printf("\nAfter swapping a = %d: b = %d", a, b);

     return 0;
}

void swap(int *a, int *b){
    int x;
    x = *b;
    *b = *a;
    *a = x;
    
}