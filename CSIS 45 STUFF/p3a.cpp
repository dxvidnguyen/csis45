// Name: David Nguyen
// File: p3a.cpp
// 09/02/2019 - 09/18/2019
// Description: Type up the Sample Program provided on iLearn.

/*
    p002VariablesInput.cpp
    Alex Stoykov
    8/27/14
    Description: Examples of
        - VARIABLES: Initialization and Declaration
        - INPUT: cin >>
        - OUTPUT: cout <<
*/

#include <iostream>
using namespace std;

int main()
{
    // DECLARE variables
    double weight; // DOUBLE  - 8 bytes, has a decimal, Ex: 3.14, 2.71
    float height;  // FLOAT   - 4 bytes, has a decimal, Ex: 3.14, 2.71
    int Age;       // INTEGER - 4 bytes, NO decimal   , Ex: 1.00, 3.00

    // INITIALIZE variables
    weight = 183.54; // Initialize variable weight to 183.5
    height = 6.0;    // Initialize variable height to 6.0

    // OUTPUT: Prompt the user to enter age
    cout << "Please enter a whole number for age: ";
    // INPUT: The user types something on the keyboard, and presses Enter
    cin >> Age; // INITIALIZE Age to whatever value the user enters
    // OUTPUT: Show the value of variables, and what user entered
    cout << "Weight = " << weight << "\n" << "Height = " << height << "\n";
    cout.setf(ios::fixed); // To specify fixed point notation
    cout.setf(ios::showpoint); // To specify that the decimal point will always be shown
    cout.precision(1); // To specify that ONE decimal place will always be shown
    cout << "The Weight with 1 decimal is " << weight << endl;

    return 0;
}
/* === OUTPUT ===

Please enter a whole number for age: 34
Weight = 183.54
Height = 6
The Weight with 1 decimal is 183.5

Process finished with exit code 0

*/