#include <iostream>
using namespace std;

int main()
{
    cout << "o <= k < l < n  shart bn kiriting" << endl;
    int n, k, l, sum1 = 0, sum2 = 0, sum = 0, son, dior;
    cout << "n = "; cin >> n;
    cout << "k = "; cin >> k;
    cout << "l = "; cin >> l;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        sum1 += a[i];
    }

    for (int i = a[k]; i <= a[l]; i++)
    {
        sum2 += i;
        son++;
    }
    
    sum = sum1 - sum2;
    cout << "yigindi = " << sum << endl;
    dior = abs(n - son);
    cout << "arif" << sum / dior;

    return 0;
}