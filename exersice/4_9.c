/*Demonstrates the use of the time function to generate
a temporal random number series.
Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/26/2022
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
    //Statements
    srand(time(NULL)); //seed temporally
    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("%d\n", rand());
    return 0; 
    // main
    
}