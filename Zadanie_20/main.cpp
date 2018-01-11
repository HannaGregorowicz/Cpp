#include <iostream>

using namespace std;

float readHeight()
{
    float wzrost;
    cout << "Podaj swoj wzrost w centymetrach" << endl;
    cin >> wzrost;
    return wzrost/100;
}

int readMass()
{
    int waga;
    cout << "Podaj swoja wage w kilogramach" << endl;
    cin >> waga;
    return waga;
}

float BMI(float a, int b)
{
    float bmi=(b/(a*a));
    return bmi;
}

void BMIprint(float x)
{
    cout << "Twoje bmi to " << x << endl;
}

int main()
{
    BMIprint(BMI(readHeight(), readMass()));
}
