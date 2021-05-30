#include <iostream>
using namespace std;

float yuza(float);

int main()
{
    float R;

    cout << "R = "; cin >> R;

    cout << "yuza = " << yuza(R) << endl;

    return 0;
}

float yuza(float R)
{
    float S;
    float const Pi = 3.1415;
    S = Pi * R * R;
    return S;
}