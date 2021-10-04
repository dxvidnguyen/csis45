// Name: David Nguyen
// File: p34avariableScopes.cpp
// Date: 09/30/2019 - 12/02/2019
// Description: 2 sample programs - Program 2
//  type up the sample program and include the comments. show the output

/*
 variableScopes.cpp
 Examples of Global and Local Variables
 "Scope" refers to "where a variable can be used"

 If a variable is declared inside a function:
 - then the variable is "Local" and it belongs only to that function
 - such variables can be "seen" only by the function where it was declared.
 - The "Scope" of a "Local" variable is inside its function
 - Parameter variables are Local and have a scope of only their function
 (a Local variable can only be used inside the function where it was declared)

 If a variable is declared outside (and before) all other functions
 - then the variable is "Global", and it belongs to all functions
 - changing a "Global" variable in one function, changes it for all functions
 - The "Scope" of a "Global" variable are all functions
 (a Global variable can be used inside all functions)

 */

#include <iostream> // === TYPE THIS PROGRAM *INCLUDING* THE COMMENTS ===
using namespace std;

int Global_Variable = 1; // Declared before and outside all other functions
// FUNCTION PROTOTYPE:
void aFunction(int parameterVariable); // declared inside the ()

int main()
{
    int Local_Variable = 5; //declared inside the main()
    cout << "=== Inside the main(): " << endl;
    cout << "Local_Variable = " << Local_Variable << endl; // shows 5
    cout << "Global_Variable = " << Global_Variable << endl; // shows 1
    Global_Variable = 10;
    cout << "Global_Variable = " << Global_Variable << endl; // shows 10

    aFunction(50);
    cout << "\n=== Back Inside the main(): " << endl;
    cout << "Local_Variable = " << Local_Variable << endl; // shows 5
    cout << "Global_Variable = " << Global_Variable << endl; // shows 100

    return 0;

}

// FUNCTION DEFINTION
void aFunction(int parameterVariable)
{
    // different Local_Variable from the one in the main()
    // does not change Local_Variables in main()
    int Local_Variable = parameterVariable; // Declared inside aFunction (int parameterVariable)
    cout << "=== Inside the aFunction(): " << endl;
    cout << "Local_Variable = " << Local_Variable << endl; // shows 50
    cout << "Global_Variable = " << Global_Variable << endl; // shows 10
    cout << "==== End Inside aFunction() === " << endl;
    Global_Variable = 100; // will change Global_Variable in the main()
}


/* === OUTPUT ===
 
=== Inside the main(): 
Local_Variable = 5
Global_Variable = 1
Global_Variable = 10
=== Inside the aFunction(): 
Local_Variable = 50
Global_Variable = 10
==== End Inside aFunction() === 

=== Back Inside the main(): 
Local_Variable = 5
Global_Variable = 100

Process finished with exit code 0
 
 
 */