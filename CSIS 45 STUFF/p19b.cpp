// Name: David Nguyen
// File: p19b.cpp
// Date: 09/16/2019 - 11/09/2019
// Description: Type up the 2 Loop Examples - Example B (BreakContinue.cpp)
//  Type up the two examples below, including comments and get them working.
//  Submit both programs including the comments and show how each ran/tested.


#include <iostream>
using namespace std;

int main()
{
    int R = 0, num;
    while (R < 3) // repeats until R is less than 3
    {
        cout << "INSIDE WHILE, r = " << R << endl;
        R += 1; // R = R + 1; same as R++
    }

    int Age = -10;
    // OR
    while ( (Age < 0) || (Age > 123) ) //repeats while one condition is true
    {
        cout << "Please enter a valid age: ";
        cin >> Age;
    }

    // AND
    while ( (Age > 0) && (Age < 123) ) //repeats while BOTH conditions ARE TRUE
    {
        cout << "Age is correct, enter invalid age to stop loop: ";
        cin >> Age;

    }

    // BREAK and CONTINUE
    while (true) // a loop that will go on forever
    {
        cout << "Please enter 1 to stop and 2 to repeat the loop: ";
        cin >> num;
        if (num == 1)
            break; // ends the while loop
        else if (num == 2)
            continue; // makes while loop resume from the beginning (line 38)
        cout << "Does this ever show? \n";
    }

    return 0;
}

/* === OUTPUT ===

INSIDE WHILE, r = 0
INSIDE WHILE, r = 1
INSIDE WHILE, r = 2
Please enter a valid age: -2
Please enter a valid age: 222
Please enter a valid age: 22
Age is correct, enter invalid age to stop loop: 22
Age is correct, enter invalid age to stop loop: 34
Age is correct, enter invalid age to stop loop: -4
Please enter 1 to stop and 2 to repeat the loop: 2
Please enter 1 to stop and 2 to repeat the loop: 2
Please enter 1 to stop and 2 to repeat the loop: 0
Does this ever show?
Please enter 1 to stop and 2 to repeat the loop: 2
Please enter 1 to stop and 2 to repeat the loop: 1

Process finished with exit code 0

 */
