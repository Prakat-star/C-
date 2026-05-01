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
    Student *ptr = new Student ;
    ptr->roll = 24;
    ptr->display();
    delete ptr;
    return 0;
}