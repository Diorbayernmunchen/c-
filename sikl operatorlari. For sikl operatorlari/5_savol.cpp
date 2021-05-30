#include <iostream>
using namespace std;
int main()
{
    float a;
    cout << "a = "; cin >> a;

    for (float i = 0.1; i <= 1; i = i + 0.1)
    {
        cout << i << " kg = " << a*i << endl;
    }

    return 0;
}