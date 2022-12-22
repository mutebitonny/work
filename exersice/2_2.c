/* This program calculates and prints thesum of three numbers input by the user at the keyboard
Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/24/2022

*/
#include<stdio.h>
int main (void){
    //Local definiions
    int a;
    int b;
    int c;
    int sum;


     //Statements

     printf("\nWelcome.This program adds\n");
     printf("three numbers.Enter three numbers\n");
     printf("in the form: nnn nnn nnn <return>\n");

     scanf("%d %d %d", &a, &b, &c);

     //Numbers are now in a,b and c.And we  add them
     sum = a + b + c;

     printf("The total is: %d\n\n", sum);
     printf("Thank you. Have a good day.\n");

     return 0;



      //main

}