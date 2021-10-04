// Name: David Nguyen
// File: p44.cpp
// Date: 10/07/2019 - 12/02/2019
// Description: bool monkeyTrouble(bool Asmile, bool Bsmile)
//  We have two monkeys, A and B, and the parameters Asmile and Bsmile indicate if each is smiling.
//  We are in trouble if they are both smiling or if neither of them is smiling.
//  Return True if we are in trouble.

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

// function prototypes
bool monkeyTrouble(bool Asmile, bool Bsmile);

// main() function
int main()
{
    // print out true false instead of 1 0
    cout.setf(std::ios::boolalpha);

    // function calls
    cout << monkeyTrouble(true,true) <<endl;
    cout << monkeyTrouble(false,false) <<endl;
    cout << monkeyTrouble(true,false) <<endl;
    cout << monkeyTrouble(false,true) <<endl;
    return 0;
}

// function definitions
bool monkeyTrouble(bool Asmile, bool Bsmile)
{
    // true --> both smile or both not smiling (same value)
    if (Asmile == Bsmile)
        return true;
    // false --> one smile, other not (different values)
    else if (Asmile != Bsmile)
        return false;
}

/* === OUTPUT ===

true
true
false
false


 */

