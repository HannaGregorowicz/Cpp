#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void ekran_powitalny()
{
    cout << "\x1b[2J\x1b[107m\x1b[1;1H                                              \x1b[40m";
    cout << "\x1b[107m\x1b[2;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[3;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[4;1H  \x1b[40m    \x1b[43m \x1b[103m        \x1b[40m      \x1b[43m \x1b[103m   \x1b[40m       \x1b[43m \x1b[103m       \x1b[40m    \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[5;1H  \x1b[40m       \x1b[43m \x1b[103m  \x1b[40m         \x1b[43m \x1b[103m   \x1b[40m      \x1b[43m \x1b[103m   \x1b[40m         \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[6;1H  \x1b[40m       \x1b[43m \x1b[103m  \x1b[40m         \x1b[43m \x1b[103m   \x1b[40m      \x1b[43m \x1b[103m  \x1b[40m          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[7;1H  \x1b[40m       \x1b[43m \x1b[103m  \x1b[40m         \x1b[43m \x1b[103m   \x1b[40m      \x1b[43m \x1b[103m   \x1b[40m         \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[8;1H  \x1b[40m       \x1b[43m \x1b[103m  \x1b[40m         \x1b[43m \x1b[103m   \x1b[40m       \x1b[43m \x1b[103m       \x1b[40m    \x1b[107m  \x1b[40m";

    cout << "\x1b[107m\x1b[9;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";

    cout << "\x1b[107m\x1b[10;1H  \x1b[40m    \x1b[44m \x1b[104m        \x1b[40m     \x1b[44m \x1b[104m     \x1b[40m      \x1b[44m \x1b[104m       \x1b[40m    \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[11;1H  \x1b[40m       \x1b[44m \x1b[104m  \x1b[40m       \x1b[44m \x1b[104m  \x1b[40m  \x1b[44m \x1b[104m  \x1b[40m    \x1b[44m \x1b[104m   \x1b[40m         \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[12;1H  \x1b[40m       \x1b[44m \x1b[104m  \x1b[40m      \x1b[44m \x1b[104m         \x1b[40m   \x1b[44m \x1b[104m  \x1b[40m          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[13;1H  \x1b[40m       \x1b[44m \x1b[104m  \x1b[40m      \x1b[44m \x1b[104m  \x1b[40m    \x1b[44m \x1b[104m  \x1b[40m   \x1b[44m \x1b[104m   \x1b[40m         \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[14;1H  \x1b[40m       \x1b[44m \x1b[104m  \x1b[40m      \x1b[44m \x1b[104m  \x1b[40m    \x1b[44m \x1b[104m  \x1b[40m    \x1b[44m \x1b[104m       \x1b[40m    \x1b[107m  \x1b[40m";

    cout << "\x1b[107m\x1b[15;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";

    cout << "\x1b[107m\x1b[16;1H  \x1b[40m    \x1b[43m \x1b[103m        \x1b[40m    \x1b[43m \x1b[103m       \x1b[40m     \x1b[43m \x1b[103m       \x1b[40m    \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[17;1H  \x1b[40m       \x1b[43m \x1b[103m  \x1b[40m      \x1b[43m \x1b[103m   \x1b[40m  \x1b[43m \x1b[103m   \x1b[40m   \x1b[43m \x1b[103m  \x1b[40m          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[18;1H  \x1b[40m       \x1b[43m \x1b[103m  \x1b[40m      \x1b[43m \x1b[103m  \x1b[40m    \x1b[43m \x1b[103m  \x1b[40m   \x1b[43m \x1b[103m        \x1b[40m    \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[19;1H  \x1b[40m       \x1b[43m \x1b[103m  \x1b[40m      \x1b[43m \x1b[103m   \x1b[40m  \x1b[43m \x1b[103m   \x1b[40m   \x1b[43m \x1b[103m  \x1b[40m          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[20;1H  \x1b[40m       \x1b[43m \x1b[103m  \x1b[40m       \x1b[43m \x1b[103m       \x1b[40m     \x1b[43m \x1b[103m       \x1b[40m    \x1b[107m  \x1b[40m";

    cout << "\x1b[107m\x1b[21;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[22;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[23;1H                                              \x1b[40m" << endl << endl;
}

