// Name: David Nguyen
// File: p74.cpp
// Date: 12/02/2019 - 12/12/2019
// Description: Human Class (OOP)
//  Use p73 to write your own Human class.
//  It should have the property age, and methods to changeAge and showAge.
//  Create two instances/objects grownUp with age of 20 and child with age of 10, using the constructor.
//  Show the ages of both instances from the main().
//  Change the age of the child to 15, then show the child's age again.

#include <iostream>
using namespace std;

// creating a class called human
class Human
{
    // private variable: can only be changed in the class
    private:
        float age;

    // public stuff can be taken out of the class or from out of the class
    public:
        // constructor --> has to have the same name as the class
        Human(float newAge)
        {
            // newAge is the value received from the main function
            age = newAge;
        }

        void changeAge(float newAge)
        {
            // changing the age
            age = newAge;
            // changes age of child to 10 to 15
        }

        // method that returns the age
        float getAge()
        {
            return age;
        }

        // method that prints out the age
        void showAge()
        {
            cout << age << endl;
        }

};

// main function
int main()
{
    // creating 2 instances (objects)
    Human grownUp(20);
    Human child(10);

    // showing their age
    cout << "child's age = " << child.getAge() << endl;
    cout << "grownUp's age = " << grownUp.getAge() << endl;

    // changing age of child
    child.changeAge(15);
    cout << "child's new age = " << child.getAge() << endl;

    return 0;
}

/* === OUTPUT ===

child's age = 10
grownUp's age = 20
child's new age = 15

 */