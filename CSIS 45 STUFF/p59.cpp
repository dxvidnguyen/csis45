// Name: David Nguyen
// File: p59.cpp
// Date: 10/21/19 - 12/06/2019
// Description:  bool commonEnd(int array1 [ ], int array2[ ], int size1, int size2)
//   Given 2 arrays of integers, return true if they have the same first element or they have the same last element,
//   and false otherwise. Both arrays will be length 1 or more.

#include <iostream> // this is for cout, cin

using namespace std; // for cin and cout


// function prototypes
bool commonEnd(int array1[], int array2[], int size1, int size2);

// main() function
int main()
{
    // to print out true false
    cout.setf(std::ios::boolalpha);

    // arrays and function calls
    // set 1
    int array1 [ ] = {1, 2, 3};
    int array2 [ ] = {7, 3};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    bool x = commonEnd(array1, array2, size1, size2);

    // set 2
    int array3 [] = {1, 2, 3};
    int array4 [] = {7, 3, 2};
    int size3 = sizeof(array3) / sizeof(array3[0]);
    int size4 = sizeof(array4) / sizeof(array4[0]);
    bool y = commonEnd(array3, array4, size3, size4);

    // set 3
    int array5 [] = {1, 2, 4};
    int array6 [] = {1, 3};
    int size5 = sizeof(array5) / sizeof(array5[0]);
    int size6 = sizeof(array6) / sizeof(array6[0]);
    bool z = commonEnd(array5, array6, size5, size6);

    // print outs
    cout << "int array1 [ ] = {1, 2, 3}; " << endl;
    cout << "int array2 [ ] = {7, 3}; " << endl;
    cout << "commonEnd(array1, array2, size1, size2) --> returns " << x << endl;

    cout << "---" << endl;

    cout << "int array3 [] = {1, 2, 3}; " << endl;
    cout << "int array4 [] = {7, 3, 2}; " << endl;
    cout << "commonEnd(array3, array4, size3, size4) --> returns " << y << endl;

    cout << "---" << endl;

    cout << "int array5 [] = {1, 2, 4}; " << endl;
    cout << "int array6 [] = {1, 3}; " << endl;
    cout << "commonEnd(array5, array6, size5, size6) --> returns " << z << endl;

    return 0;
}

// function definitions
bool commonEnd(int array1 [ ], int array2[ ], int size1, int size2)
{
    // last element has an index of 1 less than the size
    int last1 = size1 - 1;
    int last2 = size2 - 1;

    if ((array1[0] == array2[0]) || (array1[last1] == array2[last2]))
        return true;
    else
        return false;

}

/* === OUTPUT ===

int array1 [ ] = {1, 2, 3}; 
int array2 [ ] = {7, 3}; 
commonEnd(array1, array2, size1, size2) --> returns true
---
int array3 [] = {1, 2, 3}; 
int array4 [] = {7, 3, 2}; 
commonEnd(array3, array4, size3, size4) --> returns false
---
int array5 [] = {1, 2, 4}; 
int array6 [] = {1, 3}; 
commonEnd(array5, array6, size5, size6) --> returns true

*/