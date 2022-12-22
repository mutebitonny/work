/* This program reads long intergers from the keyboard
and prints them with leding zeros in the form
123,456 with a comma between 3rd & 4th digit.
Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/26/2022
*/

#include <stdio.h>

//Function Declarations
void printWithComma (long num);

int main(){
    //Local Declarations

    long number;
     //statements
     printf("\nEnter a number with up to 6 digits: ");
     scanf("%ld", &number);

     printWithComma (number);
     return 0;
      //main

}

void printWithComma (long num)
{
     //Local Declarations
     int thousands;
     int hundreds;

      //statements
      thousands = num / 1000;
      hundreds = num % 1000;

      printf("\nThe number you entered is \t%03d, %03d", thousands, hundreds);
      return;


}//printWithComma