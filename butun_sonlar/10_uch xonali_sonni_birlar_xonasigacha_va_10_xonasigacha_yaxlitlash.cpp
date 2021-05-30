#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "uch xonali son kiriting = "; cin >> a;
    cout << "1_lar xonasi = " << a % 100 << endl;
    cout << "2_lar xonasi = " << (a / 10) % 10;
    return 0;
}