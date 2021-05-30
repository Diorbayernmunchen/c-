#include <iostream>
using namespace std;
int main()
{
    int a, b, n, min;
    cout << "nechta to'rtburchak kiritilsin = "; cin >> n;


    cout << "1 - tortburchakning tomonini kiriting = " << endl; cin >> a; cin >> b;

    min = a*b;


for (int i = 2; i <= n; i++)
{
    cout << i << " - tortburchakning tomonini kiriting = " << endl;
    cin >> a;
    cin >> b;

    if (min > a*b)
    {
        min = a*b;
    }

    cout << "eng kichik yuzali to'rtburchak = " << min;
    



}







    return 0;
}