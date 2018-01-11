#include <iostream>
#include <cmath>

using namespace std;


void hello()
{
    cout << "Hello World" << endl;
}

void funkcja2(float x)
{
    cout << x << endl;
}

void funkcja3(int y,int z)
{
    cout << y+z << endl;
}

int funkcja4(int a, float b, float c)
{
    int d=round(a*b*c);
    cout << d << endl;
    return d;
}

int funkcja5(int tab[], int n)
{
    int x = 1;

    for (int i=0; i<n; i++)
    {
        x = x*tab[i];
    }
    return x;

}

int main()
{
    hello();

    funkcja2(5.3);

    funkcja3(7,3);

    funkcja4(2, 2.5, 2.5);
    int tab[3] = {1, 2, 3};
    int n = sizeof(tab)/sizeof(tab[0]);

    int x = funkcja5(tab, n);
    cout << x;

}

