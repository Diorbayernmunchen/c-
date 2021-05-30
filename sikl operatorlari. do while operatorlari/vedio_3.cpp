#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int n, i;
    float x;

    cout << "n = "; cin >> n;

    srand(time(NULL));

    i = 0;

    do
    {
        i++;
        x = rand() % n + 1;
        cout << x << endl;



    } while (i <= n);
    











    return 0;
}