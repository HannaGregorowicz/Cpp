#include <iostream>

using namespace std;

void ciag(int n)
{
    int a = 0;
    int b = 1;

    for (int i=0; i<n; i++)
    {
        cout << a << endl;
        a += b;
        b = a-b;
    }
}

int main()
{
    ciag(45);
    return 0;
}
