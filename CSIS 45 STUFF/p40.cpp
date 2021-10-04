// Name: David Nguyen
// File: p40.cpp
// Date: 10/07/2019 - 12/02/2019
// Description: bool posNeg(int val1, int val2, bool negative);
//  Given 2 int values, return true if one is negative and one is positive.
//  Except if the parameter "negative" is true, then return true only if both are negative.


#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout


// function prototypes
bool posNeg(int val1, int val2, bool negative);

// main() function
int main()
{
    // return "true" and "false" instead of "1" and "0"
    // note: usually 1 = true and 0 = false (by default)
    cout.setf(std::ios::boolalpha);

    cout << posNeg(1, -1, false) << endl;
    cout << posNeg(-1, 1, false) << endl;
    cout << posNeg(-4, -5, true) << endl;


    return 0;
}

// function definitions
bool posNeg(int val1, int val2, bool negative)
{
    // when "negative" is true, only return true when both values are negative
    if (negative == true)
    {
        if((val1 < 0) && (val2 < 0))  // both must be negative
            return true;
        else                          // all other situations
            return false;
    }

    // when "negative" is false, only return true when one value is negative
    // other value has to be positive
    if (negative == false)
    {
        if((val1 < 0) && (val2 > 0))        // val1 is negative
            return true;
        else if((val1 > 0) && (val2 < 0))   // val2 is negative
            return true;
        else if((val1 < 0) && (val2 < 0))   // both negative
            return false;
        else if((val1 > 0) && (val2 > 0))   // both positive
            return false;
    }
}

/* === OUTPUT ===

Test Run:
true
true
true

 */
