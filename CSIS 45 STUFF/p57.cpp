// Name: David Nguyen
// File: p57.cpp
// Date: 10/21/19 - 12/06/2019
// Description: Arrays Min, Max, Average
//  Ask the user to enter any 7 numbers into an array of float type, in any order.
//  Show all the entered numbers, then find the Minimum, Maximum, and Average of all the numbers in the array.

#include <iostream>

using namespace std;

int main() {
    // float array
    float input[7];

    // use for loop to get inputs of 7 numbers
    for (int a = 0; a < 7; a++) {
        cout << "Please enter a number " << (a + 1) << ": ";
        cin >> input[a];
    }

    // showing all entered numbers
    cout << "The numbers you entered are: ";
    // using a for loop for array output
    for (int b = 0; b < 7; b++)
    {
        if (b < (7-1))
            cout << input[b] << ", ";
        if (b == (7-1))
            cout << input[b];
    }


    // finding the average
    float sum = 0;
    float count = 0;
    float average = 0;
    for (int c = 0; c < 7; c++)
    {
        sum = sum + input[c];
        count++;
    }
    // after loop we have the final sum of numbers and the count of the numbers
    average = sum/count;

    cout << count << endl; // should be 7

    // finding the largest number
    float largest = input[0];
    for (int d = 0; d < 7; d++)
        if (input[d] > largest )
            largest = input[d];

    // finding the smallest number
    float smallest = input[0];
    for (int e = 0; e < 7; e++)
        if (input[e] < smallest )
            smallest = input[e];


     // printing stuff out
     cout << "The largest of the 7 numbers is: " << largest << endl;
     cout << "The smallest of the 7 numbers is: " << smallest << endl;
     cout << "The average of the 7 numbers is: " << average << endl;


    return 0;
}


/* === OUTPUT ===
 
Run 1:
Please enter a number 1: 20
Please enter a number 2: 50
Please enter a number 3: 30
Please enter a number 4: 40
Please enter a number 5: 80
Please enter a number 6: 70
Please enter a number 7: 10
The numbers you entered are: 20, 50, 30, 40, 80, 70, 107
The largest of the 7 numbers is: 80
The smallest of the 7 numbers is: 10
The average of the 7 numbers is: 42.8571


Run 2:
Please enter a number 1: 1.5
Please enter a number 2: 1.7
Please enter a number 3: 1.9
Please enter a number 4: 1.2
Please enter a number 5: 1.1
Please enter a number 6: 1.7
Please enter a number 7: 1.2
The numbers you entered are: 1.5, 1.7, 1.9, 1.2, 1.1, 1.7, 1.27
The largest of the 7 numbers is: 1.9
The smallest of the 7 numbers is: 1.1
The average of the 7 numbers is: 1.47143
 
*/