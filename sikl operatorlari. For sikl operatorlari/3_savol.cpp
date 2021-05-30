#include <iostream>
using namespace std;
int main()
{
    int a, b, s = 0;  // (a < b)
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    for (int i = b-1; i > a; i--)
    {
        cout << i << endl;
        s ++ ;
    }

    cout << s;
    





    return 0;
}