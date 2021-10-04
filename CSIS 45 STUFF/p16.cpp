// Name: David Nguyen
// File: p16.cpp
// Date: 09/10/2019 - 10/10/2019
// Description: Rock Paper Scissors
//  Write a program to simulate rock, paper, scissors.
//  Show winner on based on rules of rock, paper, scissors.

#include <iostream>
using namespace std;

int main()
{
    // p1 = player 1, p2 = player 2
    int p1;
    int p2;

    // Prompt: entering rock papers or scissors
    cout << "Enter Rock(1), Paper(2), or Scissors(3) " << endl;
    cout << "Player 1: ";
    cin >> p1;
    cout << "Player 2: ";
    cin >> p2;

    // declaring variables for rock, papers, scissors
    int rock = 1;
    int paper = 2;
    int scissor = 3;

    // Determining who wins based on rules of rock, paper, scissors
    // 3 situations - p1 wins, p2 wins, p1 & p2 tie

    // player 1 wins
    if ( p1 == rock && p2 == scissor )
        cout << "Result: Player 1 wins, Rock breaks scissors!" << endl;
    else if ( p1 == scissor && p2 == paper )
        cout << "Result: Player 1 wins, Scissors cut paper!" << endl;
    else if ( p1 == paper && p2 == rock )
        cout << "Result: Player 1 wins, Paper covers rock!" << endl;

    // player 2 wins
    else if ( p2 == rock && p1 == scissor )
        cout << "Result: Player 2 wins, Rock breaks scissors!" << endl;
    else if ( p2 == scissor && p1 == paper )
        cout << "Result: Player 2 wins, Scissors cut paper!" << endl;
    else if ( p2 == paper && p1 == rock )
        cout << "Result: Player 2 wins, Paper covers rock!" << endl;

    // tie
    else if ( p1 == p2 )
        cout << "Result: TIE!" << endl;


    return 0;
}

/* === OUTPUT ===
 Test Run 1:
 Enter Rock(1), Paper(2), or Scissors(3)
 Player 1: 1
 Player 2: 3
 Result: Player 1 wins, Rock breaks scissors!

 Test Run 2:
 Enter Rock(1), Paper(2), or Scissors(3)
 Player 1: 3
 Player 2: 2
 Result: Player 1 wins, Scissors cut paper!

 Test Run 3:
 Enter Rock(1), Paper(2), or Scissors(3)
 Player 1: 2
 Player 2: 1
 Result: Player 1 wins, Paper covers rock!

 Test Run 4:
 Enter Rock(1), Paper(2), or Scissors(3)
 Player 1: 3
 Player 2: 1
 Result: Player 2 wins, Rock breaks scissors!

 Test Run 5:
 Enter Rock(1), Paper(2), or Scissors(3)
 Player 1: 2
 Player 2: 3
 Result: Player 2 wins, Scissors cut paper!

 Test Run 6:
 Enter Rock(1), Paper(2), or Scissors(3)
 Player 1: 1
 Player 2: 2
 Result: Player 2 wins, Paper covers rock!

 Test Run 7:
 Enter Rock(1), Paper(2), or Scissors(3)
 Player 1: 1
 Player 2: 1
 Result: TIE!

 Test Run 8:
 Enter Rock(1), Paper(2), or Scissors(3)
 Player 1: 2
 Player 2: 2
 Result: TIE!

 Test Run 9:
 Enter Rock(1), Paper(2), or Scissors(3) 
 Player 1: 3
 Player 2: 3
 Result: TIE!


 */