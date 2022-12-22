/*This program generates  a random series in the range 0 to 1.
 Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/26/2022

*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){

     // Local Declarations
     float x;

      //Statements
      srand(time(NULL));
      x = (float)rand() / RAND_MAX;
      printf("%f", x);
         x = (float)rand() / RAND_MAX;
      printf(" %f", x);
      x = (float)rand() / RAND_MAX;
      printf("  %f\n", x);
      return 0;
      //main



}