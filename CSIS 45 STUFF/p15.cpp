// Name: David Nguyen
// File: p15.cpp
// Date: 09/10/2019 - 10/10/2019
// Description: Practice with ASCII
//  Write a program that declares a char variable or number.
//  Ask the user to input that character
//  Inform user about about their character: uppercase, lowercase, number, or something else

#include <iostream>

using namespace std;

int main ()
{
    // Prompt : Obtain character
    char input;
    cout << "Please enter a number, letter, or something else: ";
    cin >> input;

    // Convert character into ASCII decimal value
    int table = int (input);

    // Determine whether character is uppercase, lowercase, number or something else
    // --> using an IF, ELSE IF, ELSE chain
    if ( (table >= 97) && (table <= 122) )
        cout << "What you entered is a lower case letter. " << endl;
    else if ( (table >= 65) && (table <= 90) )
        cout << "What you entered is an upper case letter." << endl;
    else if ( (table >= 48) && (table <= 57) )
        cout << "What you entered is a number." << endl;
    else
        cout << "What you entered is neither a number or a letter." << endl;


    return 0;
}

/* === OUTPUT ===

 Test Run 1:
 Please enter a number, letter, or something else: k
 What you entered is a lower case letter.

 Test Run 2:
 Please enter a number, letter, or something else: K
 What you entered is an upper case letter.

 Test Run 3:
 Please enter a number, letter, or something else: 1
 What you entered is a number.

 Test Run 4:
 Please enter a number, letter, or something else: *
 What you entered is neither a number or a letter.

 */