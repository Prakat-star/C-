#include <iostream>
using namespace std;

class Test
{
private:
    int x;

public:
    Test()
    {
        x = 5;
    }

    void operator++()
    {
        ++x;
    }

    void display()
    {
        cout << x;
    }
};

int main()
{
    Test t;
    ++t;
    t.display();
}