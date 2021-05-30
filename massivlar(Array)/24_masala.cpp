#include <iostream>
using namespace std;
int main()
{
    int n, d, arif;
    cout << "n = "; cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = "; cin >> a[i];
    }

    d = a[1] - a[0];

    for (int i = 1; i < n; i++)
    {
        if ((a[i] != (a[i-1]) + d))
        {
            arif = 0;
        }
        else
        arif = d;
    }
    cout << arif;

}