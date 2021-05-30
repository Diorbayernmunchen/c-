#include <iostream>
using namespace std;

int main()
{
    cout << "o <= k < l < n  shart bn kiriting" << endl;
    int n, k, l, sum = 0, arif = 0;
    cout << "n = "; cin >> n;
    cout << "k = "; cin >> k;
    cout << "l = "; cin >> l;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    
    for (int i = a[k]; i <= a[l]; i++)
    {
        sum += i;
        arif++;
    }
    cout << "arifmitigi = " << sum / arif;

    return 0;
}