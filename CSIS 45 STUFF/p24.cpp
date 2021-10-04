// Name: David Nguyen
// File: p24.cpp
// Date: 09/16/2019 - 11/10/2019
// Description: Largest, Smallest, Average of X Numbers
//  Write a program to find the largest, smallest, sum, and average of X numbers entered by the user.
//  The program will prompt the user to enter X, and X numbers, pressing the Enter key after each number entered.
//  Output will show the largest, smallest, sum, and average of all numbers



#include <iostream>
using namespace std;

int main()
{
    int count;
    int number;
    int smallest;
    int largest;
    int sum = 0;
    int average;

    // amount of numbers to enter
    cout << "How many numbers would you like to enter? ";
    cin >> count;

    // determines smallest and largest numbers and sum
    for (int a = 0 ; a < count ; a++ )
    {
        cout << "Please enter a number: ";
        cin >> number;

        if (a == 0) // at a = 0 there is only one number
        {
            smallest = number;
            largest = number;
        }
        else if (number < smallest)  // if new number is smaller than current smallest number it replaces it
            smallest = number;
        else if (number > largest)  // if new number is larger than current largest number it replaces it
            largest = number;

        // adds all numbers together
        sum = sum + number;
    }

    average = sum / count;

    cout << "The smallest of the " << count << " numbers is " << smallest << ", largest is " << largest
        << ", the sum is " << sum << ", and the average is " << average << "." << endl;

    return 0;
}

/* === OUTPUT ===
 
 
Test Run 1:
How many numbers would you like to enter? 3
Please enter a number: 1
Please enter a number: 2
Please enter a number: 3
The smallest of the 3 numbers is 1, largest is 3, the sum is 6, and the average is 2.

Test Run 2:
How many numbers would you like to enter? 3
Please enter a number: 3
Please enter a number: 2
Please enter a number: 1
The smallest of the 3 numbers is 1, largest is 3, the sum is 6, and the average is 2.

Test Run 3:
How many numbers would you like to enter? 3
Please enter a number: 3
Please enter a number: 1
Please enter a number: 2
The smallest of the 3 numbers is 1, largest is 3, the sum is 6, and the average is 2.

Test Run 4:
How many numbers would you like to enter? 5
Please enter a number: 2
Please enter a number: 4
Please enter a number: 6
Please enter a number: 7
Please enter a number: 1
The smallest of the 5 numbers is 1, largest is 7, the sum is 20, and the average is 4.

*/
