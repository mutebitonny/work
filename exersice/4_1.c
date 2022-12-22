/*This program demonstrates function calls by calling a small
function to multiply two numbers
Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/26/2022

*/
#include<stdio.h>


       //Function Declarations
       int multiply (int num1, int num2);
int main(void){


        //local Declarations
        int multiplier;
        int multiplicand;
        int product;



            //Statements
            printf("Enter two integers: ");
            scanf("%d%d", &multiplier, &multiplicand);
            product = multiply (multiplier, multiplicand);

            printf("Product of %d & %d is %d\n", multiplier, multiplicand, product);


            
       return 0;
    
    //main 
      
}

int multiply (int num1, int num2){
    //Statements

    return (num1 * num2);
    
}
