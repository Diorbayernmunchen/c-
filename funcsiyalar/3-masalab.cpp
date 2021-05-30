#include <iostream>
#include <math.h>
using namespace std;

void MEAN(float x, float y, float *arif, float *geom);


int main()
{
    float a, b, c, d, q, p;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;

    MEAN(a, b, &p, &q);

    cout << "a va b ning o'rta arifmetigi = " << p << endl;
    cout << "a va b ning o'rta geometrigi = "  << q << endl;


    MEAN(a, c, &p, &q);

    cout << "a va c ning o'rta arifmetigi = " << p << endl;
    cout << "a va c ning o'rta geometrigi = "<< q << endl;
    
    MEAN(a, d, &p, &q);

    cout << "a va d ning o'rta arifmetigi = " << p << endl;
    cout << "a va d ning o'rta geometrigi = "<< q << endl;

    return 0;
}

void MEAN(float x, float y, float *arif, float *geom)
{
    *arif = (x+y)/2;
    *geom = sqrt(x*y);
}
