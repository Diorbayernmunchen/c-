#include <iostream>
using namespace std;
int main()
{
    int n, q, geo;
    cout << "n = "; cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = "; cin >> a[i];
    }

q = a[1] / a[0];

    for (int i = 1; i < n; i++)
    {
        if ((a[i] != (a[i-1]) * q))
        {
            geo = 0;
        }
        else
        geo = q;
    }
    cout << geo;

}