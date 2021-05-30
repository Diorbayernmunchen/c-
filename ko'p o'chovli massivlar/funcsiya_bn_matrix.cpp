#include <iostream>
using namespace std;

void dior(int a[10][10], int m, int n)
{
            // matritsani jadval shaklida ciqarish

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void dior (int a[10][10], int m, int n)
{
    cout << "Massiv elementlarini kiriting " << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}

int main()
{
    int m, n, a[10][10];
    cout << "Satrlar sonini kiriting \tm = "; cin >> m;
    cout << "Ustunla sonini kiriting \tn = "; cin >> n;

    dior(a, m, n);

    cout << "Kiritilgan matritsa" << endl;

    dior(a, m, n);

return 0;
}

