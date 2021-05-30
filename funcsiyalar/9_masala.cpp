#include <iostream>
using namespace std;

void dior(int *son, int raqam);

int main()
{
    int s, r;
    cout << "sonni kiriting = "; cin >> s; 
    cout << "raqamni kiriting = "; cin >> r; 

    dior(&s, r);
    cout << "natija = " << s;

    return 0;
}

void dior(int *son, int raqam)
{
    