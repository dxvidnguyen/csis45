// Name: David Nguyen
// File: p58.cpp
// Date: 10/21/19 - 12/06/2019
// Description: Array and Function bool firstLast6(int array[ ] , int size)
//  Given an array of integers, return true if 6 appears as either the first or last element in the array.
//  The array will be of size 1 or more. The function is supposed to work with an array of any size.

#include <iostream> // this is for cout, cin

using namespace std; // for cin and cout

// function prototypes
bool firstLast6(int array[ ], int size);

// main() function
int main()
{
    // needed to return true false instead of 1 0
    cout.setf(std::ios::boolalpha);

    // arrays
    int array1 [ ] = {1, 2, 6};
    int array2 [ ] = {6, 1, 2, 3};
    int array3 [ ] = {13, 6, 1, 2, 3};

    // array sizes
    int sizeA1 = sizeof(array1) / sizeof(array1[0]);
    int sizeA2 = sizeof(array2) / sizeof(array2[0]);
    int sizeA3 = sizeof(array3) / sizeof(array3[0]);

    // print outs
    cout << "int array1 [ ] = {1, 2, 6}; " << endl;
    cout << "int array2 [ ] = {6, 1, 2, 3};" << endl;
    cout << "int array3 [ ] = {13, 6, 1, 2, 3};" << endl;
    cout << "--- " << endl;


    // function calls
    cout << "firstLast6(array1, sizeA1) returns " << firstLast6(array1, sizeA1) << endl;
    cout << "firstLast6(array2, sizeA2) returns " << firstLast6(array2, sizeA2) << endl;
    cout << "firstLast6(array3, sizeA3) returns " << firstLast6(array3, sizeA3) << endl;


    return 0;
}

// function definitions
bool firstLast6(int array[ ], int size)
{
    int last = size - 1;
    if ((array[0] == 6) || (array[last] == 6))
        return true;
    else
        return false;

}

/* === OUTPUT ===

int array1 [ ] = {1, 2, 6}; 
int array2 [ ] = {6, 1, 2, 3};
int array3 [ ] = {13, 6, 1, 2, 3};
--- 
firstLast6(array1, sizeA1) returns true
firstLast6(array2, sizeA2) returns true
firstLast6(array3, sizeA3) returns false

 */