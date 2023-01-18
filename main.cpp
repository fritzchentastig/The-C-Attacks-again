#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <ncurses.h>
#include <vector>
#include <stdlib.h>
#include "ithinkof.cpp"
#include "minimum1.cpp"
#include "minimum2.h"
#include "support.h"
#include "1-100.h"

using namespace std;

int main()
{
    char firselec[5];
    int selec;
    int run;
    run = 1;
    // Function Selection
    do
    {
        cout << " Wähle dein Programm aus\n \n";
        cout << "1. Betrag einer Zahl \n";
        cout << "2. Teilbarkeit einer Zahl \n";
        cout << "3. Zahlenraten \n";
        cout << "4. Das Minimum zweier Zahlen geben lassen\n";
        cout << "5. Das Minimum aus drei Zahlen ausgeben lassen\n";
        cout << "6. Die Zahlen von 1-500 Ausgeben\n";
        cout << "7. Die Zahlen von 200-300 Ausgeben";
        cout << "\n8. Die Zahlen von 500 rückwärtsausgeben";
        cout << "\n9. Zahlen bis zum Ende Dividieren";
        cout << "\n10. Notendurchschnitt berechnen";
        cout << "\n11. Notendurchschnitt berechnen und erweiterte statistische Daten anzeigen lassen";
        cout << "\n\n\n\n\nGebe deine Zahl ein oder q um das Programm zu beenden\n";

        cin >> firselec;
        cout << endl;

        if (strcmp(firselec,"q"))
            run = 0;
        else
        {
            selec = atoi(firselec);
            cout << selec << endl;
            if (selec == 4)
            {
                minimum2();
                prsent();
            }

            else if (selec == 5)
            {
                minim3();
                prsent();
            }
            else if (selec == 3)
            {
                numberguessing();
                prsent();
            }

            else if (selec == 6)
            {
                onetofivehun();
                prsent();
            }

            else if (selec == 7)
            {
                twotothree();
                prsent();
            }

            else if (selec == 8)
            {
                fivetoone();
                prsent();
            }

            else if (selec == 9)
            {
                divtilend();
                prsent();
            }
            else if (selec == 10)
            {
                Notes(1);
                prsent();
            }

            else
            {
                cout << "Das ist kein gültige Auswahl";
                prsent();
            }
        }
        
        selec = 0;
        cin.ignore();
        

    } while (run == 1);

    return (0);
}
