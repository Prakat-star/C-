#include<iostream>
using namespace std;

class Test
{
    public:
    int x; 

    Test add(Test t)
    {
        Test temp;
        temp.x = x + t.x;
        return temp;
    }
    void display(){
        cout<<x;
    }
};
int main(){
    Test t1,t2,t3;
    t1.x = 6;
    t2.x = 5;
    t3 = t1.add(t2);
    t3.display();
    return 0;
}