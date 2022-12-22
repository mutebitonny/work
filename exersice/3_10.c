/* Print rightmost digit of an integer.
Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/24/2022
*/
#include<stdio.h>
int main(void){

    //local declarations
   int  intNum;
    int oneDigit;

    //Statements
    printf("Enter an integral number: ");
    scanf("%d", &intNum);

    oneDigit = intNum % 10;
    printf("\n The right digit is %d", oneDigit);
    return 0;
    //main


}