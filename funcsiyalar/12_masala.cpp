#include <iostream>
using namespace std;

void dior(int *k, int *m, int *n);


int main()
{
    int a, b, c;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    cout << a << "\t" << b << "\t" << c << endl;
    dior(&a, &b, &c);
    cout << a << "\t" << b << "\t" << c << endl;


    return 0;
}

void dior(int *a, int *b, int *c)
{
    int k;

    if (*a > *b)
    {
        k = *b;
        *b = *a;
        *a = k;
    }
    if (*a > *c)
    {
        k = *c;
        *c = *a;
        *a = k;
    }
    if (*b > *c)
    {
        k = *c;
        *c = *b;
        *b = k;
    }
    
    
    

}