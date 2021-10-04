// Name: David Nguyen
// File: p62.cpp
// Date: 10/21/19 - 12/06/2019
// Description:  Extra Credit bool modThree(int array [], int size)
//  Given an array of integers, return true if the array contains either 3 even or 3 odd values all next to each other.

#include <iostream> // this is for cout, cin

using namespace std; // for cin and cout

// function prototypes
bool modThree(int array [ ], int size);

// main() function
int main()
{
    // needed to return true false instead of 1 0
    cout.setf(std::ios::boolalpha);

    // arrays
    int array1 [ ] = {2, 1, 3, 5, 6};
    int array2 [ ] = {2, 1, 2 };
    int array3 [ ] = {0, 2, 1, 2, 5, 4};
    int array4 [ ] = {2, 4, 2, 5};

    // array sizes
    int sizeA1 = sizeof(array1) / sizeof(array1[0]);
    int sizeA2 = sizeof(array2) / sizeof(array2[0]);
    int sizeA3 = sizeof(array3) / sizeof(array3[0]);
    int sizeA4 = sizeof(array4) / sizeof(array4[0]);

    // function call
    bool a = modThree(array1,sizeA1);
    bool b = modThree(array2,sizeA2);
    bool c = modThree(array3,sizeA3);
    bool d = modThree(array4,sizeA4);

    // print out
    cout << "int array1 [ ] = {2, 1, 3, 5, 6};" << endl;
    cout << "modThree(array1,sizeA1) returns " << a << endl << "---" << endl;
    cout << "int array2 [ ] = {2, 1, 2 };" << endl;
    cout << "modThree(array2,sizeA2) returns " << b << endl << "---" <<endl;
    cout << "int array3 [ ] = {0, 2, 1, 2, 5, 4};" << endl;
    cout << "modThree(array3,sizeA3) returns " << c << endl << "---" <<endl;
    cout << "int array4 [ ] = {2, 4, 2, 5};" << endl;
    cout << "modThree(array4,sizeA4) returns " << d << endl;

    return 0;
}

// function definitions
bool modThree(int array [ ], int size)
{
    // variables to keep track of numbers of evens and odds
    int countEven;
    int countOdd;

    // for loop to go through array
    // note we have to account for the last 2 terms in the if statement
    for(int x = 0; x < size-2; x++)
    {
        // need && operator b/c we need all 3 even/odd values to be next to each other
        if ((array[x]%2 == 0) && (array[x+1]%2 == 0) && (array[x+2]%2 == 0))// evens
            return true;
        if ((array[x]%2 == 1) && (array[x+1]%2 == 1) && (array[x+2]%2 == 1))// odds
            return true;
    }

    // if it can go through the whole loop without return a true it is false
    return false;


}

/* === OUTPUT ===

int array1 [ ] = {2, 1, 3, 5, 6};
modThree(array1,sizeA1) returns true
---
int array2 [ ] = {2, 1, 2 };
modThree(array2,sizeA2) returns false
---
int array3 [ ] = {0, 2, 1, 2, 5, 4};
modThree(array3,sizeA3) returns false
---
int array4 [ ] = {2, 4, 2, 5};
modThree(array4,sizeA4) returns true
 
 
*/


