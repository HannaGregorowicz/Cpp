#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void ekran_powitalny()
{
cout << "" << endl;
cout << "\x1b[40m   \x1b[41m         \x1b[40m    \x1b[42m      \x1b[40m    \x1b[43m     \x1b[40m    \x1b[44m      \x1b[40m    \x1b[45m  \x1b[40m     \x1b[45m  \x1b[40m  \x1b[46m      \x1b[40m   " << endl;
cout << "\x1b[40m        \x1b[41m   \x1b[40m   \x1b[42m   \x1b[40m        \x1b[43m   \x1b[40m \x1b[43m   \x1b[40m   \x1b[44m  \x1b[40m  \x1b[44m   \x1b[40m   \x1b[45m  \x1b[40m     \x1b[45m  \x1b[40m      \x1b[46m  \x1b[40m   " << endl;
cout << "\x1b[40m       \x1b[41m  \x1b[40m     \x1b[42m  \x1b[40m        \x1b[43m   \x1b[40m   \x1b[43m   \x1b[40m  \x1b[44m  \x1b[40m   \x1b[44m   \x1b[40m  \x1b[45m  \x1b[40m     \x1b[45m  \x1b[40m      \x1b[46m  \x1b[40m   " << endl;
cout << "\x1b[40m      \x1b[41m  \x1b[40m      \x1b[42m  \x1b[40m  \x1b[42m    \x1b[40m  \x1b[43m         \x1b[40m  \x1b[44m  \x1b[40m   \x1b[44m   \x1b[40m  \x1b[45m  \x1b[40m     \x1b[45m  \x1b[40m     \x1b[46m   \x1b[40m   " << endl;
cout << "\x1b[40m     \x1b[41m  \x1b[40m       \x1b[42m   \x1b[40m   \x1b[42m  \x1b[40m  \x1b[43m  \x1b[40m     \x1b[43m  \x1b[40m  \x1b[44m  \x1b[40m  \x1b[44m   \x1b[40m    \x1b[45m  \x1b[40m   \x1b[45m  \x1b[40m     \x1b[46m   \x1b[40m    " << endl;
cout << "\x1b[40m   \x1b[41m         \x1b[40m    \x1b[42m      \x1b[40m  \x1b[43m  \x1b[40m     \x1b[43m  \x1b[40m  \x1b[44m      \x1b[40m      \x1b[45m     \x1b[40m    \x1b[46m    \x1b[40m     " << endl;
cout << "" << endl;
cout << "" << endl;
cout << "\x1b[40m                         \x1b[43m             \x1b[40m " << endl;
cout << "\x1b[40m                       \x1b[43m   \x1b[40m  \x1b[47m  \x1b[43m   \x1b[40m  \x1b[47m  \x1b[43m   \x1b[40m " << endl;
cout << "\x1b[40m                     \x1b[43m     \x1b[47m    \x1b[43m   \x1b[47m    \x1b[43m     \x1b[40m " << endl;
cout << "\x1b[40m                     \x1b[43m                     \x1b[40m " << endl;
cout << "\x1b[40m                     \x1b[43m   \x1b[41m   \x1b[43m         \x1b[41m   \x1b[43m   \x1b[40m " << endl;
cout << "\x1b[40m                     \x1b[43m    \x1b[41m   \x1b[43m       \x1b[41m   \x1b[43m    \x1b[40m " << endl;
cout << "\x1b[40m                     \x1b[43m     \x1b[41m           \x1b[43m     \x1b[40m " << endl;
cout << "\x1b[40m                       \x1b[43m                 \x1b[40m " << endl;
cout << "\x1b[40m                         \x1b[43m             \x1b[40m " << endl;
cout << "" << endl;
cout << "" << endl;
}

int losuj(int x)
{
    srand(time(NULL));
    x = rand()%x;
    return x;
}

int porownywanie(int z)
{
    int licznik=0;
    int y;
    do
    {
    licznik=licznik+1;
    cout << "\x1b[36mPodaj liczbe\x1b[33m" << endl << endl;
    cin >> y;

    if (y>z)
    {
        cout << "\x1b[31mZa duza\x1b[0m" << endl << endl;
    }
    if (y<z)
    {
        cout << "\x1b[32mZa mala\x1b[0m" << endl << endl;
    }
    }

    while (z!=y);
    return licznik;
}

