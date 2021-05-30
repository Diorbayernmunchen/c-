#include <iostream>
using namespace std;

int main()
{
    int n, A, B, s = 0;
    cout << "n = "; cin >> n;
    cout << "A = "; cin >> A;
    cout << "B = "; cin >> B;

    int a[n];
    a[0] = A;
    a[1] = B;
    
    s = A + B; a[2] = s;
    for (int i = 3; i < n; i++)
    {
       a[i] = s + a[i-1];
        s = a[i];

    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}