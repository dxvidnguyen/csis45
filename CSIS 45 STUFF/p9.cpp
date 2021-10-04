// Name: David Nguyen
// File: p9.cpp
// Date: 09/02/2019 - 09/23/2019
// Description: Write a program which asks the user for a student's grade as a
//      percent, and then returns their letter grade.


#include <iostream>
using namespace std;

int main()
{
    // declaring variables
    int grade;

    // prompt
    cout << "Please enter a grade in percent: ";
    cin >> grade;

    // if, else if chain
    // determines grade and prints out grade
    if (grade >= 90)
    {
        cout << "You have a \"A\"" ;
    }
    else if ( (grade >= 80) && (grade < 90) )
    {
        cout << "You have a \"B\" ";
    }
    else if ( (grade >= 70) && (grade <80) )
    {
        cout << "You have a \"C\" ";
    }
    else if ( (grade >= 60) && (grade < 70) )
    {
        cout << "You have a \"D\" ";
    }
    else if (grade < 60)
    {
        cout << "You have a \"F\" ";
    }

    return 0;
}
/* === OUTPUT ===
 Output 1
 Please enter a grade in percent: 75
 You have a "C"

 Output 2
 Please enter a grade in percent: 85
 You have a "B"

 Output 3
 Please enter a grade in percent: 95
 You have a "A"

 Output 4
 Please enter a grade in percent: 65
 You have a "D"

 Output 5
 Please enter a grade in percent: 55
 You have a "F"


 */