// Name: David Nguyen
// File: p23.cpp
// Date: 09/16/2019 - 11/10/2019
// Description: Count Odd and Even Numbers
//  Write a program that accepts integers from the user and tells how many of the numbers entered were
//  odd and how many were even. Program should stop asking for integers when user inputs a zero

#include <iostream>
using namespace std;

int main()
{
    cout << "Odds and Evens" << endl;
    cout << "Note: Program stops when you enter a zero" << endl << endl;

    // variables for whole program
    int even = 0;
    int odd = 0;

    while (true)
    {
        // declaring variables only in while loop
        int num;


        // Prompt
        cout << "Please enter an integer: ";
        cin >> num;

        // ends neverending loop
        if (num == 0)
            break;


        // loop keeps going if num != 0, counts evens and odds
        if (num%2 == 0)
            even++;
        else
            odd++;

    }

    cout << endl;
    cout << "You have entered " << odd << " odd numbers and " << even << " even numbers.";



    return 0;
}

/* === OUTPUT ===

 Test Run 1:
Odds and Evens
Note: Program stops when you enter a zero

Please enter an integer: 1
Please enter an integer: 2
Please enter an integer: 3
Please enter an integer: 4
Please enter an integer: 5
Please enter an integer: 6
Please enter an integer: 0

You have entered 3 odd numbers and 3 even numbers.
Process finished with exit code 0
 
 Test Run 2:
Odds and Evens
Note: Program stops when you enter a zero

Please enter an integer: 5
Please enter an integer: -2
Please enter an integer: 123
Please enter an integer: 0

You have entered 2 odd numbers and 1 even numbers.
Process finished with exit code 0


 */
