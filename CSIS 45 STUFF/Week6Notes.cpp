// Week 6 Video notes

#include <iostream>
using namespace std;

int D; // GLOBAL VARIABLE = dont use these !! (for this class)
// Global variable can be accessed and changed from any place/function in the program
// GLOBAL VARIABLE - is declared before and outside of all other functions

// PURPOSE OF FUNCTIONS: to recycle and reuse your code multiple times
// FUNCTION PROTOTYPES - before int main()

void stars(); // function PROTOTYPE, "declare" a function
// function is named "stars"
// how do you if smt is a function? it has parentheses ()
// "void" is the return type, "void" means it returns nothing
// parameters: none
// --> parameters are the variables we put in the parentheses

int returnOne(); // function prototype
// function name is "returnOne"
// "int" is the return type which means it returns an integer
// parameters: none

void showNum (int num1); // function prototype
// function name is "showNum"
// "void" is the return type, "void" means returns nothing
// parameters: num1 (integer value)
// parameters are the variables in b/w the () of a function
// the parameters will receive a value that we pass into the function

void passByValue(int B); // prototype

void functionA(int num);

void functionB ();

double sum(double n1, double n2); //prototype
// function name: sum
// return type: double (function will return a double value, sum of n1+n2)
// parameters: n1, n2




// MAIN FUNCTIN
int main() // the main is the function where the program starts
{
    // D is global --> in int main() D is set to 10
    D = 10;
    cout << "D = " << D << endl;

    // Functions are a way to reuse your code
    // For example, the 10 lines of stars **** can be replaced with two function calls

//    cout << "*****" << endl;
//    cout << "*****" << endl;
//    cout << "*****" << endl;
//    cout << "*****" << endl;
//    cout << "*****" << endl;


//    cout << "*****" << endl;
//    cout << "*****" << endl;
//    cout << "*****" << endl;
//    cout << "*****" << endl;
//    cout << "*****" << endl;


    stars(); // function CALL
    // as soon as we call the function stars()
    // the program jumps to the function definition
    // and executes everything in between the curly brackets {} of the function
    // prints out what is in the function


    // CALLING A FUNCTION THAT RETURNS A VALUE
    returnOne(); // function call --- shows nothing
    // as soon as I call returnOne(), we are going to execute everything within the {} of returnOne

    cout << returnOne() << endl;
    // this will return the value of 1 at the end of the function definition
    // prints out the return value

    // another way to also return that value 1
    int returnValue = 1; // value of what is returned
    cout << returnValue << endl; // prints out the 1 in the return

    // CALLING A FUNCTION THAT HAS A PARAMETER
    showNum(10); // function call -- have the put an int b/w the () bc it needs a parameter
    //             ^^ ARGUEMENT:  value that we pass into the function
    // as soon as call the function showNum(10)
    // the parameter num1 will become equal to 10

    showNum(1000);  // num1 is now 1000

    int A = 100;
    showNum(A); // PASS BY VALUE
    //      ^ ARGUEMENT: passes the value of A (100) into the fucntion
    // will show that "num1 = 100" in output
    // same as --> showNum(100)


    int B = 99;
    cout << "B = " << B << endl;
    cout << "Memory address of B in main() = " << &B <<endl;

    // memory address of B in main = 0x7ffee0914a70

    passByValue(B);
    cout << "B = " << B << endl;

    int C; // LOCAL VARIABLE
    // the variable C is local to the main() function
    // --> because C was declared in the main
    // --> C can only be used in the main
    // the SCOPE of C is only the main() function
    // SCOPE --> refers to where a variable can be used/seen/changed

    functionB();

    double a, b, t;
    cout << "Enter value 1: ";
    cin >> a;
    cout << "Enter value 2: ";
    cin >> b;

    cout << a << " + " << b;
    cout << sum(a,b) << endl;
    // note we can have int where doubles are supposed to be but we cannot have
    // doubles where int are supposed to be


    t = sum(a,b);   // a and b are arguments 
    cout << a << " + " << b << " = ";
    cout << t << endl;



    return 0;
}

// when function is called, code jumps down to the function and plays what is in the definition


// FUNCTION DEFINTIONS - after int main()

void stars() // function definition for stars
{
    cout << "*****" << endl;
    cout << "*****" << endl;
    cout << "*****" << endl;
    cout << "*****" << endl;
    cout << "*****" << endl;
}

int returnOne()
{
    return 1;  // as soon as we reach "return 1;"
    // the program will go back to where it was called
    // and return the value 1 where the function was called
    // the function exits as soon as we reach a return statement

    cout << "Hello World! " << endl;
    // this is not reachable
    // this will never show because the function will exit as soo as
    // it reaches the return 1 statement
}

void showNum (int num1)
{
    cout << "num1 = " << num1 << endl;
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

    // D is global --> this function changes D to 100
    D = 100;
    cout << "D = " << D << endl;
    // GLOBAL VARIABLE : can be used in all functions


}

// LOCAL VARIABLE
// can be used/seen/changed only in the code segment where it was defined

// SCOPE
// refers to where a variable can be used/seen/changed


void functionA(int num)
{
    cout << "num = " << num << endl;
}

void functionB()
{
    cout << "D = " << D << endl;
    functionA(123);
    //              ^^^ ARGUMENT
    // example of function calling other functions
}

double sum(double n1, double n2)
{   // n1 and n2 are the parameters
    double total;
    total = n1 + n2;
    return total;
}

// REASON WE HAVE PROTOTYPE BEFORE AND DEFINITION AFTER
// we could just have function definitions but then the order matters
// need things in a specific order if it is just the function definitions
// if we have prototypes and define functions after, program understands
// that there are other functions