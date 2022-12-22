/*This program calculates the area and circumference of a cirlcle using PI as defined contant
Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/24/2022

*/

#include<stdio.h>
int main (void){
    #define PI 3.1416
      //local Declarations

    float circ;
    float area;
    float radius;

     //Statements
     printf("\nPlease enter the value of the radius: ");
     scanf("%f", &radius);

     circ = 2 * PI *   radius;
     area = PI *   radius   *    radius;


     printf("\nRadius is:     %10.2f",  radius);
     printf("\nCircumference is:     %10.2f",  circ);
     printf("\nArea is:     %10.2f",  area);


    return 0;

     //main

}
