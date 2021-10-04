// Name: David Nguyen
// File: p42.cpp
// Date: 10/07/2019 - 12/02/2019
// Description: int randint (int min, int max)
//     Write the definition of a function that returns a random number based on two arguments MIN,
//     and MAX typed by the user.

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

// prototypes
int randint(int min, int max);

// main programs
int main()

{

    // declare two integer variables MIN, MAX,
    int MIN, MAX;

    // ask the user to enter values into MIN and MAX
    cout << "Please enter an upper limit: ";
    cin >> MAX;
    cout << "Please enter a lower limit: ";
    cin >> MIN;

    // prints out
    cout << "A random number between " << MIN << " to " << MAX << " : ";
    cout << randint(MIN,MAX) << endl;

}

// definitions
int randint(int min, int max)
{
    // create random number list
    int iseed = time(NULL);
    srand(iseed);

    // keep random numbers between the limits
    int range = max - min + 1;
    int randNum = rand()%range + min;

    // return the random number to be printed out
    return randNum;

}

/* === OUTPUT ===

Sample Run 1:
Please enter an upper limit: 20
Please enter a lower limit: 10
A random number between 10 to 20 : 18
 
Sample Run 2:
Please enter an upper limit: 104
Please enter a lower limit: 28
A random number between 28 to 104 : 61

 */