#include <iostream>
using namespace std;
int main()
{
    int a, b, s = 1; //(a < b)

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    for (int i = a; i <= b; i++)
    {
        s = s * i;
    }
        cout << s << endl;

    




    return 0;
}