// Name: David Nguyen
// File: p64.cpp
// Date: 10/21/19 - 12/06/2019
// Description: Extra Credit void rearange(int array [ ], int size)
//  Write a function which rearranges an array of any size, so that all the even numbers come before all the odd numbers.

#include <iostream> // this is for cout, cin

using namespace std; // for cin and cout

// function prototypes
void rearange(int array [ ], int size);

// main() function
int main()
{
    // arrays
    int array1 [ ] = {1, 2, 1, 4, 8, 1, 1};
    int array2 [ ] = {3, 3, 2};
    int array3 [ ] = {4, 3, 2, 1};

    // array size
    int sizeA1 = sizeof(array1) / sizeof(array1[0]);
    int sizeA2 = sizeof(array2) / sizeof(array2[0]);
    int sizeA3 = sizeof(array3) / sizeof(array3[0]);

    // function calls
    cout << "int array1 [ ] = {1, 2, 1, 4, 8, 1, 1};" << endl;
    cout << "rearange(array1, size1); --> ";
    rearange(array1,sizeA1);

    cout << endl << "-----" << endl;

    cout << "int array2 [ ] = {3, 3, 2};" << endl;
    cout << "rearange(array2, size2); --> ";
    rearange(array2,sizeA2);

    cout << endl << "-----" << endl;

    cout << "int array3 [ ] = {4, 3, 2, 1};" << endl;
    cout << "rearange(array3, size3); --> ";
    rearange(array3,sizeA3);

    return 0;
}

// function definitions
void rearange(int array [ ], int size)
{
    int temp; // used as a holding cell in the for loop

    // nested for loops for switching
    // switches by sending odd numbers to the right
    for (int x = 0; x < size; x++)
        for (int y = 0; y < size - 1; y++)
        {
            if (array[y]%2 == 1)
            {
                temp = array[y];
                array[y] = array[y+1];
                array[y+1] = temp;
            }
        }

    // print switched array
    cout << "{";
    for (int r = 0; r < size; r++)
    {
        if (r < size - 1)
            cout << array[r] << ",";
        if (r == size - 1)
            cout << array[r];
    }
    cout << "}";

}

/* === OUTPUT ===

int array1 [ ] = {1, 2, 1, 4, 8, 1, 1};
rearange(array1, size1); --> {2,4,8,1,1,1,1}
-----
int array2 [ ] = {3, 3, 2};
rearange(array2, size2); --> {2,3,3}
-----
int array3 [ ] = {4, 3, 2, 1};
rearange(array3, size3); --> {4,2,3,1}

 */