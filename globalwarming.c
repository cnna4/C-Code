//Chidi Nna
//Intro To Programming
/* ASSN 4.  Print a neat table of temperatures. At the same time, calculate the average temperature for
the month and print it at the end of the table, followed by the number of hot days.
*/




#include <stdio.h>
#include <math.h>

int read_temps(int[],int);
int hot_days(int,int[],int);
void print_temps(int,int[],int);
double averageTemp(int,int[],int);



int main(){
    double days;
    int month,numTemperatures = 32, tracker,hotties = 0;
    double average;
    int temperature[numTemperatures];



    printf("What month are you in currently, enter by number. Example January = 1, February = 2 ");  // User Selects what month he is
    scanf("%d",&month);                                                                              // array is set to that value in length
    switch (month) {
            case 1:
                puts("You Have selected January");
                numTemperatures = 31;
                break;
            case 2:
                 puts("You Have selected February") ;
                 numTemperatures = 28;
                break;
            case 3:
                 puts("You Have selected March") ;
                 numTemperatures = 31;
                break;
            case 4:
                 puts("You Have selected April") ;
                 numTemperatures = 30;
                break;
            case 5:
                 puts("You Have selected May") ;
                 numTemperatures = 31;
                break;
            case 6:
                puts("You Have selected June") ;
                numTemperatures = 30;
                break;
            case 7:
                puts("You Have selected July") ;
                numTemperatures = 31;

                break;
            case 8:
                puts("You Have selected August") ;
                numTemperatures = 31;
                break;
            case 9:
                puts("You Have selected September") ;
                numTemperatures = 30;
                break;
            case 10:
                puts("You Have selected October") ;
                numTemperatures = 31;
                break;
            case 11:
                puts("You Have selected November") ;
                numTemperatures = 30;
                break;
            case 12:
                puts("You Have selected December") ;
                numTemperatures = 31;
                break;
            default:
                printf("Invalid choice. Please try again. Enter a month 1-12 \n");
        }





        tracker = read_temps(temperature,numTemperatures);
        hotties = hot_days(tracker,temperature,numTemperatures);
        print_temps(tracker,temperature,numTemperatures);
        average = averageTemp(tracker,temperature,numTemperatures);

        printf("\n");
        printf("There are a total of %d Hot Days This Month\n",hotties );
        printf("The Average Temperature this month is also %lg F \n", average);


}


int read_temps(int temps[],int size){      // reads the temperature and number of days based on the month he chose prior

    int count;
    char choice;
    int value;
         printf("Starting at 0 is the First Day of the month \n");
         for (int i = 0; i < size; i++) {
            printf("Enter temperature %d: ", i);
            scanf("%i+1", &value);
            temps[i] = value;
            count++;

            }

    return count;
}



int hot_days(int total_days,int fulltemps[],int size){ //  Search through the temperature array and count all the
                                                        //days on which the noon temperature exceeds 32F
    int count = 0;

    for (int i = 0; i < size; i++) {
            if (fulltemps[i] > 32){

                count++;
            }
}

    return count;
}


void print_temps(int total_days,int fulltemps[], int size)   //  Print a neat table of temperatures
{
    int numCols = 7;  // For a standard 7-day week
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    // Print the calendar format
    for (int i = 0; i < size; i++) {
        if (i % numCols == 0 && i != 0) {
            printf("\n");
        }
        printf("%4d ", fulltemps[i]);
    }

    printf("\n");




return 0;
}


double averageTemp(int total_days,int fulltemps[], int size)  //calculate the average temperature for the month
{
    double store,avg;

     for (int i = 0; i < size; i++) {
        store = fulltemps[i];
        avg += store;

    }
    avg = avg/size;


    return avg;

}
