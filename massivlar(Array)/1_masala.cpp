#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "n = "; cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = 2*i+1;
    }

    for (int i = 0; i < n; i++)
    {
       cout << a[i] << "\t";
    }
    
    return 0;
}