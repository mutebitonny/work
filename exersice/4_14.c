/* This progarm adds two integers read from the keyboard and prints the
results.
 Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/26/2022
*/
#include<stdio.h>
//Fuction Declarations
void getData (int * a, int * b);
int add (int  a, int  b);

int main(void){
    // Local Declarations
    int a;
    int b;
    int sum;


    //Statements

      getData (&a, &b);

      sum = add (a, b);

    printf("**main: a = %d + %d = %d\n", a, b, sum);
      return 0;
      //main

}

void getData (int * a, int * b){
    printf("Please enter two integer numbers: ");
    scanf("%d %d", a, b);

    printf("**getData: a = %d; b = %d\n", *a, *b);
    return;
    //getData
}

int add (int a, int b){
    //Local Definitions
    int sum;

    //Statements
    sum = a + b;
    printf("**add: %d + %d = %d\n", a, b, sum);
    return sum;
    //add
}