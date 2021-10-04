// Name: David Nguyen
// File: p65.cpp
// Date: 10/21/19 - 12/06/2019
// Description: Extra Credit bool sum28(int array [ ], int size)
//  Write a function which takes a parameter an array of ints, and returns true if the sum of all the 2's in
//  the array is exactly 8.

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

// function prototypes
bool sum28(int array [ ], int size);


// main() function
int main()
{
    // needed to return true false instead of 1 0
    cout.setf(std::ios::boolalpha);


    // arrays
    int array1 [ ] = {2, 3, 2, 2, 4, 2};
    int array2 [ ] = {2, 3, 2, 2, 4, 2, 2};
    int array3 [ ] = {1, 2, 3, 4};

    // array sizes
    int sizeA1 = sizeof(array1) / sizeof(array1[0]);
    int sizeA2 = sizeof(array2) / sizeof(array2[0]);
    int sizeA3 = sizeof(array3) / sizeof(array3[0]);


    // function calls
    bool a = sum28(array1, sizeA1);
    bool b = sum28(array2, sizeA2);
    bool c = sum28(array3, sizeA3);

    // print out

    cout << "int array1 [ ] = {2, 3, 2, 2, 4, 2}; " << endl;
    cout << "sum28(array1, sizeA1); --> " << a << endl;
    cout << "------- " << endl;
    cout << "int array2 [ ] = {2, 3, 2, 2, 4, 2, 2}; " << endl;
    cout << "sum28(array2, sizeA2); --> " << b << endl;
    cout << "------- " << endl;
    cout << "int array3 [ ] = {1, 2, 3, 4}; " << endl;
    cout << "sum28(array3, sizeA3); --> " << c << endl;


    return 0;
}



// function definitions
bool sum28(int array [ ], int size)
{
    int sum = 0; // will collect the total value of 2's

    // for loop to go through array
    for (int i = 0; i < size; i++)
    {
        if (array[i] == 2)     // if the value of an element is 2
            sum = sum + array[i];         // the sum will increase to account for that 2
    }

    // after loop, sum is the value of all 2's in array added
    if (sum == 8)
        return true;
    else if (sum != 8)
        return false;

}

/* === OUTPUT ===
 
int array1 [ ] = {2, 3, 2, 2, 4, 2}; 
sum28(array1, sizeA1); --> true
------- 
int array2 [ ] = {2, 3, 2, 2, 4, 2, 2}; 
sum28(array2, sizeA2); --> false
------- 
int array3 [ ] = {1, 2, 3, 4}; 
sum28(array3, sizeA3); --> false
 
 */