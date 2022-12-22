/*This program reads a test  score, calculates the letter grade based on the 
absolute scale, and prints it.
Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/26/2022
*/

#include<stdio.h>
//Function Declarations
char scoreToGrade (int score);
int main(void){

    //local Declarations
    int score;
    char grade;
    //statements
    printf("Enter the test score (0 - 100): ");
    scanf("%d", &score);

     grade = scoreToGrade (score);

    printf("The grade is: %c\n", grade);
    return 0;


}

char scoreToGrade (int score){

    //Local Declarations
    char grade;


    //Statements
    if (score >= 90)
            grade = 'A';
         else if(score >= 80)
            grade = 'B';
        else if(score >= 70)
            grade = 'C';
        else if(score >= 60)
            grade = 'D';
         else  
            grade = 'F';
        return grade;
}

