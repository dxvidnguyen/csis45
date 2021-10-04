// Name: David Nguyen
// File Name: p2.cpp
// 09/02/2019 - 09/18/2019
// Description: Program prints out "CS!" in large block letters inside a
//     border with message underneath

#include <iostream>
using namespace std;

int main ()
{
    // border and space
    cout << "************************************************" << endl;
    cout << endl; // can use either "\n" or endl to end lines

    // printing out CS
    cout << "         C C C                 S S S" << endl;
    cout << "       C       C              S     S" << endl;
    cout << "      C                      S" << endl;
    cout << "     C                        S" << endl;
    cout << "     C                         S S S" << endl;
    cout << "     C                                S" << endl;
    cout << "      C                      S       S" << endl;
    cout << "       C       C              S S S" << endl;
    cout << "        C C C " << endl;

    // prints out space border
    cout << endl;
    cout << "**************************************************" << endl;

    //prints out two blank lines and message
    cout << endl;
    cout << endl;
    cout << "       Computer Science is Cool Stuff!!" << endl;

    return 0;
}

/* === OUTPUT ===
************************************************

         C C C                 S S S
       C       C              S     S
      C                      S
     C                        S
     C                         S S S
     C                                S
      C                      S       S
       C       C              S S S
        C C C

**************************************************


       Computer Science is Cool Stuff!!

Process finished with exit code 0
 */