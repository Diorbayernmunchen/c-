#include <iostream>
using namespace std;
int main()
{
    int a;

    dior:
    cout << "[1:7] oraliqda son kiriting \n"; cin >> a;

    if (a < 1  || a > 7)
    {
        goto dior;
    }
    cout << a;
    




    return 0;
}