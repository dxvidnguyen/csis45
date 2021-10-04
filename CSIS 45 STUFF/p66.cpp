// Name: David Nguyen
// File: p66.cpp
// Date: 10/21/19 - 12/06/2019
// Description: Extra Credit void withoutTen(int array [ ], int size)
//  Write a function which modifies an array of any size, with a version of the given array where all the
//  10's have been removed. The remaining elements should shift left towards the start of the array as needed,
//  and the empty spaces a the end of the array should be 0.

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

// function prototypes
void withoutTen(int array [ ], int size);

// main() function
int main()
{
    // arrays
    int array1 [ ] = {1, 10, 10, 2, 3};
    int array2 [ ] = {10, 2, 10, 10};
    int array3 [ ] = {1, 99, 10};

    // array sizes
    int sizeA1 = sizeof(array1) / sizeof(array1[0]);
    int sizeA2 = sizeof(array2) / sizeof(array2[0]);
    int sizeA3 = sizeof(array3) / sizeof(array3[0]);


    // function calls and print out
    
    cout << "int array1 [ ] = {1, 10, 10, 2, 3};" << endl; // array 1
    cout << "withoutTen(array1, sizeA1); --> ";
    withoutTen(array1, sizeA1);

    cout << endl << "-----" << endl;

    cout << "int array2 [ ] = {10, 2, 10, 10};" << endl; // array 2
    cout << "withoutTen(array2, sizeA2); --> ";
    withoutTen(array2, sizeA2);

    cout << endl << "-----" << endl;

    cout << "int array3 [ ] = {1, 99, 10};" << endl;
    cout << "withoutTen(array3, sizeA3); --> ";
    withoutTen(array3, sizeA3);


    return 0;
}

// function definitions
void withoutTen(int array [ ], int size)
{
    // game plan: part 1 - replace all values of 10 with 0
    // part 2: push all 0's to the right

    int zero = 0;


    // for loop to go through array - part 1
    for (int x = 0; x < size; x++)
    {
        if (array[x] == 10)
            array[x] = 0;

    }
    // part 1 is working good!


    int temp = 0;
    // for loop to go through array again! - part 2
    for (int y = 0; y < size - 1; y++)
    {
        for (int yy = 0; yy < size - 1; yy++)
            if (array[yy] == 0)
            {
                temp = array[yy];
                array[yy] = array [yy+1];
                array[yy+1] = temp;
            }
    }


    // print out array
    cout << "{";
    for (int z = 0; z < size; z++)
    {
        if (z < size - 1)
            cout << array[z] << ", ";
        if (z == size - 1)
            cout << array[z];
    }
    cout << "}";


}

/* === OUTPUT ===

int array1 [ ] = {1, 10, 10, 2, 3};
withoutTen(array1, sizeA1); --> {1, 2, 3, 0, 0}
-----
int array2 [ ] = {10, 2, 10, 10};
withoutTen(array2, sizeA2); --> {2, 0, 0, 0}
-----
int array3 [ ] = {1, 99, 10};
withoutTen(array3, sizeA3); --> {1, 99, 0}
 
 */