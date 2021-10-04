// Name: David Nguyen
// File: p67.cpp
// Date: 10/21/19 - 12/06/2019
// Description: Extra Credit int sum67(int array [ ], int size);
//  Write a function which calculates and returns the sum of the numbers in the array, except ignore sections of
//  numbers starting with a 6 and extending to the next 7 (every 6 will be followed by at least one 7).
//  Return 0 for no numbers.

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

// function prototypes
int sum67(int array [ ], int size);

// main() function
int main()
{
    // arrays
    int array1 [ ] = {1, 2, 2};
    int array2 [ ] = {1, 2, 2, 6, 99, 99, 7};
    int array3 [ ] = {1, 1, 6, 7, 2};

    // array sizes
    int sizeA1 = sizeof(array1) / sizeof(array1[0]);
    int sizeA2 = sizeof(array2) / sizeof(array2[0]);
    int sizeA3 = sizeof(array3) / sizeof(array3[0]);

    // function calls
    int x = sum67(array1,sizeA1);
    int y = sum67(array2,sizeA2);
    int z = sum67(array3,sizeA3);

    // print outs
    cout << "int array1 [ ] = {1, 2, 2}; " << endl;
    cout << "sum67(array1,sizeA1); --> " << x;

    cout << endl << "-----" << endl;

    cout << "int array2 [ ] = {1, 2, 2, 6, 99, 99, 7};" << endl;
    cout << "sum67(array2,sizeA2); --> " << y;

    cout << endl << "-----" << endl;

    cout << "int array3 [ ] = {1, 1, 6, 7, 2};" << endl;
    cout << "sum67(array3,sizeA3); --> " << z;

    return 0;
}

// function definitions
int sum67(int array [ ], int size)
{
    // declaring variables that are to be used
    int sum  = 0;
    int sub1 = 0;
    int sum2 = 0;
    int total;

    // game plan: find total, subtract values after 6, add values after 7

    // finding the total
    for (int a = 0; a < size; a++)
        sum = sum + array[a];

    // find the sum of values after 6 (including the 6)
    for (int b = 0; b < size; b++) // 1st for loop is to locate the 6
        if (array[b] == 6)
            for (b; b < size; b++) // 2nd for loop is to add values of 6 and numbers after
                sub1 = sub1 + array[b];

    // finding the sum of values after the 7 (not including 7)
    for (int c = 0; c < size; c++) // locating the 7
        if (array[c] == 7)
            for (c; c < size - 1; c++) // adding values after said 7
                sum2 = sum2 + array[c+1];

    total = sum - sub1 + sum2;
    return total;
}

/* === OUTPUT ===

int array1 [ ] = {1, 2, 2};
sum67(array1,sizeA1); --> 5
-----
int array2 [ ] = {1, 2, 2, 6, 99, 99, 7};
sum67(array2,sizeA2); --> 5
-----
int array3 [ ] = {1, 1, 6, 7, 2};
sum67(array3,sizeA3); --> 4

 */