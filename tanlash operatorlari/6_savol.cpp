#include <iostream>
using namespace std;
int main()
{
    float a;
    int b;

    cout << "Uzunlik kitiring = "; cin >> a;

    cout << "Qaysi uzunlikda kiritdingiz" << endl;
    
    cout << "1 : didsemetr" << endl;
    cout << "2 : kilometr" << endl;
    cout << "3 : metr" << endl;
    cout << "4 : millimetr" << endl;
    cout << "5 : santimetr" << endl;

    cin >> b;

    switch (b)
    {
    case 1: cout << b << "  didsemetr = " << a / 10 << "metr"; break;
    case 2: cout << b << "  kilometr = " << a * 1000 << "metr"; break;
    case 3: cout << b << "  metr = " << a << "metr" ; break;
    case 4: cout << b << "  millimetr = " << a / 1000 << "metr"; break;
    case 5: cout << b << "  santimetr = " << a / 100 << "metr"; break;
    
    default:
        break;
    }






    return 0;
}