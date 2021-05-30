#include <iostream>
using namespace std;
int main()
{
    int a, b, d, Min, c;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "d = "; cin >> d;

    if (a > b)
    {
            c = b;
    }
    else
    {
            c = a;
    }

    if (c > d)
    {
        Min = d;
    }
    else
    {
        Min = c;
    }
    cout << Min;
    



return 0;
}