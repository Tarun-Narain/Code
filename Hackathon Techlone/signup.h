#ifndef SIGNUP_H_INCLUDED
#define SIGNUP_H_INCLUDED
#include<string>
#include<fstream>
#include "read.h"

using namespace std;

class Signup
{
    char uname[10];
    string eid;
    string pass1,pass2;
    long long int num;

    public:
void signup()
    {
    cout << "\nUser-Name : ";
    cin >> uname;
    strupr(uname);
    cout << "Mobile Number : ";
    cin >> num;
    cout << "E-mail ID : ";
    cin >> eid;
    m:
    cout << "Create PASSWORD : ";
    cin >> pass1;
    cout << "Confirm PASSWORD : ";
    cin >> pass2;
    if(pass1!=pass2)
    {
        gotoxy(20,12);
        SetColor(4);
        cout << "***PASSWORD DOSEN'T MATCHED***\n";
        SetColor(7);
        gotoxy(0,8);
        cout << "                                    \n                                         ";
        gotoxy(0,8);
        goto m;
    }
    }
int confirm()
    {   char i;SetColor(8);
    cout << "\nUSER NAME           :  " << uname;
    cout << "\nMOBILE NUM          :  " << num;
    cout << "\nE-mail ID           :  " << eid;
    cout << "\nPASSWORD            :  " << pass1 << "\n";SetColor(9);
     cout << "________________________________________________________________________________";
    gotoxy(26,11);SetColor(15);
    cout << "ARE YOU SURE (Select)";
    cout << "\n\n1. YES";
    cout << "\n2. EDIT INFO";
    cout << "\n3. GOTO MAIN MENU";
    cout << "\n4. EXIT NOW";SetColor(7);

    i=getch();
return i;
    }

int write()
{
    fstream file;
    ofstream user;
    fstream regno;

    regno.open("regno",ios::in);
    int numb;
    regno >> numb;
    regno.close();

    user.open("USER",ios::app);
    user << numb << "\n";
    user << uname << "\n";
    user.close();

    file.open(uname,ios::out);
    file << numb << "\n";
    file << uname << "\n";
    file << pass1 << "\n";
    file << num << "\n";
    file << eid << "\n";
    file << 100 << "\n";
    file.close();

    regno.open("regno", ios::out);
    numb++;
    regno << numb;
    regno.close();
    SetColor(11);
    cout << "\nYOUR USER-ID : ";
    SetColor(2); cout << --numb; SetColor(11);
    cout << "\n1. Log Out";
    cout << "\n2. Log Out & EXIT";
    cout << "\n3. Sign In";
    SetColor(7);
    int y;
    y=getch();
    return y;
}

int edit()
{
    int i;
int n=5;
    char s;
cout << "\nUSER NAME           :  " << uname;
    cout << "\nMOBILE NUM          :  " << num;
    cout << "\nE-mail ID           :  " << eid;
    cout << "\nPASSWORD            :  " << pass1;
    m:
        if(n>=9){ return 1;}
    gotoxy(23,n);
    s=getch();
    if(s=='\b')
    {
        cout << "                            ";
        gotoxy(23,n);
        if(n==5){cin >> uname;}
       else if(n==6){cin >> num;}
        else if(n==7){cin >> eid;}
        else if(n==8){cin >> pass1;}
        n++; goto m;
    }
    else if(s==13 || s=='\t')
    {
        n++; goto m;
    }
}


};
#endif // SIGNUP_H_INCLUDED
