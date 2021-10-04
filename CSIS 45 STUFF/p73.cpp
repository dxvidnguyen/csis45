// Name: David Nguyen
// File: p73.cpp
// Date: 12/02/2019 - 12/12/2019
// Description: Class Example OOP
//  Type up the Classes and Object Oriented Programming (OOP) example and get it to work.
//  Submit your code including /* multiline comments */ at the bottom that show how it ran.

#include <iostream>
using namespace std;

class Dog
{
    // private means that (variable will not change outside of class)
    // only public methods can change the variables
    private:
        float weight; // instance variable, every instance has its own weight

    public:
        // constructor
        Dog(float newWeight)
        {
            weight = newWeight;
        }

        // method to change the weight
        void changeWeight(float newWeight)
        {
            weight = newWeight;
        }

        // method to return the weight
        float getWeight() { return weight; }

        // method to show the weight
        void showWeight() { cout << weight << endl; }

};

int main()
{
    // use constructor to create new instances
    // labrador and germanShepherd are the instance names
    Dog labrador(20);
    Dog germanShepherd(50);
    //                  ^^ CALLS THE CONSTRUCTOR

    cout << "labrador's weight = ";
    cout << labrador.getWeight() << endl;

    cout << "germanShepherd weight = ";
    cout << germanShepherd.getWeight() << endl;

    germanShepherd.changeWeight(5);
    cout << "germanShepherd weight = ";
    cout << germanShepherd.getWeight() << endl;

    return 0;
}

/* === OUTPUT ===
 
labrador's weight = 20
germanShepherd weight = 50
germanShepherd weight = 5 
 
 */