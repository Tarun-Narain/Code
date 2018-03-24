#include "color.h"
#include "gotoxy.h"
#include<stdlib.h>
#ifndef GUI_H_INCLUDED
#define GUI_H_INCLUDED
#include<conio.h>

class GUIBuilder
{
public :
        int GetMenu()
    {
        char a;
        SetColor(15);
     printf("  ---------------------------------------------------------------------\n");
     SetColor(13);
     printf("\t\t      Hackathon 2018 Techlone\n");
        SetColor(15);
     printf("  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
     SetColor(10);
     printf("                                MENU                                        \n");
     printf("\n\t1.      Sign-up");
     printf("\n\t2.      Sign-in");
     printf("\n\t3.      Option 3");
     printf("\n\t4.      Option 4");
     printf("\n\t5.      Option 5");
     printf("\n\t6.      EXIT");
/*SetColor(9);
    gotoxy(40, 4);
    printf(" _____________________");
    gotoxy(40, 5);
    printf("|                     |");
    gotoxy(40, 6);
    printf("|                     |");
    gotoxy(40, 7);
    printf("|                     |");
    gotoxy(40, 8);
    printf("|                     |");
    gotoxy(40,9);
    printf("|_____________________|");
    SetColor(10);
*/
gotoxy(22, 12);
     printf("Select Option : ");
     m:

gotoxy(40, 12);
printf("            ");
gotoxy(40, 12);
a=getch();


switch((int)a)
{
case 49:
    return 1;
case 50:
    return 2;
case 51:
    return 3;
case 52:
    return 4;
case 53:
    return 5;\
case 54:
    printf("EXIT");
    exit(0);

default:
    SetColor(12);
    printf("\n\t\t  Please Enter a Valid Choice");
    Sleep(100);
    SetColor(4);
    gotoxy(0, 12);
    printf("\n\t\t  Please Enter a Valid Choice");
    SetColor(10);
    goto m;
    break;
}

    return -1;
    }
};


#endif // GUI_H_INCLUDED
