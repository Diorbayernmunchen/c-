#include <iostream>
using namespace std;
int main()
{
    int a, b, c, dior;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    
    {if (a == b)
    {
        dior = 3;
    }
    else
    if (a == c)
    {
        dior = 2;
    }
    else
    if (b == c)
    {
        dior = 1;
    }
    else
    {
        cout << "bir xil sonlar yoq";
    }
}
    cout << dior << " - raqam boshqalaridan faqrli";

    
    
    
    




    return 0;
}