// Name: David Nguyen
// File: p45.cpp
// Date: 10/07/2019 - 12/02/2019
// Description: int sumDouble(int value1, int value2)
//  Given two int values, return their sum. Unless the two values are the same, then return double their sum.

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

// function prototypes
int sumDouble(int value1, int value2);

// main() function
int main()
{
    // function calls
    cout << sumDouble(1,2) << endl;
    cout << sumDouble(3,2) << endl;
    cout << sumDouble(2,2) << endl;
    cout << sumDouble(-1,0) << endl;
    cout << sumDouble(3,3) << endl;
    cout << sumDouble(0,0) << endl;
    cout << sumDouble(0,1) << endl;
    cout << sumDouble(3,4) << endl;
 

    return 0;
}

// function definitions
int sumDouble(int value1, int value2)
{
    // declare variables
    int sum, same;

    // if they are both the same value, return the double their sum
    if (value1 == value2)
    {
        same = 2*(value1 + value2);
        return same;
    }

    // different values so just add them together
    else if (value1 != value2)
    {
        sum = value1 + value2;
        return sum;
    }
}

/* === OUTPUT ===

 3
5
8
-1
12
0
1
7
 
 */

