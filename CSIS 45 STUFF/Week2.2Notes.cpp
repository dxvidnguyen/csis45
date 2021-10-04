// Week 2 Notes:
// Focus - Selection: if, else if, else, and , or, boolean


#include <iostream>
using namespace std;

int main()
{
    // Relational Operators
    /* we check to see if something is true or false using these RELATIONAL OPERATORS
     ==       : equals (compare)
     >=       : greater than or equal to
     <=       : less than or equal to
     !=       : does not equal
     <        : less than
     >        : greater than
     */

    // True/False is a boolean data type
    // ---> boolean just means something is true or false
    // Defaults: True is 1, False is 0
    cout << "3 == 4" << "  is  " << (3==4) << endl;
    //                                 ^^^ CONDITION = check to see if something is true or false
    // Prints out 0 because 3=4 is false

    int x = 3;
    int y = 4;
    cout << "x == y" << "  is " << (x==y) << endl; // 0 = false
    cout << "x != y" << "  is " << (x!=y) << endl; // 1 = true
    cout << "x >= y" << "  is " << (x>=y) << endl; // 0 = false
    cout << "x <= y" << "  is " << (x<=y) << endl; // 1 = true
    //                              ^^^^ CONDITIONS

    int age = 25; // only want to show the correct message accordingn to the int age
    if ( age < 18 ) // if the condition is true, whatever is in the {} will be executed
    {
        cout << "You are under";  // statement 1
        cout << "18 years old\n"; // statement 2
        // if you have more than one statement then you must use the {} brackets
    }
    //if you only have 1 statement then the {} brackets are optional
    if ( age > 21 )
        cout << "You are over 21 years old\n" ; // one statement

    //nested if --> one if inside another if
    if (age >18)
    {
        if (age <21)
        {
            cout << "Your age is between 18 and 21\n";
        }
    }
    // technically within those if statements there is only one statement each so brackets are not required
    /* can be written as

    if (age > 18)
        if (age < 21)
            cout << "Your age is between 18 and 21\n";
     */

    //rewrite the above nested if, using LOGICAL OPERATOR "and" --> &&
    if ( (age > 18) && (age < 21) )
    {
        cout << "Your age is between 18 and 21\n";
    }


    /* Logic for &&
     If we want something to happen when BOTH conditions are true,
    then we use 'and'.
    '&&' can check if a number is WITHIN an acceptable range.
    ============= AND =============================================
    if  age > 18  &&  age < 21:
    if CONDITION1 && CONDITION2:
        True           True           'and' evaluates to 'True'
        False          True           'and' evaluates to 'False'
        True           False          'and' evaluates to 'False'
        False          False          'and' evaluates to 'False'
    ==============================================================
     */

    // negative number is an invalid age
    if (age < 0)
    {
        cout << "This is an invalid age\n";
    }
    // else if only gets checked when the previous if / else if was false
    // when the previous if/ else if is true, then the else if will does not get checked
    // if/else if chain is a way to stop at the first thing that is true
    else if ( age < 18 ) // if the condition is true, whatever is in the {} will be executed
    {
        cout << "You are under";  // statement 1
        cout << "18 years old\n"; // statement 2
    }
    else if ( age > 21 )
        cout << "You are over 21 years old\n" ;
    else if (age >18)
    {
        if (age <21)
        {
            cout << "Your age is between 18 and 21\n";
        }
    }

    // no value over 123 is acceptable
    else if (age>123)
    {
        cout << "This is an invalid age\n";
    }

    // Rewrite the above if/else if using an 'or'  --> || (double vertical lines)
    if ( (age<0) || (age>123) )
    {
        cout << "This is an invalid age \n";
    }

    /* truth table for 'or'

    If we want something to happen when either ONE (or BOTH)
    of the conditions are true, then we use an '||'.
    'or' can check if a number is OUTSIDE of an acceptable range
    ============= OR ==============================================
    if  age < 0   ||   age > 123
    if CONDITION1 ||  CONDITION2:
        true           true          'or' evaluates to 'True'
        false          true          'or' evaluates to 'True'
        true           false         'or' evaluates to 'True'
        false          false         'or' evaluates to 'False'
    ===============================================================

    */

    int num = 0;
    if (num > 0)
    {
        cout << num << " is positive " << endl;
    }
    else if ( num == 0) //the else gets checked when the previous if/else if is false
    {
        cout << num << " is 0" << endl;
    }

    else // else automatically happens when the previous if/else if is false
    {
        cout << num << " is negative " << endl;
    }

    // how to show true and false instead of 1 and 0
    // --> usually true = 1 and false = 0
    cout.setf(std::ios::boolalpha);
    cout << "x == y" << "  is " << (x==y) << endl; // false
    cout << "x != y" << "  is " << (x!=y) << endl; // true
    cout << "x >= y" << "  is " << (x>=y) << endl; // false
    cout << "x <= y" << "  is " << (x<=y) << endl; // true

    return 0;
}
/* === OUTPUT ===

3 == 4  is  0
x == y  is 0
x != y  is 1
x >= y  is 0
x <= y  is 1
You are over 21 years old
You are over 21 years old
0 is 0
x == y  is false
x != y  is true
x >= y  is false
x <= y  is true

Process finished with exit code 0
 *
 */