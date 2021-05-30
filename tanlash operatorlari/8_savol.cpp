#include <iostream>
using namespace std;
int main()
{
    int D, M;
    cout << "kunni kiriting = "; cin >> D;
    cout << "Oyni kiriting = "; cin >> M;

    switch (M)
    {
    case 1: cout << D << " - yanvar";  break;
    case 2: cout << D << " - fevral";  break;
    case 3: cout << D << " - Mart";  break;
    case 4: cout << D << " - aprel";  break;
    case 5: cout << D << " - may";  break;
    case 6: cout << D << " - iyun";  break;
    case 7: cout << D << " - iyul";  break;
    case 8: cout << D << " - avgust";  break;
    case 9: cout << D << " - sentabr";  break;
    case 10: cout << D << " - oktabr";  break;
    case 11: cout << D << " - noyabr";  break;
    case 12: cout << D << " - dekabr";  break;
    
    default:
        break;
    }




    return 0;
}