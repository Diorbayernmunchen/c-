#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float L, R, S;
    double const pi = 3.1415;
    cout << "Aylananing uzunligini kiriting = "; cin >> L;
    R=L/(2*pi);
    cout << "aylananing radiusi = " << R << endl;
    S = pi*R*R;
    cout << "aylananing yuzi = " << S;
    return 0;
}