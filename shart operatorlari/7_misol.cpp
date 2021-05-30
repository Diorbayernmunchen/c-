#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    if (a > b)
    {
        cout << "ikkinchi kiritilgan son kichik";
    }
    if (a < b)
    {
        cout << "birinchi kiritilgan son kichik";
    }
    if (a == b)
    {
        cout << "kiritilgan sonlar teng" << endl;
    }
    

    
    


    return 0;
}