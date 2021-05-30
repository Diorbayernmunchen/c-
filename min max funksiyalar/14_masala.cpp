#include <iostream>
using namespace std;
int main()
{
    int a, n, m, min, index;

    cout << "nechta son = "; cin >> n;

    cout << "a = "; cin >> a;
    
    

    for (int i = 1; i <= n; i++)
    {

        cin >> m;
        if ((m > a) && (min > m))
        {
            min = m;
            index = i;
        }
        else
        min = 0;
        index = 0;
    }
    cout << "min = " << min << endl;
    cout << "index = " << index << endl;
    










    return 0;
}