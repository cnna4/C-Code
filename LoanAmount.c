// Hello World Program

#include <stdio.h>
#include <math.h>
double readLoanAmount(double);
double readInterestRate(void);
int readMonths(void);
int main ()
{
    double LA;

    do{
      printf("Enter read Loan Amount");
      scanf("%lg", &LA);
      readMonths()
      readInterestRate()

      if (readLoanAmount(LA))
      {
          puts("Error Loan Amount");

      }


    }while(!readLoanAmount(LA));

    printf("Your loan amount is %g", LA);





    return 0;
}

double readLoanAmount(double L){


       if( L <= 0)
    {
        return 0;
    }
    return 1;
}

double readInterestRate(void){

    double IR;

    do{
       printf("Enter read Interest Rate");
       scanf("%lg", &IR);

       if( IR <= 0)
    {

        printf("Error Interest Rate Must be greater than 0");
    }




       }while(IR<=0);


}


int readMonths(void){

    int months;

    do{
       printf("Enter # of months");
       scanf("%lg", &months);

       if( months <= 0)
    {

        printf("Must Be Greater than 0");
    }




       }while(months<=0);

}

