#include <iostream>
using namespace std;
int main()
{
    int a, i;
    cin >> a;
    i = a;
     takrorla:
    --i;
    cout << " " << i;
    if (i > 0)
    {
        goto takrorla;
    }
    

    return 0;
}