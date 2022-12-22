/*This program reads a test score, calculates the letter grade for the score,
and prints the grade.
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
    char grade;
    int temp;
    //Statements
    temp = score / 10;

    switch (temp)
    {
    case 10:
        case 9: grade ='A';
        break;

         case 8: grade ='B';
        break;

         case 7: grade ='C';
        break;

         case 6: grade ='D';
        break;
    
    default:  grade ='F';
        
    }
return grade; 
}