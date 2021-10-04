// Week 3 Video Notes

#include <iostream>
#include <time.h> // need this for rand(), srand()


using namespace std;

int main()
{
    // How to Make a Random Number
    int iseed = time(NULL); // gets the system time - system time is a huge number that constantly changes
    srand(iseed); // generates a random list of numbers ie: 34235, 643534, 32432432

    // srand(0) --> will generate the same list of numbers every time. the numbers will be random but its all
    // the same list of random numbers

    // modulus review
    // operators : +, -, *, /, = %
    // % modulus, modulo, remainder

    cout << "5/3 = " << 5/3 << endl;
    //prints out 1 because these are integers
    cout << "5.0/3.0 = " << 5.0/3.0 << endl;
    // prints out 1.66667 because those are doubles now
    cout << "5%3 = " << 5%3 << endl;     // prints out 2
    // How does it work? --> how many times does 3 fit into 5? and what is left over? 2
    // 5 - 1*3 = 5 - 3 = 2
    cout << "6%3 = " << 6%3 << endl;     // prints out 0
    // how many times does 3 fit into 6? 2
    // 6 - 2*3 = 6 - 6 = 0
    cout << "7%3 = " << 7%3 << endl;     // prints out 1
    // how many times does 3 fit into 7? 2
    // 7 - 2*3 = 7 - 6 = 1
    cout << "8%3 = " << 8%3 << endl;     // prints out 2
    // how many times does 3 fit into 8? 2
    // 8 - 2*3 = 8 - 6 = 2

    // what does %3 do???
    // --> only answers are 0, 1, 2. Can reduce a large number (from system time) to 0, 1, 2
    // anyNumber%3 = either 0, 1, 2

    cout << "rand() = " << rand() << endl; // prints out a big random number ie. 481011110
    cout << "rand()%3 = " << rand()%3 << endl; // prints out a number between 0 and 2 (0,1,2)

    // I want to make a random number between 0 go 10
    cout << "rand()%11 = " << rand()%11 << endl;
    // prints out number between 0 and 10 - go up one digit from the value you want to account for 0 remainder

    // random number between 0 and 27
    cout << "rand()%11 = " << rand()%28 << endl;

    // random number between 0 and 5
    cout << "rand()%6 = " << rand()%6 << endl;

    // random number between 10 and 15
    cout << "10 + rand()%6 = " << 10 + rand()%6 << endl;

    // random number between 20 and 25
    cout << "20 + rand()%6 = " << 20 + rand()%6 << endl;

    // random number between 50 and 60
    cout << "50 + rand()%11 = " << 50 + rand()%11 << endl;

    // random number b/w (between) 50 and 60
    int min = 50;
    int max = 60;
    cout << "min + rand()%(max-min+1) = " << min + rand()%(max-min+1) << endl;


    // Relational Operators Review
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

    cout << "3 == 4" << "  is  " << (3==4) << endl; // prints out 0
    cout << "3 != 4" << "  is  " << (3!=4) << endl; // prints out 1

    int X = 3;
    int Y = 4;

    // boolean data type, in c++ --> 1 is true 0 is false
    bool tF = true;
    bool fT = false;

    // computers can see either on or off
    // --> 1 is on, 0 is off
    // --> 1 is true, 0 is false

    // Bit : Smallest piece of data a computer can work with
    // Byte = 8 Bits

/*
Decimal		Binary
			_ = 1 bit
0			0
1			1

			_ _ = 2 bits
0			0 0
1			0 1
2			1 0
3			1 1

			_ _ _ = 3 bits
0			0 0 0
1			0 0 1
2			0 1 0
3			0 1 1
4			1 0 0
5			1 0 1
6			1 1 0
7 			1 1 1

			_ _ _ _ = 4 bits
0			0 0 0 0
1			0 0 0 1
2			0 0 1 0
3			0 0 1 1
4			0 1 0 0
5			0 1 0 1
6			0 1 1 0
7 			0 1 1 1
8 			1 0 0 0
9 			1 0 0 1
10 			1 0 1 0
11 			1 0 1 1
12 			1 1 0 0
13 			1 1 0 1
14 			1 1 1 0
15 			1 1 1 1


 _ _ _ _   _ _ _ _ = 8 bits = 1 byte
 				 1 <-- Decimal
 			   2
 			 4
 		   8
 	   16
 	 32
   64
 128

 _ _ _ _   _ _ _ _
   1 1 1   1 1 1 1  = 127
 1 0 0 0   0 0 0 0  = 128

 biggest number we can represent with 8 bits is 255
 in the ip network, it uses 8 bits but 255 and 1 are reserved for special purposes

 */

    int a;
    cout << "memory address of a is " << &a << endl;
    // prints hexadecimal value

    int age = 1;

    if (age == 1)
        cout << "age = 1" << endl;
    if (age == 2)
        cout << "age = 2" << endl;
    else
        cout << "hello world" << endl;
    // else automatically happens when the previous if or else if is false
    // else only cares about the if directly before and does not account for other if statements
    // do not put a semicolon (;) with a if




}