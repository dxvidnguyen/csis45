// Name: David Nguyen
// File: p38.cpp
// Date: 09/30/2019 - 12/02/2019
// Description: bool acorns(int cigars, bool isWeekend)
//  When squirrels get together for a party, they like to have acorns.
//  A squirrel party is successful when the number of acorns is between 40 and 60, inclusive.
//  Unless it is a weekend, in which case there is no upper limit on the number of acorns.
//  Write a function which Returns "Successful Party" if the party was a success, or "No Luck" otherwise.

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

// function prototypes
string party (int acorns, bool isWeekend);
// return will be a string!!!!

// main() function
int main()
{
    // call 1
    cout << party(30, false) << endl;
    // call 2
    string storeString;
    storeString = party(50, false); // party() returns its string to the variable storeString
    cout << storeString << endl;
    // call 3
    cout << party(70, true) << endl;

    return 0;
}

// function definitions
string party(int acorns, bool isWeekend)
{
    if (isWeekend == true) // if it is the weekend (no upper limit, lower limit is 40)
    {
        if(acorns >= 40)
            return "Sucessful Party!";
        else
            return "No Luck :(";

    }

    if (isWeekend == false) // when not the weekend upper limit is 60 and lower limit is 40
    {
        if( (acorns >= 40) && (acorns <= 60) )
            return "Sucessful Party!"; // return a string
        else
            return "No Luck :(";
    }
    
}

/* === OUTPUT ===

Sample Run: 
No Luck :(
Sucessful Party!
Sucessful Party!

 * /