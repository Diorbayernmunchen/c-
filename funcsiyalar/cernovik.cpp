#include <iostream>
using namespace std;


//  parametrsiz funcsiyalar

// int func()
// {
//     return 5;
// }

// int main()
// {
//     cout << func() << endl;

//     return 0;
// }


//global va local funcsiyalar

// int x = 5;

// int main()
// {
//     int x = 9;

//     cout << "lokal x = " << x << endl;
//     cout << "global x = " << ::x << endl;

//     return 0;
// }


int kavadrat (int a)
{
    return a*a;
}

int main()
{
   int n;
    cout << "n = "; cin >> n;

    cout << kavadrat(n) << endl;

    return 0;
}