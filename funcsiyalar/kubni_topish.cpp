#include <iostream>
using namespace std;

int kub(int a);

int main()
{
    int a, c;

    cin >> a;

    c = kub(a);

    cout << "kiritilgan sonning kubi = " << c << endl;

    return 0;
}

int kub(int a)
{
    int natija;

    natija = a*a*a;

return natija;
}