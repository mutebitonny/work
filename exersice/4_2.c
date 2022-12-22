/*This program demonstrates that one function 
can be called multiple times
Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/26/2022

*/

#include<stdio.h>

 //Function Declarations
 void printOne (int x);
 int main(void){

    //local Declarations
    int a;
     //Statements
     a = 5;
     printOne (a);    //first call

     a = 33;
     printOne (a);  //second call

       return 0;
    
    //main 
      
 }

void printOne (int x)
{
   //Statements
   printf("%d\n", x);
   return;
}
//printOne
