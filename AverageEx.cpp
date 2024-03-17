
#include <iostream>
#include <stdio.h>

using namespace std;

void calcAverage(float &scr1, float &scr2, float &avg);

int main ()
{
    float s1,s2,avg;
    cout<<"Hello World";
    cout << " Enter 2 scores";
    cin>> s1;
    cin>> s2;
    calcAverage(s1,s2,avg);

    cout << "The Average is: " << avg <<endl;


    return 0;
}


void calcAverage(float &scr1, float &scr2, float &avg)
{

    avg = (scr1 + scr2)/2;
}
