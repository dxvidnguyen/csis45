//Example of proper indentation:

// below 3 lines have no leading spaces
#include
using namespace std;
int main()
{
    // all statements within the main { }
    // are preceded by 4 leading spaces or 1 tab:
    cout << "hello";
    cout << " world" << endl;
    int a = 4;
    if (a < 5)
    {
        // all statements within the if { }
        // are preceded by 8 leading spaces or 2 tabs
        cout << "a is less";
        cout << " than 5" << endl;
        a = 22;
    }

    // for loop and its { } are preceded by
    // 4 leading spaces or 1 tab:
    for (int i = 0; i < 4; i++)
    {
        // all statements within the for { }
        // have 8 leading spaces or 2 tabs:
        cout << "i = " << i;
        cout << endl;
        if (i == 3)
        {
            // all statements within the if { }
            // have 12 leading spaces or 3 tabs:
            cout << "i is 3!! \n";
        }
    }

    cout << "Hi there" << endl;

} // end of main

// Program name: p0.cpp
// Your name: Alex Stoykov
// Date 08/12/2019
// Program decription: basic example


//COMMENTS
#include
using namespace std;

int main()
{
    cout << "Hello \n World! \n";
    return 0;
}

/* Program Test Run (shows how your program ran):

   Hello
    World

*/