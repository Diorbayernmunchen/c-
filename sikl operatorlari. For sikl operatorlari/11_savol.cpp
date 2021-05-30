#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    float s = 0;

    cout << "n = "; cin >> n;

    for (float i = n; i <= 2*n; i++)
    {
        s += pow(i,2);
    }

    cout << "yigindi = " << s << endl;
    





    return 0;
}