// Name: David Nguyen
// File: p52.cpp
// Date: 10/21/19 - 12/05/2019
// Description: Array Example
//  Type up the array example (including the comments!) and get it working. Submit your code and output

// Array Examples
#include <iostream>
using namespace std;
#include <stdlib.h>
#include <cstdlib>

int main()
{
    int i;
    int velocity[5]; // ARRAY DECLARATION
    float distance[] = {10, 23.4, 20, 40.86}; // Declaration and INITIALIZATION

    float time[3]; // Array Declaration, will have 3 elements
    time[0] = 100; // Element 1 has index 0 and value 100
    time[1] = 200; // Element 2 has index 1 and value 200
    time[2] = 300; // Element 2 has index 2 and value 300

    for(int i = 0; i < 3; i++)
    {
        cout << "time: " << time[i] << endl;
    }

    // velocity[] array has 5 elements
    // velocity[0], velocity[1], velocity[2], velocity[3], velocity[4]
    for (i = 0; i < 5; i++)
    {
        cout << "Enter velocity #" << i+1 << ": ";
        cin >> velocity[i]; // ARRAY INPUT
    }

    cout << "the velocities you entered: ";
    for (i = 0; i < 5; i++)
    {
        cout << velocity[i]; // ARRAY OUTPUT
        if (i<4)
            cout << ", ";
    }

    cout << endl;

    system("pause");
    return 0;
}

/* === OUTPUT ===
 
time: 100
time: 200
time: 300
Enter velocity #1: 1
Enter velocity #2: 2
Enter velocity #3: 3
Enter velocity #4: 4
Enter velocity #5: 5
the velocities you entered: 1, 2, 3, 4, 5
sh: pause: command not found

Process finished with exit code 0
 
 
 */

// I am unsure why but I typed it word for word but line 47 system("pause"); 
// will not print out correctly
