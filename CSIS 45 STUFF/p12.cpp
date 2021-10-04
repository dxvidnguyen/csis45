// Name: David Nguyen
// File: p12.cpp
// Date: 09/02/2019 -
// Description:

#include <iostream>
using namespace std;

int main()
{
    // declaring variables
    float quarter;
    float dime;
    float nickel;

    float quarterValue;
    float dimeValue;
    float nickelValue;
    float total;

    // prompt
    cout << "Please enter quarters: ";
    cin >> quarter;
    cout << "Please enter dimes: ";
    cin >> dime;
    cout << "Please enter nickels: ";
    cin >> nickel;


    // calculations
    quarterValue = quarter * 25;
    dimeValue = dime * 10;
    nickelValue = nickel * 5;
    total = quarterValue + dimeValue + nickelValue;

    // printing
    if ( (quarter < 0) || (dime < 0) || (nickel < 0) )
    {
        cout << "Input values must be positive! ";
    }
    else
    {
        cout << "You have = " << quarter << " * (25) + " << dime << " * (10) + "
        << nickel << " * (5) =  " << total << " cents";
    }

    return 0;
}

/* === OUTPUT ====

 Test Run 1:
 Please enter quarters: 2
 Please enter dimes: 3
 Please enter nickels: 1
 You have = 2 * (25) + 3 * (10) + 1 * (5) =  85 cents


 Test Run 2:
 Please enter quarters: -2
 Please enter dimes: 3
 Please enter nickels: 1
 Input values must be positive!

 */