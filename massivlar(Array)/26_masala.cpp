#include <iostream>
using namespace std;
int main()
{
    int n, min;
    cout << "n = "; cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = "; cin >> a[i];
    }
    
    min = a[2];

    for (int i = 2; i < n; i+=2)
    {
       cout << "\t a[" << i << "] = " << a[i] << endl;;
    }

    for (int i = 2; i < n; i+=2)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    cout << "min = " << min << endl;

    return 0;
}