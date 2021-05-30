#include <iostream>
using namespace std;
int main()
{
    int a;
    float n, s = 1, l = 0;

    cout << "a = "; cin >> a;
    cout << "n = "; cin >> n;

    for (int i = 1; i <= n; i++)
    {
        s*=a;
        cout << i << "\t" << s << endl;
        l+=s;

    }
    cout << "yigindisi = " << l;
    




return 0;
}