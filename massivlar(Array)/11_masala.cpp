#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cout << "n = "; cin >> n;
    cout << "k = "; cin >> k;

    int a[n];

    for (int  i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] % k == 0)
        {
            cout << a[i] << "\t";
        }
    }
    
     return 0;
}