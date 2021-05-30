#include <iostream>
using namespace std;

float yuza(float, float);

int main()
{
    float R1, R2;

    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;

    cout << "yuza = " << yuza(R1, R2) << endl;

    return 0;
}

float yuza(float a, float b)
{
    float S;
    float const Pi = 3.1415;

    S = Pi * (b*b - a*a);
    return S;
}