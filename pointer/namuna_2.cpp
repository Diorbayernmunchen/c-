#include <iostream>
using namespace std;
int main()
{
    double n = 5;
    double *diorbe;

    diorbe = &n;

    cout << "o'zgaruvchilar qiymati" << endl;
    cout << "n = " << n << endl;
    cout << "*diorbe = " << *diorbe << endl;

    cout << "xotira adrisi" << endl;
    cout << "n - o'zgaruvchisi joylashgan adres. &n = " << &n << endl;
    cout << "Ko'rsatgich ko'rsatayotgan adress. diorbe = " << diorbe << endl;
    cout << "Ko'rsatgich -- joylashgan adress. &diorbe = " << &diorbe << endl;

    cout << "O'zgaruvchilarni xotiradan egallagan xajmi" << endl;
    cout << "sizeof(n) = " << sizeof(n) << endl;
    cout << "sizeof(diorbe) = " << sizeof(diorbe) << endl;



    return 0;
}