void ekran_koncowy()
{
    cout << "\x1b[107m\x1b[1;1H                                              \x1b[40m";
    cout << "\x1b[107m\x1b[2;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[3;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[4;1H  \x1b[40m    \x1b[44m \x1b[104m     \x1b[40m      \x1b[44m \x1b[104m  \x1b[40m   \x1b[44m \x1b[104m  \x1b[40m     \x1b[44m \x1b[104m       \x1b[40m    \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[5;1H  \x1b[40m    \x1b[44m \x1b[104m  \x1b[40m \x1b[44m \x1b[104m  \x1b[40m      \x1b[44m \x1b[104m  \x1b[40m \x1b[44m \x1b[104m  \x1b[40m     \x1b[44m \x1b[104m  \x1b[40m          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[6;1H  \x1b[40m    \x1b[44m \x1b[104m      \x1b[40m       \x1b[44m \x1b[104m    \x1b[40m      \x1b[44m \x1b[104m        \x1b[40m    \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[7;1H  \x1b[40m    \x1b[44m \x1b[104m  \x1b[40m  \x1b[44m \x1b[104m  \x1b[40m       \x1b[44m \x1b[104m  \x1b[40m       \x1b[44m \x1b[104m  \x1b[40m          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[8;1H  \x1b[40m    \x1b[44m \x1b[104m       \x1b[40m       \x1b[44m \x1b[104m  \x1b[40m        \x1b[44m \x1b[104m       \x1b[40m    \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[9;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";

    cout << "\x1b[107m\x1b[10;1H  \x1b[40m    \x1b[43m \x1b[103m     \x1b[40m      \x1b[43m \x1b[103m  \x1b[40m   \x1b[43m \x1b[103m  \x1b[40m     \x1b[43m \x1b[103m       \x1b[40m    \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[11;1H  \x1b[40m    \x1b[43m \x1b[103m  \x1b[40m \x1b[43m \x1b[103m  \x1b[40m      \x1b[43m \x1b[103m  \x1b[40m \x1b[43m \x1b[103m  \x1b[40m     \x1b[43m \x1b[103m  \x1b[40m          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[12;1H  \x1b[40m    \x1b[43m \x1b[103m      \x1b[40m       \x1b[43m \x1b[103m    \x1b[40m      \x1b[43m \x1b[103m        \x1b[40m    \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[13;1H  \x1b[40m    \x1b[43m \x1b[103m  \x1b[40m  \x1b[43m \x1b[103m  \x1b[40m       \x1b[43m \x1b[103m  \x1b[40m       \x1b[43m \x1b[103m  \x1b[40m          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[14;1H  \x1b[40m    \x1b[43m \x1b[103m       \x1b[40m       \x1b[43m \x1b[103m  \x1b[40m        \x1b[43m \x1b[103m       \x1b[40m    \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[15;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[16;1H  \x1b[40m                 \x1b[44m \x1b[104m  \x1b[40m  \x1b[44m \x1b[104m  \x1b[40m                 \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[17;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[18;1H  \x1b[40m              \x1b[44m \x1b[104m  \x1b[40m        \x1b[44m \x1b[104m  \x1b[40m              \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[19;1H  \x1b[40m               \x1b[44m \x1b[104m  \x1b[40m      \x1b[44m \x1b[104m  \x1b[40m               \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[20;1H  \x1b[40m                \x1b[44m \x1b[104m         \x1b[40m                \x1b[107m  \x1b[40m";

    cout << "\x1b[107m\x1b[21;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[22;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[23;1H                                              \x1b[40m" << endl << endl;
}

string nic0()
{
    string x = "\x1b[1;1H              \x1b[107m  \x1b[40m\x1b[2;1H              \x1b[107m  \x1b[40m\x1b[3;1H              \x1b[107m  \x1b[40m\x1b[4;1H              \x1b[107m  \x1b[40m\x1b[5;1H              \x1b[107m  \x1b[40m\x1b[6;1H              \x1b[107m  \x1b[40m\x1b[7;1H              \x1b[107m  \x1b[40m\x1b[8;1H\x1b[107m                \x1b[40m";
    return x;
}

string nic1()
{
    string x = "\x1b[1;17H              \x1b[107m  \x1b[40m\x1b[2;17H              \x1b[107m  \x1b[40m\x1b[3;17H              \x1b[107m  \x1b[40m\x1b[4;17H              \x1b[107m  \x1b[40m\x1b[5;17H              \x1b[107m  \x1b[40m\x1b[6;17H              \x1b[107m  \x1b[40m\x1b[7;17H              \x1b[107m  \x1b[40m\x1b[8;17H\x1b[107m                \x1b[40m";
    return x;
}

string nic2()
{
    string x = "\x1b[1;33H              \x1b[40m\x1b[2;33H              \x1b[40m\x1b[3;33H              \x1b[40m\x1b[4;33H              \x1b[40m\x1b[5;33H              \x1b[40m\x1b[6;33H              \x1b[40m\x1b[7;33H              \x1b[40m\x1b[8;33H\x1b[107m              \x1b[40m";
    return x;
}

string nic3()
{
    string x = "\x1b[9;1H              \x1b[107m  \x1b[40m\x1b[10;1H              \x1b[107m  \x1b[40m\x1b[11;1H              \x1b[107m  \x1b[40m\x1b[12;1H              \x1b[107m  \x1b[40m\x1b[13;1H              \x1b[107m  \x1b[40m\x1b[14;1H              \x1b[107m  \x1b[40m\x1b[15;1H              \x1b[107m  \x1b[40m\x1b[16;1H\x1b[107m                \x1b[40m";
    return x;
}

string nic4()
{
    string x = "\x1b[9;17H              \x1b[107m  \x1b[40m\x1b[10;17H              \x1b[107m  \x1b[40m\x1b[11;17H              \x1b[107m  \x1b[40m\x1b[12;17H              \x1b[107m  \x1b[40m\x1b[13;17H              \x1b[107m  \x1b[40m\x1b[14;17H              \x1b[107m  \x1b[40m\x1b[15;17H              \x1b[107m  \x1b[40m\x1b[16;17H\x1b[107m                \x1b[40m";
    return x;
}

string nic5()
{
    string x = "\x1b[9;33H              \x1b[40m\x1b[10;33H              \x1b[40m\x1b[11;33H              \x1b[40m\x1b[12;33H              \x1b[40m\x1b[13;33H              \x1b[40m\x1b[14;33H              \x1b[40m\x1b[15;33H              \x1b[40m\x1b[16;33H\x1b[107m              \x1b[40m";
    return x;
}

string nic6()
{
    string x = "\x1b[17;1H              \x1b[107m  \x1b[40m\x1b[18;1H              \x1b[107m  \x1b[40m\x1b[19;1H              \x1b[107m  \x1b[40m\x1b[20;1H              \x1b[107m  \x1b[40m\x1b[21;1H              \x1b[107m  \x1b[40m\x1b[22;1H              \x1b[107m  \x1b[40m\x1b[23;1H              \x1b[107m  \x1b[40m";
    return x;
}

