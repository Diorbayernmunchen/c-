#include <iostream>
using namespace std;
int main()
{
    int n, m, qoldiq;

    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;

    while (n > m)
    {
        n -= m;
    }
    cout << n;
    



    return 0;
}