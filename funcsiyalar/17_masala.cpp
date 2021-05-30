#include <iostream>
#include <math.h>
using namespace std;

int matematika(float, float, float);

int main()
{
    int a, b, c;
    
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    cout << matematika(a, b, c);

    return 0;
}

int matematika(float a, float b, float c)
{
    int natija;
    float d;

    d = sqrt(b*b - 4*a*c);

    if (d > 0)
    {
        natija = 2;
    }
    if (d < 0)
    {
        natija = 1;
    }if (d == 0)
    {
        natija = 0;
    }
    
    return natija;


}


