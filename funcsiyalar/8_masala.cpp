#include <iostream>
using namespace std;

int dior(int son, int raqam);

int main()
{
    int s, r;

    cout << "sonni kiriting = "; cin >> s;
    cout << "raqamni kiriting = "; cin >> r;

    cout << "natija = " << dior(s, r);

    return 0;
}

int dior(int son, int raqam)
{
    int natija;
    natija = (son * 10 ) + raqam;

    return natija;
}