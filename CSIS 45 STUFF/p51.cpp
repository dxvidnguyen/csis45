// Name: David Nguyen
// File: p51.cpp
// Date: 10/21/19 - 12/05/2019
// Description: Pointer Assignment
//  Use the previous assignment (one of the codes in p50) to solve the following problem
//  Write a C++ program where you:
//      Declare and Initialize a float variable L to 10.5.
//      Declare a float pointer *P.
//      Make P equal to the memory address of L.
//      Change the value of the variable L to 5.1 using the pointer *P.
//      Show (cout << ) the value of L using:
//      --> The Variable L
//      --> The Pointer *P

#include <iostream>
using namespace std;

int main()
{
    // Declare and Initialize a float variable L to 10.5.
    float L = 10.5;

    //  Declare a float pointer *P.
    float *P;

    // Make P equal to the memory address of L.
    P = &L;

    // Change the value of the variable L to 5.1 using the pointer *P.
    *P = 5.1;


    //Show (cout << ) the value of L using:
    //--> The Variable L
    //--> The Pointer *P
    cout << "L = " << L << endl; // now 5.1
    cout << "*P = " << *P << endl; // 5.1

}

/* === OUTPUT ===
  
L = 5.1
*P = 5.1
  
 */