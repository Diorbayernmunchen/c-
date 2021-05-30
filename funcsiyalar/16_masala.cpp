#include <iostream>
using namespace std;

int ishora(float );

int main()
{
    int a, b;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    cout << ishora(a) + ishora(b);

    return 0;
}

int ishora(float k)
{
    int n;

    if (k > 0)
    {
        n = 1;
    }
    if (k < 0)
    {
        n = -1;
    }
    if (k == 0)
    {
        n = 0;
    }
    
    return n;
}