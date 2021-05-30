#include <iostream>
using namespace std;
int main()
{
    int a;

    cout << "a = "; cin >> a;

    if (a < 0)
    {
        cout << "0";
    }
    else
    if (a % 2 == 0)
    {
        cout << "1";
    }
    else
    if (a % 2 == 1)
    {
        cout << "-1";
    }
    
    
    





    return 0;
}