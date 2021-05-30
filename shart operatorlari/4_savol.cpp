#include <iostream>
using namespace std;
int main()
{
    int a, b, c, sum = 0;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    if (a > 0) sum++;
    if (b > 0) sum++;
    if (c > 0) sum++;

    if (sum == 0)
    {
        cout << "musbat son kiritilmadi" << endl;
    }
    else 
        cout << sum << " ta musbat son kiritildi" << endl;

    return 0;
}