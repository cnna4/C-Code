// Hello World Program

#include <stdio.h>
#include <math.h>

double cv_vol(double , double ); // Function prototype
void say_sqaure();
void print_score(void);
double totalscore(void);


int main(){
double volume, diameter, height, rate, total;
printf("Enter the diameter ");
scanf("%lg",&diameter);
printf("Enter Your height ");
scanf("%lg",&height);
printf("rate your square 1-10  ");
scanf("%lg",&rate);


volume = cv_vol(diameter,height);
printf("The Volume is %lg \n", volume);
say_sqaurerating(rate);
print_score();
total = totalscore();
printf("The total score  is %lg \n", total);





return 0;
}

double cv_vol(double d, double h){
    double r = d/2;
    double vol;

    vol = 3.14 *r *r * h;
    return vol;

}


void say_sqaurerating(double s){
    s = s-1;
    printf("This is your true rating of your Circle %lg \n",s);

}

void print_score(void)
{
    double score;
    printf(" Judges Now you Enter score ");
    scanf("%lg,", &score);
    return score;
}

double totalscore(void)

{
    double total;
    total = 5 +  5;


    return total;
}


