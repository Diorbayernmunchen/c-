#include <iostream>
using namespace std;
int main()
{
    int a, b, z;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    z = (a > b) ? a : b;
    cout << "Max = " << z;


    return 0;
}