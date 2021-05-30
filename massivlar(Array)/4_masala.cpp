#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    float A, D;
    cout << "n = "; cin >> n;
    cout << "1-hadini kiriting = "; cin >> A;
    cout << "mahrajini kiriting = "; cin >> D;

                
    int a[n];
    a[0] = A;
    for (int i = 1; i < n; i++)
    {
        a[i] = a[i-1] * D;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    
    

    return 0;
}