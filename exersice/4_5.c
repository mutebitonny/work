/* This program extracts and adds the two leats signifiant
digits of an integer.
Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/26/2022
*/

#include <stdio.h>

//Function Declarations
int addTwoDigits (int num);
int firstDigit (int num);
int secondDigit (int num);

int main(){
    //Local Declarations

    int number;
    int sum;

         //statements
         printf("Enter an integer: ");
         scanf("%d", &number);

         sum = addTwoDigits (number);
         printf("\n Sum of last two digits is: %d", sum);

         return 0;
         //main
}

int addTwoDigits (int number){
    //Local Declarations
    int result;

     //statements
     result = firstDigit(number) + secondDigit(number);
     return result;

}

int firstDigit (int num)
{
    //Statements
    return (num % 10);

}
//firstDigit
int secondDigit (int num){
    //Local Declarations
    int result;;

    //Statements
    result = (num / 10) % 10;
    return  result;
}// SecondDigit

