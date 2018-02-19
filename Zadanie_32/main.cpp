#include<iostream>
#include <unistd.h>

using namespace std;

void klatka1()
{
    cout << "\033[2J\x1b[1;1H";
    for (int i=0; i<18; i++)
    {
        cout << "\x1b[107m                    \x1b[40m" << endl;
    }
}

void klatka2()
{
    cout << "\033[2J\x1b[1;1H";
    for (int i=0; i<17; i++)
    {
        cout << "\x1b[107m                    \x1b[40m" << endl;
    }
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
}

void klatka3()
{
    cout << "\033[2J\x1b[1;1H";
    for (int i=0; i<16; i++)
    {
        cout << "\x1b[107m                    \x1b[40m" << endl;
    }
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
}

void klatka4()
{
    cout << "\033[2J\x1b[1;1H";
    for (int i=0; i<15; i++)
    {
        cout << "\x1b[107m                    \x1b[40m" << endl;
    }
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
}

void klatka5()
{
    cout << "\033[2J\x1b[1;1H";
    for (int i=0; i<14; i++)
    {
        cout << "\x1b[107m                    \x1b[40m" << endl;
    }
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
}

void klatka6()
{
    cout << "\033[2J\x1b[1;1H";
    for (int i=0; i<13; i++)
    {
        cout << "\x1b[107m                    \x1b[40m" << endl;
    }
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
}

void klatka7()
{
    cout << "\033[2J\x1b[1;1H";
    for (int i=0; i<12; i++)
    {
        cout << "\x1b[107m                    \x1b[40m" << endl;
    }
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
}

void klatka8()
{
    cout << "\033[2J\x1b[1;1H";
    for (int i=0; i<11; i++)
    {
        cout << "\x1b[107m                    \x1b[40m" << endl;
    }
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
}

void klatka9()
{
    cout << "\033[2J\x1b[1;1H";
    for (int i=0; i<10; i++)
    {
        cout << "\x1b[107m                    \x1b[40m" << endl;
    }
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
}

void klatka10()
{
    cout << "\033[2J\x1b[1;1H";
    for (int i=0; i<9; i++)
    {
        cout << "\x1b[107m                    \x1b[40m" << endl;
    }
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
}

void klatka11()
{
    cout << "\033[2J\x1b[1;1H";
    for (int i=0; i<7; i++)
    {
        cout << "\x1b[107m                    \x1b[40m" << endl;
    }
    cout << "\x1b[107m         \x1b[103m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m        \x1b[103m    \x1b[107m        \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
}

void klatka12()
{
    cout << "\033[2J\x1b[1;1H";
    for (int i=0; i<6; i++)
    {
        cout << "\x1b[107m                    \x1b[40m" << endl;
    }
    cout << "\x1b[107m         \x1b[106m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m       \x1b[106m  \x1b[103m  \x1b[106m  \x1b[107m       \x1b[40m" << endl;
    cout << "\x1b[107m      \x1b[106m  \x1b[103m    \x1b[106m  \x1b[107m      \x1b[40m" << endl;
    cout << "\x1b[107m       \x1b[106m  \x1b[102m  \x1b[106m  \x1b[107m       \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
}

void klatka13()
{
    cout << "\033[2J\x1b[1;1H";
    for (int i=0; i<5; i++)
    {
        cout << "\x1b[107m                    \x1b[40m" << endl;
    }
    cout << "\x1b[107m         \x1b[106m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m      \x1b[106m  \x1b[107m \x1b[106m  \x1b[107m \x1b[106m  \x1b[107m      \x1b[40m" << endl;
    cout << "\x1b[107m       \x1b[106m  \x1b[103m  \x1b[106m  \x1b[107m       \x1b[40m" << endl;
    cout << "\x1b[107m    \x1b[106m    \x1b[103m    \x1b[106m    \x1b[107m    \x1b[40m" << endl;
    cout << "\x1b[107m       \x1b[106m  \x1b[102m  \x1b[106m  \x1b[107m       \x1b[40m" << endl;
    cout << "\x1b[107m      \x1b[106m  \x1b[107m \x1b[102m  \x1b[107m \x1b[106m  \x1b[107m      \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
}

void klatka14()
{
    cout << "\033[2J\x1b[1;1H";
    for (int i=0; i<4; i++)
    {
        cout << "\x1b[107m                    \x1b[40m" << endl;
    }
    cout << "\x1b[107m         \x1b[106m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m     \x1b[106m  \x1b[107m  \x1b[106m  \x1b[107m  \x1b[106m  \x1b[107m     \x1b[40m" << endl;
    cout << "\x1b[107m      \x1b[106m  \x1b[107m \x1b[106m  \x1b[107m \x1b[106m  \x1b[107m      \x1b[40m" << endl;
    cout << "\x1b[107m       \x1b[106m  \x1b[103m  \x1b[106m  \x1b[107m       \x1b[40m" << endl;
    cout << "\x1b[107m  \x1b[106m      \x1b[103m    \x1b[106m      \x1b[107m  \x1b[40m" << endl;
    cout << "\x1b[107m       \x1b[106m  \x1b[102m  \x1b[106m  \x1b[107m       \x1b[40m" << endl;
    cout << "\x1b[107m      \x1b[106m  \x1b[107m \x1b[102m  \x1b[107m \x1b[106m  \x1b[107m      \x1b[40m" << endl;
    cout << "\x1b[107m     \x1b[106m  \x1b[107m  \x1b[102m  \x1b[107m  \x1b[106m  \x1b[107m     \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
    cout << "\x1b[107m         \x1b[102m  \x1b[107m         \x1b[40m" << endl;
}



int main()
{
    klatka1();
    usleep(80000);
    klatka2();
    usleep(80000);
    klatka3();
    usleep(80000);
    klatka4();
    usleep(80000);
    klatka5();
    usleep(80000);
    klatka6();
    usleep(80000);
    klatka7();
    usleep(80000);
    klatka8();
    usleep(80000);
    klatka9();
    usleep(80000);
    klatka10();
    usleep(80000);
    klatka11();
    usleep(80000);
    klatka12();
    usleep(80000);
    klatka13();
    usleep(80000);
    klatka14();



    return 0;
}
