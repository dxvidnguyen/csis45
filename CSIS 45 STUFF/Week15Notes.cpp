// WEEK 15 VIDEO NOTES: CLASSES

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


    // method = a function inside of a class
    /*

    Object = A real world thing like "Dog" or "Table", which has properties and actions.

    Class = The "Template" of an Object.

    Property = Variable, can be "changed" or "seen" by an Action.

    Action = Function inside of a Class (a.k.a. "Method"), lets you change, or see the object.

    Instance =  Types of the same object, for example the "Dog" object can have instances of Labrador and Poodle.
        Each instance is the same type of object, but with different properties.

    Instance Variable = the unique properties of each instance, for example every type of Dog can have its own unique
        age, weight or name.

    Constructor = A method (has the same name as the class, no return type) which is used only when we first make a

     */
}