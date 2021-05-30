#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, dior;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;
    
    if (a == b && b == c)
    {
        dior = 4;
    }
    else
    if (a == b && b == d)
    {
        dior = 3;
    }
    else
    if (a == c && c == d)
    {
        dior = 2;
    }
    else
    if (b == c && c == d)
    {
       dior = 1;
    }
    cout << dior << " - son qolganlaridan faqrli";

    if(dior == 0)
    {
        cout << "ozaro teng uchta son yoq";
    }


    return 0;
}