#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "hafta kunini kiriting = "; cin >> a;

    switch (a)
    {

    case 1: cout << "Dushanba"; break;
    case 2: cout << "Seshanba"; break;
    case 3: cout << "Chorshanba"; break;
    case 4: cout << "Payshanba"; break;
    case 5: cout << "Juma"; break;
    case 6: cout << "Shanba"; break;
    case 7: cout << "Yakshanba"; break;

    default: cout << "Bunaqa hafta kuni yoq";
        break;
    }


    return 0;
}