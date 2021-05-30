#include <iostream>
using namespace std;
int main()
{
    int a, b, c, musbat = 0, manfiy = 0;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    if (a > 0) musbat++;
    if (b > 0) musbat++;
    if (c > 0) musbat++;

    if (a < 0) manfiy++;
    if (b < 0) manfiy++;
    if (c < 0) manfiy++;

    if (musbat == 0)
    {
        cout << "musbat son kiritilmadi" << endl;
    }
    else
    cout << musbat << " ta musbat son bor" << endl;

    if (manfiy == 0)
    {
        cout << "manfiy son kiritilmadi" << endl;
    }
    else
    cout << manfiy << " ta manfiy son bor";

    return 0;
}