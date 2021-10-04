// Name: David Nguyen
// File: p68a.cpp
// Date: 11/18/2019 - 12/08/2019
// Description: Files Sample Program
//  Write the example program shown in the video. Submit the 3 files (two text files, and one cpp).

// libraries needed to use files
#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream inStream; // inStream is a variable that we'll use to read from a file
    ofstream outStream; // outStream is a variable that we'll use to write a file
    int val;

    inStream.open("telemetry.txt"); // opens the "telemetry.txt" file, and associate the inStream with it
    if (inStream.fail()) // this is true if "telemetry.txt" doesn't exist (we failed to open it)
    {
        cout << "Input file opening failed. \n";
        exit(1); // exit exists the whole program, return returns out of a function
    }


    outStream.open("results.txt");
    {
        if (outStream.fail())
        {
            cout << "Output file opening failed. \n";
            exit(1);
        }
    }


    outStream << "Square of telemetry data" << endl;


    // the loop will not be true at the end of the file
    while (!inStream.eof()) // read until the end of file
    {
        if(!inStream.good())
            break;
        inStream >> val; // get data from "telemetry.txt" and put it into variable val
        outStream << val * val << endl; // output the product of val*val to "results.txt"
    }

    inStream.close();
    outStream.close();

    return 0;
}