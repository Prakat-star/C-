#include <iostream>
using namespace std;

class Student
{
public:
    int roll;

    void display()
    {
        cout << "Roll = " << roll;
    }
};

int main()
{
    Student s1;
    Student *ptr;
    ptr = &s1;
    ptr ->roll=24;
    s1.display();
    return 0;
}