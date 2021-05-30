#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "ikki xonali son kiriting = "; cin >> a;
    {b = a / 10;
    c = a % 10;}
    d=b;
    b=c;
    c=d;
    cout << "natija = " << b << c;

    return 0;
}