#include <iostream>
#include <string>
using namespace std;

class myClass
{
    public:

        myClass(
        {
            cout << "ishlayapdi";
        }

        void setName(string s)
        {
            name = s;
        }

        string getName()
        {
            return name;

        }


    private:
    string name;
};

int main()
{
    myClass ob;
    return 0;
}

