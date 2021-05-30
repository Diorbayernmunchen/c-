#include <iostream>
using namespace std;
int main()
{
    int n;
    float a, s = 1;

    cout << "n = "; cin >>n;
    cout << "a = "; cin >>a;

    for (int i = 1; i <= n; i++)
    {
        s*=a;
    }
    cout << s << endl;

    return 0;
}