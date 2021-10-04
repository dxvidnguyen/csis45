// Name: David Nguyen
// File: p69.cpp
// Date: 11/18/2019 - 12/08/2019
// Description: Sum & Avg in a File
//  Write a program that takes its input from a file of number of type double.
//  The program shows the sum and average of all the numbers found in the file

// libraries needed to use files
#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std; // need this for ofstream, instream and more

int main()
{
    ifstream inStream;   // variable used to read file
    ofstream outStream;  // variable used to write a file
    double value; // variable that we

    inStream.open("data70.txt"); // opens the data70.txt file, associates it with variable inStream
    if (inStream.fail()) // this is true if "data70.txt" doesn't exist (we failed to open it)
    {
        cout << "Input file opening failed. \n";
        exit(1); // exit exists the whole program, return returns out of a function
    }


    // information needed to calculate the average and sum
    double count = 0; // to count the number of values in the ile
    double sum = 0; // sum of all values in file
    double temp = 0; // to get value from file

    // reading the file
    while(!inStream.eof()) // while inStream is not at the end of the file
    {
        inStream >> temp; // gets data from file and puts into the variable temp
        sum = sum + temp; // new sum is old sum +  temp
        count++;
    }


    double avg = sum / count;

    // print out
    cout << "Number of values in data70.txt file: " << setprecision(8) <<  count << endl;
    cout << "Sum of all values in data70.txt file: " << setprecision(8) << sum << endl;
    cout << "Average of all values in data70.txt file: " << setprecision(8) << avg << endl;


    outStream.open("results.txt");

    if (outStream.fail())
    {
        cout << "Output file opening failed. \n";
        exit(1);
    }
    outStream << "Number of values in data70.txt file: " << setprecision(8) <<  count << endl;
    outStream << "Sum of all values in data70.txt file: " << setprecision(8) << sum << endl;
    outStream << "Average of all values in data70.txt file: " << setprecision(8) << avg << endl;







}

/* === OUTPUT ====

Number of values in data70.txt file: 16
Sum of all values in data70.txt file: 4481.2178
Average of all values in data70.txt file: 280.07611


 */