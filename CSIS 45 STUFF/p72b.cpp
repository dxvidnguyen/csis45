// Name: David Nguyen
// File: p72b.cpp
// Date: 11/25/2019 - 12/09/2019
// Description: Structure Examples
//   Type up the 4 structure example programs and get them to work

// Structure Example 2:
#include <iostream>
using namespace std;

struct RECORD
{
    int partNum;
    int numUnits;
    float unitCost;
    float totalCost;
};

int main()
{
    struct RECORD autoParts;
    cout << "Enter a part number: ";
    cin >> autoParts.partNum;

    cout << "Enter a number of units: ";
    cin >> autoParts.numUnits;

    cout << "Enter unit cost: ";
    cin >> autoParts.unitCost;

    // arithmetic operations may be performed on struct variables
    autoParts.totalCost = autoParts.numUnits * autoParts.unitCost;
    cout << "The total cost of those units is: " << autoParts.totalCost << endl;

    return 0;
}

/* === OUTPUT ===

Enter a part number: 1
Enter a number of units: 2
Enter unit cost: 3
The total cost of those units is: 6

 */