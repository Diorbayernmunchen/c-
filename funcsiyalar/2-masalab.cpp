#include <iostream>
using namespace std;

void PowerA234(float, float *, float *, float *);

int main()
{
    float a, a2, a3, a4, b, b2, b3, b4, c, c2, c3, c4;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    PowerA234(a, &a2, &a3, &a4);
    cout << "a = " << b << endl;
    cout << "a ning darajalari:" << endl;
    cout << a2 << "\t" << a3 << "\t" << a4 << endl;

 PowerA234(b, &b2, &b3, &b4);
    cout << "b = " << b << endl;
    cout << "b ning darajalari:" << endl;
    cout << b2 << "\t" << b3 << "\t" << b4 << endl;

 PowerA234(c, &c2, &c3, &c4);
    cout << "c = " << c << endl;
    cout << "c ning darajalari:" << endl;
    cout << c2 << "\t" << c3 << "\t" << c4 << endl;

    return 0;
}

void PowerA234(float k, float *k2, float *k3, float *k4)
{
    *k2 = k * k;
    *k3 = *k2 * k;
    *k4 = *k3 * k;
}