// Name: David Nguyen
// File: p27.cpp
// Date: 09/23/2019 - 11/16/2019
// Description: Smallest, Largest, Sum, Average with Random Numbers
//  Write a program that generates X random integers Num.
//  Num is a random number between 20 to 50.
//  X is a random number between 10 to 15.
//  Calculate and show the Smallest, Largest, Sum, and Average of those numbers.

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

int main()
{
    int iseed = time(NULL); // gets system time - a huge number
    srand(iseed); // turns iseed to a random list of numbers

    // declaring variables
    int smallest, largest, sum, avg, count;
    sum = 0;
    avg = 0;


    // X is between 10 and 15.
    int X = (iseed%6) + 10;

    // X is number of entries which is the count of the list
    count = X;

    cout << "Generating " << X << " random numbers. (" << X
      << " is between 10 and 15)" << endl;
    cout << "List of " << X << " random numbers between 20 and 50: ";

    for (int a = 1; a <= X; a++)
    {
       // num is between 20 and 50
       int num = (rand() % 31) +20; // rand() generates a random number

       if (a == 1) // first pass, smallest = largest = 1st number
       {
           smallest = num;
           largest = num;
       }

       // other passes, checks for smallest and largest
       if (num < smallest)
           smallest = num;
       if (num > largest)
           largest = num;

       // add the num to previous for the sum for each pass
       sum = sum + num;

       if (a < X)
           cout << num << ", ";
       else if (a == X)
           cout << num;

    }

    // average is the final sum so it is outside the loop
    avg = sum/count;

    cout << endl;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << sum << "/" << count << " = " << avg << endl;
    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;



    return 0;
}

/* === OUTPUT ===

Generating 12 random numbers. (12 is between 10 and 15)
List of 12 random numbers between 20 and 50: 45, 38, 33, 20, 32, 34, 41, 48, 42, 49, 42, 28
Sum = 452
Average = 452/12 = 37
Smallest = 20
Largest = 49
 
 */
