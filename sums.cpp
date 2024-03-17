#include <iostream>
#include <stdio.h>
using namespace std;
void sums(int n, int values [],int & ptotal, int & ntotal,int & pcount ,int &
ncount);
int main()
{
int *n, arraylength = 0;
int myArray[10];
int netpositive = 0;
int netnegative = 0;
int positive_count = 0;
int negative_count = 0;
cout<< "Enter in 10 or less real numbers. When You enter a 0 it will stopreading numbers ";
for (int i = 0; i < 10; ++i) {
cout << "Enter value " << i + 1 << ": ";
cin >> myArray[i];
arraylength ++;
if (myArray[i] == 0)
{
break;
}
}
for (int i = 0; i < arraylength; ++i) {
cout << myArray[i];
}
cout<<endl;
sums(arraylength,myArray,netpositive,netnegative,positive_count,negative_count);
cout <<endl;
cout <<"Total Of Negative values entered " << netnegative <<endl;
cout <<"Count Of Negative values entered " << negative_count <<endl;
cout <<"Total Of Positive values entered " << netpositive <<endl;
cout <<"Count Of Positive values entered " << positive_count <<endl;
return 0;
}
void sums(int n, int values [],int & ptotal, int & ntotal,int & pcount ,int &
ncount) /*Compute the sum of the positive values in the array and the sum of the
negative
values. Also count the number of values in each
category.*/
{
int average, totalsum;
for (int i= 0; i < 10; i++)
{
totalsum = values[i];
if (values[i]>0)
{
ptotal += values[i];
pcount++;
}
else
{
ntotal +=values[i];
ncount++;
}
}
}
