#include <iostream>
using namespace std;

int PowerA3(int);

int main()
{
    int a, b, c;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    cout << "a ning kubi = " << PowerA3(a) << endl;
    cout << "b ning kubi = " << PowerA3(b) << endl;
    cout << "c ning kubi = " << PowerA3(c) << endl;

    return 0;
}

int PowerA3(int k)
{
    return k*k*k;
}