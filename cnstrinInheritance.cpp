#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Base Constructor\n";
    }
};
class B : public A
{
public:
    B()
    {
        cout << "Derived Constructor\n";
    }
};
int main()
{
    B obj;
}