#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    if (((a > b) && (b > c)) || ((c > b) && (b > a))) 
    {
        cout << "ortadagi son = " << b;
    }


    if (((a > c) && (c > b)) || ((b > c) && (c > a)))
    {
        cout << "ortadagi son = " << c;
    }

    if (((b > a) && (a > c) || (c > a) && (a > b))) 
    {
        cout << "ortadagi son = " << a;
    }

    return 0;
}