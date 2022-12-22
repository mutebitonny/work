/*Two-way selection.
 Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/26/2022
*/

#include<stdio.h>
int main(void){
//Fuction Declarations
int a;
int b;

// Statements
printf("Please enter two integers: ");
scanf("%d%d", &a, &b);

if( a <= b)
printf("%d <= %d\n", a, b);
else
printf("%d > %d\n", a, b);

return 0;
//main
}