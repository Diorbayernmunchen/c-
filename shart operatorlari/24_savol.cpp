#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x;

    cout << "x = "; cin >> x;
    
    if (x > 0)
    {
        cout << 2 * sin(x);
    }
    else
    if (x <= 0)
    {
        cout << x - 6;
    }
    
    


    return 0;
}