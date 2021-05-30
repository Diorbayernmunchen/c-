#include <iostream>
using namespace std;

int SumRange(int, int);

int main()
{
    int a, b, c;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    cout << "a dan b gacha bo'lgan sonlar yig'indisi = " << SumRange(a, b) << endl;
    cout << "b dan c gacha bo'lgan sonlar yig'indisi = " << SumRange(b, c);

    return 0;
}

int SumRange(int a, int b)
{
    int sum = 0;

    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    
    return sum;
}