#include <iostream>
using namespace std;
int main()
{
    int n, m, butun = 0;

    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;

    while (n > m)
    {
        n -= m;
        butun++;
    }
    cout << "butun qismi = " << butun << endl;
    



    return 0;
}