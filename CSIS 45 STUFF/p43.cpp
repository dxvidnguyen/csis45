// Name: David Nguyen
// File: p43.cpp
// Date: 10/07/2019 - 12/02/2019
// Description: bool sleepIn(bool weekday, bool vacation)
//  Write a function sleepIn with two parameters 'weekday' and 'vacation'.
//  The parameter 'weekday' is True if it is a weekday, and the parameter 'vacation' is True if we are on vacation.
//  We sleep in if it is not a weekday or we're on vacation. Return True if we can sleep in.

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

// function prototypes
bool sleepIn(bool weekday, bool vacation);

// main() function
int main()
{
    // shows true false instead of 1 and 0
    cout.setf(std::ios::boolalpha);

    // 
    cout << sleepIn(false, false ) << endl;
    cout << sleepIn(true, false ) << endl;
    cout << sleepIn(false, true ) << endl;
    cout << sleepIn(true, true ) << endl;

    return 0;
}

// function definitions
bool sleepIn(bool weekday, bool vacation)
{
    //  we can sleep in if it is not a week OR we are on vacation
    if ((weekday == false) || (vacation == true))
        return true;
    
    // everything else means we cannot sleep in
    else
        return false;
}

/*  === OUTPUT ===
 
true
false
true
true
 
 */