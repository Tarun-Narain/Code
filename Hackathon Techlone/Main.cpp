#include<iostream>
#include<stdio.h>
#include "Gui.h"
#include "gotoxy.h"
#include "color.h"
#include<stdlib.h>
#include "Search.h"
#include "signup.h"
#include "signin.h"

using namespace std;

int main()
{l:
    system("cls");
GUIBuilder Build;
int Selected_Option=Build.GetMenu(); //For GUI MENU fuction return Selcted option
Signin User;
Signup NewUser;
int x;
switch(Selected_Option)
{
case 1:
    printf("\n1");
    system("cls");
NewUser.signup();
x=NewUser.confirm();
if(x==49)NewUser.write();
else
goto l;
    break;
case 2:
    printf("\n2");
    system("cls");
    User.input();
break;
case 3:
    printf("\n3");
    break;
case 4:
    printf("\n4");
    break;
case 5:
    printf("\n5");
}

}
