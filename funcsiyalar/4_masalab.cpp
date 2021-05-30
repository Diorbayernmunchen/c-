#include <iostream>
using namespace std;

void Triangle(float, float *, float *);

int main()
{
    float a, S, P;

    cout << "a = "; cin >> a;
    
    Triangle(a, &S, &P);

    cout << "yuzasi = " << S << endl;
    cout << "premetri = " << P << endl;

    return 0;
}

void Triangle(float a, float *S, float *P)
{
    *S = a*a;
    *P = 3*a;
}