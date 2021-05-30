#include <iostream>
using namespace std;
int main()
{
    char a;
    int b;
    
    cout << "Yunalishlar" << endl;

    cout << "s - shimol" << endl;
    cout << "j - janub" << endl;
    cout << "q - sharq" << endl;
    cout << "g - g'arb" << endl;

    cin >> a;

    switch (a)
    {
    case 's': cout << "shimol";   break;
    case 'j': cout << "janub";   break;
    case 'q': cout << "sharq";   break;
    case 'g': cout << "g'arb";   break;
    
    default: cout << "bunaqa yunalish yoq";
        break;
    }
cin >> b;

    switch (b)
    {
    case 0: cout << a << "harakatni davom ettir";  break;
    case 1: cout << a << "chapga buril";  break;
    case 2: cout << a << "o'ngga buril";  break;
    
    default: cout << "bunaqa komanda yoq";
        break;
    }






    return 0;
}