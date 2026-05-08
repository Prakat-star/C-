#include <iostream>
using namespace std;

template <class T>

class Data
{
private:
    T value;

public:
    Data(T v)
    {
        value = v;
    }

    void display()
    {
        cout << value << endl;
    }
};

int main()
{
    Data<int> d1(100);
    Data<float> d2(5.75);
    Data<char> d3('A');

    d1.display();
    d2.display();
    d3.display();

    return 0;
}