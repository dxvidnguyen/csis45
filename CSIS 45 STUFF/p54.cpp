// Name: David Nguyen
// File: p54.cpp
// Date: 10/21/19 - 12/05/2019
// Description: Arrays and Random Numbers
//  Make an ARRAY1 of X random ELEMENTS.
//  Each array ELEMENT has a different random value N.
//  X is a random number between 20 to 30. (This means you have from 20 to 30 array Elements).
//  Must use your randint(min, max) function to return value into X!
//  N is a random number between 100 to 200. (This means that each Element is a random number between 100 to 200).
//  Must use your randint(min, max) function to return value into each N!
//  Make an ARRAY2 which has the ELEMENTS of ARRAY2 in REVERSE and DOUBLED

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

// function prototypes
int randInt (int min, int max);

int main()
{
    // set up for random numbers
    int iseed = time(NULL); // gets system time
    srand(iseed);  // creates list of rand numbers

    // X is a random number between 20 and 30
    int X;
    X = randInt(20, 30);
    // note: X is a random number that is chosen ONCE

    // ARRAY1 has X number of elements
    int ARRAY1 [X]; // array declaration


    // ARRAY1 input
    for (int a = 0; a < X; a++)
    {
        // N is a random value between 100 and 200
        // N is a random number that is chosen every time the loop happens
        int N;
        N = randInt(100, 200);
        ARRAY1[a] = N;
     }

    // ARRAY1 Output
    cout << "Making " << X << " random numbers and storing them in ARRAY1: " << endl;
    for (int b = 0; b < X; b++)
    {
        cout << "ARRAY1 [ " << b << " ] = " << ARRAY1[b] << endl;
    }



    // extra for spacing between 2 sets of arrays
    cout << endl;



    // ARRAY2 has same number of elements as ARRAY1
    int ARRAY2[X]; //  array declaration

    // ARRAY2 Input
    // double the and switch values of ARRAY1 to put into ARRAY2
    for (int c = 0; c < X; c++)
    {
        int doubleA1;
        doubleA1 = 2 * ARRAY1[c]; // double values of ARRAY1
        int change;
        change = (c - X + 1) * -1; // switches order of ARRAY1 values
        ARRAY2[change] = doubleA1;

    }

    // ARRAY2 Output
    cout << "Putting the doubled values of ARRAY1 into ARRAY2 in REVERSE: " << endl;
    for (int e = 0; e < X; e++)
    {
        cout << "ARRAY2 [ " << e << " ] = " << ARRAY2[e] << endl;
    }


    return 0;
}


// function definitions
int randInt (int min, int max)
{

    // range for rand numbers
    int remain = (max - min) + 1;

    int returnValue;
    returnValue = (rand()%remain) + min;

    return returnValue;

}

