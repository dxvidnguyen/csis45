// Name: David Nguyen
// File: p61a.cpp
// Date: 10/21/19 - 12/06/2019
// Description: Templates
//  Write a template function max5() that takes as its argument an array of five items of type T and returns the
//  largest item in the array. (Because the size is fixed, it can be hard-coded into the loop instead of being passed
//  as an argument.) Test it in a program that uses the function with an array of five int values and an array of
//  five double values.

#include <iostream> // this is for cout, cin


using namespace std; // for cin and cout

// template function
template <typename typeT>   // template
typeT max5(typeT x[])       // function
{
    typeT largest = x[0];   // variable for largest number
    for (int y = 0; y < 5; y++)     // for loop to go through array
        if  (x[y] > largest)        // if statement to find the largest number
            largest = x[y];

    return largest;

}


// main() function
int main()
{
    // array of 5 elements
    int a[5];

    cout << "Please enter 5 numbers for an array with a size of 5 elements. " << endl;
    // get elements from user input
    for (int i = 0; i < 5; i++)
    {
        cout << "Please enter element #" << (i+1) << ": ";
        cin >> a[i];
    }

    // function call
    int biggest = max5(a);
    cout << endl << "The largest number in the array is: " << biggest << endl;
    
    return 0;
}

/* === OUTPUT ===
 
Please enter 5 numbers for an array with a size of 5 elements. 
Please enter element #1: 3
Please enter element #2: 1
Please enter element #3: 5
Please enter element #4: 2
Please enter element #5: 6

The largest number in the array is: 6
 
 
 */