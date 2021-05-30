#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "n = "; cin >> n;

    int a[n];
    a[0] = 1;

    for (int i = 1; i < n; i++)
    {
       a[i] = a[i-1]*2;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}