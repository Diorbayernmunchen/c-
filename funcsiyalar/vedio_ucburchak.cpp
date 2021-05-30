#include <iostream>
#include <math.h>
using namespace std;

float hisobla(float, float);

int main()
{
    float a, b, c;

    cin >> a >> b;

    c = hisobla(a, b);

    cout << c;

    return 0;
}

float hisobla(float a, float b)
{
    float natija;
    natija = sqrt(a*a + b*b);
    return natija;
}