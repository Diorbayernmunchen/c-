#include <iostream>
using namespace std;
int main()
{
    int a, b, d;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    

    if (a == b)
    {
       cout << "a = 0" << endl; 
       cout << "b = 0";
    }
    else
    {
        cout << "a = " << a + b << endl;
        cout << "b = " << a + b;
    }
    


return 0;
}