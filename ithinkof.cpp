#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <ncurses.h>


using namespace std;

void numberguessing()
{
    int y;
    int dif;
    srand(time(0));
    int x = rand() % 100 + 1;
    
    srand(time(0));


    cout << " Ich hab mir ne Zahl ausgedacht \n Rate mal" << endl;
    cin >> y  ;
    cout << "\n Die Zahl" << endl << x;

    dif = y-x;

    dif = abs(dif);

    if (x==y)
    cout << x << " das ist gleich";

    else if (dif<=10)
    cout << y << " das ist auf 10 Nah dran";

    else if (dif<=10)
    cout << y << " das ist auf fünf nah dran";

    else
    cout << "weit weg";

}