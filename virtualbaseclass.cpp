//A virtual base class is used to avoid duplication of base class members in multiple inheritance.
#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "Class A\n";
    }
};
class B
{
public:
    void show()
    {
        cout << "Class B\n";
    }
};
class C : public A, public B
{
};
int main()
{
    C obj;
    obj.A::show();
    obj.B::show();
    return 0;
}