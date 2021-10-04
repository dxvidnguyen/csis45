// Name: David Nguyen
// File: p13.cpp
// Date: 09/02/2019 -
// Description: Computer Distance (input validate) Write a program that allows //   the user to enter a time in seconds.
//   Your program validates the input, so that if the user enters a negative //   value for time, then an error message
//   shows. The program calculates and outputs the distance (feet) that an 
//   object will travel for that time.

#include <iostream>
using namespace std;

int main()
{
    // declaring variables
    float time;
    float acceleration;
    float distance;

    // prompt
    cout << "Please enter time in seconds: ";
    cin >> time;

    // calculations
    acceleration = 32;
    distance = acceleration * time * time / 2;

    // printout
    if (time < 0)
    {
        cout << "Input value must be positive!";
    }
    else
    {
        cout << "Distance: (" << acceleration << "*(" << time << "^2))/2 = " << distance << " feet";
    }

    return 0;
}

/* === OUTPUT ===

 Test Run 1:
 Please enter time in seconds: 2
 Distance: (32*(2^2))/2 = 64 feet

 Test Run 2:
 Please enter time in seconds: -2
 Input value must be positive!

 */