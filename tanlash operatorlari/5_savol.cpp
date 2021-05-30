#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    cout << "a va b sonlar uchun quyudagi amallarni tanlang:" << endl;

    
    cout << "1 : Qo'shiq" <<  endl;
    cout << "2 : Ayirish" <<  endl;
    cout << "3 : Ko'paytirish" << endl;
    cout << "4 : Bo'lish" <<  endl;

    cin >> c;

    switch (c)
    {
    case 1: cout << "1 - amal = " << a + b;  break;
    case 2: cout << "2 - amal = " << a - b;  break;
    case 3: cout << "3 - amal = " << a * b;  break;
    case 4: cout << "4 - amal = " << a / b;  break;
    
    default: cout << "Bunaqa amal yoq";
        break;
    }

    return 0;
}