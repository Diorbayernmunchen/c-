#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Baxoni kiriting = "; cin >> a;

    switch (a)
    {
    case 1: cout << "Yomon";    break;
    case 2: cout << "Qoniqarsiz";    break;
    case 3: cout << "Qoniqarli";    break;
    case 4: cout << "yaxshi";    break;
    case 5: cout << "alo";    break;
    
    default: cout << "Xato";
        break;
    }




    return 0;
}