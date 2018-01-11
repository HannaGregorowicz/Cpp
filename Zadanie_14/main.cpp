#include <iostream>
#include <math.h>

using namespace std;


int main()

{
    string c;
    float y;
    float z;
    int x;

    do {

    cout << "Wybierz dzialanie, 1 - mnozenie, 2 - dodawanie." << endl;
    cin >> x;
    if (cin.good())

    {
        if (x!=1 && x!=2) {cout << "Zle wpisales" << endl;};
        if (x==1)
        {
            cout << "Wybrales mnozenie" << endl;
            cout << "Podaj pierwsza liczbe" << endl;
            cin >> y;

            if (cin.good())
            {cout << "Podaj druga liczbe" << endl;}
            else {cout << "Zle wpisales" << endl;
            return 0;}

            cin >> z;

            if (cin.good())
            {float a= y*z;
            cout << "Twoj wynik to " << a << endl;}
            else {cout << "Zle wpisales"; return 0;}
        }

        if (x==2)
        {
            cout << "Wybrales dodawanie" << endl;
            cout << "Podaj pierwsza liczbe" << endl;
            cin >> y;

            if (cin.good())
            {cout << "Podaj druga liczbe" << endl;}
            else {cout << "Zle wpisales" << endl; return 0;}

            cin >> z;
            if (cin.good())
            {float a=y+z;
            cout << "Twoj wynik to " << a << endl;}
            else {cout << "Zle wpisales" << endl; return 0;}
        }




    cout << "Czy chcesz wykonac kolejne dzialanie? T - Tak, N - Nie" << endl;
    cin >> c;


    }
    else {cout << "Zle wpisales"; return 0;}

    }
    while (c!="N" && c=="T");


    return 0;
}
