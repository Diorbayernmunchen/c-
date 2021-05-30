#include <iostream>
using namespace std;

int main()
{
    int n, s = 0;
    cout << "n = "; cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
       cout << "a[" << i << "] = ";
       cin >> a[i];

       s += a[i];
    }

    cout << "yigindi = " << s;

    return 0;
}