/*This program prints the tution at Strange College.
Strange charge $10 for registration, plus $10 per unit and a penalty of $50 for each 2 uniits, or fraction of 12 ove 
12.
Written by : Mutebi Tonny 19/U/9055/EVE
Date: 11/26/2022
*/

#include <stdio.h>

#define REG_FEE 10
#define UNIT_FEE 10
#define EXCESS_FEE 50
//Function Declarations
int calculateFee(int firstTerm, int secondTerm, int thirdTerm);
int termFee(int units);

int main(){
    //Local Declarations
    int firstTerm;
    int secondTerm;
    int thirdTerm;
    int totalFee;

      //statements
      printf("Enter units for first term: ");
      scanf("%d", &firstTerm);

      printf("Enter units for second term: ");
      scanf("%d", &secondTerm);

      printf("Enter units for third term: ");
      scanf("%d", &thirdTerm);

      totalFee = calculateFee (firstTerm, secondTerm, thirdTerm);
      printf("\nThe total tution is : % 8d\n",  totalFee);

      return 0;
      // main


}

int  calculateFee (int firstTerm, int secondTerm, int thirdTerm){
  //Local Declarations
  int fee;

  //statements
  fee = termFee (firstTerm) + termFee (secondTerm) + termFee (thirdTerm);
  return fee;

}

int termFee (int units){
   //Local Declarations
   int totalFees;
   //statements
   totalFees = REG_FEE + ((units - 1) / 12 * EXCESS_FEE) + (units * UNIT_FEE);

   return (totalFees);

}//termFees
