// conditionals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    /* Step 9
    int x1;
    int y1;
    int x2;
    int y2;
    int y3;
    int x3;
    float c;

    cout << "Player 1 enter your x-coordinate\n";
    cin >> x1;
    cout << "Player 1 enter your y-coordinate\n";
    cin >> y1;
    cout << "Player 2 enter your x-coordinate\n";
    cin >> x2;
    cout << "Player 2 enter your y-coordinate\n";
    cin >> y2;

    x3 = x1 - x2;
    y3 = y1 - y2;

    if (x3 < 2 && x3 > -2)
    {
        cout << "too close\n";
    }
    if (y3 < 2 && y3 > -2)
    {
        cout << "too close\n";
    }

    c = sqrt((x3 * x3) + (y3 * y3));

    cout << "Distance between the players is " << c << endl;
    */

    /* Step 10
    bool okay = false;
    int answer = 0;

    while (okay == false)
    {
        cout << "Please enter a number from 1-9: " << endl;
        cin >> answer;

        if (answer < 10 && answer > 0)
        {
            okay = true;
        }
        else
        {
            cout << "Number entered is invalid" << endl;
        }
    }
    */

    /* Step 11
    int x = 5;
    int y = 5;
    char input = '#';

    while (x <= 10 && x >= 1 && y <= 10 && y >= 1)
    {
        cout << "Your x-coordinate is " << x << " Your y-coordinate is " << y << endl;

        if (x == 10 || x == 1 || y == 1 || y == 10)
        {
            cout << "You are at the edge of the boundaries" << endl;
        }

        cout << "What direction do you want to travel, North (n), East(e), South(s) or West(w)?" << endl;
        cin >> input;

        switch (input)
        {
        case('n'):
            y = y - 1;
            break;
        case('e'):
            x = x + 1;
            break;
        case('s'):
            y = y + 1;
            break;
        case('w'):
            x = x - 1;
            break;
        default:
            break;
        }
    }

    cout << "You have left the boundary and therefore was ravaged by savages" << endl;
    */

    /* Step 1-4
    int n;
    cout << "please enter a number" << endl;
    cin >> n;
    cout << "your number was: " << n << endl;

    if (n < 5)
    {
        cout << "it was lower than 5" << endl;
    }
    if (n < 10)
    {
        cout << "lower than 10" << endl;
    }
    else
    {
        cout << "10 or more" << endl;
    }
    if (n < 7)
    {
        cout << "lower than 7" << endl;
    }
    else if (n == 7)
    {
        cout << "it is 7" << endl;
    }
    else
    {
        cout << "more than 7" << endl;
    }
    */

    /* Step 5
    int n;
    int n2;
    cout << "please enter a number 1\n";
    cin >> n;
    cout << "please enter another number\n";
    cin >> n2;

    if (n2 > n)
    {
        cout << "the second number is bigger than the first\n";
    }
    */

    /* Step 6
    int n;
    cout << "please enter a number\n";
    cin >> n;

    switch (n)
    {
    case(1):
        cout << "one\n";
        break;
    case(2):
        cout << "two\n";
        break;
    case(3):
        cout << "three\n";
        break;
    case(4):
        cout << "four\n";
        break;
    case(5):
        cout << "five\n";
        break;
    case(6):
        cout << "six\n";
        break;
    case(7):
        cout << "seven\n";
        break;
    case(8):
        cout << "eight\n";
        break;
    default:
        cout << "something else\n";
        break;
    }
    */

    /* Step 7-8
    int x = 0;
    int y = 0;

    cout << "please enter your x-coordinate\n";
    cin >> x;
    cout << "please enter your y-coordinate\n";
    cin >> y;

    if (x > 20)
    {
        cout << "too far to the right\n";
        x = 20;
    }
    else if (x < 10)
    {
        cout << "too far left\n";
        x = 10;
    }

    if (y > 25)
    {
        cout << "too high\n";
        y = 25;
    }
    else if (y < 5)
    {
        cout << "too low\n";
        y = 5;
    }

    cout << "Spawned location:\nx-coordinate: " << x << endl << "y-coordinate: " << y << endl;*/
}
