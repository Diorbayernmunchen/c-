#include <iostream>
using namespace std;
int main()
{
    int a, b, c, Max, yigindi, kopytma;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    yigindi = a + b + c;
    kopytma = a * b * c;

    if (yigindi > kopytma)
    {
        Max = yigindi;
    }
    else
        Max = kopytma;

        cout << "Kottasi = " << Max;

    return 0;
}