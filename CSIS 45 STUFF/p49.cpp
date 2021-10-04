// Name: David Nguyen
// File: p49.cpp
// Date: 10/21/19 - 12/05/2019
// Description: Fibonacci
//  Write a C++ program which uses a function to display a series of Fibonacci numbers


#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

// function prototypes
void Fibonacci(int totalNumbers);

// main() function
int main()
{
    // to see how many numbers to show
    int count;
    cout << "How many Fibonacci numbers would you like to show? ";
    cin >> count;

    // function call
    Fibonacci(count);
    return 0;
}

// function definitions
void Fibonacci(int totalNumbers)
{
    // beginning of Fibonacci sequence
    int first = 0;
    int second = 1;
    int third = first + second;
    cout << first << ", " << second << ", " << third; // first 3 numbers of sequence

    int range = totalNumbers - 3;
    // we already have the first 3 numbers, loop should only print out remaining numbers

    // for loop for the remaining numbers to print out
    for (int a = 0; a < range; a++)
    {
        first = second;  // old second number
        second = third;  // old sum
        third = first + second; // becomes new sum
        cout << ", " << third;
    }
}

/* === OUTPUT ===

Run 1:
How many Fibonacci numbers would you like to show? 8
0, 1, 1, 2, 3, 5, 8, 13

Run 2:
How many Fibonacci numbers would you like to show? 10
0, 1, 1, 2, 3, 5, 8, 13, 21, 34

Run 3:
How many Fibonacci numbers would you like to show? 13
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
 
 */