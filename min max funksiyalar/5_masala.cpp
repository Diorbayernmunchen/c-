#include <iostream>
using namespace std;
int main()
{
    int m, V, n, max;

    cout << "nechta jichlik = "; cin >> n;

cout << "1 - juflik" << endl;
    cin >> m;
    cin >> V;
        max = m / V;
    
    for (int i = 2; i <= n; i++)
    {
        cout << i << " - juftlik" << endl;
        
        cin >> m;
        cin >> V;

        if (max < m / V)
        {
            max = m / V;
        }
    }

    cout << "max = " << max << endl;

    
    return 0;
}