#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n = "; cin >> n;

    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = "; cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\t b[" << i << "] = "; cin >> b[i];
    }
for (int i = 0; i < n; i++)
{
   

    if (a[i] == b[i])
    {
        cout << b[i];
    }
}

return 0;
}