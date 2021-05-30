#include <iostream>
using namespace std;

void dior(int a, int *soni, int *sum);


int main()
{
    int a, b, c, raqam, summa;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    dior(a, &raqam, &summa);
    cout << "a sonini raqamlar yig'indisi = " << summa << endl;
    cout << "a sonini raqamlar soni = " << raqam << endl;

    dior(b, &raqam, &summa);
    cout << "b sonini raqamlar yig'indisi = " << summa << endl;
    cout << "b sonini raqamlar soni = " << raqam << endl;


    dior(c, &raqam, &summa);
    cout << "c sonini raqamlar yig'indisi = " << summa << endl;
    cout << "c sonini raqamlar soni = " << raqam << endl;

    return 0;
}

void dior(int a, int *soni, int *sum)
{
    *soni = 0;
    *sum = 0;

    while (a > 0)
    {
        *sum += a % 10;
        *soni += 1;
        a /= 10;
    }
    
}