string nic7()
{
    string x = "\x1b[17;17H              \x1b[107m  \x1b[40m\x1b[18;17H              \x1b[107m  \x1b[40m\x1b[19;17H              \x1b[107m  \x1b[40m\x1b[20;17H              \x1b[107m  \x1b[40m\x1b[21;17H              \x1b[107m  \x1b[40m\x1b[22;17H              \x1b[107m  \x1b[40m\x1b[23;17H              \x1b[107m  \x1b[40m";
    return x;
}

string nic8()
{
    string x = "\x1b[17;33H              \x1b[40m\x1b[18;33H              \x1b[40m\x1b[19;33H              \x1b[40m\x1b[20;33H              \x1b[40m\x1b[21;33H              \x1b[40m\x1b[22;33H              \x1b[40m\x1b[23;33H              \x1b[40m";
    return x;
}

string kolko0()
{
    string x = "\x1b[1;1H              \x1b[107m  \x1b[40m\x1b[2;1H    \x1b[103m      \x1b[40m    \x1b[107m  \x1b[40m\x1b[3;1H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[4;1H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[5;1H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[6;1H    \x1b[103m      \x1b[40m    \x1b[107m  \x1b[40m\x1b[7;1H              \x1b[107m  \x1b[40m\x1b[8;1H\x1b[107m                \x1b[40m";
    return x;
}

string kolko1()
{
    string x = "\x1b[1;17H              \x1b[107m  \x1b[40m\x1b[2;17H    \x1b[103m      \x1b[40m    \x1b[107m  \x1b[40m\x1b[3;17H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[4;17H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[5;17H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[6;17H    \x1b[103m      \x1b[40m    \x1b[107m  \x1b[40m\x1b[7;17H              \x1b[107m  \x1b[40m\x1b[8;17H\x1b[107m                \x1b[40m";
    return x;
}

string kolko2()
{
    string x = "\x1b[1;33H              \x1b[40m\x1b[2;33H    \x1b[103m      \x1b[40m    \x1b[40m\x1b[3;33H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[40m\x1b[4;33H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[40m\x1b[5;33H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[40m\x1b[6;33H    \x1b[103m      \x1b[40m    \x1b[40m\x1b[7;33H              \x1b[40m\x1b[8;33H\x1b[107m              \x1b[40m";
    return x;
}

string kolko3()
{
    string x = "\x1b[9;1H              \x1b[107m  \x1b[40m\x1b[10;1H    \x1b[103m      \x1b[40m    \x1b[107m  \x1b[40m\x1b[11;1H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[12;1H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[13;1H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[14;1H    \x1b[103m      \x1b[40m    \x1b[107m  \x1b[40m\x1b[15;1H              \x1b[107m  \x1b[40m\x1b[16;1H\x1b[107m                \x1b[40m";
    return x;
}

string kolko4()
{
    string x = "\x1b[9;17H              \x1b[107m  \x1b[40m\x1b[10;17H    \x1b[103m      \x1b[40m    \x1b[107m  \x1b[40m\x1b[11;17H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[12;17H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[13;17H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[14;17H    \x1b[103m      \x1b[40m    \x1b[107m  \x1b[40m\x1b[15;17H              \x1b[107m  \x1b[40m\x1b[16;17H\x1b[107m                \x1b[40m";
    return x;
}

string kolko5()
{
    string x = "\x1b[9;33H              \x1b[40m\x1b[10;33H    \x1b[103m      \x1b[40m    \x1b[40m\x1b[11;33H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[40m\x1b[12;33H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[40m\x1b[13;33H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[40m\x1b[14;33H    \x1b[103m      \x1b[40m    \x1b[40m\x1b[15;33H              \x1b[40m\x1b[16;33H\x1b[107m              \x1b[40m";
    return x;
}

string kolko6()
{
    string x = "\x1b[17;1H              \x1b[107m  \x1b[40m\x1b[18;1H    \x1b[103m      \x1b[40m    \x1b[107m  \x1b[40m\x1b[19;1H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[20;1H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[21;1H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[22;1H    \x1b[103m      \x1b[40m    \x1b[107m  \x1b[40m\x1b[23;1H              \x1b[107m  \x1b[40m";
    return x;
}

string kolko7()
{
    string x = "\x1b[17;17H              \x1b[107m  \x1b[40m\x1b[18;17H    \x1b[103m      \x1b[40m    \x1b[107m  \x1b[40m\x1b[19;17H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[20;17H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[21;17H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[22;17H    \x1b[103m      \x1b[40m    \x1b[107m  \x1b[40m\x1b[23;17H              \x1b[107m  \x1b[40m";
    return x;
}

string kolko8()
{
    string x = "\x1b[17;33H              \x1b[40m\x1b[18;33H    \x1b[103m      \x1b[40m    \x1b[40m\x1b[19;33H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[40m\x1b[20;33H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[40m\x1b[21;33H  \x1b[103m  \x1b[40m      \x1b[103m  \x1b[40m  \x1b[40m\x1b[22;33H    \x1b[103m      \x1b[40m    \x1b[40m\x1b[23;33H              \x1b[40m";
    return x;
}

