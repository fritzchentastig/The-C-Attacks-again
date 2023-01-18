#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <ncurses.h>

using namespace std;

void minim3()
{
    double x,y,z;
    

    cout << " Gib mir mal ne Zahl" << endl;
    cin >> x  ;
    cout << "\n Gib mir mal noch ne Zahl" << endl;
    cin >> y ;
    cout << "\n Und noch ne Zahl" << endl;
    cin >> z ;


    if (x<y&&x<z)
    cout << x << " ist kleiner";

    else if (z<y&&z<x)
    cout << z << " ist kleiner";

    else if (y<x&&y<z)
    cout << y << " ist kleiner";

    else
    cout << "alle drei Zahlen sind gleich Groß";



}