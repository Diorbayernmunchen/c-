#include <iostream>
using namespace std;
int main()
{   
    int n, a, min, max;

    cout << "n = "; cin >> n;
cin >> a;
max = min = a;


for (int i = 2; i <= n; i++)
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
    cout << endl;

    cout << "max = " << max << endl;
    cout << "min = " << min << endl;









    return 0;
}