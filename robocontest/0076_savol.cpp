#include <iostream>
using namespace std;
int main()
{
    int a1, a2, a3, a4, a5, a6, a7, S, summa = 0;
    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7;

    cin >> S;

    summa = a1 + a2 + a3 + a4 + a5 + a6 + a7;

    cout << S - summa;

    return 0;
}