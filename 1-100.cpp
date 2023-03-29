#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <ncurses.h>
#include <math.h>

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
    x = 0;
    i = 0;
    float c = 0;
    int note[10];

    while (x <= 10)
    {
        cout << "Gib nir ne Note(0 um abzubrechen)" << endl;
        cin >> note[x];
        // Arrays (Vektoren, Felder)
        // Used to store a lot of data of the same Type

        x++;
    }
    x = 0;
    for (i = 0; i < 9; i++)
    {
        x = note[i] + x;
    }
    c = (double)x / 10;
    x = 10;
    if (mode == 1)
    {
        cout << "Ausgabe gewählter Noten gestartet" << endl;
        while (x <= 10 && x >= 0)
        {
            if (x == -1)
            {
                cout << c << "Ist der Durchschnitt";
            }
            else
            {
                cout << "Gib eine Schülernummer ein" << endl;
                cin >> x;
                x--;
                cout << "Die Note des Schülers ist" << note[x] << endl;
            }
        }
    }
    else if (mode == 2)
    {
        // Arrays (Vektoren, Felder)
        // Used to store a lot of data of the same Type
        cout << "Der Notendurchschnitt ist " << c << endl
             << "Weiteres TBW";
    }
}
double quadrate(double a)
{
    return (a * a);
}

double potenz(double a, int b)
{
    double end = 0;
    b--;
    end = a;
    while (b >= 0)
    {
        end = (end * a);
    }
    return (end);
}