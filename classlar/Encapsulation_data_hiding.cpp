#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    public:
    int balance = 1000; // $

    string passport = "AA0000";

    void diposit(string s, int b)
    {
        if (s == passport)
        {
            balance += b;
        }
        
    }

    void withdraw(string s, int b)
    {
        if (s == passport)
        {
            balance -= b;
        }
        
    }
    
};

int main()
{
    BankAccount k;
    k.diposit("AA0000", 400);
    cout << k.balance << endl;
    system("pause");
    return 0;
}