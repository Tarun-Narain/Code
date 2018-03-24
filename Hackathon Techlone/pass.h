#ifndef PASS_H
#define PASS_H

#include<iostream>
#include<conio.h>
#include"gotoxy.h"

using namespace std;

string inputpass(int x,int y)
{
int i;
char a[10];
l:
gotoxy(x,y);
for(i=0;i<11;i++)
{
    a[i]=getch();
    if(a[i]==13 || i==10)
    {
        break;
    }
    else if(a[i]=='\b')
    {
        gotoxy(x,y);
        cout << "                   ";
        goto l;
    }
    cout << "*";
}
return a;
}

#endif // PASS_H
