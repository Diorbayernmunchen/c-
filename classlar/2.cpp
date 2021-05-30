#include <iostream>
using namespace std;

class Car
{
    public:

    string brand;
    string model;
    int year;

    Car(string x, string y, int z)
    {
            brand = x;
            model = y;
            year = z;
    }
};

int main()
{
    Car dior1("BMW", "XS", 2000);
    Car dior2("Lexus", "L", 1999);

    cout << dior1.brand << "\t" << dior1.model << "\t" << dior1.year << "\t" << endl;
    cout << dior2.brand << "\t" << dior2.model << "\t" << dior2.year << "\t" << endl;

    system("pause");
    return 0;
}