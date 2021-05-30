#include <iostream>
using namespace std;
int main()
{
    int a, b, n, max;
    cout << "nechta to'rtburchak kiritilsin = "; cin >> n;

    cout << "1 - tortburchakning tomonini kiriting = " << endl; cin >> a; cin >> b;

    max = 2*(a+b);

for (int i = 2; i <= n; i++)
{
    cout << i << " - tortburchakning tomonini kiriting = " << endl;
    cin >> a;
    cin >> b;

    if (max < 2*(a+b))
    {
        max = 2*(a+b);
    }
    cout << "eng katta primertli to'rtburchak = " << max;
}
    return 0;
}