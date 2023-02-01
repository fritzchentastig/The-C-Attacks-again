#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <ncurses.h>
#include "1-100.h"

using namespace std;

void minimum2()
{
    double x,y;
    

    cout << "Gib mir mal ne Zahl" << endl;
    cin >> x  ;
    cout << "\n Gib mir mal noch ne Zahl" << endl;
    cin >> y ;

    if (x<y)
    cout << y << "ist Größer";

    else if (x==y)

    cout << x << " und " << y << " Sind gleich Groß";

    else 
    cout << x << "ist Größer";


}

void pot()
{
    cout << "Gib mir ne Zahl und die wie vielte Potenz ich bilden soll"
}