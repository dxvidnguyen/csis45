// Name: David Nguyen
// File: p10.cpp
// Date: 09/02/2019
// Description:Write a program which asks the user to enter the width and
// height of a rectangle, and then calculates and
// shows the area and perimeter of the shape rounded to 1 decimal.
// Validate user input, make sure that an error message shows if either
// width or height are <= 0


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // declaring variables
    float height;
    float width;
    double area;
    double perimeter;

    // INPUT - Ask the user to enter float variables Width and Height of a
   //    rectangle
    cout << "Please enter height: ";
    cin >> height;
    cout << "Please enter width: ";
    cin >> width;

    // PROCESSING - Compute the Area and Perimeter of the rectangle
    // calculations for area and perimeter
    area = height * width;
    perimeter = 2 * (height + width);

    // OUTPUT - Show the Area and Perimeter of the rectangle rounded to 1
    // decimal if statement to check for invalid input
    if ((height <= 0) || (width <= 0))
    {
        cout << "Invalid input, both values must be positive ";
    }
    // else statement for valid inputs
    else
    {
        cout << "Area: " << height << " * " << width << " = ";
        cout << fixed << setprecision(1) << area << endl;
        cout << "Perimeter: 2 * (" << height << " + " << width << ") = ";
        cout << fixed << setprecision(1) << perimeter << endl;
    }

    return 0;
}

/* === OUTPUT ===
 
 Output 1
 Please enter height: 3.11
 Please enter width: 4.2
 Area: 3.11 * 4.2 = 13.1
 Perimeter: 2 * (3.1 + 4.2) = 14.6

 Output 2
 Please enter height: -1
 Please enter width: 4.2
 Invalid input, both values must be positive 

 
 */
