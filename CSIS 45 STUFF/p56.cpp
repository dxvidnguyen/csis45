// Name: David Nguyen
// File: p56.cpp
// Date: 10/21/19 - 12/06/2019
// Description: void bubbleSort(int [] array, int size)
//  Type up the Bubble Sort example and get it to work.
//  Then, put the Bubble Sort in a function.

#include <iostream> // this is for cout, cin

using namespace std; // for cin and cout



// function prototypes
void bubbleSort(int array[], int size);

// main() function
int main()
{

    int A1[] = {1,5,2,9,8,3,4,6,7};

    int sizeA1 = sizeof(A1) / sizeof(A1[0]);

    // displaying old array - before bubble sort
    cout << "Array before Bubble Sort: {";
    for(int x = 0; x < sizeA1; x++ )
    {
        if (x < (sizeA1-1))
            cout << A1[x] << ", ";
        if (x == (sizeA1-1))
            cout << A1[x] << "}" << endl;
    }

    // function call --> array goes through bubble sort
    bubbleSort(A1,sizeA1);

    // displaying new array - after bubble sort
    cout << "Array after Bubble Sort: {";
    for(int x = 0; x < sizeA1; x++ )
    {
        if (x < (sizeA1-1))
            cout << A1[x] << ", ";
        if (x == (sizeA1-1))
            cout << A1[x] << "}" << endl;
    }

    return 0;
}

// function definitions
void bubbleSort(int array[], int size)
{
    int temp;
    for (int a = 0; a < (size-1); a++)
    {
        for (int b = 0; b < (size-1-a); b++)
        {
            if (array[b] > array[b+1])
            {
                temp = array[b];
                array[b] = array[b+1];
                array[b+1] = temp;

            }

        }
    }
    
}

/* === OUTPUT ===
 
Array before Bubble Sort: {1, 5, 2, 9, 8, 3, 4, 6, 7}
Array after Bubble Sort: {1, 2, 3, 4, 5, 6, 7, 8, 9}
 
 */