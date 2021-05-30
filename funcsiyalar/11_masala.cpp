#include <iostream>
using namespace std;

void dior(int *m, int *n);

int main()
{
    int a, b, c, d;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;

    dior(&a, &b);
    dior(&c, &d);
    dior(&a, &c);
    dior(&b, &d);

    cout << "min = " << a << endl;
    cout << "max = " << d << endl;

    return 0;
}

void dior(int *m, int *n)
{
    if (*n < *m)
    {
        int k;
        k = *m;
        *m = *n;
        *n = k;
    }
}
