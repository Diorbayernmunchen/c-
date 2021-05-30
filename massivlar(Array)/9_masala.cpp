#include <iostream>
using namespace std;

int main()
{
    int n, soni = 0;
    cout << "n = "; cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] < a[j])
            {
            int k;
            k = a[i];
            a[i] = a[j];
            a[j] = k;
            }
        }
    }
cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i] << "\t";
            soni ++;
        }
    }
cout << endl;
    cout << "soni = " << soni;

    return 0;
}