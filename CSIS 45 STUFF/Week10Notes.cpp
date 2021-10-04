// Week 10 Video Notes

#include <iostream>
using namespace std;

// function prototype
void showArray (int numbers[], int size, bool reverse);
void showArray2 (int *numbers, int size, bool reverse);
void bubbleSort(int d[], int size, bool reverse);

// main function
int main()
{

    int numbers[] = {1,2,3,4};
    showArray(numbers, 4, false);
    // note: sending array d with size 4 and regular order (bc reverse is false)
    showArray(numbers, 4, true);
    // same array but with reverse order


    // same thing but sending with pointer function
    showArray2(numbers, 4, false);
    // gives you the same result whether you send the array as a pointer or as an array its the same thing

    int K = 78;
    int temp;

    int d[] = {4,3,2,1};
    int size;

    /* We dont need this bc we can do it using the function

    // bubble sort
    // note goes to size - 1 b/c array starts at 0
    for (int j = 0; j < size - 1; j++)
    {
        for (int i = 0; i < size - 1 - j; i ++) // goes to (size-1-j) bc the bigger number already on the outside
        {
            if (d[i] > d[i+1])
            {
                temp = d[i];
                d[i] = d[i+1];
                d[i+1] = temp;
            }
        }
    }

     */

    bubbleSort(d,4,false);
    // the array is being changed inside the bubble sort

    // how to find the min of an array d
    int min = d[0];
    for (int i = 1; i < size; i++)
        if (d[i] < min)
            min = d[i];

    cout << "min = " << min << endl;





    return 0;
}

// function definition
void showArray (int numbers[], int size, bool reverse)
{
    int k;
    cout << "\nArray = {";
    if (reverse) // (reverse == true)
        for (k = size - 1; k > 0; k--)
            cout << numbers[k] << ", ";
    else
        for (k = 0; k < size - 1; k++)
            cout << numbers[k] << ", ";

     // show the last one in the array - accounts fo regular and reverse order
     cout << numbers[k] << "}" << endl;

}

void showArray2 (int *numbers, int size, bool reverse)
{
    int k;
    cout << "\nArray = {";
    if (reverse) // (reverse == true)
        for (k = size - 1; k > 0; k--)
            cout << numbers[k] << ", ";
    else
        for (k = 0; k < size - 1; k++)
            cout << numbers[k] << ", ";

    // show the last one in the array - accounts fo regular and reverse order
    cout << numbers[k] << "}" << endl;

}

void bubbleSort (int d[], int size, bool reverse)
{
    int temp;

    // bubble sort
    // outer loop is to move ALL numbers to the right
    if (!reverse) // (reverse == false)
        for (int j = 0; j < size - 1; j++)
        {
            for (int i = 0; i < size - 1 - j; i ++) // goes to (size-1-j) bc the bigger number already on the outside
            {
                if (d[i] > d[i+1])
                {
                    temp = d[i];
                    d[i] = d[i+1];
                    d[i+1] = temp;
                }
            }
        }

    if (reverse) // (reverse == true)
        for (int j = 0; j < size - 1; j++)
        {
            for (int i = 0; i < size - 1 - j; i ++) // goes to (size-1-j) bc the bigger number already on the outside
            {
                if (d[i] < d[i+1])
                {
                    temp = d[i];
                    d[i] = d[i+1];
                    d[i+1] = temp;
                }
            }
        }

}