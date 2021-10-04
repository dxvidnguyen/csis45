// Name: David Nguyen
// File: p41.cpp
// Date: 10/07/2019 - 12/02/2019
// Description: int loneSum(int a, int b, int c)
//  Given 3 int values, return their sum.
//  However, if one of the values is the same as another of the values, it does not count towards the sum.

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

// function prototypes
int loneSum(int a, int b, int c);

// main() function
int main()
{
    cout << loneSum(1,2,3) << endl;
    cout << loneSum(3,2,3) << endl;
    cout << loneSum(3,3,3) << endl;

    return 0;
}

// function definitions
int loneSum(int a, int b, int c)
{
    int sum;
    // all different numbers (3 numbers, 3 values)
    if((a != b) && (b != c) && (a != c))
    {
        sum = a + b + c;
        return sum;
    }

    // all the same number (3 numbers, 1 value)
    if ((a == b) && (b == c) && (a == c))
    {
        sum = 0;
        return sum;
    }

    // 3 numbers, 2 different values
    // 1) a and b equal, a not equal to c --> b/c a == b, it also implies b != c
    if ((a == b) && (a != c))
    {
        sum =  c;
        return sum;
    }
    // 2) a and c equal, a not equal to b --> implies c != b
    if ((a == c) && (a != b))
    {
        sum = b;
        return sum;
    }
    // 3) b and c equal, b not equal to a  --> implies c != a
    if ((b == c) && (b != a))
    {
        sum = a;
        return sum;
    }

}

/*  === OUTPUT ===

6
2
0

 */


