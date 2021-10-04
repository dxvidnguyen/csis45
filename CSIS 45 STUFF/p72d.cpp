// Name: David Nguyen
// File: p72d.cpp
// Date: 11/25/2019 - 12/09/2019
// Description: Structure Examples
//   Type up the 4 structure example programs and get them to work

// Example of PASSING A STRUCTURE variable by pointer
#include <iostream>   // needed for input and output
#include <math.h>     // needed for "M_PI"
using namespace std;

struct cylinder
{
    float radius;
    float length;
    float section;
    float volume;
};

typedef struct cylinder CYLINDER;

void funcInput(CYLINDER *); // pass by pointer
void funcOutput(CYLINDER);  // pass by value

int main()
{
    CYLINDER can;
    // pass the CYLINDER variable to "can" to the function by pointer
    funcInput(&can);

    can.section = M_PI * can.radius * can.radius;   // M_PI comes with math.h
    can.volume = can.length * can.section;

    funcOutput(can);    // pass by value, so cannot make changes to "can"

    return 0;
}

// the function "funcInput" recieves a structure pointer
// so changing the structure variable "can1" also changes "can" in the main();

void funcInput(CYLINDER * can1)
{
    cout << "Please enter radius: ";
    cin >> can1->radius;
    cout << "Please enter length: ";
    cin >> can1->length;

}

void funcOutput (CYLINDER can1)
{
    // same function as previous example
    cout << "Radius: " << can1.radius << endl;
    cout << "Length: " << can1.length << endl;
    cout << "Section: " << can1.section << endl;
    cout << "Volume: " << can1.volume << endl;
}

/* === OUTPUT ===

Please enter radius: 4
Please enter length: 8
Radius: 4
Length: 8
Section: 50.2655
Volume: 402.124
 
 */