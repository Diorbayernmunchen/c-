#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n = "; cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    int k = 0;
    
while (k <= n)
{
        cout << "a[" << k++ << "] = " << a[k++] << endl;
        cout << "a[" << n-- << "] = " << a[n--] << endl;

}



    return 0;
}