// Name: David Nguyen
// File: midtermTwoFunctions.cpp
// Date: 10/14/2019 - 12/03/2019
// Description: Midterm - Two Functions
//  Write both functions, and test them both from the same main().
//  As always, submit your output at the bottom of your program!
//  You must submit 1 cpp file with 2 functions and 1 main in it.
//  To receive credit the program must compile and run without any errors!

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

// function prototypes
int returnNum();

void largest(float num1, float num2, float num3);


// main() function
int main()
{
    // function 1
    cout << "Display a random number between 11 and 23: ";
    cout << returnNum() << endl; // call

    // function 2
    float a, b, c; // variables to take input

    cout << "Please enter a value a: ";  // prompt and input
    cin >> a;
    cout << "Please enter a value b: ";
    cin >> b;
    cout << "Please enter a value c: ";
    cin >> c;

    largest(a,b,c); // function call


    return 0;
}

// function definitions

// 1st function is to return a random number between 11 and 23
int returnNum()
{
    // prep to get random number
    int iseed = time(NULL); // gets system time
    srand(iseed); // creates a list of random numbers

    // getting the random number in the correct range
    int num;
    num = (rand()%13) + 11;
    // %13 will give a remainder of 0 to 12
    // +11 will change the range to 11 to 23

    return num;
}

// 2nd function is to print out the largest number
void largest(float num1, float num2, float num3)
{
    if ((num1 > num2) && (num1 > num3))
        cout << num1 << " is the largest number. " << endl;
    if ((num2 > num1) && (num2 > num3))
        cout << num2 << " is the largest number. " << endl;
    if ((num3 > num2) && (num3 > num1))
        cout << num3 << " is the largest number. " << endl;
}




/* === OUTPUT ===

Test Run 1:
Display a random number between 11 and 23: 14
Please enter a value a: 4
Please enter a value b: 9
Please enter a value c: 1
9 is the largest number.

Test Run 2:
Display a random number between 11 and 23: 13
Please enter a value a: 1.4
Please enter a value b: 1.8
Please enter a value c: 1.2
1.8 is the largest number.

 */