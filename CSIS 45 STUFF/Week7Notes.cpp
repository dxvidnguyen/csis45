// Week 7 Video notes

#include <iostream>
using namespace std;


void passByValue(int B); // prototype
void passByPointer(int *Z);
void input(int *x, int *y, int *z);



int main()
{
    int B = 99;
    cout << "B = " << B << endl;
    cout << "Memory address of B in main() = " << &B <<endl;
    // memory address of B in main = 0x7ffee0914a70
    // to show memory address of smt is to use a ampersand(&) --> &B

    cout << "B = " << B << endl;   // 99
    passByValue(B);
    cout << "B = " << B << endl;   // 99

    passByPointer(&B); // passing the mem.add of B into passByPointer
    cout << "B = " << B << endl;   // B = 0


    int C; // LOCAL VARIABLE
    // the variable C is local to the main() function
    // --> because C was declared in the main
    // --> C can only be used in the main
    // the SCOPE of C is only the main() function
    // SCOPE --> refers to where a variable can be used/seen/changed

    int a = 101;
    cout << "a = " << a << endl;
    cout << "memory address of a = " << &a << endl;
    // 0x7ffee89eeac0


    // POINTER VARIABLE
    // --> is equal ot the mem.add (memory address) of another variable
    int *A; // "*A" --> A is declared as a POINTER VARIABLE
    cout << "Memory address of *A = " << &A << endl;
    // 0x7ffee89eeab8
    cout << "Value stored in the mem.add. for *A is " << A << endl;
    // 0x0 --> a memory addresss

    // value stored in a regular variable is a number
    // valued stored in a pointer variable is a memory address

    // make pointer *A equal to the memory address of 'a'
    A = &a;
    cout << "Value stored in the mem.add. for *A is now " << A << endl;
    // now mem.add of point *A is equal to a --> 0x7ffee89eeac0

    // change the value of 'a' using the pointer 'A'
    *A = 89;
    cout << "a = " << a << endl;
    // a used be 101, but by using the pointer *A and setting it equal to a
    // a is now 89
    a = 1234;
    cout << "*A = " << *A <<endl; // 1234
    // changing one will change the other bc they connected through the memory address


    int i = -1, j = -1 , k = 1;
    input (&i, &j, &k);

    cout << "i = " << i << ", j = " << j << ", int k = " << k << endl;
    // values of i, j, k will be whatever is received from the function in the def


    return 0;
}

void passByValue (int B) // B is a parameter variable
{ //                  ^ PARAMETER VARIABLE is a LOCAL VARIABLE
    B = 0; // does not change the value of 'B' in the main
    // we are passing the value of INT B in the main, does not affect B in this function

    // LOCAL VARIABLE
    // can be used/seen/changed only in the code segment where it was defined
    // B is local to passByValue
    // the SCOPE of B is the passByValue function

    cout << "Memory address of B in passByValue is " << &B <<endl;
    // memory address of B in passByValue: 0x7ffee0914a2c
    // different from one in main!!
    // changing one will not change the other

    // cout << "C = " << endl;  // BAD!!
    // variable C can only be used in the main() function

}

void passByPointer(int *Z)
{
    *Z= 0;
}

void input(int *x, int *y, int *z)
{
    cout << "Enter value for i: ";
    cin >> *x;
    cout << "Enter value for j: ";
    cin >> *y;
    cout << "Enter value for k: ";
    cin >> *z;
}

