// Name: David Nguyen
// File: p32.cpp
// Date: 09/23/2019 - 11/17/2019
// Description: Check Type of Triangle
//   Write a program which asks the user to type in the length of three sides of a triangle: a, b, c
//      1) Let the user know that the shape is a RIGHT TRIANGLE if either one is true:
//          a2  is equal to  b2 + c2
//          b2  is equal to  a2 + c2
//          c2  is equal to  a2 + b2
//      2) Let the user know that it is an EQUILATERAL TRIANGLE if BOTH of the conditions are true:
//          a is equal to b
//          b is equal to c.

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

int main()
{
    // declare variables
    int a, b, c;

    // prompt
    cout << "Please enter a number a: ";
    cin >> a;
    cout << "Please enter a number b: ";
    cin >> b;
    cout << "Please enter a number c: ";
    cin >> c;

    int aa, bb, cc;
    aa = a*a;
    bb = b*b;
    cc = c*c;

    // right triangle
    if ((aa == (bb + cc)) || (bb == (aa + cc)) || (cc == (aa + bb)) )
    {
        cout << "(right triangle)";
    }

    // equilateral triangle
    if ( (a == b) && (b == c) )
    {
        cout << "(equilateral triangle)";
    }


    return 0;

}



/* === OUTPUT ===

Run 1:
Please enter a number a: 3
Please enter a number b: 4
Please enter a number c: 5
(right triangle)

Run 2:
Please enter a number a: 4
Please enter a number b: 4
Please enter a number c: 4
(equilateral triangle)

Run 3:
Please enter a number a: 1
Please enter a number b: 2
Please enter a number c: 3

 */
