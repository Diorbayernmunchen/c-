#include <iostream>
using namespace std;
int main()
{
    int yosh;
    cout << "Yoshni kiriting = "; cin >> yosh;

    int onlik = yosh / 10;
    int birlik = yosh % 10;

    switch (onlik)
    {
    case 2: cout << "yigirma ";    break;
    case 3: cout << "o'ttiz ";    break;
    case 4: cout << "qirq ";    break;
    case 5: cout << "ellik ";    break;
    case 6: cout << "oltmish ";    break;
    case 7: cout << "yitmish ";    break;
    case 8: cout << "sakson ";    break;
    case 9: cout << "to'qson ";    break;
    
    default:
        break;
    }

    switch (birlik)
    {
    case 0: cout << "yosh";   break;
    case 1: cout << "bir yosh";   break;
    case 2: cout << "ikki yosh";   break;
    case 3: cout << "uch yosh";   break;
    case 4: cout << "to'rt yosh";   break;
    case 5: cout << "besh yosh";   break;
    case 6: cout << "olti yosh";   break;
    case 7: cout << "yetti yosh";   break;
    case 8: cout << "sakkiz yosh";   break;
    case 9: cout << "to'qqiz yosh";   break;
    
    default:
        break;
    }





    return 0;
}