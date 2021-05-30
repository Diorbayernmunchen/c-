#include <iostream>
using namespace std;
int main()
{
    int N, M;
    cout << "N = "; cin >> N;
    cout << "M = "; cin >> M;

    switch (N)
    {
    case 6: cout << "olti ";   break;
    case 7: cout << "yetti ";   break;
    case 8: cout << "sakkiz ";   break;
    case 9: cout << "to'qqiz ";   break;
    case 10: cout << "o'n ";   break;
    case 11: cout << "valet ";   break;
    case 12: cout << "dama  ";   break;
    case 13: cout << "karol ";   break;
    case 14: cout << "tuz ";   break;
    

    }

    switch (M)
    {
    case 1: cout << "G'isht";    break;
    case 2: cout << "olma";    break;
    case 3: cout << "chillik";    break;
    case 4: cout << "qarg'a";    break;
    
    }
    return 0;
}