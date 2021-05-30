#include <iostream>
using namespace std;
int main()
{
    int a, n, max, min;

    cout << "nechta son bo'lsin = "; cin >> n;

    cin >> a;
    max = min = a;

    for (int i = 1; i < n; i++)
    {
        cin >> a;

        if (max < a)
        {
           max = a;
        }

        if (min > a)
        {
            min = a;
        }
    }

    cout << "max = " << max << endl;

    cout << "min = " << min << endl;
    








    return 0;
}