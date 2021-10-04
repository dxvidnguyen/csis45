// Week 4 Video Notes - Repetition
// Description: Introduction to Repetition, Accumulation, Min, Max, Sum, Avg


#include <iostream>  // need this for cout, cin
#include <iomanip>   // need this for setw()
#include <stdio.h>   // need this for printf()

using namespace std;

int main()
{
    int age;
    cout << "enter age: ";
    cin >> age;
    // input validation = make sure the user has entered a good value

    // ask the user repeatedly to enter a good value, if the value is out of range

    /*
    if ( (age<0)  ) // this if happens one time
    {
        cout << "Invalid age, enter a positive value: ";
        cin >> age;
    }

    if ( (age<0) || (age>123) )
    {
        cout << "Invalid age, enter value between 0-123: ";
        cin >> age;
    }

    */

    // lets see what happens with a while
    // condition: we want a positive age
    while ( (age<0)  )
    {
        cout << "Invalid age, enter a positive value: ";
        cin >> age;
    }
    // repeats over and over until we get a positive value

    // condition: we want an age between 0 and 23
    while ( (age<0) || (age>123) )
    {
        cout << "Invalid age, enter value between 0-123: ";
        cin >> age;
    }
    // while happens until the condition is FALSE
    // while repeats when the condition is TRUE
    // basically an if that happens multiple times

    // I want to show the numbers from 0 to 10 in increments of 1
    // 1, 2, 3, ... , 10 --> this is what we want it to print out
    // ^start         ^end  ...     my increment is 1
    // Good candidate for a FOR LOOP
    // - you know how many numbers you want to show
    // - you know the start, end, and increments

    for (int number = 1; number <= 10; number = number + 1)
    {   //            ^start       ^end                  ^step
        cout << "number = " << number << endl;
    }

    // you can use a while loop to do the same thing as a for loop
    // we are going to rewrite the above using a while loop
    int number = 1;
    while (number <= 10)
    {
        cout << "while number = " << number << endl;
        number = number + 1; // step ... number++; number += 1
    }
    // using for loops may be more efficient because it requires less


    // I want to show the numbers from 5 to 10 in increments of 1
    for (int number = 5; number <= 10; number = number + 1)
    {   //            ^start       ^end                  ^step
        cout << "number = " << number << endl;
    }

    // I want to show the numbers from 0 to 10 in increments of 2
    for (int number = 0; number <= 10; number = number + 2)
    {   //            ^start       ^end                  ^step
        cout << "number = " << number << endl;
    }
    // step can be written different ways
    // 1) number = number + 2
    // 2) number += 2
    // accomplish the same thing

    // I want to show the numbers from 10 to 0 in increments of -2
    for (int number = 10; number >= 0; number = number - 2)
    {   //            ^start       ^end                  ^step
        cout << "number = " << number << endl;
    }


    // another while loop
    number = 10;
    while (number >= 0)
    {
        cout << "while number = " <<  number << endl;
        number = number - 2;
    }


    // nested loop
    for (int i = 0; i < 3; i++) // i += 1; i = i + 1 ... i = 0,1,2
    {
        cout << "i = " << i << endl;

        for (int j = 0; j < 2; j++) // j = 0, 1
        {
            cout << "j = " << j << endl;
        }
    }


    // loops that happen as many time as the user wants to
    int times;
    cout << "How many times would you like the loop to repeat? " << endl;
    cin >> times;
    for (int i = 0; i = times; i++)
    {
        cout << "i = " << i+1 << endl;
    }

    // rewrite the previous for loop using a while loop
    int i = 1;
    while (i <= times)
    {
        cout << "while i = " << i << endl;
    }
    // this loop will be number ends because we never told i to increase

    // fixed loop
    while (i <= times)
    {
        cout << "while i = " << i << endl;
        i++; // this will increment the loop and is a fix for the previous while loop
    }

    // what is the value of i below
    cout << "after while i = " << i << endl;
    // guess: it is the value of the last i, when i = times
    // answer: when i = times, the loops happens for one last time --> does the whole loop and i will be equal to
    //  whatever the loop does to i
    //  in this case, the last loop prints out i = times and then continues to do i++, so final value i = times + 1
    // the loop continues while i is true and the last value of i makes the condition false so it does not do the loop
    //  however this last value of i is the value of i


    /*

    i = 0;
    while (true) // never-ending loop
    {
        cout << " ---> i =  "<< i << endl;
        i++;
    }
    // will increase i forever bc loop goes on while true


     */

    // loop that goes on until user enters a specific value
    int num;
    while (true) // neverending loop
    {
        cout << "Enter -999 to stop: ";
        cin >> num;
        if (num == -999)
            break; // stops the loop here

        cout << "hi";
        // Question: will this "hi" show if i enter -999
        // Answer: No, nothing happens after the break
    }

    // can rewrite this loop is to change the condition
    // while (num != -999)
    // --> then we dont need the break


    // global vs local variables

    num = 0;
    if (num == 0)
    {
        int A = 0; // A is a 'local' variable which means it can only be used inside of the block (brackets)
                   //    where is was declared

        // A is declared inside of the if statement
        // which means that  A can only be visible or only be used inside the if statement
        // the "scope" of A is the if
        // A is "local" to the if

    }

    // cout << "A = " << A << endl;  this is bad bc A can only be used inside of the if where it was declared
    // if we try to print it there is an error
    // --> Clion will print out "use of undeclared identifier A"

    while (num < 0)
    {
        int A = 0; // A is a 'local' variable which means it can only be used inside of the block (brackets)
        //    where is was declared

        // A is declared inside of the while statement
        // which means that  A can only be visible or only be used inside the while statement
        // the "scope" of A is the while
        // A is "local" to the while
        // num is global

    }

    // cout << "A = " << A << endl;
    // this is bad bc A can only be used inside of the while where it was declared

    // want to show the numbers: 1,2,3,4,5,6

    for (int j = 1; j <= 6; j++)
    {
       // cout << j << "," ; // prints out 1,2,3,4,5,6, we dont want the last comma
       // we can fix this with an if statement

       if (j < 6)
           cout << j << "," ;
       if (j == 6)
           cout << j << "\n";
       // prints 1,2,3,4,5,6

       // programming hints start 57 mins

    }







    return 0;


}