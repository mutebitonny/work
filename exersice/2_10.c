/* Demonstrates complex number arithmetic.
Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/24/2022
*/

#include <stdio.h>
#include<math.h>
#include<complex.h>
int main (void){
    //Local Declarations

    double complex x = 3 + 4 * I;
    double complex y = 3 - 4 * I;
    double complex sum;
    double complex dif;
    double complex mul;
    double complex div;

      //Statements

      sum = x + y;
      dif = x - y;
      mul = x * y;
      div = x / y;

      printf("%f %f %f %f\n", creal(sum), cimag(sum), cabs(sum), carg(sum));
      printf("%f %f %f %f\n", creal(dif), cimag(dif), cabs(dif), carg(dif));
      printf("%f %f %f %f\n", creal(mul), cimag(mul), cabs(mul), carg(mul));
      printf("%f %f %f %f\n", creal(div), cimag(div), cabs(div), carg(div));

      return 0;
    
    //main




     


}
