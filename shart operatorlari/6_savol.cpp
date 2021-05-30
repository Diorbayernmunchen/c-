#include <iostream>
using namespace std;
int main()
{
    int a, b, Max;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

  {  if (a > b)
    {
        Max = a;
    }
    if (a < b)
    {
        Max = b;
    }
        cout  << "kottasi = " << Max << endl;
  }
    if (a == b)
    {
        cout << "ikkalasi teng" << endl;
    }
    
    
    
    
    return 0;
}