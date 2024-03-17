// Conditions with if
#define NUM_SCORE 3
#include <stdio.h>
const number = 4;
int main(void){
    double score1, score2,score3,avg;

    printf("Enter Score1");
    scanf("%lg",&score1);

    if (score1 > 0.0){
        printf("Enter score2");
        scanf("%lg",&score2);
        printf("Enter score3");
        scanf("%lg",&score3);


        avg = (score1+ score2 + score3)/NUM_SCORE;
        printf("Average of %g, %g, %g, is %g", score1,score2,score3,avg);

    }
    else{
        printf("Error");
    }



return 0;
}
