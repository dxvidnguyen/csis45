// Name: David Nguyen
// File: p50b.cpp
// Date: 10/21/19 - 12/05/2019
// Description: Pointers 3 Programs - Program 2
//  Type up the 3 pointer program examples, including the comments
//  Show how the program ran in the with a multi line comment

#include <iostream>
using namespace std;

int main()
{
    // Declare / Initialize Integer variable a = 1
    int a = 1;

    // Show the Memory address of a
    cout << &a << endl; // &a = 0x7ffeed970b0c

    // Declare a pointer variable A
    int *A;

    // Make A equal to the memory address of 'a'
    A = &a; // A = 0x7ffeed970b0c

    // Show the value of the variable that A points to
    cout << *A << endl; // *A = 1

    // Change the value of the variable a
    *A = 10;

    // Show it
    cout << *A << endl; // *A = 10
    cout << a << endl;  // a = 10
}

/* === OUTPUT ===
 
0x7ffeed970b0c
1
10
10

 */