#include <iostream>
using namespace std;

bool dior(int);

int main()
{
    int a, b, c;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    if (dior(a))
    {
       cout << a << "  soni juft" << endl;
    }
    else
    {
        cout << a << "  soni toq" << endl;
    }

    if (dior(b))
    {
       cout << b << "  soni juft" << endl;
    }
    else
    {
        cout << b << "  soni toq" << endl;
    }
    
    if (dior(c))
    {
       cout << c << "  soni juft" << endl;
    }
    else
    {
        cout << c << "  soni toq" << endl;
    }

    return 0;
}

bool dior(int k)
{
    return (k % 2 == 0);
}