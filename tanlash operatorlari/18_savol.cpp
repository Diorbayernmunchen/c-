#include <iostream>
using namespace std;
int main()
{
    int son;
    cout << "sonni kiriting = "; cin >> son;

    int yuzlik = son / 100;
    int onlik = (son / 10) % 10;
    int birlik = (son % 100) % 10;

    switch (yuzlik)
    {
    case 1: cout << "bir yuz ";    break;
    case 2: cout << "ikki yuz ";    break;
    case 3: cout << "uch yuz ";    break;
    case 4: cout << "to'rt yuz ";    break;
    case 5: cout << "besh yuz ";    break;
    case 6: cout << "olti yuz ";    break;
    case 7: cout << "yetti yuz ";    break;
    case 8: cout << "sakkiz yuz ";    break;
    case 9: cout << "to'qqiz yuz ";    break;
    
    default:
        break;
    }


    switch (onlik)
    {
        case 0: cout << "";  break;
    case 1: cout << "o'n ";   break;
    case 2: cout << "yigirma ";   break;
    case 3: cout << "o'ttiz ";   break;
    case 4: cout << "qirq  ";   break;
    case 5: cout << "ellik ";   break;
    case 6: cout << "oltmish ";   break;
    case 7: cout << "yetmish ";   break;
    case 8: cout << "sakson ";   break;
    case 9: cout << "to'qson ";   break;
    
    default:
        break;
    }


    switch (birlik)
    {
        case 0: cout << "";  break;
    case 1: cout << "bir";  break;
    case 2: cout << "ikki";  break;
    case 3: cout << "uch";  break;
    case 4: cout << "to'rt";  break;
    case 5: cout << "besh";  break;
    case 6: cout << "olti";  break;
    case 7: cout << "yetti";  break;
    case 8: cout << "sakkiz";  break;
    case 9: cout << "to'qqiz";  break;
    
    default:
        break;
    }




    return 0;
}