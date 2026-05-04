#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show() = 0;   // pure virtual function
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived class implementation\n";
    }
};

int main()
{
    // Base b;  not allowed

    Derived d;
    d.show();

    return 0;
}