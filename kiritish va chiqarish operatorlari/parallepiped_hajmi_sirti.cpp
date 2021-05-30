#include <iostream>
using namespace std;
int main()
{
int a, b, c;
cout << "a = "; cin >> a;
cout << "b = "; cin >> b;
cout << "c = "; cin >> c;
cout << "V = " << a*b*c << endl;
cout << "S_tola = " << 2*(a*b+a*c+c*b) << endl;
return 0;
}