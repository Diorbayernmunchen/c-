#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    cout << "1-katetni kiriting = "; cin >> a;
    cout << "2-katetni kiriting = "; cin >> b;
    c=sqrt(a*a+b*b);
    cout << "Gipatinuza = "<< c << endl;
    cout << "P = " << a+b+c;
    return 0;
}