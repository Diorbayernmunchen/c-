#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "a = "; cin >> a;

    if (a > 0)
    {
            cout << a+1;
    }
    else   
        if (a < 0)
        {
            cout << a-2;
        }
    else
    cout << "10";
        
    


    return 0;
}