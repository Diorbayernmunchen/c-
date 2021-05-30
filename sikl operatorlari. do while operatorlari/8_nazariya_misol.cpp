#include <iostream>
using namespace std;
int main()
{
    float a = 256;
    float x,  s = x * x;
    

    cout << "x = "; cin >> x;

    do
    {
        s = x * x + a / s;
        a = a / 2;
        cout << a << endl;

    } while (a > 1);

    cout << "yigindi = " << x / s;
    







    return 0;
}