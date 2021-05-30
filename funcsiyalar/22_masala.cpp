#include <iostream>
using namespace std;

int dior(int, int, int);

int main()
{
    int a, b, N1, N2, N3, N4;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    cout << "amalni tanlang" << endl;

    cout << "Qo'shish - 1 " << N1 << endl;
    cout << "Ayirish - 2 " << N1 << endl;
    cout << "Ko'paytirish - 1 " << N1 << endl;
    cout << "Bo'lish - 1 " << N1 << endl;

    cout << dior(a, b, N1) << endl;
    cout << dior(a, b, N2) << endl;
    cout << dior(a, b, N3) << endl;
    cout << dior(a, b, N4) << endl;

    return 0;
}

int dior(int a, int b,int D)
{
    int natija;

    switch (D)
    {
    case 1: natija = a + b;   break;
    case 2: natija = a - b;   break;
    case 3: natija = a * b;   break;
    case 4: natija = a / b;   break;
    
    default:
        break;
    }

return natija;


}