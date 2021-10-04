// Name: David Nguyen
// File: p34b.cpp
// Date: 09/30/2019 - 12/02/2019
// Description: call a function from the main()
//  type up the sample program below, and write the main() and function calls
//  needed to produce the provided output

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototype
void weightOfPeople(int numberPeople, double weightPerPerson);

// WRITE THE MAIN TO PRODUCE THE OUTPUT
int main()
{
    weightOfPeople(5,180.55);
}


// Function Definition
void weightOfPeople(int numberPeople, double weightPerPerson)
{
    cout << "The total weight of " << numberPeople << " people, \n";
    cout << "each person weighing " << weightPerPerson << "lb\nis ";
    cout << fixed << setprecision(1) << numberPeople * weightPerPerson << "lb\n";
}

/* === (given) OUTPUT

 The total weight of 5 people,
 each person weighing 180.55lb
 is 902.8lb

 === (my) OUTPUT ===

The total weight of 5 people,
each person weighing 180.55lb
is 902.8lb

 */