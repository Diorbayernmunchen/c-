#include <iostream>
using namespace std;

float dior(float, float);

int main()
{
    float x, y;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    cout << dior(x, y) << "  chorak";

    return 0;
}

float dior(float x, float y)
{
    int natija;

    if ((x > 0) && (y > 0))
    {
        natija = 1;
    }
    
    if ((x < 0) && (y > 0))
    {
        natija = 2;
    }
    
    if ((x < 0) && (y < 0))
    {
        natija = 3;
    }
    
    if ((x > 0) && (y < 0))
    {
        natija = 4;
    }

    return natija;
}