// #include <iostream>
// using namespace std;

// int son(int);

// int main()
// {
//     int a, c;
//     cout << "sonni kiriting = "; cin >> a;

//     c = son(a);

//     cout << "sonning ucunci darajasi = " << c << endl;

//     return 0;
// }

// int son(int a)
// {
//     int dior;
//     dior = a*a*a;
//     return dior;
// }

#include <iostream>
using namespace std;

void kub(int *);

int main()
{
    int n;
    cout << "n = "; cin >> n;
    kub(&n);

    cout << "n ning kubi = " << n << endl;

    return 0;
}

void kub(int *dior)
{
    *dior = *dior * *dior * *dior;
}

// ikki hil yechim (* _ *)







