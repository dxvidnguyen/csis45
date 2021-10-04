// Name: David Nguyen
// File: p18.cpp
// Date: 09/10/2019 - 10/12/2019
// Description: Astrology Program - Write a program that asks the user for their birthday.
//      Then tell the user their Zodiac sign and the signs they are compatible with.


#include <iostream>
using namespace std;


int main()
{
    int day;
    int month;

    cout << "Please enter month of birthday: ";
    cin >> month;
    cout << "Please enter day of birthday: ";
    cin >> day;


    // Aries
    if ( (month == 3 && (day >= 21 && day <= 31)) || (month == 4 && (day >= 1 && day <= 19)) )
    {
        cout << "A birthday of " << month << "/" << day << " has the zodiac of \"Aries\"" << endl;
        cout << "Aries are compatible with: Aries, Leo, Sagittarius." << endl;
    }
    // Taurus
    else if ( (month == 4 && (day >= 20 && day <= 30)) || (month == 5 && (day >= 1 && day <= 20)) )
    {
        cout << "A birthday of " << month << "/" << day << " has the zodiac of \"Taurus\"" << endl;
        cout << "Taurus are compatible with: Taurus, Virgo, Capricorn." << endl;
    }

    // Gemini
    else if ( (month == 5 && (day >= 21 && day <= 31)) || (month == 6 && (day >= 1 && day <= 21)) )
    {
        cout << "A birthday of " << month << "/" << day << " has the zodiac of \"Gemini\"" << endl;
        cout << "Gemini are compatible with: Gemini, Libra, Aquarius." << endl;
    }

    // Cancer
    else if ( (month == 6 && (day >= 22 && day <= 30)) || (month == 7 && (day >= 1 && day <= 22)) )
    {
        cout << "A birthday of " << month << "/" << day << " has the zodiac of \"Cancer\"" << endl;
        cout << "Cancer are compatible with: Cancer, Scorpio, Pisces." << endl;
    }

    // Leo
    else if ( (month == 7 && (day >= 23 && day <= 31)) || (month == 8 && (day >= 1 && day <= 22)) )
    {
        cout << "A birthday of " << month << "/" << day << " has the zodiac of \"Leo\"" << endl;
        cout << "Leo are compatible with: Aries, Leo, Sagittarius." << endl;
    }

    // Virgo
    else if ( (month == 8 && (day >= 23 && day <= 31)) || (month == 9 && (day >= 1 && day <= 22)) )
    {
        cout << "A birthday of " << month << "/" << day << " has the zodiac of \"Virgo\"" << endl;
        cout << "Virgo are compatible with: Taurus, Virgo, Capricorn." << endl;
    }

    // Libra
    else if ( (month == 9 && (day >= 23 && day <= 30)) || (month == 10 && (day >= 1 && day <= 23)) )
    {
        cout << "A birthday of " << month << "/" << day << " has the zodiac of \"Libra\"" << endl;
        cout << "Libra are compatible with: Gemini, Libra, Aquarius." << endl;
    }


    // Scorpio
    else if ( (month == 10 && (day >= 24 && day <= 31)) || (month == 11 && (day >= 1 && day <= 21)) )
    {
        cout << "A birthday of " << month << "/" << day << " has the zodiac of \"Scorpio\"" << endl;
        cout << "Scorpio are compatible with: Cancer, Scorpio, Pisces." << endl;
    }

    // Sagittarius
    else if ( (month == 11 && (day >= 22 && day <= 30)) || (month == 12 && (day >= 1 && day <= 21)) )
    {
        cout << "A birthday of " << month << "/" << day << " has the zodiac of \"Sagittarius\"" << endl;
        cout << "Sagittarius are compatible with: Aries, Leo, Sagittarius." << endl;
    }

    // Capricorn
    else if ( (month == 12 && (day >= 22 && day <= 31)) || (month == 1 && (day >= 1 && day <= 19)) )
    {
        cout << "A birthday of " << month << "/" << day << " has the zodiac of \"Capricorn\"" << endl;
        cout << "Capricorn are compatible with: Taurus, Virgo, Capricorn." << endl;
    }

    // Aquarius
    else if ( (month == 1 && (day >= 20 && day <= 31)) || (month == 2 && (day >= 1 && day <= 18)) )
    {
        cout << "A birthday of " << month << "/" << day << " has the zodiac of \"Aquarius\"" << endl;
        cout << "Aquarius are compatible with: Gemini, Libra, Aquarius." << endl;
    }

    // Pisces
    else if ( (month == 2 && (day >= 19 && day <= 29)) || (month == 3 && (day >= 1 && day <= 20)) )
    {
        cout << "A birthday of " << month << "/" << day << " has the zodiac of \"Pisces\"" << endl;
        cout << "Pisces are compatible with: Cancer, Scorpio, Pisces." << endl;
    }


    // Other
    else
        cout << "You have entered an invalid birthday or in an invalid order." << endl;



    return 0;
}

/* === OUTPUT ===

Test Run 1:
Please enter month of birthday: 1
Please enter day of birthday: 1
A birthday of 1/1 has the zodiac of "Capricorn"
Capricorn are compatible with: Taurus, Virgo, Capricorn.

Test Run 2:
Please enter month of birthday: 2
Please enter day of birthday: 1
A birthday of 2/1 has the zodiac of "Aquarius"
Aquarius are compatible with: Gemini, Libra, Aquarius.

Test Run 3:
Please enter month of birthday: 3
Please enter day of birthday: 1
A birthday of 3/1 has the zodiac of "Pisces"
Pisces are compatible with: Cancer, Scorpio, Pisces.

Test Run 4:
Please enter month of birthday: 4
Please enter day of birthday: 1
A birthday of 4/1 has the zodiac of "Aries"
Aries are compatible with: Aries, Leo, Sagittarius.

Test Run 5:
Please enter month of birthday: 5
Please enter day of birthday: 1
A birthday of 5/1 has the zodiac of "Taurus"
Taurus are compatible with: Taurus, Virgo, Capricorn.

Test Run 6:
Please enter month of birthday: 6
Please enter day of birthday: 1
A birthday of 6/1 has the zodiac of "Gemini"
Gemini are compatible with: Gemini, Libra, Aquarius.

Test Run 7:
Please enter month of birthday: 7
Please enter day of birthday: 1
A birthday of 7/1 has the zodiac of "Cancer"
Cancer are compatible with: Cancer, Scorpio, Pisces.

Test Run 8:
Please enter month of birthday: 8
Please enter day of birthday: 1
A birthday of 8/1 has the zodiac of "Leo"
Leo are compatible with: Aries, Leo, Sagittarius.


Test Run 9:
Please enter month of birthday: 9
Please enter day of birthday: 1
A birthday of 9/1 has the zodiac of "Virgo"
Virgo are compatible with: Taurus, Virgo, Capricorn.

Test Run 10:
Please enter month of birthday: 10
Please enter day of birthday: 1
A birthday of 10/1 has the zodiac of "Libra"
Libra are compatible with: Gemini, Libra, Aquarius.

Test Run 11:
Please enter month of birthday: 11
Please enter day of birthday: 1
A birthday of 11/1 has the zodiac of "Scorpio"
Scorpio are compatible with: Cancer, Scorpio, Pisces.


Test Run 12:
Please enter month of birthday: 12
Please enter day of birthday: 1
A birthday of 12/1 has the zodiac of "Sagittarius"
Sagittarius are compatible with: Aries, Leo, Sagittarius.


Test Run 13:
Please enter month of birthday: 21
Please enter day of birthday: 32
You have entered an invalid birthday or in an invalid order.
 
 */