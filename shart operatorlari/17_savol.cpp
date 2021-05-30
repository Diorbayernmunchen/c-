#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    if ((a <= b) && (b <= c), (a >= b) && (b >= c))
    {
        a*=2;
        b*=2;
        c*=2;
    }
    else
    {
        a *= -1;
        b *= -1;
        c *= -1;
    }
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}