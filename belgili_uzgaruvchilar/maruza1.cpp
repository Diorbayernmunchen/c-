#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char c;

    do
    {
       c = getch();
       cout << c << " " << "-->" << (int) c << endl;
    } while (c != 'q');

    return 0;
    
}