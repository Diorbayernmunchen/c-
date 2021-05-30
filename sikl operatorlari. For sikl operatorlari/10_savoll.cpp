#include <iostream>
using namespace std;
int main()
{
    int n;
    float s = 0;

    cout << "n = "; cin >> n;

    for (float i = 1; i <= n ; i++)
    {
        s = s + 1/i;
    }

    cout << "yigindi = " << s << endl;
    



    return 0;
}