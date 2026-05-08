#include <iostream>
using namespace std;

template <class T>

T largest(T a, T b, T c)
{
    if(a > b && a > c)
        return a;

    else if(b > c)
        return b;

    else
        return c;
}

int main()
{
    cout << "Largest integer = "
         << largest(10, 25, 15) << endl;

    cout << "Largest float = "
         << largest(2.5, 8.1, 4.3);

    return 0;
}