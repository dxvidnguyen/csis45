// Name: David Nguyen
// File: p37.cpp
// Date: 09/30/2019 - 12/02/2019
// Description: Function with Four Parameters that returns a float
//   Write and test the following function that returns the average of four parameters
//   that are passed to it

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

// function prototypes
float average (float valA, float valB, float valC, float valD);


// main() function
int main()
{
    // prompt to enter numbers
    float a,b,c,d;
    cout << "Please enter value 1: ";
    cin >> a;
    cout << "Please enter value 2: ";
    cin >> b;
    cout << "Please enter value 3: ";
    cin >> c;
    cout << "Please enter value 4: ";
    cin >> d;

    // getting value from function
    float returnValue = average(a,b,c,d);

    // printing
    cout << "The average of " << a << ", " << b << ", " << c << ", and " << d << " is " << returnValue;

    return 0;
}

// function definitions
float average (float valA, float valB, float valC, float valD)
{
    float avg;
    avg = (valA + valB + valC + valD)/4;
    return avg;
    // value returned is avg (the average)
}


/* === OUTPUT ===

Sample Run 1:
Please enter value 1: 3
Please enter value 2: 5
Please enter value 3: 7
Please enter value 4: 2
The average of 3, 5, 7, and 2 is 4.25

Sample Run 2:
Please enter value 1: 421
Please enter value 2: 312
Please enter value 3: 58
Please enter value 4: 129
The average of 421, 312, 58, and 129 is 230
 */


