// Name: David Nguyen
// File: p22.cpp
// Date: 09/16/2019 - 11/10/2019
// Description: Sum of Numbers from 150 to 250 inclusive
//  Write a program to find the sum of every integer number from 150 to 250 inclusive.
//  Also show the total count of numbers, and the average of the numbers.

#include <iostream>
using namespace std;


int main()
{
    // declaring variables
    int sum = 0;
    int min = 150;
    int max = 250;
    int count = 0;

    // loop to calculate sum and count
    while (min <= max)
    {
        sum = sum + min;
        min++;
        count++;
    }

    // calculate the average 
    int average = sum / count;


    // print out info
    // note: min is currently orginal min + count
    cout << "The number of integer numbers between " << min - count << " and " << max << " is: " << sum << endl;
    cout << "The total count of numbers is: " << count << endl;
    cout << "The average of the numbers is: " << average << endl;

    return 0;
}

/* === OUTPUT ===

The number of integer numbers between 150 and 250 is: 20200
The total count of numbers is: 101
The average of the numbers is: 200

Process finished with exit code 0
 
 */