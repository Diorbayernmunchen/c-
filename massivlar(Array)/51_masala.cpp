#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n = "; cin >> n;

    int a[n], b[n], k;

    cout << "a massiv elementlarini kiriting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = "; cin >> a[i];
    }
    
    cout << "b massiv elementlarini kiriting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "b[" << i << "] = "; cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        int k = a[i];
        a[i] = b[i];
        b[i] = k;
    }

    cout << "a massiv elementlari" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t" << endl;
    }
    
    cout << "b massiv elementlari" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << "\t" << endl;
    }

    return 0;
}