// Name: David Nguyen
// File: p28.cpp
// Date: 09/23/2019 - 11/16/2019
// Description: Gymnastics Score ( loop)
//  Write a program to compute a gymnastics competition score.
//  There are 4 judges who mark the gymnasts in the range of 0 to 10, and the
//    overall score is the average of the marks.
//  An error message should appear if a mark is entered that is out of the range
//    (0-10) and then ask the user to input a valid mark again.
//  Output the average.

#include <iostream> // this is for cout, cin
#include <iomanip>  // this is for setw()
#include <stdio.h>  // this is for printf()
#include <time.h> // need this for rand(), srand()

using namespace std; // for cin and cout

int main ()
{
    // variables
    int sum, s1, s2, s3, s4;
    double average;

    for (int a = 1; a <= 4; a++)
    {
        cout << "Judge " << a << ", please enter a score between 0 and 10: ";
        if (a == 1)
        {
            cin >> s1; // takes first input and enters it into the score
            while (true)
            {
                if ((s1 < 0) || (s1 > 10)) // if input is incorrect
                {
                    cout << "Incorrect input Judge 1, please enter a score " <<
                     "between 0 and 10: ";
                    cin >> s1;  // takes a new input
                }
                if ((s1 >= 0) && (s1 <= 10)) // if the input is correct it
                   // will move on
                    break;
            }
        }

        else if (a == 2)  // judge 2
        {
            cin >> s2;
            while (true)
            {
                if ((s2 < 0) || (s2 > 10))
                {
                    cout << "Incorrect input Judge 2, please enter a score "
                     << "between 0 and 10: ";
                    cin >> s2;
                }
                if ((s2 >= 0) && (s2 <= 10))
                    break;
            }
        }
        else if (a == 3)  // judge 3
        {
            cin >> s3;
            while (true)
            {
                if ((s3 < 0) || (s3 > 10))
                {
                    cout << "Incorrect input Judge 3, please enter a score "
                   << "between 0 and 10: ";
                    cin >> s3;
                }
                if ((s3 >= 0) && (s3 <= 10))
                    break;
            }
        }

        else if (a == 4)  // judge 4
        {
            cin >> s4;
            while (true)
            {
                if ((s4 < 0) || (s4 > 10))
                {
                    cout << "Incorrect input Judge 4, please enter a score "
                   << "between 0 and 10: ";
                    cin >> s4;
                }
                if ((s4 >= 0) && (s4 <= 10))
                    break;
            }
        }

    }

    // sum and average is outside of the loop
    sum = s1 + s2 + s3 + s4;
    average = double(sum) / 4; // average may need decimal so turn sum into a
      // double -> double(sum)

    cout << "The average of the 4 judges is (" << s1 << "+" << s2 << "+" << s3
      << "+" << s4 << ")/4 = " << sum << "/4 = " << average <<endl;



    return 0;

}

/* === OUTPUT ===

Sample Run 1:
Judge 1, please enter a score between 0 and 10: -43
Incorrect input Judge 1, please enter a score between 0 and 10: 55
Incorrect input Judge 1, please enter a score between 0 and 10: 5
Judge 2, please enter a score between 0 and 10: 8
Judge 3, please enter a score between 0 and 10: 80
Incorrect input Judge 3, please enter a score between 0 and 10: 7
Judge 4, please enter a score between 0 and 10: 10
The average of the 4 judges is (5+8+7+10)/4 = 30/4 = 7.5

 Sample Run 2:
Judge 1, please enter a score between 0 and 10: 11
Incorrect input Judge 1, please enter a score between 0 and 10: 3
Judge 2, please enter a score between 0 and 10: -9
Incorrect input Judge 2, please enter a score between 0 and 10: 2
Judge 3, please enter a score between 0 and 10: 1
Judge 4, please enter a score between 0 and 10: 4
The average of the 4 judges is (3+2+1+4)/4 = 10/4 = 2.5

 */
