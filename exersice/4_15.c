/*This progarm adds two integres read from the keyboard and prints the r
results.
 Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/26/2022
*/
#include<stdio.h>
//Fuction Declarations
void getData (int * a, int * b);
int add (int  a, int  b);
void printRes (int  a, int  b, int sum);

int main(void){
    // Local Declarations
    int a;
    int b;
    int sum = 0;

    //Statements
    getData (&a, &b);

    sum = add (a, b);
    printRes (a, b, sum);
    return 0;
    //main
    

}
void getData (int * a, int * b){
    printf("Please enter two integer numbers:  ");
    scanf("%d %d", a, b);
    return;

}
int add (int a, int b){
    int sum;
    sum = a + b;
    return sum;

}// add

void printRes (int  a, int  b, int sum){

    printf("%4d + %4d = %4d\n", a, b, sum);

    return; //Statements
   
}
//printRes