/* === OUTPUT ===

Run 1:
Making 25 random numbers and storing them in ARRAY1:
ARRAY1 [ 0 ] = 100
ARRAY1 [ 1 ] = 147
ARRAY1 [ 2 ] = 114
ARRAY1 [ 3 ] = 171
ARRAY1 [ 4 ] = 108
ARRAY1 [ 5 ] = 124
ARRAY1 [ 6 ] = 101
ARRAY1 [ 7 ] = 115
ARRAY1 [ 8 ] = 102
ARRAY1 [ 9 ] = 176
ARRAY1 [ 10 ] = 186
ARRAY1 [ 11 ] = 139
ARRAY1 [ 12 ] = 164
ARRAY1 [ 13 ] = 155
ARRAY1 [ 14 ] = 184
ARRAY1 [ 15 ] = 131
ARRAY1 [ 16 ] = 189
ARRAY1 [ 17 ] = 130
ARRAY1 [ 18 ] = 187
ARRAY1 [ 19 ] = 137
ARRAY1 [ 20 ] = 151
ARRAY1 [ 21 ] = 122
ARRAY1 [ 22 ] = 175
ARRAY1 [ 23 ] = 163
ARRAY1 [ 24 ] = 148

Putting the doubled values of ARRAY1 into ARRAY2 in REVERSE:
ARRAY2 [ 0 ] = 296
ARRAY2 [ 1 ] = 326
ARRAY2 [ 2 ] = 350
ARRAY2 [ 3 ] = 244
ARRAY2 [ 4 ] = 302
ARRAY2 [ 5 ] = 274
ARRAY2 [ 6 ] = 374
ARRAY2 [ 7 ] = 260
ARRAY2 [ 8 ] = 378
ARRAY2 [ 9 ] = 262
ARRAY2 [ 10 ] = 368
ARRAY2 [ 11 ] = 310
ARRAY2 [ 12 ] = 328
ARRAY2 [ 13 ] = 278
ARRAY2 [ 14 ] = 372
ARRAY2 [ 15 ] = 352
ARRAY2 [ 16 ] = 204
ARRAY2 [ 17 ] = 230
ARRAY2 [ 18 ] = 202
ARRAY2 [ 19 ] = 248
ARRAY2 [ 20 ] = 216
ARRAY2 [ 21 ] = 342
ARRAY2 [ 22 ] = 228
ARRAY2 [ 23 ] = 294
ARRAY2 [ 24 ] = 200

 
Run 2:
Making 29 random numbers and storing them in ARRAY1: 
ARRAY1 [ 0 ] = 179
ARRAY1 [ 1 ] = 195
ARRAY1 [ 2 ] = 117
ARRAY1 [ 3 ] = 137
ARRAY1 [ 4 ] = 108
ARRAY1 [ 5 ] = 110
ARRAY1 [ 6 ] = 155
ARRAY1 [ 7 ] = 122
ARRAY1 [ 8 ] = 126
ARRAY1 [ 9 ] = 151
ARRAY1 [ 10 ] = 110
ARRAY1 [ 11 ] = 109
ARRAY1 [ 12 ] = 126
ARRAY1 [ 13 ] = 160
ARRAY1 [ 14 ] = 156
ARRAY1 [ 15 ] = 147
ARRAY1 [ 16 ] = 129
ARRAY1 [ 17 ] = 110
ARRAY1 [ 18 ] = 109
ARRAY1 [ 19 ] = 151
ARRAY1 [ 20 ] = 152
ARRAY1 [ 21 ] = 194
ARRAY1 [ 22 ] = 139
ARRAY1 [ 23 ] = 181
ARRAY1 [ 24 ] = 145
ARRAY1 [ 25 ] = 166
ARRAY1 [ 26 ] = 148
ARRAY1 [ 27 ] = 129
ARRAY1 [ 28 ] = 196

Putting the doubled values of ARRAY1 into ARRAY2 in REVERSE: 
ARRAY2 [ 0 ] = 392
ARRAY2 [ 1 ] = 258
ARRAY2 [ 2 ] = 296
ARRAY2 [ 3 ] = 332
ARRAY2 [ 4 ] = 290
ARRAY2 [ 5 ] = 362
ARRAY2 [ 6 ] = 278
ARRAY2 [ 7 ] = 388
ARRAY2 [ 8 ] = 304
ARRAY2 [ 9 ] = 302
ARRAY2 [ 10 ] = 218
ARRAY2 [ 11 ] = 220
ARRAY2 [ 12 ] = 258
ARRAY2 [ 13 ] = 294
ARRAY2 [ 14 ] = 312
ARRAY2 [ 15 ] = 320
ARRAY2 [ 16 ] = 252
ARRAY2 [ 17 ] = 218
ARRAY2 [ 18 ] = 220
ARRAY2 [ 19 ] = 302
ARRAY2 [ 20 ] = 252
ARRAY2 [ 21 ] = 244
ARRAY2 [ 22 ] = 310
ARRAY2 [ 23 ] = 220
ARRAY2 [ 24 ] = 216
ARRAY2 [ 25 ] = 274
ARRAY2 [ 26 ] = 234
ARRAY2 [ 27 ] = 390
ARRAY2 [ 28 ] = 358




 */