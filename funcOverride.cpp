//Function overriding occurs when a derived class redefines a function of the base class.
#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Base"<<endl;
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "Derived";
    }
};
int main()
{
    B obj;
    obj.show();
    return 0;
}