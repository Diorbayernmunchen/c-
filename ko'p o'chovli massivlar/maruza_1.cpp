#include <iostream>
using namespace std;

int main()
{
    int n, m, a[10][10];
    cout << "sartlarni kiriting \tn = "; cin >> n;
    cout << "ustunlarni kiriting \tm = "; cin >> m;

    for (int satr = 0; satr < n; satr++)
    {
        for (int ustun = 0; ustun < m; ustun++)
        {
            cout << "a[" << satr << "][" << ustun << "] = ";
            cin >> a[satr][ustun];
        }
    }

    for (int satr = 0; satr < n; satr++)
    {
        for (int ustun = 0; ustun < m; ustun++)
        {
            cout << a[satr][ustun] << "\t";
        }
        cout << endl;
    }

    return 0;
}