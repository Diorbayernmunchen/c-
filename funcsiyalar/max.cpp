#include <iostream>
#include <stdlib.h>
using namespace std;

int max(int, int);

int main()
{
    int a, b, c, d;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> b;
    cout << "d = "; cin >> d;

    cout << max(max(a, b), max(c, d)) << endl;

    return 0;
}

int max(int a, int b)
{
    int natija;

    natija = (a>b) ? a : b;
    return natija;
}