#include <iostream>
using namespace std;

void dior(int *, int *, int *);

int main()
{
    int a, b, c;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

cout << a << "\t" << b << "\t" << c << endl;
    dior(&a, &b, &c);
cout << a << "\t" << b << "\t" << c << endl;

    return 0;
}

void dior(int *a, int *b, int *c)
{
    int k;

    k = *a;
    *a = *c;
    *c = *b;
    *b = k;
}

