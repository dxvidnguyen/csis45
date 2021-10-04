// Name: David Nguyen
// File: p46.cpp
// Date: 10/07/2019 - 12/02/2019
// Description: void primeNumbers()
//  Write a function that finds and prints all prime numbers b/w 3 to 100.


#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

// function prototypes
void primeNumbers();


// main() function
int main()
{
    // function call
    primeNumbers();

    return 0;
}

// function definitions
void primeNumbers()
{
    for (int n = 3; n <= 100; n++) // loop to go from numbers from 3 to 100
    {
        for (int j = 2; j < n; j++)  // loop to see if a number is prime
        {
            int remain = n%j;

            // numbers that are not prime
            if (remain == 0)
            {
                // cout << n << " is not prime." << endl;
                break;  // break is stop because we already know the number is not prime
            }

            // leftover numbers are prime
            if ((remain != 0) && j == (n-2))
            {
                cout << n << " is prime" << endl;
            }
        }
    }
}

/* === OUTPUT ===

5 is prime
7 is prime
11 is prime
13 is prime
17 is prime
19 is prime
23 is prime
29 is prime
31 is prime
37 is prime
41 is prime
43 is prime
47 is prime
53 is prime
59 is prime
61 is prime
67 is prime
71 is prime
73 is prime
79 is prime
83 is prime
89 is prime
97 is prime

 
 */