/*This program generates a random series in the range 10 to 20
 Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/26/2022
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){

    // Local Declarations
    int range;

    //Statements
    srand(time(NULL));
    range = (20 - 10) + 1;
    printf("%d", rand() % range + 10);
    printf(" %d", rand() % range + 10);
    printf("  %d\n", rand() % range + 10);

    return 0;

    //main




}