string krzyzyk0()
{
    string x = "\x1b[1;1H              \x1b[107m  \x1b[40m\x1b[2;1H  \x1b[104m  \x1b[40m      \x1b[104m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[3;1H    \x1b[104m  \x1b[40m  \x1b[104m  \x1b[40m    \x1b[107m  \x1b[40m\x1b[4;1H      \x1b[104m  \x1b[40m      \x1b[107m  \x1b[40m\x1b[5;1H    \x1b[104m  \x1b[40m  \x1b[104m  \x1b[40m    \x1b[107m  \x1b[40m\x1b[6;1H  \x1b[104m  \x1b[40m      \x1b[104m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[7;1H              \x1b[107m  \x1b[40m\x1b[8;1H\x1b[107m                \x1b[40m";
    return x;
}

string krzyzyk1()
{
    string x = "\x1b[1;17H              \x1b[107m  \x1b[40m\x1b[2;17H  \x1b[104m  \x1b[40m      \x1b[104m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[3;17H    \x1b[104m  \x1b[40m  \x1b[104m  \x1b[40m    \x1b[107m  \x1b[40m\x1b[4;17H      \x1b[104m  \x1b[40m      \x1b[107m  \x1b[40m\x1b[5;17H    \x1b[104m  \x1b[40m  \x1b[104m  \x1b[40m    \x1b[107m  \x1b[40m\x1b[6;17H  \x1b[104m  \x1b[40m      \x1b[104m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[7;17H              \x1b[107m  \x1b[40m\x1b[8;17H\x1b[107m                \x1b[40m";
    return x;
}

string krzyzyk2()
{
    string x = "\x1b[1;33H              \x1b[40m\x1b[2;33H  \x1b[104m  \x1b[40m      \x1b[104m  \x1b[40m  \x1b[40m\x1b[3;33H    \x1b[104m  \x1b[40m  \x1b[104m  \x1b[40m    \x1b[40m\x1b[4;33H      \x1b[104m  \x1b[40m      \x1b[40m\x1b[5;33H    \x1b[104m  \x1b[40m  \x1b[104m  \x1b[40m    \x1b[40m\x1b[6;33H  \x1b[104m  \x1b[40m      \x1b[104m  \x1b[40m  \x1b[40m\x1b[7;33H              \x1b[40m\x1b[8;33H\x1b[107m              \x1b[40m";
    return x;
}

string krzyzyk3()
{
    string x = "\x1b[9;1H              \x1b[107m  \x1b[40m\x1b[10;1H  \x1b[104m  \x1b[40m      \x1b[104m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[11;1H    \x1b[104m  \x1b[40m  \x1b[104m  \x1b[40m    \x1b[107m  \x1b[40m\x1b[12;1H      \x1b[104m  \x1b[40m      \x1b[107m  \x1b[40m\x1b[13;1H    \x1b[104m  \x1b[40m  \x1b[104m  \x1b[40m    \x1b[107m  \x1b[40m\x1b[14;1H  \x1b[104m  \x1b[40m      \x1b[104m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[15;1H              \x1b[107m  \x1b[40m\x1b[16;1H\x1b[107m                \x1b[40m";
    return x;
}

string krzyzyk4()
{
    string x = "\x1b[9;17H              \x1b[107m  \x1b[40m\x1b[10;17H  \x1b[104m  \x1b[40m      \x1b[104m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[11;17H    \x1b[104m  \x1b[40m  \x1b[104m  \x1b[40m    \x1b[107m  \x1b[40m\x1b[12;17H      \x1b[104m  \x1b[40m      \x1b[107m  \x1b[40m\x1b[13;17H    \x1b[104m  \x1b[40m  \x1b[104m  \x1b[40m    \x1b[107m  \x1b[40m\x1b[14;17H  \x1b[104m  \x1b[40m      \x1b[104m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[15;17H              \x1b[107m  \x1b[40m\x1b[16;17H\x1b[107m                \x1b[40m";
    return x;
}

string krzyzyk5()
{
    string x = "\x1b[9;33H              \x1b[40m\x1b[10;33H  \x1b[104m  \x1b[40m      \x1b[104m  \x1b[40m  \x1b[40m\x1b[11;33H    \x1b[104m  \x1b[40m  \x1b[104m  \x1b[40m    \x1b[40m\x1b[12;33H      \x1b[104m  \x1b[40m      \x1b[40m\x1b[13;33H    \x1b[104m  \x1b[40m  \x1b[104m  \x1b[40m    \x1b[40m\x1b[14;33H  \x1b[104m  \x1b[40m      \x1b[104m  \x1b[40m  \x1b[40m\x1b[15;33H              \x1b[40m\x1b[16;33H\x1b[107m              \x1b[40m";
    return x;
}

string krzyzyk6()
{
    string x = "\x1b[17;1H              \x1b[107m  \x1b[40m\x1b[18;1H  \x1b[104m  \x1b[40m      \x1b[104m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[19;1H    \x1b[104m  \x1b[40m  \x1b[104m  \x1b[40m    \x1b[107m  \x1b[40m\x1b[20;1H      \x1b[104m  \x1b[40m      \x1b[107m  \x1b[40m\x1b[21;1H    \x1b[104m  \x1b[40m  \x1b[104m  \x1b[40m    \x1b[107m  \x1b[40m\x1b[22;1H  \x1b[104m  \x1b[40m      \x1b[104m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[23;1H              \x1b[107m  \x1b[40m";
    return x;
}

