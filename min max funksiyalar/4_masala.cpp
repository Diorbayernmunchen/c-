#include <iostream>
using namespace std;
int main()
{
    int a, n, min, indeks;

    cout << "nechta son boldin = "; cin >> n;

    cin >> a;
    min = a;
    indeks = 1;

    for (int i = 2; i <= n; i++)
    {
        cin >> a;

        if (min > a) 
        {min = a;
        indeks = i;}
    }

    cout << "min = " << min << endl;
    cout << "index = " << indeks;
    
    return 0;
}