// Name: David Nguyen
// File: p4.cpp
// Date: 09/02/2019 - 09/18/2019
// Description: Write a program that asks for a character INPUT from the keyboard 
//      and then OUTPUTS a large block letter "C" composed of that character.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    char X;
    cout << "Enter a letter: ";  //Prompt
    cin >> X;

    cout << "************************************************" << endl;
    cout << "        " << X << " " << X << " " << X << endl;
    cout << "      " << X << "      " << X << endl;
    cout << "     " << X << endl;
    cout << "    " << X << endl;
    cout << "    " << X << endl;
    cout << "    " << X << endl;
    cout << "     " << X << endl;
    cout << "      " << X << "       " << X << endl;
    cout << "        " << X << " " << X << " " << X << endl;

    cout << "**************************************************" << endl;
    cout << "         Computer Science is Cool Stuff!!          " << endl;

    return 0;
}

/* === OUTPUT ====
 Enter a letter: d
************************************************
        d d d
      d      d
     d
    d
    d
    d
     d
      d       d
        d d d
**************************************************
         Computer Science is Cool Stuff!!          

Process finished with exit code 0

 */