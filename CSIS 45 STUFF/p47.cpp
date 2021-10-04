// Name: David Nguyen
// File: p47.cpp
// Date: 10/07/2019 - 12/02/2019
// Description: void showStars (int numStars)
//  Write the definition of a function with one parameter numStars.
//  You are not permitted to use string concatenation


#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

// function prototypes
void showStars(int numStars);

// main() function
int main()
{
    // declaring variable
    int n;

    // prompt
    cout << "How many stars would you like to show? ";
    cin >> n;

    // function call
    showStars(n);


    return 0;
}

// function definitions
void showStars(int numStars)
{
    for (int a = 0; a <= numStars; a++) // first loop to print out number of rows
    {
        for (int b = 1; b <= a; b++)    // nested loop to print out * per row
        {
            cout << "* ";

            // if the number of * is the same as the row number, new line for next row
            if (b == a)
                cout << endl;
        }
    }

}

/* === OUTPUT ===
Sample Run 1:
How many stars would you like to show? 4
*
* *
* * *
* * * *

Sample Run 2:
How many stars would you like to show? 7
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 

 
 */