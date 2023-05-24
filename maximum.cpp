#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <ncurses.h>

using namespace std;

double maximum(double number[], int time)
{
    int tmp, run;
    run = 0;
    tmp = number[run];
    while (run < time)
    {
        if (number[run] > tmp)
            tmp = number[run];
        run++;
    }
    cout << "Die größte Zahl ist" << tmp << endl;

    return (tmp);
}
double mid(double number[], int time)
{
    int tmp, run;
    tmp = 0;
    run = 0;
    while (run < time)
    {
        tmp = tmp + number[run];

        run++;
    }
    tmp = tmp / time;
    cout << "Die größte Zahl ist" << tmp << endl;

    return (tmp);
}

