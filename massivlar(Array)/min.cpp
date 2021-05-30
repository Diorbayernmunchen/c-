#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "n = "; cin >> n;

    int a[n], s = 0, min = a[0], index = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
        s += a[i];
    }

    for (int i = 1; i < n; i++)
    {
        cout << a[i] << "\t";

        if (min > a[i])
        {
           min = a[i];
           
        }
        
    }
    
    cout << endl;
    cout << "massiv yigindisi = " <<  s << endl;
cout << "massivning eng kichik elementi = " << min << endl;

    return 0;
}