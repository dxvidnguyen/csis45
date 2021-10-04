// Week 2 Notes
#include <iostream>
using namespace std;

int main()
{
    /* We check to see if something is true or false using

     Relational Operators
     ==     equals
     >=     greater than equal to
     <=     less than equal to
     !=     does not equal
     <      less than
     >      greater than

     */
    // True/False is a boolean data type
    // The default way that c++ shows true and false is 1 and 0
    // True  is 1 and False is 0

    cout.setf(std::ios::boolalpha); // use this to show(print out) true/false instead of 1 and 0
    cout << "3 == 4 " << " is " << (3 == 4) << endl; //prints out false


    return 0;
}