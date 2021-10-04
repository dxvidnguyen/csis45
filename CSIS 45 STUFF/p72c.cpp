// Name: David Nguyen
// File: p72c.cpp
// Date: 11/25/2019 - 12/09/2019
// Description: Structure Examples
//   Type up the 4 structure example programs and get them to work

// EXAMPLE: of typedef, and PASSING of STRUCTURE VARIABLE by VALUE

#include <iostream> // needed for input & output
#include <math.h>   // needed for "M_PI"
using namespace std;

struct cylinder
{
    float radius;
    float length;
    float section;
    float volume;
};

typedef struct cylinder CYLINDER; // CYLINDER is now same as "struct cylinder"

void funcoutput (CYLINDER can1); // prototype which takes a structure as a parameter

int main()
{
    CYLINDER can; // instead of typing "struct cylinder can", typed "CYLINDER can"

    cout << "Enter radius: ";
    cin >> can.radius;
    cout << "Enter length: ";
    cin >> can.length;

    can.section = M_PI * can.radius * can.radius;   // M_PI comes with math.h
    can.volume = can.length * can.section;
    funcoutput(can);    // PASS BY VALUE the CYLINDER variable "can" to funcoutput(...)
    // "funcoutput" recieves the structure by value in the structure variable "can1"

    return 0;
}

// used to access the members of CYLINDER variable "can" defined in the main
void funcoutput(CYLINDER can1)
{
    cout << "Radius: " << can1.radius << endl;
    cout << "Length: " << can1.length << endl;
    cout << "Section: " << can1.section << endl;
    cout << "Volume: " << can1.volume << endl;
}

/* === OUTPUT ===
 
Enter radius: 5
Enter length: 10
Radius: 5
Length: 10
Section: 78.5398
Volume: 785.398
 
 */