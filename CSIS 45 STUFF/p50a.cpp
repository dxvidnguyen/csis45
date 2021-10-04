// Name: David Nguyen
// File: p50a.cpp
// Date: 10/21/19 - 12/05/2019
// Description: Pointers 3 Programs - Program 1 
//  Type up the 3 pointer program examples, including the comments
//  Show how the program ran in the with a multi line comment

#include <iostream>
using namespace std;

void change(int *A);

int main()
{
    int A = 0;
    cout << "A = " << A << endl;    // shows the value 0 stored into memory address of &A
    cout << "&A = " << &A << endl;  // shows the memory address of A
    change (&A); // &A passes the address of A into the function change(..)
    cout << "A = " << A << endl;
}

void change (int *A)
{
    *A = 5; // changes the value of A in the main
}

/* === OUTPUT ===
 
A = 0
&A = 0x7ffee1e7db0c
A = 5
 
 */