#include <iostream>
using namespace std;
int main()
{
    int a, b, d;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    if (a > b)
    {
        d = a;
        a = b;
        b = d;
        cout << "a = " << a << endl;
        cout << "b = " << b;
    }
    else
    {
        cout << "a =  " << a << endl;
        cout << "b = " << b;
    }
    
    

    return 0;
}