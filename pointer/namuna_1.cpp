#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    int *dior;

    dior = &n;

    cout << dior << endl;

    *dior = 1344;

    cout << n;






    return 0;
}