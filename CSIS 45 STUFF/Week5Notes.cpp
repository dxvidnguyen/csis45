// Video Notes Week 5: Practice with Repetition

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()


using namespace std; // for cout, cin

int main()
{
    /*

    How to convert -15 from Decial to Hex
    _ _ _ _  _ _ _ _
                   1
                 2
               4
             8
          16
        32
      64
    128

    _ _ _ _  1 1 1 1 = 8 + 4 + 2 + 1 = 15

    0 0 0 0  1 1 1 1  --> orginal
    1 1 1 1  0 0 0 0  --> 1's compliment
    1 1 1 1  0 0 0 1  --> 2's compliment
          F        1  --> Signed Hex

    So -15 decimal is F1 Signed Hex

    */

    // I want the user to enter X numbers
    // Find the smallest, average, sum

    /*


    int X, num, sum = 0;
    cout << "How many numbers: ";
    cin >> X;
    for (int i = 0; i < X; i ++)
    {
        cout << "Enter an integer " << i << ": ";
        cin >> num; // 1, 2, 3
        sum = sum + num; // after 1, 2, 3 --> sum should be 6
    }

    // avg
    cout << "avg = " << sum/X << endl;


    */




    /*

    Algorithm to find Smallest
        1) Make a variable smallest eqaul to the first number entered
        2) Compare if any other number after the first is smaller
        2b) if any other number is smaller, it will become the new smallest
        4, 3, 2, 1

        smallest = 4
        if (3 < smallest)
            smallest = 3
        if (2 < smallest)
            smallest = 2
        if (1 < smallest)
            smallest = 1
        if (10 < smallest)
            not true, so smallest remains at 1

       */

    int X, num, sum = 0, smallest, largest;
    cout << "How many numbers: ";
    cin >> X;
    for (int i = 0; i < X; i ++)
    {
        cout << "Enter an integer " << i << ": ";
        cin >> num; // 1, 2, 3
        sum = sum + num; // after 1, 2, 3 --> sum should be 6


        // how do i make the smallest equal to the first number (for the beginning)
        // how do we know which num is the first one entered?
        if (i == 0)          // true the first time you go through the loop
        {
            smallest = num;  // when i = 0, that is the first number you enter - first time going through loop
            largest = num;
        }

        else
        {
            if (num < smallest)  // happens every other time after 1st time
                smallest = num;
            if (num > largest)
                largest = num;
        }

    }

    // largest works the same way

    cout << "smallest = " << smallest << endl;
    cout << "largest = " << largest << endl;

    // hints on assignment starts at 34 mins





    return 0;
}