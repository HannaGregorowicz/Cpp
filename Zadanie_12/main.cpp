#include <iostream>

using namespace std;

int main()
{

    for(int i=30; i<48; i++)
    {
        cout << i <<"\x1b[" << i << "m Hello!" <<"\x1b[0m"<< endl;
    }

    return 0;
}
