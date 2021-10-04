// Name: David Nguyen
// File: p26.cpp
// Date: 09/23/2019 - 11/16/2019
// Description: Number Guess Game
//  Write a number guessing game. The computer will generate a random number
//    between 0 and 100.
//  The user will be prompted to guess the number.
//  If the number guessed is greater than the random number, an appropriate
//    message will appear,
//  with a similar message for low guesses.
//  The user should keep guessing until the correct number is guessed.
//  An appropriate message should congratulate the user for guessing the correct
//    number.


#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

int main()
{
    // generating a random number
    int iseed = time(NULL); // gets system time - system time is a huge
                              // number that constantly changes
    srand(iseed); // generates a random list of numbers from system time
    int num = iseed%101; // number between 0 and 100

    // showing the random number
    cout << "Correct number: " << num << endl;

    // int count needs to be outside the while loop b/c if it is inside then the
    //      loop will turn
    // it into 1 at the beginning
    int count = 1;

    // loop to guess correct number
    while (true)
    {
        int guess;
        cout << "Please enter a guess between 0 and 100: ";
        cin >> guess;

        // correct number
        if (num == guess)
        {
            cout << "Correct! You got it right!" << endl;
            cout << "It took you " << count << " guesses!" <<endl;
            break;
        }

        // incorrect guesses
        if (num < guess)
        {
            cout << "No, the number is lower than that." << endl;
            count++;
        }
        if (num > guess)
        {
            cout << "No, the number is higher than that." << endl;
            count++;
        }

    }


    return 0;
}

/* === OUTPUT ===

Correct number: 8
Please enter a guess between 0 and 100: 50
No, the number is lower than that.
Please enter a guess between 0 and 100: 5
No, the number is higher than that.
Please enter a guess between 0 and 100: 10
No, the number is lower than that.
Please enter a guess between 0 and 100: 8
Correct! You got it right!
It took you 4 guesses!

 */
