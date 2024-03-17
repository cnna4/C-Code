// Hello World Program

#include <stdio.h>
#include <math.h>


int main(){
double scores[100];
int people;
double total =0;
printf("Enter the number of people in your class ");
scanf("%i",&people);

while(people < 0 || people > 100)
{

    printf(" Invalid number of people, Enter a number between 1-100");
    scanf("%i ",&people);

}
printf("Enter in each Student Scores\n");
for ( int i = 0; i < people; i++)
{

    printf("Enter score ");
    scanf("%lf", &scores[i]);

}

for (int i = 0; i < people ; i++)
{

    total = scores[i] + total;
}

printf("The Total is %.2f\n", total);

double avg = total/people;

printf("Your average is %g\n", avg);


for (int i = 0; i < people; i++)
{
    int student_num = i+1;
    printf("Student score %i is %lg\n",student_num,scores[i]);
}



}

