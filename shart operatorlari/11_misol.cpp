#include <iostream>
using namespace std;
int main()
{
    int a, b, Max;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    if (a == b)
    {
       cout << "a = 0" << endl; 
       cout << "b = 0";
    }
    
    {
        if (a > b)
    {
        Max = a;
    }
    if (a < b)
    {
        Max = b;
    }
    cout << "a = " << Max << endl;
    cout << "b = " << Max << endl;
    }
    
    
    
    

return 0;
}