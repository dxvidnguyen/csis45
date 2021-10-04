// Name: David Nguyen
// File: p31.cpp
// Date: 09/23/2016 - 11/18/2019
// Description: Dice (if/else, loop, random)
//  Write a program that will imitate die and see if you can beat the computer.
//  You are allowed to reroll if you are unhappy with your numbers

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

int main()
{
    int iseed = time(NULL); // system time - huge number
    srand(iseed); // huge list of numbers

    cout << "Beat the computer!" << endl;

    int p1, p2, c1, c2;
    // p = player, c = computer

    // p1 = rand()%7;
    // p2 = rand()%7;


    string roll = "one"; // first time the string wil equal one

    while (true)
    {
        if((roll == "one") || (roll == "n"))
        {
            // rand() must be inside loop to redo rand with each loop
            p1 = rand()%7;
            p2 = rand()%7;

            // calculation and prompt for reroll or keep
            cout << "You rolled a " << p1 << " and " << p2 << " (total = " << (p1+p2) << ")" << endl;
            cout << "Do you want to keep those? (y or n) ";
            cin >> roll;

            // print out rolling again if the answer is n
            if (roll == "n")
                cout << "Rolling again ... " << endl;
        }


        if (roll == "y")
        {
            break;
        }
    }

    c1 = rand()%7;
    c2 = rand()%7;

    // computer roll
    cout << "The computer has rolled " << c1 << " and " << c2 << " (total = " << (c1+c2) << ")" << endl;

    // if statements to see who wins
    if ((p1+p2) < (c1+c2))
        cout << "So sorry. You lose. Computer wins." << endl;
    if ((p1+p2) > (c1+c2))
        cout << "Congrats, you win. Computer loses." << endl;
    if ((p1+p2) == (c1+c2))
        cout << "Tie!" << endl;


    return 0;

}

/* === OUTPUT ===

Run 1:
Beat the computer!
You rolled a 1 and 6 (total = 7)
Do you want to keep those? (y or n) n
Rolling again ...
You rolled a 0 and 2 (total = 2)
Do you want to keep those? (y or n) n
Rolling again ...
You rolled a 4 and 1 (total = 5)
Do you want to keep those? (y or n) y
The computer has rolled 0 and 3 (total = 3)
Congrats, you win. Computer loses.

 
Run 2:
Beat the computer!
You rolled a 1 and 6 (total = 7)
Do you want to keep those? (y or n)  n
Rolling again ... 
You rolled a 3 and 0 (total = 3)
Do you want to keep those? (y or n) y
The computer has rolled 4 and 2 (total = 6)
So sorry. You lose. Computer wins.


 */
