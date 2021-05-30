#include <iostream>
using namespace std;
int main()
{
    int k, p = 12;
    int &m = k;
    int *dior;

    k = 5;
    dior = &k;

    cout << "k = " << k << endl;
    cout << "m = " << m << endl;
    cout <<"*dior = " << *dior << endl;

    k++;
    dior = &p;
    m = p;

    cout << "k = " << k << endl;
    cout << "m = " << m << endl;
    cout <<"*dior = " << *dior << endl;

    m++;

    cout << "k = " << k << endl;
    cout << "m = " << m << endl;

    return 0;
}