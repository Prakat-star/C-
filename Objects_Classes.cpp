//  A class is a blueprint/ template for creating objects
// Class does not occupy memory until an object is created.
#include<iostream>
using namespace std;

class Student
{
    public:
    int roll;
    string name;
    
};

// an object is an instance of a class, it is a real variable create ffrom a class. 

void display(Student s)
    {
        cout<<" Name:"<< s.name<<"\t" ; 
        cout << "Roll_no:" << s.roll << endl;  ;

    }

int main()
{
Student s1,s2;
// S1 is an object... memory is alocated only when object is created.

s1.roll = 24;
s1.name = " Prakat";
display(s1);

s2.name = "Swarnim";
s2.roll = 47;
display(s2);

return 0;
}

// Inline funcrion replaces function call with actual code, used fro small function to reduce call overhead
// class Test
// {
// public:
//     inline void show()
//     {
//         cout << "Hello";
//     }
// };