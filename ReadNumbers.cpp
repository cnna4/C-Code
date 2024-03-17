//Chidi Nna
//ASSN 3 - Read in the contents of a file of real numbers and Write the numbers to a new file in reverse order.
//Intermediate C++
#include <iostream>
#include <fstream>

using namespace std;

class NumList {
private:
    int* numbers;  // Pointer to dynamically allocated memory
    int size;      // Number of integers stored

public:
    void addNumber(int value);
    void reverseList();
    int* getNumbers();
    int getSize ();
};

int main() {
    NumList myList;
    ifstream myIn("Data.txt");  // Change the file name to "Data.txt"
    int number;


    if (myIn.is_open()) {               // Checks to see if the file is open and then reads in each number from file and stores in list
        cout << "The Current List is ";
        while (myIn >> number) {
            myList.addNumber(number);
            cout << number << ' ';
        }

        myIn.close();
    } else {
        cout << "Error: Opening the input file" << endl;
        return 1;



    }
    cout <<endl;
    cout<< "The Current Size is " <<myList.getSize() <<endl;    //displays current size of list just to check



    myList.reverseList();   // reverses list




    ofstream myOut("ReversedData.txt");  // Change the output file name to "ReversedData.txt"
    if (myOut.is_open()) {
        int* numbers = myList.getNumbers();
        int size = myList.getSize();


        cout <<"The Reversed list is ";
        for (int i = 0; i < size; i++) {
            cout << numbers[i] << ' ';
        }



        for (int i = 0; i < size; ++i) {
            myOut << numbers[i] << ' ';
        }
        myOut << endl;

        delete[] numbers;  // Don't forget to free the dynamically allocated memory
    } else {
        cout << "Error: Unable to create the output file!!!" << endl;
    }

    myOut.close();

    return 0;
}


void NumList::addNumber(int value) {         //adds number to the list using dynamic memory allocation
    int* newNumbers = new int[size + 1];
    for (int i = 0; i < size; ++i) {
        newNumbers[i] = numbers[i];
    }

    newNumbers[size] = value;
    delete[] numbers;
    numbers = newNumbers;

    size++;
}

int* NumList::getNumbers(){
    return numbers;
}

int NumList::getSize(){
    return size;
}

void NumList::reverseList() {         //reverses number order
    int temp;
    size = getSize();
    for (int i = 0; i < size / 2; ++i) {
        temp = numbers[size - i - 1];
        numbers[size - i - 1] = numbers[i];
        numbers[i] = temp;
    }
 ;
}
