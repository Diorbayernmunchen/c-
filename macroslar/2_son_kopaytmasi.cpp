#include <iostream>
using namespace std;

#define dior(a, b) (a) * (b)

int main()
{
    int a, b, c;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    c = dior(a, b);
    cout << c;
    return 0;
}