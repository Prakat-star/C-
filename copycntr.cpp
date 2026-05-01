// Copy constructor is a constructor that initializes one object using another objext of the same class.
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

    Test(Test &t)
    {
        x = t.x;
    }

    void display()
    {
        cout << x;
    }
};

int main()
{
    Test t1(10);
    Test t2(t1);

    t2.display();
    return 0;
}