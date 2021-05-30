#include <iostream>
using namespace std;

void Swap(int *n, int *m);

int main()
{
    int a, b, c, d;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;

    Swap(&a, &b);
    cout << "a = " << a << "\t" << "b = " << b << endl;

    Swap(&c, &d);
    cout << "c = " << c << "\t" << "d = " << d << endl;

    return 0;
}

void Swap(int *n, int *m)
{
    int f;

    f = *n;
    *n = *m;
    *m = f;
}