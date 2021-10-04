// Name: David Nguyen
// File: ArrayOrganization.cpp
// Date: 11/18/2019 - 12/15/2019
// Description:
//  Write a program that makes an array of 25 random integers each from 3 to 7 (use your function randint()
//  to generate these numbers). The program has function to do the following:
//
//  shows the original array,
//  shows the array in reverse,
//  shows the lowest value in the array,
//  shows the highest value in the array,
//  shows the sum of all numbers in the array,
//  shows the average of all number in the array
//  shows how many times the number 5appears in the array
//  shows the difference between the First and Last elements of the array
//  shows the elements of the array before a specified index
//  shows the message "I am now done with CSS45! :)"
//
//  Write the definitions of the functions with the given prototypes below. For full credit you must call the
//  functions correctly. Function that return a value, must return it to the main, and then the value is shown
//  from the main. (each function definition and call is worth 10 points)

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <time.h> // need this for rand(), srand()

using namespace std;

// function prototypes
int randInt();

void showArray ( int a[ ], int size );
void showReverse ( int a[ ], int size );
int  lowest ( int a[ ], int size );
int  highest ( int a[ ], int size );
int  sumArray ( int a[ ], int size );
float averageVal ( int a[ ], int size );
int count5 ( int a[ ], int size );
int firstMinusLast ( int a[ ], int size );
void showBeforeIndex( int a [ ],  int index);
void done ( );

// main function
int main()
{
    // set up for random number
    int iseed = time(NULL);
    srand(iseed);

    // array of size 25 with rand integers
    int arraySize = 25;
    int array1[25]; // array declaration
    for (int i = 0; i < 25; i++)
    {
        int b = randInt();
        array1[i] = b;
    }

    // function calls
    cout << "Original array: ";
    showArray(array1, arraySize);
    cout << endl;

    cout << "Reversed array: ";
    showReverse(array1, arraySize);
    cout << endl;

    cout << "Lowest value is: ";
    cout << lowest(array1, arraySize) << endl;

    cout << "Highest value is: ";
    cout << highest(array1, arraySize) << endl;

    cout << "The sum of all array elements is: ";
    cout << sumArray(array1, arraySize) << endl;

    cout << "The average of all array values is: ";
    cout << averageVal(array1, arraySize) << endl;

    cout << "The number 5 appears: ";
    cout << count5(array1, arraySize) << " times." << endl;

    cout << "The difference between the first and last array elements is: ";
    cout << firstMinusLast(array1, arraySize) << endl;

    cout << "The array values before Index 4 are: ";
    showBeforeIndex(array1, 4);

    cout << endl;

    done();


    return 0;
}

// function definitions
// function to generate random numbers
int randInt()
{
    // random number between 3 and 7
    int a;
    a = rand()%5 + 3;

    return a; // returns rand number b/w 3 and 7
}

//  shows the original array
void showArray ( int a[ ], int size )
{
    cout << "Original array: ";
    cout << "int a[] = { ";
    for (int x = 0; x < size; x++)
    {
        if (x < 24)
            cout << a[x] << ", ";
        if (x == 24)
            cout << a[x] << " }";
    }
}

void showReverse ( int a[ ], int size )
{
    cout << "int a[] = { ";
    for (int x = (size-1); x >= 0; x--)
    {
        if (x > 0)
            cout << a[x] << ", ";
        if (x == 0)
            cout << a[x] << " }";
    }
}

int lowest ( int a[ ], int size )
{
    int low = a[0];
    for (int j = 0; j < size; j++)
        if (a[j] < low)
            low = a[j];

    return low;

}


int  highest ( int a[ ], int size )
{
    int high = a[0];
    for (int j = 0; j < size; j++)
        if (a[j] > high)
            high = a[j];

    return high;
}

int  sumArray ( int a[ ], int size )
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum = sum + a[i];

    return sum;
}

float averageVal ( int a[ ], int size )
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
        count++;
    }

    float avg = (float)sum / (float)count;
    return avg;

}

int count5 ( int a[ ], int size )
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == 5)
            total++;
    }
    return total;
}

int firstMinusLast ( int a[ ], int size )
{
    int diff = a[0] - a[size - 1];
    return diff;
}
void showBeforeIndex( int a [ ],  int index)
{
    for (int i = 0; i < index; i++)
    {
        if (i < index - 1)
            cout << a[i] << ", ";
        if (i == (index - 1))
            cout << a[i];
    }

}

void done ( )
{
    cout << "I am now done! :)";
}


/* === OUTPUT ===
 
Original array: Original array: int a[] = { 5, 7, 6, 7, 7, 6, 6, 7, 3, 6, 6, 5, 5, 4, 3, 3, 7, 4, 7, 7, 3, 4, 4, 6, 6 }
Reversed array: int a[] = { 6, 6, 4, 4, 3, 7, 7, 4, 7, 3, 3, 4, 5, 5, 6, 6, 3, 7, 6, 6, 7, 7, 6, 7, 5 }
Lowest value is: 3
Highest value is: 7
The sum of all array elements is: 134
The average of all array values is: 5.36
The number 5 appears: 3 times.
The difference between the first and last array elements is: -1
The array values before Index 4 are: 5, 7, 6, 7
I am now done! :)
 
 */
