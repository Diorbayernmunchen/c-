#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{
    int n = 100;
    float x, k;

    cout << "Kompyuter uylagan sonni toping" << endl;

    srand(time(NULL));

    x = rand() % n + 1;

    do
    {
        cin >> k;
        if (k < x)
        {
            cout << "Katta son kirittingiz" << endl;
        }
        if (k > x)
        {
            cout << "Kichik son kirittingiz" << endl;
        }
        

    } while (k != x);
            cout << "uhhhhh  topding  sen dahosan (*_*) " << endl;


    return 0;
}