// Name: David Nguyen
// File: p39.cpp
// Date: 10/07/2019 - 12/02/2019
// Description: string great(int A, int B)
//  Given two integer values, A and B, write a function that returns the string "Great" if either value is 6.
//  The function also returns "Great" if the sum or the difference of the values is 6.
//  The function returns "Not great" otherwise.

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

// function prototypes
string great(int A, int B);


// main() function
int main()
{
    cout << great(6, 4) << endl;
             //^ great() returns its string to cout <<
    string storeString;
    storeString = great(4, 5); // great() returns its string to the variable storeString
    cout << storeString << endl;
    cout << great(1, 5) << endl;
}

// function definitions
string great(int A, int B)
{
    // declaring and initializing variables
    int sum = A + B;
    int diff1 = A - B;
    int diff2 = B - A;

    // return great if either value is 6
    if((A == 6) || (B == 6))
        return "Great";

    // return great if the sum of different is 6
    else if((sum == 6) || (diff1 == 6) || (diff2 ==6))
        return "Great";

    // everything else 
    else
        return "Not Great";
}

/* === OUTPUT ===
 
Test Run:
Great
Not Great
Great
 

 */