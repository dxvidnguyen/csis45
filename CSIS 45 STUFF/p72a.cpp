// Name: David Nguyen
// File: p72a.cpp
// Date: 11/25/2019 - 12/09/2019
// Description: Structure Examples
//   Type up the 4 structure example programs and get them to work

// Structure allows to group variables

#include <iostream>
using namespace std;

struct PARTS {     // declaration of structure PARTS
    // declare structure variables
    string partname;    // intialized on line 25
    int count;          // intialized on line 26
    float unitCost;     // intialized on line 27
    float totalCost;    // intialized on line 28

};

int main()
{
    // declare a variable part of parts type
    struct PARTS part; // part allows access to structure variables using dot .
    part.partname = "bolt";
    part.count = 20;
    part.unitCost = 0.25;
    part.totalCost = part.count * part.unitCost;
    cout << "Total cost = " << part.totalCost << endl;
    cout << "partname = " << part.partname << endl;

    return 0;
}

/* === OUTPUT ====

Total cost = 5
partname = bolt

 */