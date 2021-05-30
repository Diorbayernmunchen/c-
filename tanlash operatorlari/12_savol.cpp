#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float r, d, l, s;
    int t;
    float  pi = 3.1415;

    cout << "1 : radius" << endl;
    cout << "2 : diametr" << endl;
    cout << "3 : uzunlik" << endl;
    cout << "4 : yuzasi" << endl;

    cin >> t;

    switch (t)
    {
    case 1: cout << "r = "; cin >> r;
            cout << "d = " << 2 * r << endl;
            cout << "l = " << 2 * r * pi << endl;
            cout << "s = " << pi * r * r << endl;
        break;
    
    case 2: cout << "d = "; cin >> d;
            cout << "r = " << d / 2;
            cout << "l = " << d * pi << endl;
            cout << "s = " << pi * d * d / 4;
            break;
    case 3: cout << "l = "; cin >> l;
            cout << "r = " << l / (2 * pi) << endl;
            cout << "d = " << l / pi << endl;
            cout << "s = " << (l * l )/ (4 * pi);
            break;
    case 4: cout << "s = "; cin >> s;
            cout << "r = " << sqrt(s/pi) << endl;
            cout << "d = " << sqrt(4*s/pi) << endl;
            cout << "l = " << sqrt(4*pi*s);


    default:
        break;
    }



    return 0;
}