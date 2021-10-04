// Name: David Nguyen
// File: p63.cpp
// Date: 10/21/19 - 12/06/2019
// Description:  int pre4(int array [ ], int size)
//  Given an array of ints, return the sum of all elements from the array that come before the first element
//  that equals number 4 in the array. The array will contain at least one 4.

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout



// function prototypes
int pre4(int array [ ], int size);

// main() function
int main()
{
    // arrays
    int array1 [ ] = {1, 2, 4, 1};
    int array2 [ ] = {2, 1, 2, 4};
    int array3 [ ] = {2, 4, 2, 5};
    int array4 [ ] = {4, 2, 5};

    // array size
    int sizeA1 = sizeof(array1) / sizeof(array1[0]);
    int sizeA2 = sizeof(array2) / sizeof(array2[0]);
    int sizeA3 = sizeof(array3) / sizeof(array3[0]);
    int sizeA4 = sizeof(array4) / sizeof(array4[0]);

    // function calls
    int a = pre4(array1,sizeA1);
    int b = pre4(array2,sizeA2);
    int c = pre4(array3,sizeA3);
    int d = pre4(array4,sizeA4);

    // print out
    cout << "int array1 [ ] = {1, 2, 4, 1};" << endl;
    cout << "pre4(array1,sizeA1) returns: " << a;
    cout << endl << "---" << endl;

    cout << "int array2 [ ] = {2, 1, 2, 4};" << endl;
    cout << "pre4(array2,sizeA2) returns: " << b;
    cout << endl << "---" << endl;

    cout << "int array3 [ ] = {2, 4, 2, 5};" << endl;
    cout << "pre4(array3,sizeA3) returns: " << c;
    cout << endl << "---" << endl;

    cout << "int array4 [ ] = {4, 2, 5}; "<< endl;
    cout << "pre4(array4,sizeA4) returns: " << d;

    return 0;
}

// function definitions
int pre4(int array [ ], int size)
{
    // sum is for the sum of numbers before the 4
    int sum = 0; // note: must set sum to 0 or else it will be a garbage number

    // for loop to go through the array
    for (int i = 0; i < size; i++)
    {
        if (array[i] != 4)   // all numbers added to sum are not equal to 4
            sum = sum + array[i];
        else if (array[i] == 4)
            return sum;     // at first value = 4, returns sum and ends function

    }
}

/* === OUTPUT ===

int array1 [ ] = {1, 2, 4, 1};
pre4(array1,sizeA1) returns: 3
---
int array2 [ ] = {2, 1, 2, 4};
pre4(array2,sizeA2) returns: 5
---
int array3 [ ] = {2, 4, 2, 5};
pre4(array3,sizeA3) returns: 2
---
int array4 [ ] = {4, 2, 5}; 
pre4(array4,sizeA4) returns: 0

 */