void brawo()
{
    cout << "\x1b[40m " << endl;
    cout << "\x1b[40m   \x1b[41m     \x1b[40m    \x1b[42m     \x1b[40m     \x1b[43m   \x1b[40m    \x1b[44m \x1b[40m         \x1b[44m \x1b[40m    \x1b[45m    \x1b[40m    \x1b[46m  \x1b[40m" << endl;
    cout << "\x1b[40m   \x1b[41m \x1b[40m   \x1b[41m \x1b[40m    \x1b[42m \x1b[40m   \x1b[42m  \x1b[40m   \x1b[43m  \x1b[40m \x1b[43m  \x1b[40m    \x1b[44m \x1b[40m       \x1b[44m \x1b[40m    \x1b[45m  \x1b[40m  \x1b[45m  \x1b[40m   \x1b[46m  \x1b[40m" << endl;
    cout << "\x1b[40m   \x1b[41m       \x1b[40m  \x1b[42m     \x1b[40m   \x1b[43m  \x1b[40m   \x1b[43m  \x1b[40m   \x1b[44m \x1b[40m   \x1b[44m \x1b[40m   \x1b[44m \x1b[40m   \x1b[45m  \x1b[40m    \x1b[45m  \x1b[40m  \x1b[46m  \x1b[40m" << endl;
    cout << "\x1b[40m   \x1b[41m \x1b[40m    \x1b[41m  \x1b[40m  \x1b[42m   \x1b[40m     \x1b[43m       \x1b[40m    \x1b[44m \x1b[40m \x1b[44m \x1b[40m \x1b[44m \x1b[40m \x1b[44m \x1b[40m    \x1b[45m  \x1b[40m    \x1b[45m  \x1b[40m  \x1b[46m  \x1b[40m" << endl;
    cout << "\x1b[40m   \x1b[41m \x1b[40m    \x1b[41m  \x1b[40m  \x1b[42m  \x1b[40m \x1b[42m \x1b[40m    \x1b[43m  \x1b[40m   \x1b[43m  \x1b[40m    \x1b[44m \x1b[40m \x1b[44m \x1b[40m \x1b[44m \x1b[40m \x1b[44m \x1b[40m     \x1b[45m  \x1b[40m  \x1b[45m  \x1b[40m" << endl;
    cout << "\x1b[40m   \x1b[41m       \x1b[40m  \x1b[42m  \x1b[40m  \x1b[42m  \x1b[40m  \x1b[43m  \x1b[40m   \x1b[43m  \x1b[40m     \x1b[44m \x1b[40m   \x1b[44m \x1b[40m       \x1b[45m    \x1b[40m    \x1b[46m  \x1b[40m" << endl;
    cout << "\x1b[40m " << endl;
}

