// WEEK 9 VIDEO NOTES - ARRAYS

#include <iostream>
using namespace std;

// function prototype
void passByValue(int k);
void passByPointer(int *j);
void passByReference (int &j);
void recurse(int num);


int main()
{
    // what if we wanted to declare 1000 variables
    // int a0, a1, ... , a999  --> this would take forever

    int a[1000];  // declares an integer array of 1000 integer numbers
    // the actual numbers stored in the array are "any" / "garbage numbers"

    // showing the elements of the array
    int b[3];
    //    ^ SIZE
    cout << "b[0] = " << b[0] << endl; // first element of array b has INDEX = 0
    //                     ^ INDEX
    cout << "b[0] = " << b[1] << endl;
    cout << "b[0] = " << b[2] << endl;  // last element of an array of size 3
    //                     ^ last element = size - 1

    // change the elements of the array --> initialize the array
    b[0] = 10;  // element 1
    b[1] = 20;  // element 2
    b[2] = 30;  // element 3
    // b[3] = 40; --> index out range, BAD

    // show the elements of the array (after we changed them to certain values)
    cout << "+++++++++++++++ \n";
    cout << "b[0] = " << b[0] << endl;
    cout << "b[1] = " << b[1] << endl;
    cout << "b[2] = " << b[2] << endl;

    cout << "+++++++++++++++ \n";

    int c[ ] = {2,3,4};  // another way to initialize an array
    //          ^ ^ ^ ELEMENTS
    //   Index: 0 1 2
    cout << "c[0] = " << c[0] << endl;
    cout << "c[1] = " << c[1] << endl;
    cout << "c[2] = " << c[2] << endl;


    cout << "++++++++++++ \n";
    // showing the elements of an array using a loop
    for (int index = 0; index < 3; index++) // INDEX 0,1,2
        cout << "c[" << index << "] = " << c[index] << endl;

    /* this is just a loop to print out all elements of array 'a' (but the numbers are garbage numbers
    cout << "++++++++++++ \n";
    for (int index = 0; index < 1000; index++) // INDEX = 0,1,2, ... , 999
        cout << "a[" << index << "] = " << a[index] << endl;
    */

    cout << "++++++++++++ \n";
    // initialize the array 'a' using a loop
    for (int index = 0; index < 1000; index++)
        a[index] = 0; // will make all elements of array 'a' equal to zero (0)

    cout << "++++++++++++ \n";
    for (int index = 0; index < 1000; index++) // INDEX = 0,1,2, ... , 999
        cout << "a[" << index << "] = " << a[index] << endl;


    // pointers
    int x = 10;
    cout << "x = " << x << endl;
    //                ^ the value that is stored in the memory slot for x
    cout << "&x = " << &x << endl;  // 0x7ffee2138af4
    //                ^ the memory address for the memory slot of x

    int *X; // declaring a pointer variable X
    // the * (asterisk) indicates it is a pointer
    cout << "X = " << X << endl;
    cout << "&X = " << &X << endl;

    // point X to x
    X = &x; // X points to the memory address of x
    cout << "X = " << X << endl;
    cout << "&X = " << &X << endl;


    // change the value of x by using pointer X
    *X = 100;   // dereference operator - using a pointer we can directly access the value stored in variable it points to
    // show the value of x
    cout << "x = " << x << endl; // 100
    // show the value of x using X
    cout  << "*X = " << *X << endl; // 100


    // 2D arrays
    // z [] [] --> 2 by 2
    // **z --> pointer but for 2 dimensions

    int k = 0; // local variable: variable that is declared in a function
    cout << "k = " << k << endl; // 0
    cout << "&k in main() = " << &k << endl;  // will be different mem.add than k in passByValue

    // function call
    passByValue(k);
    //          ^ AGRUGEMNT: value we pass into the function
    cout << "k = " << k << endl; // 0

    passByPointer(&k); // we are passing the memory address of k
    cout << "k = " << k << endl; // 88
    // we send the mem.add of k
    // in the function it changes the memory address of k to the value 88

    passByReference(k);
    cout << "k = " << k << endl; // 101

    // RECURSION - repeating stuff a lot of times
    for (int i = 0; i < 3; i ++)
        cout << " for i = " << i << endl;

    cout << "============ \n";

    int i = 0;
    while (i < 3)
    {
        cout << "while i = " << i << endl;
        i++;
    }


    recurse(0);



    // swap values so that e = 2, f = 1
    int e = 1;
    int f = 2;
    // make a third variable
    int temp;
    temp = e;   // temp = 1
    e = f;      // e = 2, f = 2
    f = temp;   // e = 2, f = 1 --> values swapped!




    int z[] = {4,3,2,1};    // sort the array in ascending order {1,2,3,4}
    // we need to SWAP VALUES

    cout << "========== \n";
    cout << "z = {";
    int h;
    for (h = 0; h < 3; h++)
        cout << z[h] << ",";
    cout << z[h] << "}\n" ; // z = {4,3,2,1}


    /*


    //      z = {4,3,2,1}
    //    m=0    m+1
    if (z[0] > z[1])
    {
        temp = z[0];
        z[0] = z[1];
        z[1] = temp;
    }



    // z = {3,4,2,1}
    //    m=1
    if (z[1] > z[2])
    {
        temp = z[1];
        z[1] = z[2];
        z[2] = temp;
    }




    // z = {3,2,4,1} ... array z has a size = 4
    //    m = 2          ... m = 2 at the end
    // 2 = size -2
    if (z[2] > z[3])
    {
        temp = z[2];
        z[2] = z[3];
        z[3] = temp;
    }


    // z = {3,2,1,4}

     */



    int size = 4; // size of array 'z' is 4
/*
    for (int m = 0; m < (size-1); m++) // m = 0, 1, 2
    {
        if (z[m] > z[m+1])
        {
            temp = z[m];
            z[m] = z[m+1];
            z[m+1] = temp;
        }
    }

    int s;
    cout << "z = {";
    for (s = 0; s < size - 1; s++)
        cout << z[s] << ",";
    cout << z[s] << "}\n";
    // prints out: z = {3,2,1,4}
    // does it one time, so if we want to repeat it, we can just put it in a nested loop

*/

    // bubble sort!

    // int z[] = {4,3,2,1}; --> for reference

    for (int q = 0; q < (size-1); q++)
    {
        for (int m = 0; m < (size-1); m++) // m = 0, 1, 2
        {
            if (z[m] > z[m+1])
            {
                temp = z[m];
                z[m] = z[m+1];
                z[m+1] = temp;
            }
        }

    }

    int s;
    cout << "z = {";
    for (s = 0; s < size - 1; s++)
        cout << z[s] << ",";
    cout << z[s] << "}\n";

    // prints: z = {1,2,3,4}



    int t[] = {1,1,2,3,1};
    int count1s = 0;
    int sum = 0;
    for (s = 0; s < 5; s++)
    {
        if (t[s] == 1)
            count1s++;
        sum = sum + t[s];
    }
    cout << "count1s = " << count1s << endl;
    cout << "sum = " << sum << endl;


    char charArray[] = {'h', 'e', 'l', 'l', 'o'};
    // strings are just character arrays with a null terminating characte r
    // null terminating character --> \0
    string aString = "hello;";

    char charArray2[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    cout << charArray2 << endl;

    // we can have arrays of strings too
    string sArray[] = {"one" , "two" , "three"};
    cout << sArray[2] << endl; // three

    // arrays can be 1D but also 2D
    // int b [ ] [ ];
    //       ^row ^col

    // 1D pointer --> *a
    // 2D pointer --> **b




    return 0;
}

// function definition

void passByValue(int k)
{//                  ^ PARAMETER: variable that receives the argument
    // ARGUMENT and PARAMETER are different variables

    k = 88;
    cout << "&k in passByValue = " << &k << endl;
    // will be different mem.add than k in main()
}

void passByPointer(int *j) // passing by pointer
{
    *j = 88;
    // we can repoint a pointer

    int z = 0;
    j = &z;

}

void passByReference (int &j) // passing with a reference
{
    j = 101;
    // using a reference is fixed
}

void recurse(int num)
{

    // recurse(num + 1); // recursion
    // ends with exit code 11 --> stack overflowed b/c it ran out of space

    /*

    cout << "recurse num = " << num << endl;
    if (num < 2)
        recurse(num + 1); // will stop it after 3 time

    // prints out
    recurse num = 0
    recurse num = 1
    recurse num = 2
     */

    if (num < 2)
        recurse(num + 1); // will stop it after 3 time
    cout << "recurse num = " << num << endl;

    // prints
    // recurse num = 2
    // recurse num = 1
    // recurse num = 0

    // b/c once it gets to the number that ends the recurse function it returns back to the function before finishes
    // out the function that was not finished before

}S