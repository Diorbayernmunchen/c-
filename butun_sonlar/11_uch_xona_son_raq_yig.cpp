#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "uch xonbali son kiriting = "; cin >> a;
    b=a/100;
    c=(a%100)/10;
    d=(a%100)%10;
    cout << "kiritilgan sonnning raqamlar yigindisi = " << b+c+d << endl;

    return 0;
}