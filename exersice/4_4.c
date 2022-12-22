/*This progaram prints the first digits of an integer
read from the keyboard
Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/26/2022
*/

#include <stdio.h>

//Function Declarations
int firstDigit (int  num);

int main(){
    //Local Declarations
    int number;
    int digit;

     //statements
     printf("Enter an integer: ");
     scanf("%d", &number);

     digit = firstDigit (number);
     printf("\nLeast significant digit is: %d\n", digit);

     return 0;
     //main

}

int firstDigit (int num){
    //Statements
    return(num % 10);
    
}