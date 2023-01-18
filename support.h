#include <stdio.h>
#include <iostream>

using namespace std;

void scrclr()
{
    cout << "\033[2J\033[1;1H";
}

void prsent()
{
    cout << "\nEnter drücken um Fortzufahren";
    cin.ignore();
}