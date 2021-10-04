// Week 8 Video Notes

#include <iostream>
using namespace std;

// function prototypes
int returnVal();
void larger(int num1, int num2);

void stars (int numStars);
void prime();


int main()
{
    // calling a function that returns a value
    cout << "returnVal() returns " << returnVal() << endl; // call
    int returnValue = returnVal(); // call
    // variable names need to be different from function name

    cout << "returnValue = " << returnValue << endl;


    // calling a function that shows a value
    larger(1,2); // call
    larger(2,1); // call
    //          ^^ ARGUMENT

    // hint for squaring a number
    int a = 10;
    cout << "a^2 = " << a*a << endl;

    // make a program repeat itself
    int repeat, b, c;
    while (true)
    {
        cout << "enter a: ";
        cin >> a;

        // input validation - make sure a is positive
        while (a < 0)
        {
            cout << "enter postive value for a: ";
            cin >> a;
        }

        cout << "would you like to repeat ( 1 - yes, 2 - no) ";
        cin >> repeat;
        if (repeat != 1)
            break;
    }

    // check of 3 values are the same
    int x,y,z;
    if( (x==y) && (y==z) )
    {
        cout << "all are equal " << endl;
    }



    return 0;
}

// function definitions
int returnVal()
{
    return 1;
}
void larger(int num1, int num2);
{
    if(num1 > num2)
        cout << "larger is " << num1 << endl;
    else
        cout << "larger is " << num2 << endl;
}

void stars (int numStars);
void prime();