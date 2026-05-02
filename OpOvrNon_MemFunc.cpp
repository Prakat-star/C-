#include <iostream>
using namespace std;

class Test
{
private:
    int x;

public:
    Test(int a)
    {
        x = a;
    }

    friend Test operator+(Test, Test);

    void display()
    {
        cout << x;
    }
};

Test operator+(Test t1, Test t2)
{
    return Test(t1.x + t2.x);
}

int main()
{
    Test t1(5), t2(10);

    Test t3 = t1 + t2;

    t3.display();
}