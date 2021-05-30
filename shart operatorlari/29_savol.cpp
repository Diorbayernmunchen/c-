#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "a = "; cin >> a;

   { if ((a > 0 && a % 2 == 0))
    {
        cout << "musbat juft son";
    }
    else
    cout << "musbat toq son";
}
   { if ((a < 0) && (a % 2 == 0))
    {
        cout << "manfiy juft son";
    }
    else
    cout << "manfiy toq son";
   }
    return 0;
}