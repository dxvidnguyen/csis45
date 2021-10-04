// Name: David Nguyen
// File: p30.cpp
// Date: 09/23/2019 - 11/17/2019
// Description: Penny that Doubles or A Million Dollars
// You have the choice of:
//  1) 1 million $
//  2) 1 penny which doubles its value during the next 30 days
//  Which one would you chose?
//  Write a program to compute and show the value of the penny at day 30, and exactly how much more (or less) that is
//      compared to the 1 million dollars.

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

int main()
{
    // prompt or question or intro
    cout << "You have the choice of: " << endl;
    cout << " 1) 1 million $" << endl;
    cout << " 2) 1 penny which doubles its value during the next 30 days" << endl;
    cout << " Which one would you choose? " << endl << endl;


    // variables
    int penny, pValue, million;
    million = 1000000;
    penny = 1; // value of penny

    // for loop to determine value of penny after 30 days
    for (int a = 1; a <= 30; a++)
    {
        if (a == 1) // first day penny's value is 1
        {
            pValue = penny;
        }
        if ( (a > 1) && (a <= 30) ) // then the value of the penny begins to double
        {
            pValue = 2 * pValue;
        }
    }


    // if statements to see which has a greater value
    if (million > pValue)
    {
        int diff = million - pValue;
        cout << "After the 30 days, the penny is worth " << pValue << " dollars." << endl;
        cout << "By picking the million dollars, you have " << diff << " more dollars than if you picked the penny. ";
    }

    if (million < pValue)
    {
        int diff = pValue - million;
        cout << "After the 30 days, the penny is worth " << pValue << " dollars." << endl;
        cout << "By picking the penny, you have " << diff << " more dollars than if you picked the million dollars. ";
    }
    

    return 0;
}


/* === OUTPUT ===
 
You have the choice of:
1) 1 million $
2) 1 penny which doubles its value during the next 30 days
        Which one would you choose?

After the 30 days, the penny is worth 536870912 dollars.
By picking the penny, you have 535870912 more dollars than if you picked the million dollars. 
 
 */