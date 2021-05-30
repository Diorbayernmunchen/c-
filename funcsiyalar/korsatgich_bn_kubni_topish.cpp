#include <iostream>
using namespace std;

void kub (int *n);

int main()
{
    int n;
    cout << "n = "; cin >> n;

    kub(&n);

    cout << "n ning qiymati = " << n << endl;

    return 0;
}
void kub(int *nPtn)
{
    *nPtn = *nPtn * *nPtn * *nPtn;
}