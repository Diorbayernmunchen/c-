#include <iostream>
using namespace std;

void kub (int *);

int main()
{
    int n;
    cout << "n = "; cin >> n;

    kub(&n);

    cout << "n ning qiymati = " << n << endl;

    return 0;
}

void kub (int *dior)
{
    *dior = *dior * *dior * *dior;
}
