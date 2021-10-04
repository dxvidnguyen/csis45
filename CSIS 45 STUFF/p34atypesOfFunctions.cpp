// Name: David Nguyen
// File: typesOfFunctions.cpp
// Date: 09/30/2019 - 12/02/2019
// Description: 2 sample programs - Program 1
//  type up the sample program and include the comments. show the output

// typesOfFunctions.cpp
// TYPES OF FUNCTIONS

#include <iostream>
using namespace std;

// FUNCTION PROTOTYPES:
void showMessage();
void aParameter(int parameter_variable);
int returnValue(int num1, int num2);
// === END OF FUNCTION PROTOTYPES


int main() // THE main() FUNCTION STARTS THE PROGRAM
{
    // FUNCTION "CALL", "CALL" EXECUTES THE DEFINITION
    showMessage();

    aParameter(10); // 10 is the "ARGUMENT"
    // calling aParameter(10) makes parameter_variable = 10

    int add = returnValue(20, 30);
    cout << "add = " << add << endl;
    return 0;
}

// A FUNCTION THAT "SHOWS" something (cout << )
// FUNCTION DEFINITION
void showMessage()
{
    cout << "Hello World!" << endl;
}

// A FUNCTION THAT "SHOWS" something (cout << )
// FUNCTION DEFINITION
void aParameter(int parameter_variable)
{
    cout << "parameter_variable = " << parameter_variable  << endl;
}

// A FUNCTION THAT "RETURNS" something "return"
// FUNCTION DEFINITION
int returnValue(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    return sum;
}

/* === OUTPUT ===
 
Hello World!
parameter_variable = 10
add = 50

Process finished with exit code 0
 
 */