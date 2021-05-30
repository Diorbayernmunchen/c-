#include <iostream>
using namespace std;

int dior(int);


int main()
{
    int a, c;
    cout << "a = "; cin >> a;

   c = dior(a);
cout << c;
    return 0;
}
int dior(int a)
{
    int natija;
    natija = a*a*a;
    return natija;
}