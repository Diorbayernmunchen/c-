#include <iostream>
using namespace std;

class BankAccount
{
    int balance = 2;
public:
    int myBalance()
    {
        return balance * 3;
    }
};

int main()
{
    BankAccount k;
    cout << k.myBalance() << endl;

    system("Pause");
    return 0;
}