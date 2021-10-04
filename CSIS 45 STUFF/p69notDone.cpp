// Name: David Nguyen
// File: p69.cpp
// Date: 11/18/2019 - 12/08/2019
// Description: write 100 numbers to a per 10 per line
//  Write a program which outputs 100 random numbers between 1-100 in a file named "numbers.txt" writing 10 numbers per
//  line. Submit your program (the *.cpp) and the text file "numbers.txt"

// libraries needed to use files
#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // set up needed for random numbers
    int iseed = time(NULL);
    srand(iseed);

    /*

    // for loop to make 100 numbers
    for (int a = 1; a <= 100; a++)
    {
        int b = rand()%100 + 1; // random number between 1 and 100
        cout << b << " " ; // prints out random number
        if (a%10 == 0)  // new line after every 10 numbers
            cout << endl;
    }

     */

    int c[100]; // array declaration
    for (int x = 1; x <= 100; x++)
    {
        int y = rand()%100 + 1;
        c[x] = y;
    }

 
    ofstream outStream; // variable that write we use to write a file

    // we want to name the output file "numbers.txt"
    outStream.open("numbers.txt"); // opens the "numbers.txt" file
    outStream << c;
    outStream.close();



    return 0;
}