string krzyzyk7()
{
    string x = "\x1b[17;17H              \x1b[107m  \x1b[40m\x1b[18;17H  \x1b[104m  \x1b[40m      \x1b[104m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[19;17H    \x1b[104m  \x1b[40m  \x1b[104m  \x1b[40m    \x1b[107m  \x1b[40m\x1b[20;17H      \x1b[104m  \x1b[40m      \x1b[107m  \x1b[40m\x1b[21;17H    \x1b[104m  \x1b[40m  \x1b[104m  \x1b[40m    \x1b[107m  \x1b[40m\x1b[22;17H  \x1b[104m  \x1b[40m      \x1b[104m  \x1b[40m  \x1b[107m  \x1b[40m\x1b[23;17H              \x1b[107m  \x1b[40m";
    return x;
}

string krzyzyk8()
{
    string x = "\x1b[17;33H              \x1b[40m\x1b[18;33H  \x1b[104m  \x1b[40m      \x1b[104m  \x1b[40m  \x1b[40m\x1b[19;33H    \x1b[104m  \x1b[40m  \x1b[104m  \x1b[40m    \x1b[40m\x1b[20;33H      \x1b[104m  \x1b[40m      \x1b[40m\x1b[21;33H    \x1b[104m  \x1b[40m  \x1b[104m  \x1b[40m    \x1b[40m\x1b[22;33H  \x1b[104m  \x1b[40m      \x1b[104m  \x1b[40m  \x1b[40m\x1b[23;33H              \x1b[40m";
    return x;
}

int wybor()
{
    int a;
    cout << "Czy chcesz grac kolkiem czy krzyzykiem? Wpisz 1 - kolko, 2 - krzyzyk" << endl;
    cin >> a;
    return a;
}

int ruch_gracza_kolko(string tab[], bool tab2[])
{
    cout << "Podaj swoja pozycje - od 1 do 9." << endl;
    int a;
    cin >> a;

    switch(a)
    {
        case 1:
            tab[0] = kolko0();
            break;
        case 2:
            tab[1] = kolko1();
            break;
        case 3:
            tab[2] = kolko2();
            break;
        case 4:
            tab[3] = kolko3();
            break;
        case 5:
            tab[4] = kolko4();
            break;
        case 6:
            tab[5] = kolko5();
            break;
        case 7:
            tab[6] = kolko6();
            break;
        case 8:
            tab[7] = kolko7();
            break;
        case 9:
            tab[8] = kolko8();
    }
    tab2[a-1] = 1;

}

int ruch_gracza_krzyzyk(string tab[], bool tab2[])
{
    cout << "Podaj swoja pozycje - od 1 do 9." << endl;
    int a;
    cin >> a;

    switch(a)
    {
        case 1:
            tab[0] = krzyzyk0();
            break;
        case 2:
            tab[1] = krzyzyk1();
            break;
        case 3:
            tab[2] = krzyzyk2();
            break;
        case 4:
            tab[3] = krzyzyk3();
            break;
        case 5:
            tab[4] = krzyzyk4();
            break;
        case 6:
            tab[5] = krzyzyk5();
            break;
        case 7:
            tab[6] = krzyzyk6();
            break;
        case 8:
            tab[7] = krzyzyk7();
            break;
        case 9:
            tab[8] = krzyzyk8();
    }
    tab2[a-1] = 1;
}

int sprawdzenie(string tab[])
{
    if ((tab[0]==kolko0()) && (tab[1]==kolko1()) && (tab[2]==kolko2()))
    {
        return 1;
    }
    if ((tab[3]==kolko3()) && (tab[4]==kolko4()) && (tab[5]==kolko5()))
    {
        return 1;
    }
    if ((tab[6]==kolko6()) && (tab[7]==kolko7()) && (tab[8]==kolko8()))
    {
        return 1;
    }
    if ((tab[0]==kolko0()) && (tab[3]==kolko3()) && (tab[6]==kolko6()))
    {
        return 1;
    }
    if ((tab[1]==kolko1()) && (tab[4]==kolko4()) && (tab[7]==kolko7()))
    {
        return 1;
    }
    if ((tab[2]==kolko2()) && (tab[5]==kolko5()) && (tab[8]==kolko8()))
    {
        return 1;
    }
    if ((tab[0]==kolko0()) && (tab[4]==kolko4()) && (tab[8]==kolko8()))
    {
        return 1;
    }
    if ((tab[2]==kolko2()) && (tab[4]==kolko4()) && (tab[6]==kolko6()))
    {
        return 1;
    }

    if ((tab[0]==krzyzyk0()) && (tab[1]==krzyzyk1()) && (tab[2]==krzyzyk2()))
    {
        return 2;
    }
    if ((tab[3]==krzyzyk3()) && (tab[4]==krzyzyk4()) && (tab[5]==krzyzyk5()))
    {
        return 2;
    }
    if ((tab[6]==krzyzyk6()) && (tab[7]==krzyzyk7()) && (tab[8]==krzyzyk8()))
    {
        return 2;
    }
    if ((tab[0]==krzyzyk0()) && (tab[3]==krzyzyk3()) && (tab[6]==krzyzyk6()))
    {
        return 2;
    }
    if ((tab[1]==krzyzyk1()) && (tab[4]==krzyzyk4()) && (tab[7]==krzyzyk7()))
    {
        return 2;
    }
    if ((tab[2]==krzyzyk2()) && (tab[5]==krzyzyk5()) && (tab[8]==krzyzyk8()))
    {
        return 2;
    }
    if ((tab[0]==krzyzyk0()) && (tab[4]==krzyzyk4()) && (tab[8]==krzyzyk8()))
    {
        return 2;
    }
    if ((tab[2]==krzyzyk2()) && (tab[4]==krzyzyk4()) && (tab[6]==krzyzyk6()))
    {
        return 2;
    }
    else
    {
        return 0;
    }

}

