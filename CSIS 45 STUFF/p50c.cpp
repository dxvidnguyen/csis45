// Name: David Nguyen
// File: p50c.cpp
// Date: 10/21/19 - 12/05/2019
// Description: Pointers 3 Programs - Program 3
//  Type up the 3 pointer program examples, including the comments
//  Show how the program ran in the with a multi line comment

#include <iostream>
using namespace std;

int main()
{
    int a = 1, *c, **d;
    c = &a; // c --> a
    d = &c; // d --> c --> a
    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl << endl;

    cout << "*c = " << *c << endl;
    cout << "c = " << c << endl;
    cout << "&c = " << &c << endl << endl;

    cout << "**d = " << **d << endl;
    cout << "*d = " << *d << endl;
    cout << "d = " << d << endl;
    cout << "&d = " << &d << endl;

}

// Hex: 0,1,2,3,4,5,6,7,8,9,  A,  B,  C,  D,  E,  F
// Dec: 0,1,2,3,4,5,6,7,8,9, 10, 11, 12, 13, 14, 15

/* === OUTPUT ===

a = 1
&a = 0x7ffee43a0b0c

*c = 1
c = 0x7ffee43a0b0c
&c = 0x7ffee43a0b00

**d = 1
*d = 0x7ffee43a0b0c
d = 0x7ffee43a0b00
&d = 0x7ffee43a0af8

 */