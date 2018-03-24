#ifndef SIGNIN_H_INCLUDED
#define SIGNIN_H_INCLUDED
#include<fstream>
#include<string>
#include"pass.h"

class Signin
{
    string line[20];
    char uname[20];
    long int numb;
    string id;
    string pass1;
    string pass2;

    int i,j,x;
public:
    void input()
    {
        cout << "\n\tEnter User-name : ";
        cin >> uname;
strupr(uname);
        fstream file2;
        file2.open("regno",ios::in);
        file2 >> numb;
            cout << "\n __________________________________________________________________________\n";
            cout <<   "|   NAME       |        ID        |        SIGN IN                         |";
            cout << "\n|______________|__________________|________________________________________|\n";
        for(i=1,j=0;i<=20&&j<=20;i++&&j++)
        {
            line[j] = read(i,"USER");
            if(line[j]==uname)
            {i++;
            id= read(i-2,"USER");
            gotoxy(0,9);
            cout << "|  ";SetColor(11);cout << line[j];SetColor(7);
            gotoxy(10,9);
            cout << "     |     ";
            cout << id ;
            gotoxy(75,9); cout << "|";
            gotoxy(34,9); cout << "|   Enter Password : ";
            cout << "\n|______________|__________________|________________________________________|\n";
            break;
            }
        }
        gotoxy(27,5); SetColor(2);
        cout << "***USER FOUND***";SetColor(7);
        pass1=inputpass(55,9);
       pass2=read(2,uname);
        x=pass1.length();
        x--;
       gotoxy(10,14);
        if(x==pass2.length())
        {
            x--;
        for(i=0;i<=x;i++)
            {
                if(pass2[i]!=pass1[i])
                    {
                cout << "WRONG";
                break;
                    }
            }
        }
        else cout << "WRONG";


}
};

#endif // SIGNIN_H_INCLUDED
