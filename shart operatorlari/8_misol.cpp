#include <iostream>
using namespace std;
int main()
{
    int a, b, Max, Min;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    if (a > b)
    {
        Max = a;
        Min = b;
    }
    if (a < b)
    {
        Max = b;
        Min = a;
    }
    cout << "kottasi = " << Max << endl;
    cout << "kicigi = " << Min;
    
    


    return 0;
}