#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int losuj()
{
    srand(time(NULL));
    int x = rand()%1000;
    return x;
}

int porownywanie(int z)
{
    int licznik=0;
    int y;
    do {
    licznik=licznik+1;
    cout << "Podaj liczbe" << endl;
    cin >> y;

    if (y>z)
    {
        cout << "Za duza" << endl;
    }
    if (y<z)
    {
        cout << "Za mala" << endl;
    }
    }

    while (z!=y);
    return licznik;
}

int main()
{
    int licznik;
    int z;

    z=losuj();
    licznik=porownywanie(z);

    cout << "Brawo! Zgadles w " << licznik << " probach!" << endl;


    return 0;
}
