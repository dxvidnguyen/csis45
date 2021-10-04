// Name: David Nguyen
// File: p8.cpp
// Date: 09/02/2019 - 09/20/2019
// Description: Height Message (if/else) Write the following program to
// compute a person's height and print out a message. The user will input feet
// and inches. The program will convert that to inches, then print a message,
// based on the total inches. Be sure to have your program output match mine!

#include <iostream>
using namespace std;

int main()
{
    // Declaring varibles
    int inches;
    int feet;
    int height;

    // Prompt to get height measurements
    cout << "Please enter feet: ";
    cin >> feet;
    cout << "Please enter inches: ";
    cin >> inches;

    // Calculation: total number of inches
    height = (12*feet) + inches;
    // Print out height in inches
    cout << "Your height is " << feet << " feet + "<< inches;
    cout << " inches = " << height << " inches " << endl;

    // IF, ELSE IF chain
    if (height > 72)
    {
        cout << "You are tall!";
    }

    else if ( (height >= 60) && (height <= 72) )
    {
        cout << "You are in between 5' and 6'.";
    }
    else if ( (height > 0) && (height < 60) )
    {
        cout << "You are vertically challenged!";
    }
    else
    {
        cout << "invalid height";
    }

    return 0;
}

/* === OUTPUT ===
 Output 1
 Please enter feet: 6
 Please enter inches: 1
 Your height is 6 feet + 1 inches = 73 inches
 You are tall!

 Output 2
 Please enter feet: 4
 Please enter inches: 2
 Your height is 4 feet + 2 inches = 50 inches
 You are vertically challenged!

 Output 3
 Please enter feet: 5
 Please enter inches: 4
 Your height is 5 feet + 4 inches = 64 inches
 You are in between 5' and 6'.

 */