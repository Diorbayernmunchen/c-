#include <iostream>
using namespace std;
int main()
{
        int a;
        cin >> a;


        if ((a >= 37) && (a % 5 == 4))
        {
            a = a + 1;
            cout << a;
        }
       else
        if ((a >= 37) && (a % 5 == 3))
        {
            a = a + (a % 5) - 1;
            cout << a;
        }
      
        else
        {
            cout << a;
        }
        
        
        




    return 0;
}