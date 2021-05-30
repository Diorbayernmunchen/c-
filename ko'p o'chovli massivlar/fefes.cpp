#include <iostream>
using namespace std;

void dior(int a[10][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    
}
int main()
{
    int a[10][10] = { 0 }, n;

    cout << "n = "; cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0)
            {
                a[i][j] = 1;
            }
            if (i = 1)
            {
               a[i][j] = 2;
            }
            
            
        }
        
    }
    dior(a, n);
    return 0;
}