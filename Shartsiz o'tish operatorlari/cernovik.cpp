#include <iostream>
using namespace std;
int main()
{
    int n, i = 0;
    cin >> n;

    takrorla:
    i++;

    cout << " " <<  i;
    if (i < n)
    
        goto takrorla;
    

    return 0;
}