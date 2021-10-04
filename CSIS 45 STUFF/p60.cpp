// Name: David Nguyen
// File: p60.cpp
// Date: 10/21/19 - 12/06/2019
// Description: bool no23(int array [ ], int size)
//  Given an int array of any size, return true if it does not contain a 2 or 3.

#include <iostream> // this is for cout, cin


using namespace std; // for cin and cout

// function prototypes
bool no23(int array [ ], int size);

// main() function
int main()
{
    // needed to return true false instead of 1 0
    cout.setf(std::ios::boolalpha);

    // arrays
    int array1 [ ] = {4, 5};
    int array2 [ ] = {4, 2, 1};
    int array3 [ ] = {3, 5, 0, 1};

    // array sizes
    int sizeA1 = sizeof(array1) / sizeof(array1[0]);
    int sizeA2 = sizeof(array2) / sizeof(array2[0]);
    int sizeA3 = sizeof(array3) / sizeof(array3[0]);

    // function calls
    bool a = no23(array1, sizeA1);
    bool b = no23(array2, sizeA2);
    bool c = no23(array3, sizeA3);

    // printout
    cout << "int array1 [ ] = {4, 5}; " << endl;
    cout << "no23(array1, sizeA1) returns " << a << endl;
    cout << "--- " << endl;

    cout << "int array2 [ ] = {4, 2, 1}; " << endl;
    cout << "no23(array2, sizeA2) returns " << b << endl;
    cout << "--- " << endl;

    cout << "int array3 [ ] = {3, 5, 0, 1}; " << endl;
    cout << "no23(array3, sizeA3) returns " << c << endl;


    return 0;
}

// function definitions
bool no23(int array [ ], int size)
{
    for (int x = 0; x < size; x++)
        if ((array[x] == 2) || (array[x] == 3))
            return false;
    // if it contains a 2 then it will return a false and the function is over
    return true;
    // if the function finishes the whole loop without having any 2's, then it will return 2
}

/* === OUTPUT ===

int array1 [ ] = {4, 5}; 
no23(array1, sizeA1) returns true
--- 
int array2 [ ] = {4, 2, 1}; 
no23(array2, sizeA2) returns false
--- 
int array3 [ ] = {3, 5, 0, 1}; 
no23(array3, sizeA3) returns false

 */