#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n;
    cout << "n = "; cin >> n;

    int a[n];
    
    for (int i = 0; i < n; i++)
    {
       cout << "a[" << i << "] = ";
       cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           if (a[i] > a[j])
           {
               int k = a[i];
               a[i] = a[j];
               a[j] = k;
           }

    cout << "i = " << i << "j = " << j << "\t";
    getch();
    for (int p = 0; p 
    < n; p++)
    {
        cout << a[p] << "\t";
        cout << endl;
    }
    

        }
    }
    
cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    
    return 0;
}