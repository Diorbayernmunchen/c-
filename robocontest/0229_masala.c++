#include <iostream>
#include <math.h>
using namespace std;
int main()
{
     long int a, b;
    cin >> a;
    cin >> b;

    if(((a+b)/2) > (sqrt(a*b)))
    {
        cout << ">";
    }
    
    if(((a+b)/2) == (sqrt(a*b)))
    {
        cout << "=";
    }
    
    if(((a+b)/2) < (sqrt(a*b)))
    {
        cout << "<";
    }
    






    return 0;
}