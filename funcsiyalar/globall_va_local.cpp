#include <iostream>
using namespace std;


int a = 5;

int main()
{
    int a = 6;

    cout << "global = " << :: a << endl;
    cout << "local = " << a << endl;



    return 0;
}