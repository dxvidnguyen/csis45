// Name: David Nguyen
// File: midtermLongerProgram.cpp
// Date: 10/14/2019 - 12/03/2019
// Description: Midterm - Longer Program
//  Write a C++ program that accepts the lengths of three sides (a,b,c) of a triangle as input from the user.
//  Validate the user input, so that sides a, b, c can only be POSITIVE.
//  The program output should indicate whether or not the triangle is an Equilateral Triangle, a Right Triangle ,
//      Isosceles which is Not Equilateral, or some Other type of triangle.
//  Set up the program so the user can choose to repeat the program, if desired.
//  Test your program for the 4 types of triangles, and submit the output with your C++ program. Use the Sample Run data.


#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

int main()
{
    int redo = 0; // redo will determine whether the program will replay or not
    // at the beginning of first run, redo will be 0
    // at the end of the run, person will decide to continue or stop
    // continue -> set redo to 1; stop --> set redo to 2

    while (true)
    {
        if ((redo == 0) || (redo == 1))
        {
            if (redo == 1)  // just for spacing for a new set
                cout << endl;

            // variables for sides of triangles
            float a, b, c;

            // prompt for side a
            cout << "Please enter a value for side a: ";
            cin >> a;

            // input validation - checks if a is positive
            while(a < 0)
            {
                cout << "Value must be positive! " << endl;
                cout << "Please enter a positive value for side a: ";
                cin >> a;
            }

            // repeat for side b
            cout << "Please enter a value for side b: "; // prompt
            cin >> b;
            while(b < 0) // input validation for side b
            {
                cout << "Value must be positive! " << endl;
                cout << "Please enter a positive value for side b: ";
                cin >> b;
            }

            // repeat for side c
            cout << "Please enter a value for side c: "; // prompt
            cin >> c;
            while(c < 0) // input validation for side c
            {
                cout << "Value must be positive! " << endl;
                cout << "Please enter a positive value for side c: ";
                cin >> c;
            }

            // variables to hold squared values of a, b, c
            float aa, bb, cc;
            aa = a*a;
            bb = b*b;
            cc = c*c;
            // to be used to determine if a triangle is a right triangle

            // check to see if triangle is equilateral
            if ( (a == b) && (b == c) )
                cout << "This is an EQUILATERAL triangle, meaning all sides are equal!" << endl;

            /*
            // check to see if triangle is an isosceles
            if ((a==b) && (b != c)) // a and b are the same but c is not
                cout << "This is an ISOSCELES triangle, where only 2 of the sides are equal. ";
            if ((a==c) && (a != b)) // a and c are the same but b is not
                cout << "This is an ISOSCELES triangle, where only 2 of the sides are equal. ";
            if ((b==c) && (b != a)) // b and c are the same but a is not
                cout << "This is an ISOSCELES triangle, where only 2 of the sides are equal. ";
            */

                // using OR operator to condense the three separate if statements
            else if ( ((a==b) && (b != c)) || ((a==c) && (a != b)) || ((b==c) && (b != a)) )
                cout << "This is an ISOSCELES triangle, where only 2 of the sides are equal. " << endl;

                // check to see if the triangle is right triangle
            else if ((aa == (bb + cc)) || (bb == (aa + cc)) || (cc == (aa + bb)) )
                cout << "This is a RIGHT triangle " << endl;

                // anything else will be considered an "Other"
            else
                cout << "This is a OTHER kind of triangle. It is NOT ISOSCELES, NOT RIGHT, and NOT EQUILATERAL." << endl;

            // prompt user to either repeat or stop
            cout << "Would you like to repeat-(enter 1) or stop-(enter 2)? ";
            cin >> redo;


        }

        if (redo == 2)
            break;
    }




}

/* === OUTPUT ===

Run 1:
Please enter a value for side a: 1
Please enter a value for side b: -10
Value must be positive!
Please enter a positive value for side b: -100
Value must be positive!
Please enter a positive value for side b: 1
Please enter a value for side c: 1
This is an EQUILATERAL triangle, meaning all sides are equal!
Would you like to repeat-(enter 1) or stop-(enter 2)? 1

Please enter a value for side a: 3
Please enter a value for side b: 3
Please enter a value for side c: 1
This is an ISOSCELES triangle, where only 2 of the sides are equal.
Would you like to repeat-(enter 1) or stop-(enter 2)? 1

Please enter a value for side a: 3
Please enter a value for side b: 4
Please enter a value for side c: 5
This is a RIGHT triangle
Would you like to repeat-(enter 1) or stop-(enter 2)? 1

Please enter a value for side a: 1
Please enter a value for side b: 2
Please enter a value for side c: 3
This is a OTHER kind of triangle. It is NOT ISOSCELES, NOT RIGHT, and NOT EQUILATERAL.
Would you like to repeat-(enter 1) or stop-(enter 2)? 2

Process finished with exit code 0


Run 2:
Please enter a value for side a: -1
Value must be positive! 
Please enter a positive value for side a: 2
Please enter a value for side b: 2
Please enter a value for side c: 2
This is an EQUILATERAL triangle, meaning all sides are equal!
Would you like to repeat-(enter 1) or stop-(enter 2)? 1

Please enter a value for side a: 2
Please enter a value for side b: 2
Please enter a value for side c: 1
This is an ISOSCELES triangle, where only 2 of the sides are equal. 
Would you like to repeat-(enter 1) or stop-(enter 2)? 1

Please enter a value for side a: 5
Please enter a value for side b: 12
Please enter a value for side c: 13
This is a RIGHT triangle 
Would you like to repeat-(enter 1) or stop-(enter 2)? 1

Please enter a value for side a: 29
Please enter a value for side b: 4
Please enter a value for side c: 1
This is a OTHER kind of triangle. It is NOT ISOSCELES, NOT RIGHT, and NOT EQUILATERAL.
Would you like to repeat-(enter 1) or stop-(enter 2)? 2

Process finished with exit code 0


 */