void ekran_koncowy()
{
    cout << "\x1b[40m " << endl;
    cout << "\x1b[40m   \x1b[41m     \x1b[40m    \x1b[42m      \x1b[40m  \x1b[43m  \x1b[40m  \x1b[44m     \x1b[40m  \x1b[45m  \x1b[40m   \x1b[45m  \x1b[40m  \x1b[46m  \x1b[40m        \x1b[41m      \x1b[40m    \x1b[42m   \x1b[40m" << endl;
    cout << "\x1b[40m   \x1b[41m  \x1b[40m  \x1b[41m  \x1b[40m       \x1b[42m  \x1b[40m  \x1b[43m  \x1b[40m  \x1b[44m  \x1b[40m     \x1b[45m  \x1b[40m  \x1b[45m  \x1b[40m   \x1b[46m  \x1b[40m            \x1b[41m  \x1b[40m   \x1b[42m  \x1b[40m \x1b[42m  \x1b[40m" << endl;
    cout << "\x1b[40m   \x1b[41m  \x1b[40m   \x1b[41m  \x1b[40m     \x1b[42m  \x1b[40m   \x1b[43m  \x1b[40m  \x1b[44m     \x1b[40m  \x1b[45m  \x1b[40m \x1b[45m  \x1b[40m    \x1b[46m  \x1b[40m           \x1b[41m  \x1b[40m   \x1b[42m  \x1b[40m   \x1b[42m  \x1b[40m" << endl;
    cout << "\x1b[40m   \x1b[41m  \x1b[40m   \x1b[41m  \x1b[40m    \x1b[42m  \x1b[40m    \x1b[43m  \x1b[40m  \x1b[44m  \x1b[40m     \x1b[45m    \x1b[40m     \x1b[46m  \x1b[40m          \x1b[41m  \x1b[40m    \x1b[42m       \x1b[40m" << endl;
    cout << "\x1b[40m   \x1b[41m  \x1b[40m  \x1b[41m  \x1b[40m    \x1b[42m  \x1b[40m     \x1b[43m  \x1b[40m  \x1b[44m  \x1b[40m     \x1b[45m  \x1b[40m \x1b[45m  \x1b[40m    \x1b[46m  \x1b[40m         \x1b[41m  \x1b[40m     \x1b[42m  \x1b[40m   \x1b[42m  \x1b[40m" << endl;
    cout << "\x1b[40m   \x1b[41m     \x1b[40m    \x1b[42m      \x1b[40m  \x1b[43m  \x1b[40m  \x1b[44m     \x1b[40m  \x1b[45m  \x1b[40m  \x1b[45m   \x1b[40m  \x1b[46m  \x1b[40m        \x1b[41m      \x1b[40m  \x1b[42m  \x1b[40m   \x1b[42m  \x1b[40m" << endl;
    cout << "\x1b[40m                            \x1b[44m \x1b[40m" << endl;
    cout << "\x1b[40m " << endl;
    cout << "\x1b[40m    \x1b[43m     \x1b[40m  \x1b[44m     \x1b[40m   \x1b[45m     \x1b[40m          \x1b[46m  \x1b[40m" << endl;
    cout << "\x1b[40m   \x1b[43m  \x1b[40m      \x1b[44m \x1b[40m   \x1b[44m  \x1b[40m  \x1b[45m  \x1b[40m         \x1b[46m  \x1b[40m    \x1b[46m  \x1b[40m" << endl;
    cout << "\x1b[40m   \x1b[43m  \x1b[40m      \x1b[44m     \x1b[40m   \x1b[45m     \x1b[40m              \x1b[46m  \x1b[40m" << endl;
    cout << "\x1b[40m   \x1b[43m  \x1b[40m \x1b[43m   \x1b[40m  \x1b[44m   \x1b[40m     \x1b[45m  \x1b[40m                 \x1b[46m  \x1b[40m" << endl;
    cout << "\x1b[40m   \x1b[43m  \x1b[40m  \x1b[43m  \x1b[40m  \x1b[44m  \x1b[40m \x1b[44m \x1b[40m    \x1b[45m  \x1b[40m         \x1b[46m  \x1b[40m    \x1b[46m  \x1b[40m" << endl;
    cout << "\x1b[40m    \x1b[43m    \x1b[40m   \x1b[44m  \x1b[40m  \x1b[44m  \x1b[40m  \x1b[45m     \x1b[40m          \x1b[46m  \x1b[40m" << endl;
    cout << "\x1b[40m                       \x1b[45m \x1b[40m" << endl;
    cout << "\x1b[40m " << endl;
}

int main()
{
    int licznik;
    int z;
    int a;
    int b;
    int x=1000;
    int c;
    ekran_powitalny();
    cout << "By zaczac gre wpisz 1" << endl;
    cin >> a;
    cout << "" << endl;
    if (a==1)
    {
        do
        {
            z=losuj(x);
            licznik=porownywanie(z);
            brawo();
            cout << "Zgadles w " << licznik << " probach!" << endl << endl;
            cout << "Czy chcesz rozpoczac nowa partie? Wpisz 1 - tak lub 2 - nie." << endl;
            cin >> b;
            if (b==1)
            {
                cout << "Czy chcesz zmienic zakres liczb? Wpisz 1 - tak lub 2 - nie." << endl;
                cin >> c;
                if (c==1)
                {
                    cout << "Wpisz z ilu liczb chcesz zgadywac:" << endl;
                    cin >> x;
                }
            }
        }
        while (b!=2);

    }
    ekran_koncowy();
    return 0;
}
