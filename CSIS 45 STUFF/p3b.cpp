// Name: David Nguyen
// File: p3b.cpp
// Date: 09/02/2019 - 09/18/2019
// Description: Write a C++ program that reads in two decimal numbers and
//     outputs their sum and product. Sum is rounded to 1 decimal digit.
//     Product is rounded to 2 decimal digits


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double num1;
    double num2;

    // Prompt to enter numbers
    cout << "Please enter first number: ";
    cin >> num1;
    cout << "Please enter second number: ";
    cin >> num2;
    cout << endl;

    // declaring variables sum and product
    double sum;
    double product;

    // doing calculations for sum and product
    sum = num1 + num2;
    product = num1 * num2;


    cout << "Sum = " << fixed << setprecision(1) <<  sum << endl;
    cout << "Product = " << fixed << setprecision(2) << product << endl;

    return 0;
}
/* === OUTPUT ===
Please enter first number: 1.1
Please enter second number: 2.2

Sum = 3.3
Product = 2.42

Process finished with exit code 0

*/