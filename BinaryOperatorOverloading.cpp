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

    Test operator+(Test t)
    {
        return Test(x + t.x);
    }

    void display()
    {
        cout << x;
    }
};

int main()
{
    Test t1(10), t2(20);

    Test t3 = t1 + t2;

    t3.display();
}