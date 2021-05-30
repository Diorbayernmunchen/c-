#include <iostream>
using namespace std;
int main()
{
    cout << "1 - Qish oylari" << "  " << "2 - Bahor oylari" << "   " << "3 - Yoz oyladi" << "    " << "4 - Kuz oylari" << endl;
    int a;
    cout << "a = "; cin >> a;

    switch (a)
    {
    case 1: cout << "Dekabr" << endl;
            cout << "Yanvar" << endl;
            cout << "Fevral" << endl;
        break;

    case 2: cout << "Mart" << endl;
            cout << "Aprel" << endl;
            cout << "May" << endl;
            break;
    case 3: 
            cout << "iyun" << endl;
            cout << "iyul" << endl;
            cout << "Avgust" << endl;
            break;
    case 4: 
            cout << "Sentabr" << endl;
            cout << "Oktabr" << endl;
            cout << "Noyabr" << endl;
            break;
    
    default:
        break;
    }

    return 0;
}