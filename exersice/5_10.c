/* This program demonstartrates the use of the character classification functions found in the c -type
library. Given a character, it displayed the highest classification 
for the character
Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/26/2022
*/

#include<stdio.h>
#include<ctype.h>
int main(void){
    //Local Declaration
    char charIn;

    //Statements
    printf("Enter a character to be examined: ");
    scanf("%c", &charIn);


    if(islower(charIn))
    printf("You have entered a lowercase letter.\n");
    else if (isupper(charIn))
            printf("You have entered an uppercase letter.\n");
    else if (isdigit(charIn))
        printf("You have entered a digit.\n");
    else if (ispunct(charIn))
        printf("You have entered a punctuation character.\n");
     else if (isspace(charIn))
       printf("You have entered a whitespace character.\n");
       else
         printf("You have entered a control character.\n");

         return 0;
         // main

}