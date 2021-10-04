// File Notes -- Week 12

// Example: fill read and write

// libraries needed to use files
#include <iostream>
#include <fstream>
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
    // side note: techically for outStream, even if it failed C++ will write a file for you but it is good to check if it fails anyway


    outStream << "Square of telemetry data" << endl;

    // the loop will not be true at the end of the file
    while (!inStream.eof()) // read until the end of file
    {
        inStream >> val; // get data from "telemetry.txt" and put it into variable val
        outStream << val * val << endl; // output the product of val*val to "results.txt"
    }

    inStream.close();
    outStream.close();


    return 0;
}