#include <iostream>
using namespace std;
int main()
{
    int a = 103;
    float s = 103;

    do
    {
        a = a - 2;
        s = a + 1 / s;
        
    } while (a > 1);
    
    cout << 1 / s;




    return 0;
}