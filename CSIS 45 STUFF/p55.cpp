// Name: David Nguyen
// File: p55.cpp
// Date: 10/21/19 - 12/06/2019
// Description: int count2s(int array [ ], int size)
//  Write a function which given an array of integers, returns how many times the number 2 appears in the array.
//  The  function is supposed to work for an array of ANY size.

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

// function prototypes
int count2s(int array[], int size);

// main() function
int main()
{
    // arrays
    int array1[] = {0,3,3,4,5};
    int array2[] = {0,2,2,4};
    int array3[] = {2,3,4};

    // size of arrays
    int sizeA1 = sizeof(array1) / sizeof(array1[0]);
    int sizeA2 = sizeof(array2) / sizeof(array2[0]);
    int sizeA3 = sizeof(array3) / sizeof(array3[0]);

    // function calls
    int i = count2s(array1, sizeA1);
    int j = count2s(array2, sizeA2);
    int k = count2s(array3, sizeA3);

    // last array from myself
    int array4[] = {2,3,4,5,2,1,4,1,2,2,2,2,3};
    int sizeA4 = sizeof(array4) / sizeof(array4[0]);
    int l = count2s(array4, sizeA4);

    // print out
    cout << "int array1 [ ] = {0, 3, 3, 4, 5};" << endl;
    cout << "int array2 [ ] = {0, 2, 2, 4}; " << endl;
    cout << "int array3 [ ] = {2, 3, 4};" << endl;
    cout << "int array4 [ ] = {2,3,4,5,2,1,4,1,2,2,2,2,3};" << endl;

    cout << "count2s(array1, size1) → returns " << i << endl;
    cout << "count2s(array2, size2) → returns " << j << endl;
    cout << "count2s(array3, size3) → returns " << k << endl;
    cout << "count2s(array4, size4) → returns " << l << endl;




    return 0;
}

// function definitions
int count2s(int array[], int size)
{
    int count = 0; // must set count to 0 or else it will be a random number

    // for loop to count for 2's
    for (int x = 0; x < (size-1); x++)
    {
        if (array[x] == 2)
            count++;
    }

    // return and print out the count which is the number of 2's
    return count;

}


/* === OUTPUT ===

int array1 [ ] = {0, 3, 3, 4, 5};
int array2 [ ] = {0, 2, 2, 4}; 
int array3 [ ] = {2, 3, 4};
int array4 [ ] = {2,3,4,5,2,1,4,1,2,2,2,2,3};
count2s(array1, size1) → returns 0
count2s(array2, size2) → returns 2
count2s(array3, size3) → returns 1
count2s(array4, size4) → returns 6

*/