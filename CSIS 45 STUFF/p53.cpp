// Name: David Nguyen
// File: p53.cpp
// Date: 10/21/19 - 12/05/2019
// Description: Array Input / Output
//  Ask the user how many numbers to enter.
//  Enter those numbers into an Array, then show them.

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

int main()
{
    // getting the size of the array
    int num;
    cout << "How many numbers would you like ot enter? ";
    cin >> num;

    // array declaration
    int a[num];

    // array initialization --> take user input and put into array
    for(int x = 0; x < num; x++)
    {
        cout << "Enter number " << (x + 1) << ": ";
        cin >> a[x];
    }

    // array output --> printing the numbers that were entered
    cout << "The numbers you entered are: ";
    for (int y = 0; y < num; y++)
    {
        cout << a[y];  // each index prints out the inputted value
        if (y < (num -1))
            cout << ", ";
    }

    return 0;
}

/* === OUTPUT ===

Test Run 1:
How many numbers would you like ot enter? 4
Enter number 1: 1
Enter number 2: 2
Enter number 3: 3
Enter number 4: 4
The numbers you entered are: 1, 2, 3, 4

Test Run 2:
How many numbers would you like ot enter? 8
Enter number 1: 5
Enter number 2: 3
Enter number 3: 10
Enter number 4: 15
Enter number 5: 25
Enter number 6: 21
Enter number 7: 99
Enter number 8: 16
The numbers you entered are: 5, 3, 10, 15, 25, 21, 99, 16

 */