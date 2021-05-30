#include <iostream>
using namespace std;

void dior(int a[10][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    
}

    int diorbe(int a[], int n)
    {
        int max = a[0];
        for (int i = 1; i < n; i++)
        {
            if (max < a[i])
            {
                    max = a[i];
            }
            
        }
        return max;
    }

    int main()
    {
        int m, n, a[10][10];
        cout << "Satrlarni kiriting \nm = ";
        cin >> m;
        cout << "ustunlarni kiriting \nn = ";
        cin >> n;

        cout << "Massiv elementlarini \n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
            
        }
        
    
    cout << "Kiritilgan matritsa \n";
    dior(a, m, n);
    for (int i = 0; i < m; i++)
    {
        cout << i << " - satrning eng kattasi = " << diorbe(&a[i][0], n) << endl;
    }
   
    return 0;
    }

