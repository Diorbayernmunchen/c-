#include <iostream>
using namespace std;

int main()
{
int n, k, l, s = 0, s1 = 0, s2 = 0;
cout << "n = "; cin >> n;
cout << "k = "; cin >> k;
cout << "l = "; cin >> l;

int a[n];

for (int i = 0; i < n; i++)
{
    cout << "a[" << i << "] = ";
    cin >> a[i];
    s1 += a[i];
}

for (int i = k; i <= l; i++)
{
     s2 += a[i];
}

s = s1 - s2;
cout << s;



    return 0;
}