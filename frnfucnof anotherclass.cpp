#include <iostream>
using namespace std;

class A;   // forward declaration

class B
{
public:
    void show(A);
};

class A
{
private:
    int x;

public:
    A()
    {
        x = 99;
    }

    friend void B::show(A);
};

void B::show(A a)
{
    cout << a.x;
}

int main()
{
    A a1;
    B b1;

    b1.show(a1);
}