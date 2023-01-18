#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <ncurses.h>

using namespace std;

void onetofivehun()
{
    int i;
    for (i = 1; i <= 500; i++)
    {
        cout << i << "  ";
        if ((i % 8) == 0)
            cout << endl;
    }
}

void twotothree()
{
    int x;
    for (x = 200; x < 301; x++)
        cout << x << endl;
}

void fivetoone()
{
    int x;
    for (x = 500; x > -1; x--)
        cout << x << endl;
}
void divtilend()
{
    float x;
    cin >> x;
    while (x >= 1)
    {
        x = x / 2;
        cout << x << endl;
    }
}

void Notes(int mode)
{
    int i, x, y;
    x = 5;
    i = 0;
    float c = 0;
    cout << "Wie viele Noten gibt es" << endl;
    int note[y]=0;
    cin >> y;
    while (x != 0)
    {
        cout << "Gib nir ne Note(0 um abzubrechen)" << endl;
        cin >> x;
        //Arrays (Vektoren, Felder)
        //Used to store a lot of data of the same Type

       
        i++;
    }

    x = 1 * one;
    x = x + 2 * two;
    x = x + 3 * three;
    x = x + 4 * four;
    x = x + 5 * five;
    x = x + 6 * six;
    c = x / i;
    if (mode == 1)
    {
        cout << "Der Notendurchschnitt ist " << c << endl;
    }
    else if (mode == 2)
    {
        //Arrays (Vektoren, Felder)
        //Used to store a lot of data of the same Type
        cout << "Der Notendurchschnitt ist " << c << endl
             << "Weiteres TBW";
    }
}