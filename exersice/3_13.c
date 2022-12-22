/* Calculates the total sle given the unit price,
quantity, discount, and tax rate.

Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/26/2022
*/

#include<stdio.h>
#define TAX_RATE 8.50

int main (void){
     //local Declarations
     int quantity;

     float discountRate;
     float discountAm;
     float unittPrice;
     float subTotal;
     float subTaxable;
     float taxAm;
     float total;

       //Statements
       printf("\nEnter number of items sold:  ");
       scanf("%d", &quantity);

        printf("Enter number of unit price:  ");
       scanf("%f", &unittPrice);

        printf("Enter  the unit price:  ");
       scanf("%f", &unittPrice);

       printf("Enter  the dicount rate (per cent):  ");
       scanf("%f", &discountRate);

       subTotal = quantity * unittPrice;
       discountAm = subTotal * discountRate / 100.0;
       subTaxable = subTotal - discountAm;
       total = subTaxable + taxAm;

       printf("\nQuantity sold: %6d\n", quantity);
       printf("\nUnit Price of items: %9.2f\n", unittPrice);
       printf("                      ---------------\n");
       printf("Subtotal :             %9.2f\n", subTotal);
       printf("Discount :             -%9.2f\n", discountAm);
       printf("Discounted total :             -%9.2f\n", subTaxable);
       printf("Sales tax :             -%9.2f\n", taxAm);
       printf("Total tax :             -%9.2f\n", total);

     return 0;
    
    //main





}


