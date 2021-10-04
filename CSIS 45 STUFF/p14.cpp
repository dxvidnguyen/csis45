// Name: David Nguyen
// File: p14.cpp
// Date: 09/09/2019 - 10/09/2019
// Description: Random Number, Odd or Even.
//      Write a program that generates a random number between 10 to 25. 
//      Then the program should inform the use if the number is odd or even.

#include <iostream>     // for cout and cin
#include <time.h>       // for time(NULL)
#include <stdlib.h>     // for srand(iseed)

using namespace std;

int main()
{
    int iseed = time(NULL);
    srand(iseed);

    // part 1 - generating a random number between 10 and 25
    int min = 10;
    int max = 25;

    int num = min + rand()%(max-min+1);
    // note to self could also use:
    // int num2 = 10 + rand()%(16);

    cout << "Generating a random number between 10 to 25: " << num << endl;


    // part 2 - determining whether the number is odd or even
    int remain = num%2;
    if (remain == 0)
        cout << "The random number " << num << " is Even." << endl;
    else if (remain == 1)
        cout << "The random number " << num <<  " is Odd. " << endl;


    return 0;

}

/* === OUTPUT ===

 Test Run 1:
Generating a random number between 10 to 25: 20
The random number 20 is Even.

Test Run 2:
Generating a random number between 10 to 25: 21
The random number 21 is Odd.


Test Run 3:
Generating a random number between 10 to 25: 18
The random number 18 is Even.

Test Run 4:
Generating a random number between 10 to 25: 23
The random number 23 is Odd.


*/