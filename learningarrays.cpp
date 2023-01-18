#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <ncurses.h>

using namespace std;

void arraytest();
//Arrays (Vektoren, Felder)
 //Used to store a lot of data of the same Type
 int num[3]={2,4,6};
 int numone[]={2,4,6};
 //numtwo[0-2] gets these Data the rest is written out with zero
 int numtwo[10]={2,4,6};

 float firstarray[100];
 firstarray[17]=9;
 firstarray[0]=3.4;
 firstarray[99]=-15.5;
 int secarray[5];
 int thirarray[]={5,4,3,2,1}
 char fouarray[10];
 fourarry[0]="L";