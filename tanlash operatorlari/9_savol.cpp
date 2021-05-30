#include <iostream>
using namespace std;
int main()
{
    int D, M;
    cout << "kunni kiriting = "; cin >> D;
    cout << "Oyni kiriting = "; cin >> M;

    switch (M)
    {
    case 1: cout << D+1 << " - yanvar";  break;
    case 2: cout << D+1 << " - fevral";  break;
    case 3: cout << D+1 << " - Mart";  break;
    case 4: cout << D+1 << " - aprel";  break;
    case 5: cout << D+1 << " - may";  break;
    case 6: cout << D+1 << " - iyun";  break;
    case 7: cout << D+1 << " - iyul";  break;
    case 8: cout << D+1 << " - avgust";  break;
    case 9: cout << D+1 << " - sentabr";  break;
    case 10: cout << D+1 << " - oktabr";  break;
    case 11: cout << D+1 << " - noyabr";  break;
    case 12: cout << D+1 << " - dekabr";  break;
    
    default:
        break;
    }




    return 0;
}