// (1) Comments on Top, Documenting the Program:
// David Nguyen
// p1.cpp
// 09/02/2019 - 09/18/2019
// Description: Examples of Output and Variables

#include <iostream> // Need this for COUT and CIN
using namespace std; // Need this for COUT and CIN

int main() // This is where the program starts
{
    cout << "Hello"; // Everything in the Double quotes shows as is
    cout << "\n";    // \n inserts a new line, same as pressing Enter key
    cout << "Human" << "\n";

    // VARIABLES are named storage locations for locations, number, strings, characters
    // STRING is anything enclosed in quotes
    string myName = "Alex"; // STRING variable "myName".
    cout << "Your name is: " << myName << "\n";

    // INTEGER is a whole number, with only ZERO after the decimal
    int wholeNum = 5.0; // INTEGER variable "wholeNum"
    cout << "The number stored in wholeNum is: " << wholeNum << "\n";

    // FLOAT or DOUBLE is a number where the decimal part is NOT zero
    float myFloat = 5.75;
    cout << "The number stored in myFloat is: " << myFloat << "\n";

    return 0; //This is where the program ends
}
/* === OUTPUT ===
Hello
Human
Your name is: Alex
The number stored in wholeNum is: 5
The number stored in myFloat is: 5.75

Process finished with exit code 0
 */