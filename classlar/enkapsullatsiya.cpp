#include <iostream>
using namespace std;

class diorbe
{
    private:
        int salary;

    public:
        void setSalary(int s)
        {
            salary = s;
        }
        int getSalary()
        {
            return salary;
        }
};

int main()
{
    diorbe dior;
    dior.setSalary(5000);
    cout << dior.getSalary();
    return 0;
}