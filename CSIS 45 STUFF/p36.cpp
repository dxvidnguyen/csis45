// File: p36.cpp
// Date: 09/30/2019 - 12/02/2019
// Description: Float Larger (float valA, float valB)
//  Write the definition of a function that RETURNS a float and has TWO float PARAMETERS.
//  The function returns the larger of its two parameters.

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

// function prototype
float larger(float valA, float valB);

// main function
int main()
{
    float num1 = 1, num2 = 2, temp;
    cout << "The larger of the two numbers " << num1 << " and " << num2
      << " is: " << larger(num1, num2) << "." << endl;

    temp = larger(num2, num1);
    cout << "The larger of the two numbers " << num2 << " and " << num1
      << " is: " << temp << "." << endl;
}

// function definition

//
float larger(float valA, float valB)  // GOAL: return larger value
{
    // return valA if it is larger
    if (valA > valB)
        return valA;

    // return valB if it is larger
    if (valA < valB)
        return valB;

   // when they are equal
   if (valA == valB)
      return 0;

}

/* === OUTPUT ===
 
Sample Run: 
The larger of the two numbers 1 and 2 is: 2.
The larger of the two numbers 2 and 1 is: 2.

Process finished with exit code 0
 
 */
