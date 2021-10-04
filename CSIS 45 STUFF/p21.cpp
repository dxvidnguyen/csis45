// Name: David Nguyen
// File: p21.cpp
// Date: 09/16/23 - 11/10/2019
// Description: ! through ~ (loop)

#include <iostream>
using namespace std;


int main()
{
    /* How to show ASCII Values
    cout << 'a' << endl; // shows 'a'
    cout << char(97) << endl; // shows 'a', which is the character for ASCII value 97
    cout << int('a') << endl; // shows '97', which is the ASCII value for character 'a'
    */


    int asciiValue = 33;
    // ! is 33 in decimal, ~ is 126

    while (asciiValue <= 126)
    {
        cout << char(asciiValue) << " "; // prints out characters with space
        
        // new line after 10 characters 
        int count = asciiValue - 32;
        int remain = count%10; 
        if (remain == 0)
        {
            cout << endl;
        }

        asciiValue++; 
        
    }


    return 0;
}

/* === OUTPUT ===

! " # $ % & ' ( ) * 
+ , - . / 0 1 2 3 4
5 6 7 8 9 : ; < = >
? @ A B C D E F G H
I J K L M N O P Q R
S T U V W X Y Z [ \ 
] ^ _ ` a b c d e f
g h i j k l m n o p
q r s t u v w x y z
{ | } ~
 
Process finished with exit code 0
 */