/*
This program adds the first N cosecutive odd numbers or even numbers
*/

#include<stdio.h>
#include<conio.h>

int main(){
    int i, n, sumeven = 0,  sumodd;
    printf("Enter the number : ");
    scanf("%d", &n);

    for(i = 1 ; i <= n; i ++)
        if(i % 2 == 0)
        
            sumeven = sumeven + i;

        else 

        sumodd = sumodd + i;
        

     printf("\nSum of first consecutive even numbers = %d", sumeven);
     printf("\nSum of first consecutive odd numbers = %d", sumodd);
   

}