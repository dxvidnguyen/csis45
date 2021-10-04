// Name: David Nguyen
// File: p35.cpp
// Date: 09/30/2019 - 12/02/2019
// Description: void randomNum()
//  Write the definition of a function that does not return a value and has no parameters.
//  The function shows a random number between -10 to 10.
//  The function also informs the user whether the number is positive or negative.

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

// function prototype
void randomNum();

// main function
int main()
{
    int iseed = time(NULL);
    srand(iseed);

    cout << "Function call 1: " << endl;
    randomNum();
    cout << "Function call 2: " << endl;
    randomNum();
}

// function definition
void randomNum()
{
    // declare variable
    int num;

    // initialize variable;
    num = (rand()%21) - 10; // generates a random number b/w -10 and 10

    cout << "Generating a random number between -10 to 10: " << num << endl;
    if (num < 0)
        cout << "The random number " << num << " is negative. " << endl;
    if (num > 0)
        cout << "The random number " << num << " is positive. " << endl;
    if (num == 0)
        cout << "The random number " << num << " is zero. " << endl;

}

/* === OUTPUT ===

Run 1:
Function call 1:
Generating a random number between -10 to 10: 3
The random number 3 is positive.
Function call 2:
Generating a random number between -10 to 10: -5
The random number -5 is negative.
 
Run 2:
Function call 1: 
Generating a random number between -10 to 10: 10
The random number 10 is positive. 
Function call 2: 
Generating a random number between -10 to 10: -2
The random number -2 is negative. 


 */