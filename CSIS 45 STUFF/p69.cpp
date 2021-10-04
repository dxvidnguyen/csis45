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
    

    int c[100]; // array declaration
    // array input of random numbers
    for (int x = 0; x < 100; x++)
    {
        int y = rand()%100 + 1;
        c[x] = y;
    }


    ofstream outStream; // variable that write we use to write a file

    // we want to name the output file "numbers.txt"
    outStream.open("numbers.txt"); // opens the "numbers.txt" file
    if (outStream.is_open())
    {
        for (int i = 0; i < 100; i++)
        {
            outStream << c[i] << " ";
            if ((i+1)%10 == 0)
                outStream << endl;
        }

    }

    // outStream << c; // just prints out the memory address of array c
    outStream.close();




    cout << c;

    return 0;
}