#include <iostream>
using namespace std;
int main()
{
    cout << "2 ning biror darajasini kiriting" << endl;

    int n, dior = 0;

    cout << "n = "; cin >> n;

    while (n > 1)
    {
        if (int(n / 2) * 2 != n)
        {
            cout << "kiritilgan son 2 ning darajasi emas" << endl;
        }
        
        n /= 2;
        dior++;

    }
    cout << " 2 ning " << dior << " darajasini kiritdingiz" << endl;
    
    return 0;
}