// Name: David Nguyen
// File: p17.cpp
// Date: 09/10/2019 - 10/10/2019
// Description: Coin Conversion - Write a program to convert any given of total cents (under 100)
//      into the correct number quarter, dimes, nickels, and pennies.

#include <iostream>
using namespace std;

int main()
{
    // Declaring variables
    int total;
    int quarter, qValue;
    int dime, dValue;
    int nickel, nValue;
    int penny, pValue;

    // Prompt: obtain the total number of cents
    // it is already given that the number of cents will be less than 100
    cout << "Please enter the number of cents: ";
    cin >> total;

    // Calculations -- use integer division
    quarter = total/25;
    // max # of quarters
    dime = (total - (quarter*25))/10;
    // max # of dimes considering quarters
    nickel = (total - ( (quarter*25) + (dime*10) ) )/5;
    // max # of nickels considering quarters & dimes
    penny = total - ( (quarter*25) + (dime*10) + (nickel*5) );
    // max # of pennies considering other coins
    qValue = quarter * 25;
    dValue = dime * 10;
    nValue = nickel * 5;
    pValue = penny;


    // Print Out
    cout << "# of Quarters: " << quarter << " x 25c = " << qValue << " cents total" << endl;
    cout << "# of Dimes: " << dime << " x 10c = " << dValue << " cents total" << endl;
    cout << "# of Nickels: " << nickel << " x 5c = " << nValue << " cents total" << endl;
    cout << "# of Pennies: " << penny << " x 1c = " << pValue << " cents total" << endl;






    return 0;
}
/* === OUTPUT ===

 Test Run 1
 Please enter the number of cents: 99
 # of Quarters: 3 x 25c = 75 cents total
 # of Dimes: 2 x 10c = 20 cents total
 # of Nickels: 0 x 5c = 0 cents total
 # of Pennies: 4 x 1c = 4 cents total

 Test Run 2:
 Please enter the number of cents: 66
 # of Quarters: 2 x 25c = 50 cents total
 # of Dimes: 1 x 10c = 10 cents total
 # of Nickels: 1 x 5c = 5 cents total
 # of Pennies: 1 x 1c = 1 cents total


 Test Run 3:
 Please enter the number of cents: 29
 # of Quarters: 1 x 25c = 25 cents total
 # of Dimes: 0 x 10c = 0 cents total
 # of Nickels: 0 x 5c = 0 cents total
 # of Pennies: 4 x 1c = 4 cents total

 
 */