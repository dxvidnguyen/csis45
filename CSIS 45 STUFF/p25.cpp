// Name: David Nguyen
// File: p25.cpp
// Date: 09/16/2019 - 11/10/2019
// Description: average, largest, smallest
//  Write a program to Input a set of numbers terminated by the value -999.
//  Find the sum, average, the largest, and the smallest value.
//  Note: -999 does not count toward the largest, smallest or average!


#include <iostream>
using namespace std;

int main()
{
    // declaring variables and values at the very beginning
    int sum = 0;
    double average;
    int largest;
    int smallest;
    int num;
    int count = 0;


    while (true)
    {
        // prompt
        cout << "Please enter a number (-999 to stop): ";
        cin >> num;

        // breaks neverending loop
        if (num == -999)
            break;

        if (count == 0) // only true for the very first time
        {
            smallest = num;
            largest = num;
        }
        else if (num < smallest)
            smallest = num;
        else if (num > largest)
            largest = num;

        sum = sum + num; // adds together all previous numbers
        count++; // count is needed for the average

    }

    average = double(sum) / double(count);

    cout << "The smallest number: " << smallest << ", largest number: " << largest << ", sum: " << sum <<
        ", and average: " << average << "." << endl;


    return 0;
}

/* === OUTPUT ===
 
Test Run 1
Please enter a number (-999 to stop): 3
Please enter a number (-999 to stop): 12
Please enter a number (-999 to stop): 7
Please enter a number (-999 to stop): 8
Please enter a number (-999 to stop): -999
The smallest number: 3, largest number: 12, sum: 30, and average: 7.5.

Test Run 4
Please enter a number (-999 to stop): 1
Please enter a number (-999 to stop): 2
Please enter a number (-999 to stop): 3
Please enter a number (-999 to stop): -999
The smallest number: 1, largest number: 3, sum: 6, and average: 2.

Test Run 2
Please enter a number (-999 to stop): 3
Please enter a number (-999 to stop): 2
Please enter a number (-999 to stop): 1
Please enter a number (-999 to stop): -999
The smallest number: 1, largest number: 3, sum: 6, and average: 2.

Test Run 3
Please enter a number (-999 to stop): 3
Please enter a number (-999 to stop): 1
Please enter a number (-999 to stop): 2
Please enter a number (-999 to stop): -999
The smallest number: 1, largest number: 3, sum: 6, and average: 2.
 
 */