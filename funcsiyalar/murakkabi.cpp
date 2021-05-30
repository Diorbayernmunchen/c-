#include <iostream>
using namespace std;

int sum(int, int);
void sum(int, int, int *);
int sum(int *, int *);
void sum(int *, int *, int * );

int main()
{
    int a, b, c;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    c = sum(a, b);
    cout << "1 - usul natijasi = " << c << endl;

    sum(a, b, &c);
    cout << "2 - usul natijasi = " << c << endl;

    c = sum(&a, &b);
    cout << "3 - usul natijasi = " << c << endl;

    sum(&a, &b, &c);
    cout << "3 - usul natijasi = " << c << endl;

    return 0;
}


//1 - usul;

int sum(int son1, int son2)
{
    int natija;
    natija = son1 + son2;
    return natija;
}


// 2 - usul;

void sum(int son1, int son2, int *natija)
{
    *natija = son1 + son2;
}


// 3 - usul;

int sum(int *son1, int *son2)
{
    int natija;
    natija = *son1 + *son2;
    return natija;
}


// 4 - usul;

void sum(int *son1, int *son2, int *natija)
{
    *natija = *son1 + *son2;
}
