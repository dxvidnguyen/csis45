// Name: David Nguyen
// File: p61b.cpp
// Date: 10/21/19 - 12/06/2019
// Description: Extra Credit bool lucky13(int array [ ], int size)
//  Given an array of integers, return true if the array contains no 1's and no 3's.
//  Return true if it does not contain a 1 or 3.

#include <iostream> // this is for cout, cin

using namespace std; // for cin and cout

// function prototypes
bool lucky13(int array [ ], int size);

// main() function
int main()
{
    // needed to return true false instead of 1 0
    cout.setf(std::ios::boolalpha);

    // arrays
    int array1 [ ] = {0, 2, 4};
    int array2 [ ] = {1, 2, 3};
    int array3 [ ] = {3,1, 2};

    // array sizes
    int sizeA1 = sizeof(array1) / sizeof(array1[0]);
    int sizeA2 = sizeof(array2) / sizeof(array2[0]);
    int sizeA3 = sizeof(array3) / sizeof(array3[0]);

    // function calls
    bool a = lucky13(array1,sizeA1);
    bool b = lucky13(array2,sizeA2);
    bool c = lucky13(array3,sizeA3);

    // print out
    cout << "int array1 [ ] = {0, 2, 4};" << endl;
    cout << "lucky13(array1,sizeA1) returns " << a << endl << "---" << endl;
    cout << "int array2 [ ] = {1, 2, 3};" << endl;
    cout << "lucky13(array2,sizeA2) returns " << b << endl << "---" << endl;
    cout << "int array3 [ ] = {3, 1, 2};" << endl;
    cout << "lucky13(array3,sizeA3) returns " << c << endl;



    return 0;
}

// function definitions
bool lucky13(int array [ ], int size)
{
    for (int x = 0; x < size; x++)
        if ((array[x] == 1) || (array[x] == 3))
            return false; // if any point the array has a 1 or 3, it wil return false --> stops function here

    // if the array can go through the whole loop and not return a false,
    // there are no 1's or 3, will return a true
    return true;

}


/* === OUTPUT ===

int array1 [ ] = {0, 2, 4};
lucky13(array1,sizeA1) returns true
---
int array2 [ ] = {1, 2, 3};
lucky13(array2,sizeA2) returns false
---
int array3 [ ] = {3, 1, 2};
lucky13(array3,sizeA3) returns false
 
 */