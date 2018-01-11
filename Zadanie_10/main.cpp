#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

float x=(-3.14);
int main()
{
    ofstream plik("wynik.txt",ofstream::out | ofstream::app);


    for (x>=(-3.14); x<=3.14; x=x+0.02)
    {
    cout << x << "          " << sin(x);
    cout << "           " << pow(sin(x), 2) << endl;

    plik << x << "          " <<sin(x)<< "          " <<pow(sin(x), 2) << endl;
    }

    plik.close();



    return 0;
}




