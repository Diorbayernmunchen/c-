#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max, min;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

min = (a > b) ? b : a;
min = (min > c) ? c : min;
cout << min << endl;

max = (a > b) ? a : b;
max = (max > c) ? max : c;
cout << max;



    return 0;
}