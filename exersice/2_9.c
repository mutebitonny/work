/*
Print attributes of a complex number.
Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/24/2022
*/
#include <stdio.h>
#include<math.h>
#include<complex.h>
int main (void){
     //local Declarations
     double complex x = 4 + 4 * I;
     double complex xc;


       //Statements
       xc = conj(x);
       printf("%f %f %f %f\n", creal(x), cimag(x), cabs(x),carg(x));
       printf("%f %f %f %f\n", creal(xc), cimag(xc), cabs(xc),carg(xc));

       
    return 0;

     //main



}