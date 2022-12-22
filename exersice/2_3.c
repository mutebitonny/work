/* This program demontrates three ways to use constants.

Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/24/2022


*/

#include<stdio.h>
#define PI 3.1415926536

int main (void){
    //Local definiions
    const double cPi = PI;


    //Statements
    printf("Define constant PI: %f\n", PI);
    printf("Memory constant cpi: %f\n", PI);
    printf("Literal constant: %f\n", 3.1415926536);

    return 0;
    
    //main


}
