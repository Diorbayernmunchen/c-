#include <iostream>
using namespace std;

int main()
{
    int n, k, l, sum = 0, sum1 = 0, sum2 = 0;
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
        sum2 += a[i];
    }
    sum = sum1 - sum2;

    cout << sum;
    
    return 0;
}