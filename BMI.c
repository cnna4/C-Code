//CHIDI NNA
/*Write a simple program that will calculate the BMI (Body Mass Index).
Create this as a menu driven program. Your menu can look like below.*/

#include <stdio.h>
int main(void){

double option, height,weight,bmi;

printf("Press 1 To Calculate Your BMI, Press 2 to terminate the application ");
scanf("%lg",&option);
while (option == 1){

printf("Enter Your weight ");
scanf("%lg",&weight);


if ((weight < 0.0) || (weight > 1000)){
printf("Invalid weight Entered. Please Enter a weight Greater than 0lbs and less than 1000lbs");
scanf("%lg",&weight);

}

printf("Enter Your height in inches ");
scanf("%lg",&height);

if ((height < 0.0) || (height > 120)){
printf("Invalid weight Entered. Please Enter a weight Greater than 0lbs and less than 1000lbs \n");
scanf("%lg",&weight);

}

bmi = weight / (height * height);
bmi = bmi * 703;
printf("Your BMI is %g \n",bmi);


if (bmi < 18.5){
printf("Based on Your BMI you are Under weight\n");
}
if ((bmi >= 18.5) && (bmi < 24.9)) {
printf("Based on Your BMI you are Normal weight\n");
}
if ((bmi >= 24.9) && (bmi < 29.9)){
printf("Based on Your BMI you are Over weight\n");
}
if (bmi >= 30){
printf("Based on Your BMI you are Obese \n");
}


puts("Would You Like to Repeat the Program? ");
printf("Press 1 To Repeat , Press 2 to terminate the application ");
scanf("%lg",&option);

}
printf("Application has been terminated\n");


return 0;

}
