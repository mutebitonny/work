/* calculate and print quoteint and  remainder of two numbers. 
written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/24/2022
*/
#include<stdio.h>
int main(void){
    //local Declaration
    int intNum1;
     int intNum2;
     int intCalc;


     //Statements
     printf("Enter two Entegral numbers:  ");
     scanf("%d %d ", &intNum1, &intNum2);

     intCalc = intNum1 / intNum2;
     printf("%d /%d is %d ", intNum1, intNum2, intCalc);

     intCalc = intNum1 % intNum2;
     printf(" with a remainder of : %d\n", intCalc);

     return 0;

     //main
}