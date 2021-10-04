// Name: David Nguyen
// File: p19a.cpp
// Date: 09/16/2019 - 11/09/2019 
// Description: Type up the 2 Loop Examples - Example A (ForWhile.cpp)
//  Type up the two examples below, including comments and get them working.
//  Submit both programs including the comments and show how each ran/tested.



#include <iostream>
using namespace std;

int main()
{
    int count;
    // FOR loop is used when an action must be repeated
    // FOR (BEGIN; END CONDITION; INCREMENT) { statements.... ; }

    for (count = 0; count < 3; count++)
    {
        cout << "In FOR loop: " << endl;
        cout << "count = " << count << endl;
    }

    // WHILE loop is also used when an action must be repeated
    // WHILE (END CONDITION) { statements ... ; }
    while (count < 4)
    {
        cout << "In WHILE loop: " << endl;
        cout << "count = " << count << endl; // shows only if count < 3
        count ++;
    }

    // DO-WHILE loop is used when an action must be repeated at least once
    //DO { statements... ; } WHILE { END CONDITION };
    do
    {
        cout << "In DO-WHILE loop: " << endl;
        cout << "count = " << count << endl;
        count = count + 1;
    }
    while (count < 3); // condition tested at the end, so loop happens at least once

    return 0;
}

/* === OUTPUT ===

Test Run:
In FOR loop:
count = 0
In FOR loop:
count = 1
In FOR loop:
count = 2
In WHILE loop:
count = 3
In DO-WHILE loop:
count = 4


 */
