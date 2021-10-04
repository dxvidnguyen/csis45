// Name: David Nguyen
// File: p71.cpp
// Date: 11/18/2019 - 12/08/2019
// Description:  Min & Max from a file
//  Write a program that will search a file filled with numbers, and show the largest number and the smallest number.
//  The program will also count how many of the numbers are even (evenly divisible by two)

// libraries needed to use files
#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std; // need this for ofstream, instream and more

int main()
{
    ifstream readFile; // variable that reads file
    ofstream writeFile; // variable that writes file

    readFile.open("data71.txt"); // opens file and associates it with readFile variable
    if (readFile.fail())
    {
        cout << "Input file opening failed. \n";
        exit(1); // exit exists the whole program, return returns out of a function
    }


    // note all values in data71.txt can be considered integer values
    int largest, smallest;
    int countEvens = 0;
    int firstLine;

    readFile >> firstLine; // reads the first line of the file and puts it into
    // set largest and smallest values to the value of the first line
    largest = firstLine;
    smallest = firstLine;

    readFile.close(); // close the file

    // open the file so we can start at the beginning of the file
    readFile.open("data71.txt");
    while (!readFile.eof())
    {
        int temp; // holder variable
        readFile >> temp; // places value in file into variable temp
        if (temp > largest) // replaces values if the current value is larger than current largest value
            largest = temp;
        if (temp < smallest) // replaces value if it is smaller than current smallest value
            smallest = temp;
        if(temp%2 == 0) // divisible by 2 means it is even
            countEvens++;
    }


    cout << "The smallest number is: " << smallest << endl;
    cout << "The largest number is: " << largest << endl;
    cout << "The number of evens is: " << countEvens << endl;

    writeFile.open("data71RESULTS.txt"); // open that file
    // we already have the values for the smallest, largest, and number of evens so we have to
    // just print it in the file.

    writeFile << "The smallest number is: " << smallest << endl;
    writeFile << "The largest number is: " << largest << endl;
    writeFile << "The number of evens is: " << countEvens << endl;



    readFile.close();  // close the file


    return 0;
}

/* === OUTPUT ===

The smallest number is: 2
The largest number is: 1104
The number of evens is: 10

 */