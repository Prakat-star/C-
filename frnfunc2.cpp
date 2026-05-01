#include <iostream>
using namespace std;

class B;

class A
{
private:
    int x;

public:
    A()
    {
        x = 10;
    }

    friend void add(A, B);
};

class B
{
private:
    int y;

public:
    B()
    {
        y = 20;
    }

    friend void add(A, B);
};

void add(A a, B b)
{
    cout << "Sum = " << a.x + b.y;
}

int main()
{
    A a1;
    B b1;

    add(a1, b1);
}