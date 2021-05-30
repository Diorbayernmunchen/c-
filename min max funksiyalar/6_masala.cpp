#include <iostream>
using namespace std;
int main()
{
    int a, n, min, max, indexa, indexb;

    cout << "nechta son = "; cin >> n;

    cin >> a;
    min = max = a;
    indexa = indexb = 1;

    for (int i = 2; i <= n; i++)
    {
        cin >> a;

        if (max < a)
        {
            max = a;
            indexa = i;
        }

        if (min > a)
        {
            min = a;
            indexb = i;
        }
    }
      cout << "max = " << max << endl;
        cout << "min = " << min << endl;
        cout << "index (a)  = " << indexa << endl;
        cout << "index (b) = " << indexb;
        
    






    return 0;
}