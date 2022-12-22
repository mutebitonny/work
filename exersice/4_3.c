/*This program reads a number and prints its square.
Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/26/2022
*/

#include <stdio.h>

//Function Declarations

int getNum (void);

int sqr (int x);
void printOne( int x);

int main(void){
    //Local Declarations

    int a;
    int b;
    //statements

    //Get number and square it.
    a = getNum ();
    //square the number just read
    b = sqr(a);
    //Now print it 
    printOne(b);
    
    return 0;
    //main


    
}

int getNum (void){
        int numIn;
        printf("Enter a number to be squared: ");
        scanf("%d", &numIn);
        return numIn;
        
    }

    int sqr (int  x){
        return (x * x );

    }
    void printOne (int x){
        printf("The value is: %d\n", x);
        return;
        
    }