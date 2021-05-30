#include <iostream>
using namespace std;
int main()
{
    int a;
    dior:
    cin >> a;

    if (a < 0 || a > 5)
    {
        goto dior;
    }

    return 0;
}