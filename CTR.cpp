// A constructor is a special function that runs automatically whenever a object s created and it has same name as class with no return type.

#include<iostream>
using namespace std;
class Test
{
public:
    Test()
    {
        cout << "Constructor called";
    }
};
int main()
{
    Test t1;
}

// IT is used to initialize objects.

// DESTRUCTOR
// Runs automatically when object is destroyed.
// Starts with ~

// ~Test()
// {
//     cout << "Destroyed";
// }