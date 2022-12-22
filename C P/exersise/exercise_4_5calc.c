#include<stdio.h>
int main(){
    int num1, num2;
    printf("\nEnter the first number:  ", num1);
    scanf("%f", &num1);
    printf("\nEnter the second number:  ", num2);
    scanf("%f", &num2);

    int preference;
    printf("\t\t preference");
    printf("\n===============================");
    printf("\n1- Add");
    printf("\n2- Subtract");
    printf("\n3- Multiply");
    printf("\n4- Divide");

    switch(preference){
        case 1: add(num1, num2);
            // printf("add num1 + num2 %d", num1 + num2);
            break;

        case 2: sub(num1, num2);;
            // printf("subtact num1 - num2 %d", num1 - num2);
            break;

        case 3: mult(num1, num2);;
            //printf("subtact num1 * num2 %d", num1 * num2);
            break;

        case 4: div(num1, num2);;
           // printf("subtact num1 * num2 %d", num1 * num2);
            break;

        default:
        printf("Invalid input");

    }

    void add(int a, int b){
        printf("\nResult: %d", a + b);
    }

    void sub(int a, int b){
        printf("\nResult: %d", a - b);
    }


    void mult(int a, int b){
        printf("\nResult: %d", a * b);
    }

    void div(int a, int b){
        printf("\nResult: %d",a / b);
    }




    return 0;
}