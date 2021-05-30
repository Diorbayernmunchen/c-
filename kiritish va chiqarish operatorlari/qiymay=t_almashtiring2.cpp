#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> a;
    cout << "c = "; cin >> b;

    d=a;
    a=c;
    c=b;
    b=d;


   

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}