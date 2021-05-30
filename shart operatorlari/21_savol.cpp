#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    if((a == 0) && (b == 0))
    {
        cout << "0";
    }
    
    if ((a == 0) && (b > 0))
    {
        cout << "2";
    }
    else
    if ((a > 0) && b == 0)
    {
        cout << "1";
    }

    if ((a > 0) && (b > 0))
    {
        cout << "3";
    }
    
    
    



    return 0;
}