#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

max = (a > b) ? a : b;
max = (max > c) ? max : c;
cout << max << endl;


if (((a > b) && (b > c)) || (c > b) && (b > a))
{
    cout << b;
}
if (((a > c) && (c > b)) || ((c > a) && (b > c)))
{
    cout << c;
}
if (((b > a) && (a > c)) || ((a > b) && (c > a)))
{
    cout << a;
}

return 0;
}