// Name: David Nguyen
// File: p29.cpp
// Date: 09/23/2019 - 11/16/2019
// Description: Practice Arthimetic Skills
//  Write a program to let a child practice arithmetic skills.
//  The program should ask for what kind of practice is wanted: +, -, * (no division)
//  Two random numbers between 0 and 9 will be generated
//  If the child answers incorrectly, the problem should be repeated until they get it right
//  If the child answers correctly, a message should appear to congratulate them.
//  At the end of the program, it should ask the child if they want to try again, which will let the user repeat the
//      program as many times as desired

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

int main()
{
    // redo is whether it will replay or not
    int redo = 0;
    // beginning redo is 0
    // at the end redo == 1 is repeat and redo == 2 is finish

    while(true) {
        if ((redo == 0) || (redo == 1)) {
            int iseed = time(NULL); // system time is a big number that
                                    // constantly changes
            srand(iseed); // generates system time into a list

            int type;

            cout << "Would you like to practice addition (1), subtraction (2), "
            << "or multiplication (3)? ";
            cin >> type;

            int numOne = rand() % 9;
            int numTwo = rand() % 9;

            // addition
            if (type == 1) {
                // declaring local variables
                int add, answer;
                add = numOne + numTwo;

                // prompt
                cout << "What is " << numOne << " + " << numTwo << " equal to: ";
                cin >> answer;

                while (true) // while loop to check if answer is correct
                {
                    if (answer == add)
                        break;
                    if (answer != add) {
                        cout << "That is incorrect. What is " << numOne << " + "
                       << numTwo << " equal to: ";
                        cin >> answer;
                    }
                }
                cout << "Correct! Would you like to practice again? (1 for Yes,"
                  << " 2 for No) ";
                cin >> redo;
            }


            // subtraction
            if (type == 2) {
                int subtract, answer;
                subtract = numOne - numTwo;
                cout << "What is " << numOne << " - " << numTwo << " equal to: ";
                cin >> answer;

                while (true) // while loop to check if answer is correct
                {
                    if (answer == subtract)
                        break;
                    if (answer != subtract) {
                        cout << "That is incorrect. What is " << numOne << " - "
                           << numTwo << " equal to: ";
                        cin >> answer;
                    }
                }
                cout << "Correct! Would you like to practice again? (1 for Yes,"
                  << " 2 for No) ";
                cin >> redo;
            }

            // multiplication
            if (type == 3) {
                int mult, answer;
                mult = numOne * numTwo;
                cout << "What is " << numOne << " * " << numTwo << " equal to: ";
                cin >> answer;

                while (true) // while loop to check if answer is correct
                {
                    if (answer == mult)
                        break;
                    if (answer != mult) {
                        cout << "That is incorrect. What is " << numOne << " * "
                           << numTwo << " equal to: ";
                        cin >> answer;
                    }
                }
                cout << "Correct! Would you like to practice again? (1 for Yes,"
                  << " 2 for No) ";
                cin >> redo;
            }

            if (redo == 2) {
                cout << "Thank you for playing!";
                break;
            }
        }

    }

    return 0;
}


/* === OUTPUT ====

Would you like to practice addition (1), subtraction (2), or multiplication (3)? 1
What is 8 + 2 equal to: 1
That is incorrect. What is 8 + 2 equal to: 10
Correct! Would you like to practice again? (1 for Yes, 2 for No) 1
Would you like to practice addition (1), subtraction (2), or multiplication (3)? 2
What is 8 - 1 equal to: 5
That is incorrect. What is 8 - 1 equal to: 6
That is incorrect. What is 8 - 1 equal to: 7
Correct! Would you like to practice again? (1 for Yes, 2 for No) 1
Would you like to practice addition (1), subtraction (2), or multiplication (3)? 3
What is 0 * 3 equal to: 9
That is incorrect. What is 0 * 3 equal to: 0
Correct! Would you like to practice again? (1 for Yes, 2 for No) 2
Thank you for playing!
 
*/
