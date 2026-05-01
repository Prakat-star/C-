// Friend class means all the member function of one class can access private and protected members of another class.
// it needs forward declaration

#include <iostream>
using namespace std;

class B;   // forward declaration

class A
{
private:
    int x;

public:
    A()
    {
        x = 67;
    }

    friend class B;
};

class B
{
public:
    void display(A obj)
    {
        cout << "Private value = " << obj.x;
    }
};

int main()
{
    A a1;
    B b1;

    b1.display(a1);
}
