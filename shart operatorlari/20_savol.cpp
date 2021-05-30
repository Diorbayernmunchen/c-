#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    cout << a << " ga yaqin son = ";

    if (b > c)
    {
        cout << b << endl;
        cout << labs(a-b) << endl;
    }
    else
    {
        cout << c << endl;
        cout << labs(a-c) << endl;
    }

    return 0;
}