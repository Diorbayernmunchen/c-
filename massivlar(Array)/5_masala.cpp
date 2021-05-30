#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
   
    cout << "n = "; cin >> n;
   
                
    int a[n];
    a[0] = a[1] = 1;
    for (int i = 2; i < n; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    
    

    return 0;
}