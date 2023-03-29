#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <ncurses.h>

using namespace std;

double minimum3(double InputAR[], int n)
{
    int run, m;
    double temp;
    run = n;
    temp = InputAR[0];
    for (n = 0; n >= run; n++)
        if (InputAR[n] < temp)
            temp = InputAR[n];

                return (temp);
}

double standardabweichung(double InputAR[], int n)
{
    double Durchschnitt, abweich, temp = 0;
    int run;
    for (run = 0; run <= n; run++)
        temp = temp + InputAR[run];
    Durchschnitt = temp / n;
    temp = 0;
    for (run = 0; run <= n; run++)
        {temp = temp + ((InputAR[n]-Durchschnitt)*(InputAR[n]-Durchschnitt));
        abweich = temp / (n-1);
        }
    return(abweich);
}

double Durchschnitt(double InputAR[], int n)
{
    double Durchschnitt, temp = 0;
    int run;
    for (run = 0; run <= n; run++)
        temp = temp + InputAR[run];
    Durchschnitt = temp / n;
    return(Durchschnitt);
}

void minimum2()
{
    double x, y;

    cout << "Gib mir mal ne Zahl" << endl;
    cin >> x;
    cout << "\n Gib mir mal noch ne Zahl" << endl;
    cin >> y;

    if (x < y)
        cout << y << "ist Größer";

    else if (x == y)

        cout << x << " und " << y << " Sind gleich Groß";

    else
        cout << x << "ist Größer";
}

void pot()
{
    cout << "Gib mir ne Zahl und die wie vielte Potenz ich bilden soll";
}