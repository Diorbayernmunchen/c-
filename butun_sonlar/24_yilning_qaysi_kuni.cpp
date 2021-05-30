#include <iostream>
using namespace std;
int main()
{
    int k, d;
    cout << "kunni kirit = "; cin >> k;
d=k%7+3;
    switch (d)
    {
        case 1: cout << "Dushanba" << endl; break;
        case 2: cout << "Seshanba" << endl; break;
        case 3: cout << "Chorshanba" << endl; break;
        case 4: cout << "Payshanba" << endl; break;
        case 5: cout << "Juma" << endl; break;
        case 6: cout << "Shanba" << endl; break;
        case 0: cout << "Yakshanba" << endl; break;
    }
    return 0;
}