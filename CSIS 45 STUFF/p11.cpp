// Name: David Nguyen
// File: p11.cpp
// Date: 09/02/2019 -
// Description: Write a program to determine if the user can vote.
//      The user can vote if they are over 18 years old, are citizen, and are registered.

#include <iostream>
using namespace std;

int main()
{
    // declaring variables
    int age;
    string citizen;
    string registered;
    string yes;
    string no;

    yes = "yes";
    no = "no";


    // prompt
    cout << "Program to determine if you can vote" << endl;
    cout << "How old are you? ";
    cin >> age;
    cout << "Are you a U.S. citizen? ";
    cin >> citizen;
    cout << "Have you registered to vote? ";
    cin >> registered;

    // processing - if, else if chain
    if ( (age >= 18) && (citizen == yes) && (registered == yes) )
    {
        cout << "Congratulations you can vote. ";
    }
    else if ( (age < 18) || (citizen == no) || (registered == no) )
    {
        cout << "You cannot vote." << endl;
        if (age < 18)
        {
            cout << "- You must be over 18 to vote." << endl;
        }
        if (citizen == no)
        {
            cout << "- You must be a citizen to vote." << endl;
        }
        if (registered == no)
        {
            cout << "- You must register to vote." << endl;
        }
    }

    return 0;
}

/* === OUTPUT ===

 ==== Test run 1:
 Program to determine if you can vote
 How old are you? 20
 Are you a U.S. citizen? yes
 Have you registered to vote? yes
 Congratulations you can vote.

 ==== Test run 2:
 Program to determine if you can vote
 How old are you? 20
 Are you a U.S. citizen? yes
 Have you registered to vote? no
 You cannot vote.
 - You must register to vote.

 ==== Test run 3:
 Program to determine if you can vote
 How old are you? 20
 Are you a U.S. citizen? no
 Have you registered to vote? no
 You cannot vote.
 - You must be a citizen to vote.
 - You must register to vote.

 ==== Test run 4:
 Program to determine if you can vote
 How old are you? 17
 Are you a U.S. citizen? no
 Have you registered to vote? no
 You cannot vote.
 - You must be over 18 to vote.
 - You must be a citizen to vote.
 - You must register to vote.

 */