void stan_gry(string tab[])
{
    cout << "\x1b[2J" << tab[0] << tab[1] << tab[2] << tab[3] << tab[4] << tab[5] << tab[6] << tab[7] << tab[8] << endl << endl;
}

int poczatek()
{
    cout << "By zaczac nowa gre wpisz 1, by wyjsc wpisz 0." << endl;
    int poczatek;
    cin >> poczatek;
    return poczatek;
}

bool sprawdza_tab2(bool tab2[])
{
    int wynik = 0;
    for (int a=0; a<9; a++)
    {
        if (tab2[a] == 1)
        {
            wynik+=1;
        }
    }
    if (wynik == 9)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void ruch_komputera_krzyzyk(string tab[], bool tab2[])
{
    srand(time(NULL));
    int x;
    if (sprawdza_tab2(tab2) == 0)
    {
        do
        {
            x = rand()%9;
        }
        while (tab2[x] != 0);

        tab2[x] = 1;

        switch(x)
        {
           case 0:
                tab[0] = krzyzyk0();
                break;
            case 1:
                tab[1] = krzyzyk1();
                break;
            case 2:
                tab[2] = krzyzyk2();
                break;
            case 3:
                tab[3] = krzyzyk3();
                break;
            case 4:
                tab[4] = krzyzyk4();
                break;
            case 5:
                tab[5] = krzyzyk5();
                break;
            case 6:
                tab[6] = krzyzyk6();
                break;
            case 7:
                tab[7] = krzyzyk7();
                break;
            case 8:
                tab[8] = krzyzyk8();
        }
    }
}

void ruch_komputera_kolko(string tab[], bool tab2[])
{
    srand(time(NULL));
    int x;
    if (sprawdza_tab2(tab2) == 0)
    {
        do
        {
            x = rand()%9;
        }
        while (tab2[x] != 0);

        tab2[x] = 1;

        switch(x)
        {
           case 0:
                tab[0] = kolko0();
                break;
            case 1:
                tab[1] = kolko1();
                break;
            case 2:
                tab[2] = kolko2();
                break;
            case 3:
                tab[3] = kolko3();
                break;
            case 4:
                tab[4] = kolko4();
                break;
            case 5:
                tab[5] = kolko5();
                break;
            case 6:
                tab[6] = kolko6();
                break;
            case 7:
                tab[7] = kolko7();
                break;
            case 8:
                tab[8] = kolko8();
        }
    }
}

bool remis(string tab[], bool tab2[])
{
    if ((sprawdza_tab2(tab2)==1) && (sprawdzenie(tab)==0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void wygrana()
{
    cout << "\x1b[107m\x1b[1;1H                                              \x1b[40m";
    cout << "\x1b[107m\x1b[2;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[3;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[4;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";

    cout << "\x1b[107m\x1b[5;1H  \x1b[40m  \x1b[42m \x1b[102m  \x1b[40m     \x1b[42m  \x1b[102m  \x1b[40m   \x1b[42m  \x1b[102m      \x1b[40m     \x1b[42m \x1b[102m  \x1b[40m    \x1b[42m \x1b[102m  \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[6;1H  \x1b[40m  \x1b[42m \x1b[102m    \x1b[40m  \x1b[42m \x1b[102m    \x1b[40m  \x1b[42m \x1b[102m    \x1b[40m \x1b[42m \x1b[102m    \x1b[40m   \x1b[42m \x1b[102m  \x1b[40m    \x1b[42m \x1b[102m  \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[7;1H  \x1b[40m   \x1b[42m  \x1b[102m   \x1b[42m \x1b[102m   \x1b[40m    \x1b[42m \x1b[102m  \x1b[40m    \x1b[42m  \x1b[102m  \x1b[40m   \x1b[42m \x1b[102m  \x1b[40m    \x1b[42m \x1b[102m  \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[8;1H  \x1b[40m     \x1b[42m  \x1b[102m   \x1b[40m      \x1b[42m \x1b[102m  \x1b[40m    \x1b[42m  \x1b[102m  \x1b[40m   \x1b[42m \x1b[102m  \x1b[40m    \x1b[42m \x1b[102m  \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[9;1H  \x1b[40m     \x1b[42m  \x1b[102m   \x1b[40m      \x1b[42m \x1b[102m    \x1b[40m \x1b[42m \x1b[102m    \x1b[40m   \x1b[42m \x1b[102m   \x1b[40m  \x1b[42m \x1b[102m   \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[10;1H  \x1b[40m     \x1b[42m  \x1b[102m   \x1b[40m       \x1b[42m  \x1b[102m      \x1b[40m      \x1b[42m \x1b[102m       \x1b[40m   \x1b[107m  \x1b[40m";

    cout << "\x1b[107m\x1b[11;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[12;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";

    cout << "\x1b[107m\x1b[13;1H  \x1b[40m  \x1b[42m \x1b[102m   \x1b[40m          \x1b[42m \x1b[102m   \x1b[40m  \x1b[42m \x1b[102m   \x1b[40m  \x1b[42m \x1b[102m   \x1b[40m     \x1b[42m \x1b[102m  \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[14;1H  \x1b[40m  \x1b[42m \x1b[102m    \x1b[40m        \x1b[42m \x1b[102m    \x1b[40m  \x1b[42m \x1b[102m   \x1b[40m  \x1b[42m \x1b[102m    \x1b[40m    \x1b[42m \x1b[102m  \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[15;1H  \x1b[40m   \x1b[42m  \x1b[102m  \x1b[40m  \x1b[42m  \x1b[102m \x1b[40m   \x1b[42m \x1b[102m  \x1b[40m    \x1b[42m \x1b[102m   \x1b[40m  \x1b[42m \x1b[102m  \x1b[42m \x1b[102m  \x1b[40m   \x1b[42m \x1b[102m  \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[16;1H  \x1b[40m   \x1b[42m  \x1b[102m   \x1b[42m \x1b[102m     \x1b[42m \x1b[102m   \x1b[40m    \x1b[42m \x1b[102m   \x1b[40m  \x1b[42m \x1b[102m  \x1b[40m \x1b[42m \x1b[102m  \x1b[40m  \x1b[42m \x1b[102m  \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[17;1H  \x1b[40m     \x1b[42m \x1b[102m     \x1b[42m \x1b[102m     \x1b[40m     \x1b[42m \x1b[102m   \x1b[40m  \x1b[42m \x1b[102m  \x1b[40m  \x1b[42m \x1b[102m  \x1b[40m \x1b[42m \x1b[102m  \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[18;1H  \x1b[40m      \x1b[42m \x1b[102m   \x1b[40m  \x1b[42m \x1b[102m   \x1b[40m      \x1b[42m \x1b[102m   \x1b[40m  \x1b[42m \x1b[102m  \x1b[40m   \x1b[42m \x1b[102m  \x1b[42m \x1b[102m  \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[19;1H  \x1b[40m       \x1b[42m \x1b[102m \x1b[40m    \x1b[42m \x1b[102m \x1b[40m       \x1b[42m \x1b[102m   \x1b[40m  \x1b[42m \x1b[102m  \x1b[40m    \x1b[42m \x1b[102m    \x1b[40m  \x1b[107m  \x1b[40m";

    cout << "\x1b[107m\x1b[20;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[21;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[22;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[23;1H                                              \x1b[40m" << endl << endl;
}

void przegrana()
{
    cout << "\x1b[107m\x1b[1;1H                                              \x1b[40m";
    cout << "\x1b[107m\x1b[2;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[3;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[4;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";

    cout << "\x1b[107m\x1b[5;1H  \x1b[40m  \x1b[41m \x1b[101m  \x1b[40m     \x1b[41m  \x1b[101m  \x1b[40m   \x1b[41m  \x1b[101m      \x1b[40m     \x1b[41m \x1b[101m  \x1b[40m    \x1b[41m \x1b[101m  \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[6;1H  \x1b[40m  \x1b[41m \x1b[101m    \x1b[40m  \x1b[41m \x1b[101m    \x1b[40m  \x1b[41m \x1b[101m    \x1b[40m \x1b[41m \x1b[101m    \x1b[40m   \x1b[41m \x1b[101m  \x1b[40m    \x1b[41m \x1b[101m  \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[7;1H  \x1b[40m   \x1b[41m  \x1b[101m   \x1b[41m \x1b[101m   \x1b[40m    \x1b[41m \x1b[101m  \x1b[40m    \x1b[41m  \x1b[101m  \x1b[40m   \x1b[41m \x1b[101m  \x1b[40m    \x1b[41m \x1b[101m  \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[8;1H  \x1b[40m     \x1b[41m  \x1b[101m   \x1b[40m      \x1b[41m \x1b[101m  \x1b[40m    \x1b[41m  \x1b[101m  \x1b[40m   \x1b[41m \x1b[101m  \x1b[40m    \x1b[41m \x1b[101m  \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[9;1H  \x1b[40m     \x1b[41m  \x1b[101m   \x1b[40m      \x1b[41m \x1b[101m    \x1b[40m \x1b[41m \x1b[101m    \x1b[40m   \x1b[41m \x1b[101m   \x1b[40m  \x1b[41m \x1b[101m   \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[10;1H  \x1b[40m     \x1b[41m  \x1b[101m   \x1b[40m       \x1b[41m  \x1b[101m      \x1b[40m      \x1b[41m \x1b[101m       \x1b[40m   \x1b[107m  \x1b[40m";

    cout << "\x1b[107m\x1b[11;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[12;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";

    cout << "\x1b[107m\x1b[13;1H  \x1b[40m  \x1b[41m \x1b[101m   \x1b[40m      \x1b[41m  \x1b[101m      \x1b[40m     \x1b[41m \x1b[101m    \x1b[40m   \x1b[41m \x1b[101m      \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[14;1H  \x1b[40m  \x1b[41m \x1b[101m   \x1b[40m     \x1b[41m \x1b[101m    \x1b[40m \x1b[41m \x1b[101m    \x1b[40m  \x1b[41m \x1b[101m  \x1b[40m \x1b[41m \x1b[101m  \x1b[40m  \x1b[41m \x1b[101m  \x1b[40m      \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[15;1H  \x1b[40m  \x1b[41m \x1b[101m   \x1b[40m     \x1b[41m \x1b[101m  \x1b[40m    \x1b[41m  \x1b[101m  \x1b[40m  \x1b[41m \x1b[101m  \x1b[40m      \x1b[41m \x1b[101m  \x1b[40m      \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[16;1H  \x1b[40m  \x1b[41m \x1b[101m   \x1b[40m     \x1b[41m \x1b[101m  \x1b[40m    \x1b[41m  \x1b[101m  \x1b[40m   \x1b[41m \x1b[101m     \x1b[40m  \x1b[41m \x1b[101m      \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[17;1H  \x1b[40m  \x1b[41m \x1b[101m   \x1b[40m     \x1b[41m \x1b[101m  \x1b[40m    \x1b[41m  \x1b[101m  \x1b[40m       \x1b[41m \x1b[101m  \x1b[40m \x1b[41m \x1b[101m  \x1b[40m      \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[18;1H  \x1b[40m  \x1b[41m \x1b[101m   \x1b[40m     \x1b[41m \x1b[101m    \x1b[40m \x1b[41m \x1b[101m    \x1b[40m  \x1b[41m \x1b[101m  \x1b[40m \x1b[41m \x1b[101m  \x1b[40m  \x1b[41m \x1b[101m  \x1b[40m      \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[19;1H  \x1b[40m  \x1b[41m \x1b[101m      \x1b[40m   \x1b[41m  \x1b[101m      \x1b[40m     \x1b[41m \x1b[101m    \x1b[40m   \x1b[41m \x1b[101m      \x1b[40m  \x1b[107m  \x1b[40m";

    cout << "\x1b[107m\x1b[20;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[21;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[22;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[23;1H                                              \x1b[40m" << endl << endl;
}

void rysuj_remis()
{
    cout << "\x1b[107m\x1b[1;1H                                              \x1b[40m";
    cout << "\x1b[107m\x1b[2;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[3;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[4;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[5;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[6;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[7;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[8;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[9;1H  \x1b[40m  \x1b[46m \x1b[106m     \x1b[40m   \x1b[46m \x1b[106m     \x1b[40m     \x1b[46m \x1b[106m   \x1b[40m    \x1b[46m \x1b[106m  \x1b[40m    \x1b[46m \x1b[106m  \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[10;1H  \x1b[40m  \x1b[46m \x1b[106m  \x1b[46m \x1b[106m   \x1b[40m  \x1b[46m \x1b[106m  \x1b[40m \x1b[46m \x1b[106m  \x1b[40m   \x1b[46m \x1b[106m  \x1b[46m \x1b[106m  \x1b[40m   \x1b[46m \x1b[106m  \x1b[40m    \x1b[46m \x1b[106m  \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[11;1H  \x1b[40m  \x1b[46m \x1b[106m  \x1b[40m \x1b[46m \x1b[106m  \x1b[40m  \x1b[46m \x1b[106m     \x1b[40m   \x1b[46m \x1b[106m  \x1b[40m  \x1b[46m \x1b[106m  \x1b[40m  \x1b[46m \x1b[106m  \x1b[40m \x1b[46m \x1b[106m \x1b[40m \x1b[46m \x1b[106m  \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[12;1H  \x1b[40m  \x1b[46m \x1b[106m  \x1b[40m \x1b[46m \x1b[106m  \x1b[40m  \x1b[46m \x1b[106m \x1b[46m \x1b[106m \x1b[40m     \x1b[46m \x1b[106m       \x1b[40m  \x1b[46m \x1b[106m  \x1b[46m \x1b[106m   \x1b[46m \x1b[106m  \x1b[40m  \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[13;1H  \x1b[40m  \x1b[46m \x1b[106m  \x1b[46m \x1b[106m   \x1b[40m  \x1b[46m \x1b[106m \x1b[46m \x1b[106m  \x1b[40m    \x1b[46m \x1b[106m  \x1b[40m  \x1b[46m \x1b[106m  \x1b[40m   \x1b[46m \x1b[106m   \x1b[46m \x1b[106m   \x1b[40m   \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[14;1H  \x1b[40m  \x1b[46m \x1b[106m     \x1b[40m   \x1b[46m \x1b[106m \x1b[40m \x1b[46m \x1b[106m   \x1b[40m  \x1b[46m \x1b[106m  \x1b[40m  \x1b[46m \x1b[106m  \x1b[40m    \x1b[46m \x1b[106m \x1b[40m  \x1b[46m \x1b[106m \x1b[40m    \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[15;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[16;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[17;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[18;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[19;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[20;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[21;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[22;1H  \x1b[40m                                          \x1b[107m  \x1b[40m";
    cout << "\x1b[107m\x1b[23;1H                                              \x1b[40m" << endl << endl;
}


int main()
{
    ekran_powitalny();
    int a = poczatek();
    do
    {
        string tab[9] = {nic0(), nic1(), nic2(), nic3(), nic4(), nic5(), nic6(), nic7(), nic8()};
        bool tab2[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
        if (a == 1)
        {
            stan_gry(tab);
            int x = wybor();
            if (x==1)
            {
                cout << "Wybrales kolko." << endl;
                int z;
                do
                {
                    ruch_gracza_kolko(tab, tab2);
                    ruch_komputera_krzyzyk(tab, tab2);
                    stan_gry(tab);
                    z=sprawdzenie(tab);
                    if (remis(tab, tab2)==1)
                    {
                        break;
                    }
                }
                while (z==0);

                if (z==1)
                {
                    wygrana();
                }
                if (z==2)
                {
                    przegrana();
                }
                if (remis(tab, tab2) == 1)
                {
                    rysuj_remis();
                }

            }

            else
            {
                cout << "Wybrales krzyzyk." << endl;
                int z;
                do
                {
                    ruch_gracza_krzyzyk(tab, tab2);
                    ruch_komputera_kolko(tab, tab2);
                    stan_gry(tab);
                    z=sprawdzenie(tab);
                    if (remis(tab, tab2)==1)
                    {
                        break;
                    }
                }
                while (z==0);

                if (z==1)
                {
                    przegrana();
                }
                if (z==2)
                {
                    wygrana();
                }
                if (remis(tab, tab2) == 1)
                {
                    rysuj_remis();
                }
            }
        }

        else
        {
            return 0;
        }
    }
    while (poczatek() == 1);
    ekran_koncowy();
    return 0;
}
