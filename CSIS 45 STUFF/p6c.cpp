// Name: David Nguyen
// File: p6c.cpp
// Date: 09/02/2019 - 09/18/2019
// Description: Write a program that shows the longest palindrome you know.

#include <iostream>
using namespace std;

int main()
{
    cout << "A palindrome is a word that is spelled the same forward and backward." << endl;
    string palindrome;
    cout << "Please enter the longest palindrome you know: ";
    cin >> palindrome;
    cout << endl;

    cout << "The longest palindrome you know is: " << palindrome << endl;
    cout << "The longest palindrome according to oxford dictionary is: tattarrattat" << endl;

    return 0;
}

/* === OUTPUT ===
 
A palindrome is a word that is spelled the same forward and backward.
Please enter the longest palindrome you know: noon

The longest palindrome you know is: noon
The longest palindrome according to oxford dictionary is: tattarrattat

Process finished with exit code 0
 
 */