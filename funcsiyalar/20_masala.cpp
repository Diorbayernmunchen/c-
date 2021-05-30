#include <iostream>
#include <math.h>
using namespace std;

float Primetr(float, float);

int main()
{
    float a, b;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    
    cout << "Primetr = " << Primetr(a, b) << endl;

    return 0;
}

float Primetr(float a, float b)
{
    float P;

    P = sqrt(a*a + b*b) + a + b;
    return P; 
}